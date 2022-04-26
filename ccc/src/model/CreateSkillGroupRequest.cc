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

#include <alibabacloud/ccc/model/CreateSkillGroupRequest.h>

using AlibabaCloud::CCC::Model::CreateSkillGroupRequest;

CreateSkillGroupRequest::CreateSkillGroupRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "CreateSkillGroup") {
  setMethod(HttpRequest::Method::Post);
}

CreateSkillGroupRequest::~CreateSkillGroupRequest() {}

std::string CreateSkillGroupRequest::getDescription() const {
  return description_;
}

void CreateSkillGroupRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateSkillGroupRequest::getInstanceId() const {
  return instanceId_;
}

void CreateSkillGroupRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string CreateSkillGroupRequest::getDisplayName() const {
  return displayName_;
}

void CreateSkillGroupRequest::setDisplayName(const std::string &displayName) {
  displayName_ = displayName;
  setParameter(std::string("DisplayName"), displayName);
}

std::string CreateSkillGroupRequest::getName() const {
  return name_;
}

void CreateSkillGroupRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

