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

#include <alibabacloud/mse/model/UpdateGatewayRouteRetryRequest.h>

using AlibabaCloud::Mse::Model::UpdateGatewayRouteRetryRequest;

UpdateGatewayRouteRetryRequest::UpdateGatewayRouteRetryRequest()
    : RpcServiceRequest("mse", "2019-05-31", "UpdateGatewayRouteRetry") {
  setMethod(HttpRequest::Method::Post);
}

UpdateGatewayRouteRetryRequest::~UpdateGatewayRouteRetryRequest() {}

std::string UpdateGatewayRouteRetryRequest::getMseSessionId() const {
  return mseSessionId_;
}

void UpdateGatewayRouteRetryRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string UpdateGatewayRouteRetryRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void UpdateGatewayRouteRetryRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

UpdateGatewayRouteRetryRequest::RetryJSON UpdateGatewayRouteRetryRequest::getRetryJSON() const {
  return retryJSON_;
}

void UpdateGatewayRouteRetryRequest::setRetryJSON(const UpdateGatewayRouteRetryRequest::RetryJSON &retryJSON) {
  retryJSON_ = retryJSON;
  for(int dep1 = 0; dep1 != retryJSON.httpCodes.size(); dep1++) {
    setParameter(std::string("RetryJSON") + ".HttpCodes." + std::to_string(dep1 + 1), retryJSON.httpCodes[dep1]);
  }
  setParameter(std::string("RetryJSON") + ".Attempts", std::to_string(retryJSON.attempts));
  for(int dep1 = 0; dep1 != retryJSON.retryOn.size(); dep1++) {
    setParameter(std::string("RetryJSON") + ".RetryOn." + std::to_string(dep1 + 1), retryJSON.retryOn[dep1]);
  }
  setParameter(std::string("RetryJSON") + ".Status", retryJSON.status);
}

long UpdateGatewayRouteRetryRequest::getId() const {
  return id_;
}

void UpdateGatewayRouteRetryRequest::setId(long id) {
  id_ = id;
  setParameter(std::string("Id"), std::to_string(id));
}

long UpdateGatewayRouteRetryRequest::getGatewayId() const {
  return gatewayId_;
}

void UpdateGatewayRouteRetryRequest::setGatewayId(long gatewayId) {
  gatewayId_ = gatewayId;
  setParameter(std::string("GatewayId"), std::to_string(gatewayId));
}

std::string UpdateGatewayRouteRetryRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void UpdateGatewayRouteRetryRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

