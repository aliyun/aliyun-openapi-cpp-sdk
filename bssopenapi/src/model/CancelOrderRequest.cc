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

#include <alibabacloud/bssopenapi/model/CancelOrderRequest.h>

using AlibabaCloud::BssOpenApi::Model::CancelOrderRequest;

CancelOrderRequest::CancelOrderRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "CancelOrder") {
  setMethod(HttpRequest::Method::Post);
}

CancelOrderRequest::~CancelOrderRequest() {}

std::string CancelOrderRequest::getOrderId() const {
  return orderId_;
}

void CancelOrderRequest::setOrderId(const std::string &orderId) {
  orderId_ = orderId;
  setParameter(std::string("OrderId"), orderId);
}

long CancelOrderRequest::getOwnerId() const {
  return ownerId_;
}

void CancelOrderRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

