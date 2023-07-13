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

#include <alibabacloud/mse/model/UpdateGatewayRouteAuthRequest.h>

using AlibabaCloud::Mse::Model::UpdateGatewayRouteAuthRequest;

UpdateGatewayRouteAuthRequest::UpdateGatewayRouteAuthRequest()
    : RpcServiceRequest("mse", "2019-05-31", "UpdateGatewayRouteAuth") {
  setMethod(HttpRequest::Method::Post);
}

UpdateGatewayRouteAuthRequest::~UpdateGatewayRouteAuthRequest() {}

std::string UpdateGatewayRouteAuthRequest::getMseSessionId() const {
  return mseSessionId_;
}

void UpdateGatewayRouteAuthRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string UpdateGatewayRouteAuthRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void UpdateGatewayRouteAuthRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

long UpdateGatewayRouteAuthRequest::getId() const {
  return id_;
}

void UpdateGatewayRouteAuthRequest::setId(long id) {
  id_ = id;
  setParameter(std::string("Id"), std::to_string(id));
}

long UpdateGatewayRouteAuthRequest::getGatewayId() const {
  return gatewayId_;
}

void UpdateGatewayRouteAuthRequest::setGatewayId(long gatewayId) {
  gatewayId_ = gatewayId;
  setParameter(std::string("GatewayId"), std::to_string(gatewayId));
}

std::string UpdateGatewayRouteAuthRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void UpdateGatewayRouteAuthRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

UpdateGatewayRouteAuthRequest::AuthJSON UpdateGatewayRouteAuthRequest::getAuthJSON() const {
  return authJSON_;
}

void UpdateGatewayRouteAuthRequest::setAuthJSON(const UpdateGatewayRouteAuthRequest::AuthJSON &authJSON) {
  authJSON_ = authJSON;
  setParameter(std::string("AuthJSON") + ".Type", authJSON.type);
}

