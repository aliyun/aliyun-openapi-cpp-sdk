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

#include <alibabacloud/mse/model/DeleteGatewayRouteRequest.h>

using AlibabaCloud::Mse::Model::DeleteGatewayRouteRequest;

DeleteGatewayRouteRequest::DeleteGatewayRouteRequest()
    : RpcServiceRequest("mse", "2019-05-31", "DeleteGatewayRoute") {
  setMethod(HttpRequest::Method::Post);
}

DeleteGatewayRouteRequest::~DeleteGatewayRouteRequest() {}

std::string DeleteGatewayRouteRequest::getMseSessionId() const {
  return mseSessionId_;
}

void DeleteGatewayRouteRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string DeleteGatewayRouteRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void DeleteGatewayRouteRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

std::string DeleteGatewayRouteRequest::getRouteId() const {
  return routeId_;
}

void DeleteGatewayRouteRequest::setRouteId(const std::string &routeId) {
  routeId_ = routeId;
  setParameter(std::string("RouteId"), routeId);
}

std::string DeleteGatewayRouteRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void DeleteGatewayRouteRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

