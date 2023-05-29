/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/market/model/CreateOrderRequest.h>

using AlibabaCloud::Market::Model::CreateOrderRequest;

CreateOrderRequest::CreateOrderRequest()
    : RpcServiceRequest("market", "2015-11-01", "CreateOrder") {
  setMethod(HttpRequest::Method::Post);
}

CreateOrderRequest::~CreateOrderRequest() {}

std::string CreateOrderRequest::getOrderSouce() const {
  return orderSouce_;
}

void CreateOrderRequest::setOrderSouce(const std::string &orderSouce) {
  orderSouce_ = orderSouce;
  setParameter(std::string("OrderSouce"), orderSouce);
}

std::string CreateOrderRequest::getCommodity() const {
  return commodity_;
}

void CreateOrderRequest::setCommodity(const std::string &commodity) {
  commodity_ = commodity;
  setParameter(std::string("Commodity"), commodity);
}

std::string CreateOrderRequest::getClientToken() const {
  return clientToken_;
}

void CreateOrderRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateOrderRequest::getOwnerId() const {
  return ownerId_;
}

void CreateOrderRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string CreateOrderRequest::getPaymentType() const {
  return paymentType_;
}

void CreateOrderRequest::setPaymentType(const std::string &paymentType) {
  paymentType_ = paymentType;
  setParameter(std::string("PaymentType"), paymentType);
}

std::string CreateOrderRequest::getOrderType() const {
  return orderType_;
}

void CreateOrderRequest::setOrderType(const std::string &orderType) {
  orderType_ = orderType;
  setParameter(std::string("OrderType"), orderType);
}

