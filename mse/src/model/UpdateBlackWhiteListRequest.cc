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

#include <alibabacloud/mse/model/UpdateBlackWhiteListRequest.h>

using AlibabaCloud::Mse::Model::UpdateBlackWhiteListRequest;

UpdateBlackWhiteListRequest::UpdateBlackWhiteListRequest()
    : RpcServiceRequest("mse", "2019-05-31", "UpdateBlackWhiteList") {
  setMethod(HttpRequest::Method::Post);
}

UpdateBlackWhiteListRequest::~UpdateBlackWhiteListRequest() {}

std::string UpdateBlackWhiteListRequest::getNote() const {
  return note_;
}

void UpdateBlackWhiteListRequest::setNote(const std::string &note) {
  note_ = note;
  setParameter(std::string("Note"), note);
}

std::string UpdateBlackWhiteListRequest::getMseSessionId() const {
  return mseSessionId_;
}

void UpdateBlackWhiteListRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string UpdateBlackWhiteListRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void UpdateBlackWhiteListRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

std::string UpdateBlackWhiteListRequest::getType() const {
  return type_;
}

void UpdateBlackWhiteListRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string UpdateBlackWhiteListRequest::getContent() const {
  return content_;
}

void UpdateBlackWhiteListRequest::setContent(const std::string &content) {
  content_ = content;
  setParameter(std::string("Content"), content);
}

bool UpdateBlackWhiteListRequest::getIsWhite() const {
  return isWhite_;
}

void UpdateBlackWhiteListRequest::setIsWhite(bool isWhite) {
  isWhite_ = isWhite;
  setParameter(std::string("IsWhite"), isWhite ? "true" : "false");
}

std::string UpdateBlackWhiteListRequest::getResourceIdJsonList() const {
  return resourceIdJsonList_;
}

void UpdateBlackWhiteListRequest::setResourceIdJsonList(const std::string &resourceIdJsonList) {
  resourceIdJsonList_ = resourceIdJsonList;
  setParameter(std::string("ResourceIdJsonList"), resourceIdJsonList);
}

long UpdateBlackWhiteListRequest::getId() const {
  return id_;
}

void UpdateBlackWhiteListRequest::setId(long id) {
  id_ = id;
  setParameter(std::string("Id"), std::to_string(id));
}

std::string UpdateBlackWhiteListRequest::getResourceType() const {
  return resourceType_;
}

void UpdateBlackWhiteListRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string UpdateBlackWhiteListRequest::getName() const {
  return name_;
}

void UpdateBlackWhiteListRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string UpdateBlackWhiteListRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void UpdateBlackWhiteListRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

std::string UpdateBlackWhiteListRequest::getStatus() const {
  return status_;
}

void UpdateBlackWhiteListRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

