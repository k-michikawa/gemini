#ifndef SERVICE_HPP
#define SERVICE_HPP

#include <grpc/grpc.h>
#include <grpcpp/server_context.h>

#include <string>

#include "order.grpc.pb.h"

using grpc::ServerContext;
using grpc::Status;

using gemini::DeleteOrderRequest;
using gemini::DeleteOrderResponse;
using gemini::FindOrderRequest;
using gemini::FindOrderResponse;
using gemini::ListOrderByOrdererIdRequest;
using gemini::ListOrderByOrdererIdResponse;
using gemini::ListOrderBySellerIdRequest;
using gemini::ListOrderBySellerIdResponse;
using gemini::PostOrderRequest;
using gemini::PostOrderResponse;

class OrderService final : public gemini::OrderService::Service {
 public:
  Status PostOrder(ServerContext *context, const PostOrderRequest *request,
                   PostOrderResponse *response);

  Status ListOrderBySellerId(ServerContext *context,
                             const ListOrderBySellerIdRequest *request,
                             ListOrderBySellerIdResponse *response);

  Status ListOrderByOrdererId(ServerContext *context,
                              const ListOrderByOrdererIdRequest *request,
                              ListOrderByOrdererIdResponse *response);

  Status FindOrder(ServerContext *context, const FindOrderRequest *request,
                   FindOrderResponse *response);

  Status DeleteOrder(ServerContext *context, const DeleteOrderRequest *request,
                     DeleteOrderResponse *response);
};

#endif /* SERVICE_HPP */