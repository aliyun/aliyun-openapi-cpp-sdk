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

#include <alibabacloud/bssopenapi/model/GetOrderDetailRequest.h>

using AlibabaCloud::BssOpenApi::Model::GetOrderDetailRequest;

GetOrderDetailRequest::GetOrderDetailRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "GetOrderDetail") {
  setMethod(HttpRequest::Method::Post);
}

GetOrderDetailRequest::~GetOrderDetailRequest() {}

std::string GetOrderDetailRequest::getOrderId() const {
  return orderId_;
}

void GetOrderDetailRequest::setOrderId(const std::string &orderId) {
  orderId_ = orderId;
  setParameter(std::string("OrderId"), orderId);
}

long GetOrderDetailRequest::getOwnerId() const {
  return ownerId_;
}

void GetOrderDetailRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

