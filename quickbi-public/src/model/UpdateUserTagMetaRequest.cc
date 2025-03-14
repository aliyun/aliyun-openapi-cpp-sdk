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

#include <alibabacloud/quickbi-public/model/UpdateUserTagMetaRequest.h>

using AlibabaCloud::Quickbi_public::Model::UpdateUserTagMetaRequest;

UpdateUserTagMetaRequest::UpdateUserTagMetaRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "UpdateUserTagMeta") {
  setMethod(HttpRequest::Method::Post);
}

UpdateUserTagMetaRequest::~UpdateUserTagMetaRequest() {}

std::string UpdateUserTagMetaRequest::getAccessPoint() const {
  return accessPoint_;
}

void UpdateUserTagMetaRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string UpdateUserTagMetaRequest::getTagName() const {
  return tagName_;
}

void UpdateUserTagMetaRequest::setTagName(const std::string &tagName) {
  tagName_ = tagName;
  setParameter(std::string("TagName"), tagName);
}

std::string UpdateUserTagMetaRequest::getTagId() const {
  return tagId_;
}

void UpdateUserTagMetaRequest::setTagId(const std::string &tagId) {
  tagId_ = tagId;
  setParameter(std::string("TagId"), tagId);
}

std::string UpdateUserTagMetaRequest::getSignType() const {
  return signType_;
}

void UpdateUserTagMetaRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

std::string UpdateUserTagMetaRequest::getTagDescription() const {
  return tagDescription_;
}

void UpdateUserTagMetaRequest::setTagDescription(const std::string &tagDescription) {
  tagDescription_ = tagDescription;
  setParameter(std::string("TagDescription"), tagDescription);
}

