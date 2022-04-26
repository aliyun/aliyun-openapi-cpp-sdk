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

#include <alibabacloud/ccc/model/AssignUsersRequest.h>

using AlibabaCloud::CCC::Model::AssignUsersRequest;

AssignUsersRequest::AssignUsersRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "AssignUsers") {
  setMethod(HttpRequest::Method::Post);
}

AssignUsersRequest::~AssignUsersRequest() {}

std::string AssignUsersRequest::getRamIdList() const {
  return ramIdList_;
}

void AssignUsersRequest::setRamIdList(const std::string &ramIdList) {
  ramIdList_ = ramIdList;
  setParameter(std::string("RamIdList"), ramIdList);
}

std::string AssignUsersRequest::getRoleId() const {
  return roleId_;
}

void AssignUsersRequest::setRoleId(const std::string &roleId) {
  roleId_ = roleId;
  setParameter(std::string("RoleId"), roleId);
}

std::string AssignUsersRequest::getWorkMode() const {
  return workMode_;
}

void AssignUsersRequest::setWorkMode(const std::string &workMode) {
  workMode_ = workMode;
  setParameter(std::string("WorkMode"), workMode);
}

std::string AssignUsersRequest::getInstanceId() const {
  return instanceId_;
}

void AssignUsersRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string AssignUsersRequest::getSkillLevelList() const {
  return skillLevelList_;
}

void AssignUsersRequest::setSkillLevelList(const std::string &skillLevelList) {
  skillLevelList_ = skillLevelList;
  setParameter(std::string("SkillLevelList"), skillLevelList);
}

