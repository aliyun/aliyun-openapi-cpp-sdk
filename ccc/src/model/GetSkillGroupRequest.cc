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

#include <alibabacloud/ccc/model/GetSkillGroupRequest.h>

using AlibabaCloud::CCC::Model::GetSkillGroupRequest;

GetSkillGroupRequest::GetSkillGroupRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "GetSkillGroup") {
  setMethod(HttpRequest::Method::Post);
}

GetSkillGroupRequest::~GetSkillGroupRequest() {}

std::string GetSkillGroupRequest::getInstanceId() const {
  return instanceId_;
}

void GetSkillGroupRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string GetSkillGroupRequest::getSkillGroupId() const {
  return skillGroupId_;
}

void GetSkillGroupRequest::setSkillGroupId(const std::string &skillGroupId) {
  skillGroupId_ = skillGroupId;
  setParameter(std::string("SkillGroupId"), skillGroupId);
}

