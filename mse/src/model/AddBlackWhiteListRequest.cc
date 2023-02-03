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

#include <alibabacloud/mse/model/AddBlackWhiteListRequest.h>

using AlibabaCloud::Mse::Model::AddBlackWhiteListRequest;

AddBlackWhiteListRequest::AddBlackWhiteListRequest()
    : RpcServiceRequest("mse", "2019-05-31", "AddBlackWhiteList") {
  setMethod(HttpRequest::Method::Post);
}

AddBlackWhiteListRequest::~AddBlackWhiteListRequest() {}

std::string AddBlackWhiteListRequest::getNote() const {
  return note_;
}

void AddBlackWhiteListRequest::setNote(const std::string &note) {
  note_ = note;
  setParameter(std::string("Note"), note);
}

std::string AddBlackWhiteListRequest::getMseSessionId() const {
  return mseSessionId_;
}

void AddBlackWhiteListRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string AddBlackWhiteListRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void AddBlackWhiteListRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

std::string AddBlackWhiteListRequest::getType() const {
  return type_;
}

void AddBlackWhiteListRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string AddBlackWhiteListRequest::getContent() const {
  return content_;
}

void AddBlackWhiteListRequest::setContent(const std::string &content) {
  content_ = content;
  setParameter(std::string("Content"), content);
}

bool AddBlackWhiteListRequest::getIsWhite() const {
  return isWhite_;
}

void AddBlackWhiteListRequest::setIsWhite(bool isWhite) {
  isWhite_ = isWhite;
  setParameter(std::string("IsWhite"), isWhite ? "true" : "false");
}

std::string AddBlackWhiteListRequest::getResourceIdJsonList() const {
  return resourceIdJsonList_;
}

void AddBlackWhiteListRequest::setResourceIdJsonList(const std::string &resourceIdJsonList) {
  resourceIdJsonList_ = resourceIdJsonList;
  setParameter(std::string("ResourceIdJsonList"), resourceIdJsonList);
}

std::string AddBlackWhiteListRequest::getResourceType() const {
  return resourceType_;
}

void AddBlackWhiteListRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string AddBlackWhiteListRequest::getName() const {
  return name_;
}

void AddBlackWhiteListRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string AddBlackWhiteListRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void AddBlackWhiteListRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

std::string AddBlackWhiteListRequest::getStatus() const {
  return status_;
}

void AddBlackWhiteListRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

