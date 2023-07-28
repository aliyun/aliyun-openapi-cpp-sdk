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

#include <alibabacloud/dts/model/DescribeSubscriptionObjectModifyStatusRequest.h>

using AlibabaCloud::Dts::Model::DescribeSubscriptionObjectModifyStatusRequest;

DescribeSubscriptionObjectModifyStatusRequest::DescribeSubscriptionObjectModifyStatusRequest()
    : RpcServiceRequest("dts", "2016-08-01", "DescribeSubscriptionObjectModifyStatus") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSubscriptionObjectModifyStatusRequest::~DescribeSubscriptionObjectModifyStatusRequest() {}

std::string DescribeSubscriptionObjectModifyStatusRequest::getClientToken() const {
  return clientToken_;
}

void DescribeSubscriptionObjectModifyStatusRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DescribeSubscriptionObjectModifyStatusRequest::getSubscriptionInstanceId() const {
  return subscriptionInstanceId_;
}

void DescribeSubscriptionObjectModifyStatusRequest::setSubscriptionInstanceId(const std::string &subscriptionInstanceId) {
  subscriptionInstanceId_ = subscriptionInstanceId;
  setParameter(std::string("SubscriptionInstanceId"), subscriptionInstanceId);
}

std::string DescribeSubscriptionObjectModifyStatusRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeSubscriptionObjectModifyStatusRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

