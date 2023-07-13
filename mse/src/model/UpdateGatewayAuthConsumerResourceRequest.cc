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

#include <alibabacloud/mse/model/UpdateGatewayAuthConsumerResourceRequest.h>

using AlibabaCloud::Mse::Model::UpdateGatewayAuthConsumerResourceRequest;

UpdateGatewayAuthConsumerResourceRequest::UpdateGatewayAuthConsumerResourceRequest()
    : RpcServiceRequest("mse", "2019-05-31", "UpdateGatewayAuthConsumerResource") {
  setMethod(HttpRequest::Method::Post);
}

UpdateGatewayAuthConsumerResourceRequest::~UpdateGatewayAuthConsumerResourceRequest() {}

std::string UpdateGatewayAuthConsumerResourceRequest::getMseSessionId() const {
  return mseSessionId_;
}

void UpdateGatewayAuthConsumerResourceRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string UpdateGatewayAuthConsumerResourceRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void UpdateGatewayAuthConsumerResourceRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

long UpdateGatewayAuthConsumerResourceRequest::getConsumerId() const {
  return consumerId_;
}

void UpdateGatewayAuthConsumerResourceRequest::setConsumerId(long consumerId) {
  consumerId_ = consumerId;
  setParameter(std::string("ConsumerId"), std::to_string(consumerId));
}

std::vector<UpdateGatewayAuthConsumerResourceRequest::ResourceList> UpdateGatewayAuthConsumerResourceRequest::getResourceList() const {
  return resourceList_;
}

void UpdateGatewayAuthConsumerResourceRequest::setResourceList(const std::vector<UpdateGatewayAuthConsumerResourceRequest::ResourceList> &resourceList) {
  resourceList_ = resourceList;
  for(int dep1 = 0; dep1 != resourceList.size(); dep1++) {
    setParameter(std::string("ResourceList") + "." + std::to_string(dep1 + 1) + ".RouteId", std::to_string(resourceList[dep1].routeId));
    setParameter(std::string("ResourceList") + "." + std::to_string(dep1 + 1) + ".RouteName", resourceList[dep1].routeName);
  }
}

std::string UpdateGatewayAuthConsumerResourceRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void UpdateGatewayAuthConsumerResourceRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

