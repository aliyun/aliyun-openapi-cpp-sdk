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

#include <alibabacloud/cloudapi/model/ModifyAppRequest.h>

using AlibabaCloud::CloudAPI::Model::ModifyAppRequest;

ModifyAppRequest::ModifyAppRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "ModifyApp") {
  setMethod(HttpRequest::Method::Post);
}

ModifyAppRequest::~ModifyAppRequest() {}

std::string ModifyAppRequest::getDescription() const {
  return description_;
}

void ModifyAppRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyAppRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyAppRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyAppRequest::getExtend() const {
  return extend_;
}

void ModifyAppRequest::setExtend(const std::string &extend) {
  extend_ = extend;
  setParameter(std::string("Extend"), extend);
}

std::string ModifyAppRequest::getAppName() const {
  return appName_;
}

void ModifyAppRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string ModifyAppRequest::getSecurityToken() const {
  return securityToken_;
}

void ModifyAppRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

long ModifyAppRequest::getAppId() const {
  return appId_;
}

void ModifyAppRequest::setAppId(long appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), std::to_string(appId));
}

std::vector<ModifyAppRequest::Tag> ModifyAppRequest::getTag() const {
  return tag_;
}

void ModifyAppRequest::setTag(const std::vector<ModifyAppRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

