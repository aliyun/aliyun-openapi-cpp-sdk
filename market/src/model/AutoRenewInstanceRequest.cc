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

#include <alibabacloud/market/model/AutoRenewInstanceRequest.h>

using AlibabaCloud::Market::Model::AutoRenewInstanceRequest;

AutoRenewInstanceRequest::AutoRenewInstanceRequest()
    : RpcServiceRequest("market", "2015-11-01", "AutoRenewInstance") {
  setMethod(HttpRequest::Method::Post);
}

AutoRenewInstanceRequest::~AutoRenewInstanceRequest() {}

std::string AutoRenewInstanceRequest::getType() const {
  return type_;
}

void AutoRenewInstanceRequest::setType(const std::string &type) {
  type_ = type;
  setBodyParameter(std::string("Type"), type);
}

long AutoRenewInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void AutoRenewInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setBodyParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int AutoRenewInstanceRequest::getAutoRenewDuration() const {
  return autoRenewDuration_;
}

void AutoRenewInstanceRequest::setAutoRenewDuration(int autoRenewDuration) {
  autoRenewDuration_ = autoRenewDuration;
  setBodyParameter(std::string("AutoRenewDuration"), std::to_string(autoRenewDuration));
}

std::string AutoRenewInstanceRequest::getAutoRenewCycle() const {
  return autoRenewCycle_;
}

void AutoRenewInstanceRequest::setAutoRenewCycle(const std::string &autoRenewCycle) {
  autoRenewCycle_ = autoRenewCycle;
  setBodyParameter(std::string("AutoRenewCycle"), autoRenewCycle);
}

long AutoRenewInstanceRequest::getOrderBizId() const {
  return orderBizId_;
}

void AutoRenewInstanceRequest::setOrderBizId(long orderBizId) {
  orderBizId_ = orderBizId;
  setBodyParameter(std::string("OrderBizId"), std::to_string(orderBizId));
}

