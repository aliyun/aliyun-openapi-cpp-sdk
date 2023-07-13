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

#include <alibabacloud/mse/model/UpdateGatewayAuthConsumerResourceStatusRequest.h>

using AlibabaCloud::Mse::Model::UpdateGatewayAuthConsumerResourceStatusRequest;

UpdateGatewayAuthConsumerResourceStatusRequest::UpdateGatewayAuthConsumerResourceStatusRequest()
    : RpcServiceRequest("mse", "2019-05-31", "UpdateGatewayAuthConsumerResourceStatus") {
  setMethod(HttpRequest::Method::Post);
}

UpdateGatewayAuthConsumerResourceStatusRequest::~UpdateGatewayAuthConsumerResourceStatusRequest() {}

std::string UpdateGatewayAuthConsumerResourceStatusRequest::getMseSessionId() const {
  return mseSessionId_;
}

void UpdateGatewayAuthConsumerResourceStatusRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string UpdateGatewayAuthConsumerResourceStatusRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void UpdateGatewayAuthConsumerResourceStatusRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

long UpdateGatewayAuthConsumerResourceStatusRequest::getConsumerId() const {
  return consumerId_;
}

void UpdateGatewayAuthConsumerResourceStatusRequest::setConsumerId(long consumerId) {
  consumerId_ = consumerId;
  setParameter(std::string("ConsumerId"), std::to_string(consumerId));
}

std::string UpdateGatewayAuthConsumerResourceStatusRequest::getIdList() const {
  return idList_;
}

void UpdateGatewayAuthConsumerResourceStatusRequest::setIdList(const std::string &idList) {
  idList_ = idList;
  setParameter(std::string("IdList"), idList);
}

bool UpdateGatewayAuthConsumerResourceStatusRequest::getResourceStatus() const {
  return resourceStatus_;
}

void UpdateGatewayAuthConsumerResourceStatusRequest::setResourceStatus(bool resourceStatus) {
  resourceStatus_ = resourceStatus;
  setParameter(std::string("ResourceStatus"), resourceStatus ? "true" : "false");
}

std::string UpdateGatewayAuthConsumerResourceStatusRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void UpdateGatewayAuthConsumerResourceStatusRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

