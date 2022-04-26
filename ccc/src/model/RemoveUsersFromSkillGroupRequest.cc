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

#include <alibabacloud/ccc/model/RemoveUsersFromSkillGroupRequest.h>

using AlibabaCloud::CCC::Model::RemoveUsersFromSkillGroupRequest;

RemoveUsersFromSkillGroupRequest::RemoveUsersFromSkillGroupRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "RemoveUsersFromSkillGroup") {
  setMethod(HttpRequest::Method::Post);
}

RemoveUsersFromSkillGroupRequest::~RemoveUsersFromSkillGroupRequest() {}

std::string RemoveUsersFromSkillGroupRequest::getUserIdList() const {
  return userIdList_;
}

void RemoveUsersFromSkillGroupRequest::setUserIdList(const std::string &userIdList) {
  userIdList_ = userIdList;
  setParameter(std::string("UserIdList"), userIdList);
}

std::string RemoveUsersFromSkillGroupRequest::getInstanceId() const {
  return instanceId_;
}

void RemoveUsersFromSkillGroupRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string RemoveUsersFromSkillGroupRequest::getSkillGroupId() const {
  return skillGroupId_;
}

void RemoveUsersFromSkillGroupRequest::setSkillGroupId(const std::string &skillGroupId) {
  skillGroupId_ = skillGroupId;
  setParameter(std::string("SkillGroupId"), skillGroupId);
}

