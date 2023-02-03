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

#include <alibabacloud/mse/model/UpdateGatewayRouteWafStatusRequest.h>

using AlibabaCloud::Mse::Model::UpdateGatewayRouteWafStatusRequest;

UpdateGatewayRouteWafStatusRequest::UpdateGatewayRouteWafStatusRequest()
    : RpcServiceRequest("mse", "2019-05-31", "UpdateGatewayRouteWafStatus") {
  setMethod(HttpRequest::Method::Post);
}

UpdateGatewayRouteWafStatusRequest::~UpdateGatewayRouteWafStatusRequest() {}

std::string UpdateGatewayRouteWafStatusRequest::getMseSessionId() const {
  return mseSessionId_;
}

void UpdateGatewayRouteWafStatusRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string UpdateGatewayRouteWafStatusRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void UpdateGatewayRouteWafStatusRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

bool UpdateGatewayRouteWafStatusRequest::getEnableWaf() const {
  return enableWaf_;
}

void UpdateGatewayRouteWafStatusRequest::setEnableWaf(bool enableWaf) {
  enableWaf_ = enableWaf;
  setParameter(std::string("EnableWaf"), enableWaf ? "true" : "false");
}

long UpdateGatewayRouteWafStatusRequest::getRouteId() const {
  return routeId_;
}

void UpdateGatewayRouteWafStatusRequest::setRouteId(long routeId) {
  routeId_ = routeId;
  setParameter(std::string("RouteId"), std::to_string(routeId));
}

std::string UpdateGatewayRouteWafStatusRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void UpdateGatewayRouteWafStatusRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

