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

#include <alibabacloud/eiam/model/AddUsersToGroupRequest.h>

using AlibabaCloud::Eiam::Model::AddUsersToGroupRequest;

AddUsersToGroupRequest::AddUsersToGroupRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "AddUsersToGroup") {
  setMethod(HttpRequest::Method::Post);
}

AddUsersToGroupRequest::~AddUsersToGroupRequest() {}

std::string AddUsersToGroupRequest::getGroupId() const {
  return groupId_;
}

void AddUsersToGroupRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string AddUsersToGroupRequest::getInstanceId() const {
  return instanceId_;
}

void AddUsersToGroupRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::vector<AddUsersToGroupRequest::std::string> AddUsersToGroupRequest::getUserIds() const {
  return userIds_;
}

void AddUsersToGroupRequest::setUserIds(const std::vector<AddUsersToGroupRequest::std::string> &userIds) {
  userIds_ = userIds;
  for(int dep1 = 0; dep1 != userIds.size(); dep1++) {
    setParameter(std::string("UserIds") + "." + std::to_string(dep1 + 1), userIds[dep1]);
  }
}

