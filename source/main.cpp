#include <grpc/grpc.h>
#include <grpcpp/server_builder.h>

#include <chrono>
#include <iostream>
#include <string>

#include "auth.grpc.pb.h"
#include "jwt/jwt_all.h"

using json = nlohmann::json;

using grpc::ServerContext;
using grpc::Status;

using leo::GetJwtRequest;
using leo::GetJwtResponse;
using leo::ValidateJwtRequest;
using leo::ValidateJwtResponse;

class Token {
 private:
  char *secret;
  int expire;

 public:
  Token(char *s, int e) : secret(s), expire(e) {}

  std::string Generate(const std::string &user_id) {
    HS256Validator signer(secret);
    auto now = std::chrono::seconds(std::time(NULL)).count();
    json payload = {{"sub", "subject"}, {"exp", now + expire}};

    return JWT::Encode(signer, payload);
  }

  bool Validate(const std::string &token) {
    ExpValidator exp;
    HS256Validator signer(secret);

    try {
      ::json header, payload;

      std::tie(header, payload) = JWT::Decode(token, &signer, &exp);
      return true;
    } catch (InvalidTokenError &tfe) {
      return false;
    }
  }
};

class AuthService final : public leo::AuthService::Service {
 private:
  Token &token;

 public:
  AuthService(Token &t) : token(t) {}

  Status GetJwt(ServerContext *c, const GetJwtRequest *req,
                GetJwtResponse *res) override {
    auto jwt = token.Generate(req->userid());
    res->set_token(jwt);
    return Status::OK;
  }

  Status ValidateJwt(ServerContext *c, const ValidateJwtRequest *req,
                     ValidateJwtResponse *res) override {
    auto result = token.Validate(req->token());

    if (result) {
      res->set_newtoken(std::string("hogehoge"));
      return Status::OK;
    } else {
      return Status::CANCELLED;
    }
  }
};

int main(int argc, char **argv) {
  char *secret;
  char *expire;
  char *listen_port;

  secret = std::getenv("SECRET");
  expire = std::getenv("EXPIRE");
  listen_port = std::getenv("LISTEN_PORT");

  if (secret == NULL) {
    throw std::runtime_error("Failed get environment: SECRET");
  }
  if (expire == NULL) {
    throw std::runtime_error("Failed get environment: EXPIRE");
  }
  if (listen_port == NULL) {
    throw std::runtime_error("Failed get environment: LISTEN_PORT");
  }

  Token token(secret, std::stoi(std::string(expire)));
  AuthService service(token);

  grpc::ServerBuilder builder;

  builder.AddListeningPort(std::string("0.0.0.0:") + listen_port,
                           grpc::InsecureServerCredentials());
  builder.RegisterService(&service);
  std::unique_ptr<grpc::Server> server(builder.BuildAndStart());
  std::cout << "Start gemini port: " << listen_port << std::endl;
  server->Wait();

  return 0;
}