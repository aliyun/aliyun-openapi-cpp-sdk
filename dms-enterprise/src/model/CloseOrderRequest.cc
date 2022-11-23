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

#include <alibabacloud/dms-enterprise/model/CloseOrderRequest.h>

using AlibabaCloud::Dms_enterprise::Model::CloseOrderRequest;

CloseOrderRequest::CloseOrderRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "CloseOrder") {
  setMethod(HttpRequest::Method::Post);
}

CloseOrderRequest::~CloseOrderRequest() {}

long CloseOrderRequest::getTid() const {
  return tid_;
}

void CloseOrderRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

long CloseOrderRequest::getOrderId() const {
  return orderId_;
}

void CloseOrderRequest::setOrderId(long orderId) {
  orderId_ = orderId;
  setParameter(std::string("OrderId"), std::to_string(orderId));
}

std::string CloseOrderRequest::getCloseReason() const {
  return closeReason_;
}

void CloseOrderRequest::setCloseReason(const std::string &closeReason) {
  closeReason_ = closeReason;
  setParameter(std::string("CloseReason"), closeReason);
}

