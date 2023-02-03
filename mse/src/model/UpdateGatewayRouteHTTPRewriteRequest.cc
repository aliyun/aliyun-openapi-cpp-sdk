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

#include <alibabacloud/mse/model/UpdateGatewayRouteHTTPRewriteRequest.h>

using AlibabaCloud::Mse::Model::UpdateGatewayRouteHTTPRewriteRequest;

UpdateGatewayRouteHTTPRewriteRequest::UpdateGatewayRouteHTTPRewriteRequest()
    : RpcServiceRequest("mse", "2019-05-31", "UpdateGatewayRouteHTTPRewrite") {
  setMethod(HttpRequest::Method::Post);
}

UpdateGatewayRouteHTTPRewriteRequest::~UpdateGatewayRouteHTTPRewriteRequest() {}

std::string UpdateGatewayRouteHTTPRewriteRequest::getMseSessionId() const {
  return mseSessionId_;
}

void UpdateGatewayRouteHTTPRewriteRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string UpdateGatewayRouteHTTPRewriteRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void UpdateGatewayRouteHTTPRewriteRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

long UpdateGatewayRouteHTTPRewriteRequest::getId() const {
  return id_;
}

void UpdateGatewayRouteHTTPRewriteRequest::setId(long id) {
  id_ = id;
  setParameter(std::string("Id"), std::to_string(id));
}

long UpdateGatewayRouteHTTPRewriteRequest::getGatewayId() const {
  return gatewayId_;
}

void UpdateGatewayRouteHTTPRewriteRequest::setGatewayId(long gatewayId) {
  gatewayId_ = gatewayId;
  setParameter(std::string("GatewayId"), std::to_string(gatewayId));
}

std::string UpdateGatewayRouteHTTPRewriteRequest::getHttpRewriteJSON() const {
  return httpRewriteJSON_;
}

void UpdateGatewayRouteHTTPRewriteRequest::setHttpRewriteJSON(const std::string &httpRewriteJSON) {
  httpRewriteJSON_ = httpRewriteJSON;
  setParameter(std::string("HttpRewriteJSON"), httpRewriteJSON);
}

std::string UpdateGatewayRouteHTTPRewriteRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void UpdateGatewayRouteHTTPRewriteRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

