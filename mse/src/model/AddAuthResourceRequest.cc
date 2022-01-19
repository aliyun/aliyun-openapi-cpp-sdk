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

#include <alibabacloud/mse/model/AddAuthResourceRequest.h>

using AlibabaCloud::Mse::Model::AddAuthResourceRequest;

AddAuthResourceRequest::AddAuthResourceRequest()
    : RpcServiceRequest("mse", "2019-05-31", "AddAuthResource") {
  setMethod(HttpRequest::Method::Post);
}

AddAuthResourceRequest::~AddAuthResourceRequest() {}

std::string AddAuthResourceRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void AddAuthResourceRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

long AddAuthResourceRequest::getAuthId() const {
  return authId_;
}

void AddAuthResourceRequest::setAuthId(long authId) {
  authId_ = authId;
  setParameter(std::string("AuthId"), std::to_string(authId));
}

long AddAuthResourceRequest::getDomainId() const {
  return domainId_;
}

void AddAuthResourceRequest::setDomainId(long domainId) {
  domainId_ = domainId;
  setParameter(std::string("DomainId"), std::to_string(domainId));
}

std::string AddAuthResourceRequest::getPath() const {
  return path_;
}

void AddAuthResourceRequest::setPath(const std::string &path) {
  path_ = path;
  setParameter(std::string("Path"), path);
}

std::string AddAuthResourceRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void AddAuthResourceRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

