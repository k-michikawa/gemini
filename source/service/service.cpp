#include "service/service.hpp"

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

Status OrderService::PostOrder(ServerContext *context,
                               const PostOrderRequest *request,
                               PostOrderResponse *response) {
  return Status::OK;
}

Status OrderService::ListOrderBySellerId(
    ServerContext *context, const ListOrderBySellerIdRequest *request,
    ListOrderBySellerIdResponse *response) {
  return Status::OK;
}

Status OrderService::ListOrderByOrdererId(
    ServerContext *context, const ListOrderByOrdererIdRequest *request,
    ListOrderByOrdererIdResponse *response) {
  return Status::OK;
}

Status OrderService::FindOrder(ServerContext *context,
                               const FindOrderRequest *request,
                               FindOrderResponse *response) {
  return Status::OK;
}

Status OrderService::DeleteOrder(ServerContext *context,
                                 const DeleteOrderRequest *request,
                                 DeleteOrderResponse *response) {
  return Status::OK;
}
