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

#include <alibabacloud/cloudapi/model/CreateMonitorGroupRequest.h>

using AlibabaCloud::CloudAPI::Model::CreateMonitorGroupRequest;

CreateMonitorGroupRequest::CreateMonitorGroupRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "CreateMonitorGroup") {
  setMethod(HttpRequest::Method::Post);
}

CreateMonitorGroupRequest::~CreateMonitorGroupRequest() {}

std::string CreateMonitorGroupRequest::getAuth() const {
  return auth_;
}

void CreateMonitorGroupRequest::setAuth(const std::string &auth) {
  auth_ = auth;
  setParameter(std::string("Auth"), auth);
}

std::string CreateMonitorGroupRequest::getGroupId() const {
  return groupId_;
}

void CreateMonitorGroupRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

long CreateMonitorGroupRequest::getRawMonitorGroupId() const {
  return rawMonitorGroupId_;
}

void CreateMonitorGroupRequest::setRawMonitorGroupId(long rawMonitorGroupId) {
  rawMonitorGroupId_ = rawMonitorGroupId;
  setParameter(std::string("RawMonitorGroupId"), std::to_string(rawMonitorGroupId));
}

std::string CreateMonitorGroupRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateMonitorGroupRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateMonitorGroupRequest::getSecurityToken() const {
  return securityToken_;
}

void CreateMonitorGroupRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

