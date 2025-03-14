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

#include <alibabacloud/quickbi-public/model/UpdateUserTagValueRequest.h>

using AlibabaCloud::Quickbi_public::Model::UpdateUserTagValueRequest;

UpdateUserTagValueRequest::UpdateUserTagValueRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "UpdateUserTagValue") {
  setMethod(HttpRequest::Method::Post);
}

UpdateUserTagValueRequest::~UpdateUserTagValueRequest() {}

std::string UpdateUserTagValueRequest::getAccessPoint() const {
  return accessPoint_;
}

void UpdateUserTagValueRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string UpdateUserTagValueRequest::getUserId() const {
  return userId_;
}

void UpdateUserTagValueRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string UpdateUserTagValueRequest::getTagValue() const {
  return tagValue_;
}

void UpdateUserTagValueRequest::setTagValue(const std::string &tagValue) {
  tagValue_ = tagValue;
  setParameter(std::string("TagValue"), tagValue);
}

std::string UpdateUserTagValueRequest::getTagId() const {
  return tagId_;
}

void UpdateUserTagValueRequest::setTagId(const std::string &tagId) {
  tagId_ = tagId;
  setParameter(std::string("TagId"), tagId);
}

std::string UpdateUserTagValueRequest::getSignType() const {
  return signType_;
}

void UpdateUserTagValueRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

