// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: auth.proto

#include "auth.pb.h"
#include "auth.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace leo {

static const char* AuthService_method_names[] = {
  "/leo.AuthService/GetJwt",
  "/leo.AuthService/ValidateJwt",
};

std::unique_ptr< AuthService::Stub> AuthService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< AuthService::Stub> stub(new AuthService::Stub(channel));
  return stub;
}

AuthService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_GetJwt_(AuthService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ValidateJwt_(AuthService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status AuthService::Stub::GetJwt(::grpc::ClientContext* context, const ::leo::GetJwtRequest& request, ::leo::GetJwtResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::leo::GetJwtRequest, ::leo::GetJwtResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GetJwt_, context, request, response);
}

void AuthService::Stub::experimental_async::GetJwt(::grpc::ClientContext* context, const ::leo::GetJwtRequest* request, ::leo::GetJwtResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::leo::GetJwtRequest, ::leo::GetJwtResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetJwt_, context, request, response, std::move(f));
}

void AuthService::Stub::experimental_async::GetJwt(::grpc::ClientContext* context, const ::leo::GetJwtRequest* request, ::leo::GetJwtResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetJwt_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::leo::GetJwtResponse>* AuthService::Stub::PrepareAsyncGetJwtRaw(::grpc::ClientContext* context, const ::leo::GetJwtRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::leo::GetJwtResponse, ::leo::GetJwtRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GetJwt_, context, request);
}

::grpc::ClientAsyncResponseReader< ::leo::GetJwtResponse>* AuthService::Stub::AsyncGetJwtRaw(::grpc::ClientContext* context, const ::leo::GetJwtRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetJwtRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status AuthService::Stub::ValidateJwt(::grpc::ClientContext* context, const ::leo::ValidateJwtRequest& request, ::leo::ValidateJwtResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::leo::ValidateJwtRequest, ::leo::ValidateJwtResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_ValidateJwt_, context, request, response);
}

void AuthService::Stub::experimental_async::ValidateJwt(::grpc::ClientContext* context, const ::leo::ValidateJwtRequest* request, ::leo::ValidateJwtResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::leo::ValidateJwtRequest, ::leo::ValidateJwtResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ValidateJwt_, context, request, response, std::move(f));
}

void AuthService::Stub::experimental_async::ValidateJwt(::grpc::ClientContext* context, const ::leo::ValidateJwtRequest* request, ::leo::ValidateJwtResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ValidateJwt_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::leo::ValidateJwtResponse>* AuthService::Stub::PrepareAsyncValidateJwtRaw(::grpc::ClientContext* context, const ::leo::ValidateJwtRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::leo::ValidateJwtResponse, ::leo::ValidateJwtRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_ValidateJwt_, context, request);
}

::grpc::ClientAsyncResponseReader< ::leo::ValidateJwtResponse>* AuthService::Stub::AsyncValidateJwtRaw(::grpc::ClientContext* context, const ::leo::ValidateJwtRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncValidateJwtRaw(context, request, cq);
  result->StartCall();
  return result;
}

AuthService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      AuthService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< AuthService::Service, ::leo::GetJwtRequest, ::leo::GetJwtResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](AuthService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::leo::GetJwtRequest* req,
             ::leo::GetJwtResponse* resp) {
               return service->GetJwt(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      AuthService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< AuthService::Service, ::leo::ValidateJwtRequest, ::leo::ValidateJwtResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](AuthService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::leo::ValidateJwtRequest* req,
             ::leo::ValidateJwtResponse* resp) {
               return service->ValidateJwt(ctx, req, resp);
             }, this)));
}

AuthService::Service::~Service() {
}

::grpc::Status AuthService::Service::GetJwt(::grpc::ServerContext* context, const ::leo::GetJwtRequest* request, ::leo::GetJwtResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status AuthService::Service::ValidateJwt(::grpc::ServerContext* context, const ::leo::ValidateJwtRequest* request, ::leo::ValidateJwtResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace leo

