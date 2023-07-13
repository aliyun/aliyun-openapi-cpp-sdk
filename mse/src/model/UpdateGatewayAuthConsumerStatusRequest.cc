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

#include <alibabacloud/mse/model/UpdateGatewayAuthConsumerStatusRequest.h>

using AlibabaCloud::Mse::Model::UpdateGatewayAuthConsumerStatusRequest;

UpdateGatewayAuthConsumerStatusRequest::UpdateGatewayAuthConsumerStatusRequest()
    : RpcServiceRequest("mse", "2019-05-31", "UpdateGatewayAuthConsumerStatus") {
  setMethod(HttpRequest::Method::Post);
}

UpdateGatewayAuthConsumerStatusRequest::~UpdateGatewayAuthConsumerStatusRequest() {}

std::string UpdateGatewayAuthConsumerStatusRequest::getMseSessionId() const {
  return mseSessionId_;
}

void UpdateGatewayAuthConsumerStatusRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string UpdateGatewayAuthConsumerStatusRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void UpdateGatewayAuthConsumerStatusRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

long UpdateGatewayAuthConsumerStatusRequest::getId() const {
  return id_;
}

void UpdateGatewayAuthConsumerStatusRequest::setId(long id) {
  id_ = id;
  setParameter(std::string("Id"), std::to_string(id));
}

bool UpdateGatewayAuthConsumerStatusRequest::getConsumerStatus() const {
  return consumerStatus_;
}

void UpdateGatewayAuthConsumerStatusRequest::setConsumerStatus(bool consumerStatus) {
  consumerStatus_ = consumerStatus;
  setParameter(std::string("ConsumerStatus"), consumerStatus ? "true" : "false");
}

std::string UpdateGatewayAuthConsumerStatusRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void UpdateGatewayAuthConsumerStatusRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

