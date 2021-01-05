// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: auth.proto
#ifndef GRPC_auth_2eproto__INCLUDED
#define GRPC_auth_2eproto__INCLUDED

#include "auth.pb.h"

#include <functional>
#include <grpc/impl/codegen/port_platform.h>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace leo {

class AuthService final {
 public:
  static constexpr char const* service_full_name() {
    return "leo.AuthService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status GetJwt(::grpc::ClientContext* context, const ::leo::GetJwtRequest& request, ::leo::GetJwtResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::leo::GetJwtResponse>> AsyncGetJwt(::grpc::ClientContext* context, const ::leo::GetJwtRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::leo::GetJwtResponse>>(AsyncGetJwtRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::leo::GetJwtResponse>> PrepareAsyncGetJwt(::grpc::ClientContext* context, const ::leo::GetJwtRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::leo::GetJwtResponse>>(PrepareAsyncGetJwtRaw(context, request, cq));
    }
    virtual ::grpc::Status ValidateJwt(::grpc::ClientContext* context, const ::leo::ValidateJwtRequest& request, ::leo::ValidateJwtResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::leo::ValidateJwtResponse>> AsyncValidateJwt(::grpc::ClientContext* context, const ::leo::ValidateJwtRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::leo::ValidateJwtResponse>>(AsyncValidateJwtRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::leo::ValidateJwtResponse>> PrepareAsyncValidateJwt(::grpc::ClientContext* context, const ::leo::ValidateJwtRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::leo::ValidateJwtResponse>>(PrepareAsyncValidateJwtRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void GetJwt(::grpc::ClientContext* context, const ::leo::GetJwtRequest* request, ::leo::GetJwtResponse* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void GetJwt(::grpc::ClientContext* context, const ::leo::GetJwtRequest* request, ::leo::GetJwtResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void GetJwt(::grpc::ClientContext* context, const ::leo::GetJwtRequest* request, ::leo::GetJwtResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
      virtual void ValidateJwt(::grpc::ClientContext* context, const ::leo::ValidateJwtRequest* request, ::leo::ValidateJwtResponse* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void ValidateJwt(::grpc::ClientContext* context, const ::leo::ValidateJwtRequest* request, ::leo::ValidateJwtResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void ValidateJwt(::grpc::ClientContext* context, const ::leo::ValidateJwtRequest* request, ::leo::ValidateJwtResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
    };
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    typedef class experimental_async_interface async_interface;
    #endif
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    async_interface* async() { return experimental_async(); }
    #endif
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::leo::GetJwtResponse>* AsyncGetJwtRaw(::grpc::ClientContext* context, const ::leo::GetJwtRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::leo::GetJwtResponse>* PrepareAsyncGetJwtRaw(::grpc::ClientContext* context, const ::leo::GetJwtRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::leo::ValidateJwtResponse>* AsyncValidateJwtRaw(::grpc::ClientContext* context, const ::leo::ValidateJwtRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::leo::ValidateJwtResponse>* PrepareAsyncValidateJwtRaw(::grpc::ClientContext* context, const ::leo::ValidateJwtRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status GetJwt(::grpc::ClientContext* context, const ::leo::GetJwtRequest& request, ::leo::GetJwtResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::leo::GetJwtResponse>> AsyncGetJwt(::grpc::ClientContext* context, const ::leo::GetJwtRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::leo::GetJwtResponse>>(AsyncGetJwtRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::leo::GetJwtResponse>> PrepareAsyncGetJwt(::grpc::ClientContext* context, const ::leo::GetJwtRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::leo::GetJwtResponse>>(PrepareAsyncGetJwtRaw(context, request, cq));
    }
    ::grpc::Status ValidateJwt(::grpc::ClientContext* context, const ::leo::ValidateJwtRequest& request, ::leo::ValidateJwtResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::leo::ValidateJwtResponse>> AsyncValidateJwt(::grpc::ClientContext* context, const ::leo::ValidateJwtRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::leo::ValidateJwtResponse>>(AsyncValidateJwtRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::leo::ValidateJwtResponse>> PrepareAsyncValidateJwt(::grpc::ClientContext* context, const ::leo::ValidateJwtRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::leo::ValidateJwtResponse>>(PrepareAsyncValidateJwtRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void GetJwt(::grpc::ClientContext* context, const ::leo::GetJwtRequest* request, ::leo::GetJwtResponse* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void GetJwt(::grpc::ClientContext* context, const ::leo::GetJwtRequest* request, ::leo::GetJwtResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void GetJwt(::grpc::ClientContext* context, const ::leo::GetJwtRequest* request, ::leo::GetJwtResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
      void ValidateJwt(::grpc::ClientContext* context, const ::leo::ValidateJwtRequest* request, ::leo::ValidateJwtResponse* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void ValidateJwt(::grpc::ClientContext* context, const ::leo::ValidateJwtRequest* request, ::leo::ValidateJwtResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void ValidateJwt(::grpc::ClientContext* context, const ::leo::ValidateJwtRequest* request, ::leo::ValidateJwtResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::leo::GetJwtResponse>* AsyncGetJwtRaw(::grpc::ClientContext* context, const ::leo::GetJwtRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::leo::GetJwtResponse>* PrepareAsyncGetJwtRaw(::grpc::ClientContext* context, const ::leo::GetJwtRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::leo::ValidateJwtResponse>* AsyncValidateJwtRaw(::grpc::ClientContext* context, const ::leo::ValidateJwtRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::leo::ValidateJwtResponse>* PrepareAsyncValidateJwtRaw(::grpc::ClientContext* context, const ::leo::ValidateJwtRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_GetJwt_;
    const ::grpc::internal::RpcMethod rpcmethod_ValidateJwt_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status GetJwt(::grpc::ServerContext* context, const ::leo::GetJwtRequest* request, ::leo::GetJwtResponse* response);
    virtual ::grpc::Status ValidateJwt(::grpc::ServerContext* context, const ::leo::ValidateJwtRequest* request, ::leo::ValidateJwtResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_GetJwt : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_GetJwt() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_GetJwt() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetJwt(::grpc::ServerContext* /*context*/, const ::leo::GetJwtRequest* /*request*/, ::leo::GetJwtResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetJwt(::grpc::ServerContext* context, ::leo::GetJwtRequest* request, ::grpc::ServerAsyncResponseWriter< ::leo::GetJwtResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_ValidateJwt : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_ValidateJwt() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_ValidateJwt() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ValidateJwt(::grpc::ServerContext* /*context*/, const ::leo::ValidateJwtRequest* /*request*/, ::leo::ValidateJwtResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestValidateJwt(::grpc::ServerContext* context, ::leo::ValidateJwtRequest* request, ::grpc::ServerAsyncResponseWriter< ::leo::ValidateJwtResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_GetJwt<WithAsyncMethod_ValidateJwt<Service > > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_GetJwt : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_GetJwt() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::leo::GetJwtRequest, ::leo::GetJwtResponse>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::leo::GetJwtRequest* request, ::leo::GetJwtResponse* response) { return this->GetJwt(context, request, response); }));}
    void SetMessageAllocatorFor_GetJwt(
        ::grpc::experimental::MessageAllocator< ::leo::GetJwtRequest, ::leo::GetJwtResponse>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(0);
    #endif
      static_cast<::grpc::internal::CallbackUnaryHandler< ::leo::GetJwtRequest, ::leo::GetJwtResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_GetJwt() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetJwt(::grpc::ServerContext* /*context*/, const ::leo::GetJwtRequest* /*request*/, ::leo::GetJwtResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* GetJwt(
      ::grpc::CallbackServerContext* /*context*/, const ::leo::GetJwtRequest* /*request*/, ::leo::GetJwtResponse* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* GetJwt(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::leo::GetJwtRequest* /*request*/, ::leo::GetJwtResponse* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_ValidateJwt : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_ValidateJwt() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::leo::ValidateJwtRequest, ::leo::ValidateJwtResponse>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::leo::ValidateJwtRequest* request, ::leo::ValidateJwtResponse* response) { return this->ValidateJwt(context, request, response); }));}
    void SetMessageAllocatorFor_ValidateJwt(
        ::grpc::experimental::MessageAllocator< ::leo::ValidateJwtRequest, ::leo::ValidateJwtResponse>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(1);
    #endif
      static_cast<::grpc::internal::CallbackUnaryHandler< ::leo::ValidateJwtRequest, ::leo::ValidateJwtResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_ValidateJwt() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ValidateJwt(::grpc::ServerContext* /*context*/, const ::leo::ValidateJwtRequest* /*request*/, ::leo::ValidateJwtResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* ValidateJwt(
      ::grpc::CallbackServerContext* /*context*/, const ::leo::ValidateJwtRequest* /*request*/, ::leo::ValidateJwtResponse* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* ValidateJwt(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::leo::ValidateJwtRequest* /*request*/, ::leo::ValidateJwtResponse* /*response*/)
    #endif
      { return nullptr; }
  };
  #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
  typedef ExperimentalWithCallbackMethod_GetJwt<ExperimentalWithCallbackMethod_ValidateJwt<Service > > CallbackService;
  #endif

  typedef ExperimentalWithCallbackMethod_GetJwt<ExperimentalWithCallbackMethod_ValidateJwt<Service > > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_GetJwt : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_GetJwt() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_GetJwt() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetJwt(::grpc::ServerContext* /*context*/, const ::leo::GetJwtRequest* /*request*/, ::leo::GetJwtResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_ValidateJwt : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_ValidateJwt() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_ValidateJwt() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ValidateJwt(::grpc::ServerContext* /*context*/, const ::leo::ValidateJwtRequest* /*request*/, ::leo::ValidateJwtResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_GetJwt : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_GetJwt() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_GetJwt() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetJwt(::grpc::ServerContext* /*context*/, const ::leo::GetJwtRequest* /*request*/, ::leo::GetJwtResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetJwt(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_ValidateJwt : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_ValidateJwt() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_ValidateJwt() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ValidateJwt(::grpc::ServerContext* /*context*/, const ::leo::ValidateJwtRequest* /*request*/, ::leo::ValidateJwtResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestValidateJwt(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_GetJwt : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_GetJwt() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->GetJwt(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_GetJwt() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetJwt(::grpc::ServerContext* /*context*/, const ::leo::GetJwtRequest* /*request*/, ::leo::GetJwtResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* GetJwt(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* GetJwt(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_ValidateJwt : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_ValidateJwt() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->ValidateJwt(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_ValidateJwt() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ValidateJwt(::grpc::ServerContext* /*context*/, const ::leo::ValidateJwtRequest* /*request*/, ::leo::ValidateJwtResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* ValidateJwt(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* ValidateJwt(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_GetJwt : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_GetJwt() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::leo::GetJwtRequest, ::leo::GetJwtResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::leo::GetJwtRequest, ::leo::GetJwtResponse>* streamer) {
                       return this->StreamedGetJwt(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_GetJwt() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetJwt(::grpc::ServerContext* /*context*/, const ::leo::GetJwtRequest* /*request*/, ::leo::GetJwtResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGetJwt(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::leo::GetJwtRequest,::leo::GetJwtResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_ValidateJwt : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_ValidateJwt() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler<
          ::leo::ValidateJwtRequest, ::leo::ValidateJwtResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::leo::ValidateJwtRequest, ::leo::ValidateJwtResponse>* streamer) {
                       return this->StreamedValidateJwt(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_ValidateJwt() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status ValidateJwt(::grpc::ServerContext* /*context*/, const ::leo::ValidateJwtRequest* /*request*/, ::leo::ValidateJwtResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedValidateJwt(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::leo::ValidateJwtRequest,::leo::ValidateJwtResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_GetJwt<WithStreamedUnaryMethod_ValidateJwt<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_GetJwt<WithStreamedUnaryMethod_ValidateJwt<Service > > StreamedService;
};

}  // namespace leo


#endif  // GRPC_auth_2eproto__INCLUDED