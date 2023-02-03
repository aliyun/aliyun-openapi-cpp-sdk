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

#include <alibabacloud/mse/model/UpdateGatewayRouteTimeoutRequest.h>

using AlibabaCloud::Mse::Model::UpdateGatewayRouteTimeoutRequest;

UpdateGatewayRouteTimeoutRequest::UpdateGatewayRouteTimeoutRequest()
    : RpcServiceRequest("mse", "2019-05-31", "UpdateGatewayRouteTimeout") {
  setMethod(HttpRequest::Method::Post);
}

UpdateGatewayRouteTimeoutRequest::~UpdateGatewayRouteTimeoutRequest() {}

UpdateGatewayRouteTimeoutRequest::TimeoutJSON UpdateGatewayRouteTimeoutRequest::getTimeoutJSON() const {
  return timeoutJSON_;
}

void UpdateGatewayRouteTimeoutRequest::setTimeoutJSON(const UpdateGatewayRouteTimeoutRequest::TimeoutJSON &timeoutJSON) {
  timeoutJSON_ = timeoutJSON;
  setParameter(std::string("TimeoutJSON") + ".TimeUnit", timeoutJSON.timeUnit);
  setParameter(std::string("TimeoutJSON") + ".UnitNum", std::to_string(timeoutJSON.unitNum));
  setParameter(std::string("TimeoutJSON") + ".Status", timeoutJSON.status);
}

std::string UpdateGatewayRouteTimeoutRequest::getMseSessionId() const {
  return mseSessionId_;
}

void UpdateGatewayRouteTimeoutRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string UpdateGatewayRouteTimeoutRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void UpdateGatewayRouteTimeoutRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

long UpdateGatewayRouteTimeoutRequest::getId() const {
  return id_;
}

void UpdateGatewayRouteTimeoutRequest::setId(long id) {
  id_ = id;
  setParameter(std::string("Id"), std::to_string(id));
}

long UpdateGatewayRouteTimeoutRequest::getGatewayId() const {
  return gatewayId_;
}

void UpdateGatewayRouteTimeoutRequest::setGatewayId(long gatewayId) {
  gatewayId_ = gatewayId;
  setParameter(std::string("GatewayId"), std::to_string(gatewayId));
}

std::string UpdateGatewayRouteTimeoutRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void UpdateGatewayRouteTimeoutRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

