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

#include <alibabacloud/mse/model/UpdateGatewayRouteCORSRequest.h>

using AlibabaCloud::Mse::Model::UpdateGatewayRouteCORSRequest;

UpdateGatewayRouteCORSRequest::UpdateGatewayRouteCORSRequest()
    : RpcServiceRequest("mse", "2019-05-31", "UpdateGatewayRouteCORS") {
  setMethod(HttpRequest::Method::Post);
}

UpdateGatewayRouteCORSRequest::~UpdateGatewayRouteCORSRequest() {}

std::string UpdateGatewayRouteCORSRequest::getMseSessionId() const {
  return mseSessionId_;
}

void UpdateGatewayRouteCORSRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string UpdateGatewayRouteCORSRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void UpdateGatewayRouteCORSRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

long UpdateGatewayRouteCORSRequest::getId() const {
  return id_;
}

void UpdateGatewayRouteCORSRequest::setId(long id) {
  id_ = id;
  setParameter(std::string("Id"), std::to_string(id));
}

long UpdateGatewayRouteCORSRequest::getGatewayId() const {
  return gatewayId_;
}

void UpdateGatewayRouteCORSRequest::setGatewayId(long gatewayId) {
  gatewayId_ = gatewayId;
  setParameter(std::string("GatewayId"), std::to_string(gatewayId));
}

UpdateGatewayRouteCORSRequest::CorsJSON UpdateGatewayRouteCORSRequest::getCorsJSON() const {
  return corsJSON_;
}

void UpdateGatewayRouteCORSRequest::setCorsJSON(const UpdateGatewayRouteCORSRequest::CorsJSON &corsJSON) {
  corsJSON_ = corsJSON;
  setParameter(std::string("CorsJSON") + ".AllowCredentials", corsJSON.allowCredentials ? "true" : "false");
  setParameter(std::string("CorsJSON") + ".AllowOrigins", corsJSON.allowOrigins);
  setParameter(std::string("CorsJSON") + ".AllowMethods", corsJSON.allowMethods);
  setParameter(std::string("CorsJSON") + ".AllowHeaders", corsJSON.allowHeaders);
  setParameter(std::string("CorsJSON") + ".ExposeHeaders", corsJSON.exposeHeaders);
  setParameter(std::string("CorsJSON") + ".TimeUnit", corsJSON.timeUnit);
  setParameter(std::string("CorsJSON") + ".UnitNum", std::to_string(corsJSON.unitNum));
  setParameter(std::string("CorsJSON") + ".Status", corsJSON.status);
}

std::string UpdateGatewayRouteCORSRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void UpdateGatewayRouteCORSRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

