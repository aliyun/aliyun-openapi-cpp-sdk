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

#include <alibabacloud/cloudapi/model/CreateAppRequest.h>

using AlibabaCloud::CloudAPI::Model::CreateAppRequest;

CreateAppRequest::CreateAppRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "CreateApp") {
  setMethod(HttpRequest::Method::Post);
}

CreateAppRequest::~CreateAppRequest() {}

std::string CreateAppRequest::getDescription() const {
  return description_;
}

void CreateAppRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

long CreateAppRequest::getAppOwnerUserId() const {
  return appOwnerUserId_;
}

void CreateAppRequest::setAppOwnerUserId(long appOwnerUserId) {
  appOwnerUserId_ = appOwnerUserId;
  setParameter(std::string("AppOwnerUserId"), std::to_string(appOwnerUserId));
}

std::string CreateAppRequest::getSource() const {
  return source_;
}

void CreateAppRequest::setSource(const std::string &source) {
  source_ = source;
  setParameter(std::string("Source"), source);
}

std::string CreateAppRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateAppRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateAppRequest::getExtend() const {
  return extend_;
}

void CreateAppRequest::setExtend(const std::string &extend) {
  extend_ = extend;
  setParameter(std::string("Extend"), extend);
}

std::string CreateAppRequest::getAppName() const {
  return appName_;
}

void CreateAppRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string CreateAppRequest::getSecurityToken() const {
  return securityToken_;
}

void CreateAppRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string CreateAppRequest::getAppSecret() const {
  return appSecret_;
}

void CreateAppRequest::setAppSecret(const std::string &appSecret) {
  appSecret_ = appSecret;
  setParameter(std::string("AppSecret"), appSecret);
}

std::string CreateAppRequest::getAppKey() const {
  return appKey_;
}

void CreateAppRequest::setAppKey(const std::string &appKey) {
  appKey_ = appKey;
  setParameter(std::string("AppKey"), appKey);
}

std::string CreateAppRequest::getAppCode() const {
  return appCode_;
}

void CreateAppRequest::setAppCode(const std::string &appCode) {
  appCode_ = appCode;
  setParameter(std::string("AppCode"), appCode);
}

std::vector<CreateAppRequest::Tag> CreateAppRequest::getTag() const {
  return tag_;
}

void CreateAppRequest::setTag(const std::vector<CreateAppRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

