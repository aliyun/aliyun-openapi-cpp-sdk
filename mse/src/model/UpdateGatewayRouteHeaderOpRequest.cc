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

#include <alibabacloud/mse/model/UpdateGatewayRouteHeaderOpRequest.h>

using AlibabaCloud::Mse::Model::UpdateGatewayRouteHeaderOpRequest;

UpdateGatewayRouteHeaderOpRequest::UpdateGatewayRouteHeaderOpRequest()
    : RpcServiceRequest("mse", "2019-05-31", "UpdateGatewayRouteHeaderOp") {
  setMethod(HttpRequest::Method::Post);
}

UpdateGatewayRouteHeaderOpRequest::~UpdateGatewayRouteHeaderOpRequest() {}

std::string UpdateGatewayRouteHeaderOpRequest::getMseSessionId() const {
  return mseSessionId_;
}

void UpdateGatewayRouteHeaderOpRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string UpdateGatewayRouteHeaderOpRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void UpdateGatewayRouteHeaderOpRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

std::string UpdateGatewayRouteHeaderOpRequest::getHeaderOpJSON() const {
  return headerOpJSON_;
}

void UpdateGatewayRouteHeaderOpRequest::setHeaderOpJSON(const std::string &headerOpJSON) {
  headerOpJSON_ = headerOpJSON;
  setParameter(std::string("HeaderOpJSON"), headerOpJSON);
}

long UpdateGatewayRouteHeaderOpRequest::getId() const {
  return id_;
}

void UpdateGatewayRouteHeaderOpRequest::setId(long id) {
  id_ = id;
  setParameter(std::string("Id"), std::to_string(id));
}

long UpdateGatewayRouteHeaderOpRequest::getGatewayId() const {
  return gatewayId_;
}

void UpdateGatewayRouteHeaderOpRequest::setGatewayId(long gatewayId) {
  gatewayId_ = gatewayId;
  setParameter(std::string("GatewayId"), std::to_string(gatewayId));
}

std::string UpdateGatewayRouteHeaderOpRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void UpdateGatewayRouteHeaderOpRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

