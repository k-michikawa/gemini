#include <grpc/grpc.h>
#include <grpcpp/server_builder.h>

#include <string>

#include "service/service.hpp"

void run(const std::string &server_address, grpc::Service *service) {
  grpc::ServerBuilder builder;

  builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
  builder.RegisterService(service);
  std::unique_ptr<grpc::Server> server(builder.BuildAndStart());
  std::cout << "Start gemini on " << server_address << std::endl;
  server->Wait();
}

int main(int argc, char **argv) {
  std::string server_address("0.0.0.0:9020");
  OrderService::Service service;

  run(server_address, &service);
  return 0;
}