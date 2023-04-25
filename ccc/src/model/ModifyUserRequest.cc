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

#include <alibabacloud/ccc/model/ModifyUserRequest.h>

using AlibabaCloud::CCC::Model::ModifyUserRequest;

ModifyUserRequest::ModifyUserRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "ModifyUser") {
  setMethod(HttpRequest::Method::Post);
}

ModifyUserRequest::~ModifyUserRequest() {}

std::string ModifyUserRequest::getRoleId() const {
  return roleId_;
}

void ModifyUserRequest::setRoleId(const std::string &roleId) {
  roleId_ = roleId;
  setParameter(std::string("RoleId"), roleId);
}

std::string ModifyUserRequest::getMobile() const {
  return mobile_;
}

void ModifyUserRequest::setMobile(const std::string &mobile) {
  mobile_ = mobile;
  setParameter(std::string("Mobile"), mobile);
}

std::string ModifyUserRequest::getWorkMode() const {
  return workMode_;
}

void ModifyUserRequest::setWorkMode(const std::string &workMode) {
  workMode_ = workMode;
  setParameter(std::string("WorkMode"), workMode);
}

std::string ModifyUserRequest::getUserId() const {
  return userId_;
}

void ModifyUserRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string ModifyUserRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyUserRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyUserRequest::getDisplayName() const {
  return displayName_;
}

void ModifyUserRequest::setDisplayName(const std::string &displayName) {
  displayName_ = displayName;
  setParameter(std::string("DisplayName"), displayName);
}

bool ModifyUserRequest::getForce() const {
  return force_;
}

void ModifyUserRequest::setForce(bool force) {
  force_ = force;
  setParameter(std::string("Force"), force ? "true" : "false");
}

std::string ModifyUserRequest::getDisplayId() const {
  return displayId_;
}

void ModifyUserRequest::setDisplayId(const std::string &displayId) {
  displayId_ = displayId;
  setParameter(std::string("DisplayId"), displayId);
}

