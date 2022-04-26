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

#include <alibabacloud/ccc/model/AddSkillGroupsToUserRequest.h>

using AlibabaCloud::CCC::Model::AddSkillGroupsToUserRequest;

AddSkillGroupsToUserRequest::AddSkillGroupsToUserRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "AddSkillGroupsToUser") {
  setMethod(HttpRequest::Method::Post);
}

AddSkillGroupsToUserRequest::~AddSkillGroupsToUserRequest() {}

std::string AddSkillGroupsToUserRequest::getUserId() const {
  return userId_;
}

void AddSkillGroupsToUserRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string AddSkillGroupsToUserRequest::getInstanceId() const {
  return instanceId_;
}

void AddSkillGroupsToUserRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string AddSkillGroupsToUserRequest::getSkillLevelList() const {
  return skillLevelList_;
}

void AddSkillGroupsToUserRequest::setSkillLevelList(const std::string &skillLevelList) {
  skillLevelList_ = skillLevelList;
  setParameter(std::string("SkillLevelList"), skillLevelList);
}

