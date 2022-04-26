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

#include <alibabacloud/ccc/model/ModifySkillGroupRequest.h>

using AlibabaCloud::CCC::Model::ModifySkillGroupRequest;

ModifySkillGroupRequest::ModifySkillGroupRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "ModifySkillGroup") {
  setMethod(HttpRequest::Method::Post);
}

ModifySkillGroupRequest::~ModifySkillGroupRequest() {}

std::string ModifySkillGroupRequest::getDescription() const {
  return description_;
}

void ModifySkillGroupRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifySkillGroupRequest::getInstanceId() const {
  return instanceId_;
}

void ModifySkillGroupRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ModifySkillGroupRequest::getSkillGroupId() const {
  return skillGroupId_;
}

void ModifySkillGroupRequest::setSkillGroupId(const std::string &skillGroupId) {
  skillGroupId_ = skillGroupId;
  setParameter(std::string("SkillGroupId"), skillGroupId);
}

std::string ModifySkillGroupRequest::getDisplayName() const {
  return displayName_;
}

void ModifySkillGroupRequest::setDisplayName(const std::string &displayName) {
  displayName_ = displayName;
  setParameter(std::string("DisplayName"), displayName);
}

