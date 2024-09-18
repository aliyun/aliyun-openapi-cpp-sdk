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

#include <alibabacloud/quickbi-public/model/AddUserTagMetaRequest.h>

using AlibabaCloud::Quickbi_public::Model::AddUserTagMetaRequest;

AddUserTagMetaRequest::AddUserTagMetaRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "AddUserTagMeta") {
  setMethod(HttpRequest::Method::Post);
}

AddUserTagMetaRequest::~AddUserTagMetaRequest() {}

std::string AddUserTagMetaRequest::getClientToken() const {
  return clientToken_;
}

void AddUserTagMetaRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string AddUserTagMetaRequest::getAccessPoint() const {
  return accessPoint_;
}

void AddUserTagMetaRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string AddUserTagMetaRequest::getTagName() const {
  return tagName_;
}

void AddUserTagMetaRequest::setTagName(const std::string &tagName) {
  tagName_ = tagName;
  setParameter(std::string("TagName"), tagName);
}

std::string AddUserTagMetaRequest::getTagId() const {
  return tagId_;
}

void AddUserTagMetaRequest::setTagId(const std::string &tagId) {
  tagId_ = tagId;
  setParameter(std::string("TagId"), tagId);
}

std::string AddUserTagMetaRequest::getSignType() const {
  return signType_;
}

void AddUserTagMetaRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

std::string AddUserTagMetaRequest::getTagDescription() const {
  return tagDescription_;
}

void AddUserTagMetaRequest::setTagDescription(const std::string &tagDescription) {
  tagDescription_ = tagDescription;
  setParameter(std::string("TagDescription"), tagDescription);
}

