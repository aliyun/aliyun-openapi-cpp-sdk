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

#include <alibabacloud/mse/model/OfflineGatewayRouteRequest.h>

using AlibabaCloud::Mse::Model::OfflineGatewayRouteRequest;

OfflineGatewayRouteRequest::OfflineGatewayRouteRequest()
    : RpcServiceRequest("mse", "2019-05-31", "OfflineGatewayRoute") {
  setMethod(HttpRequest::Method::Post);
}

OfflineGatewayRouteRequest::~OfflineGatewayRouteRequest() {}

std::string OfflineGatewayRouteRequest::getMseSessionId() const {
  return mseSessionId_;
}

void OfflineGatewayRouteRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string OfflineGatewayRouteRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void OfflineGatewayRouteRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

std::string OfflineGatewayRouteRequest::getRouteId() const {
  return routeId_;
}

void OfflineGatewayRouteRequest::setRouteId(const std::string &routeId) {
  routeId_ = routeId;
  setParameter(std::string("RouteId"), routeId);
}

std::string OfflineGatewayRouteRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void OfflineGatewayRouteRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

