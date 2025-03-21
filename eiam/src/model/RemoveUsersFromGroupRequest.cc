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

#include <alibabacloud/eiam/model/RemoveUsersFromGroupRequest.h>

using AlibabaCloud::Eiam::Model::RemoveUsersFromGroupRequest;

RemoveUsersFromGroupRequest::RemoveUsersFromGroupRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "RemoveUsersFromGroup") {
  setMethod(HttpRequest::Method::Post);
}

RemoveUsersFromGroupRequest::~RemoveUsersFromGroupRequest() {}

std::string RemoveUsersFromGroupRequest::getGroupId() const {
  return groupId_;
}

void RemoveUsersFromGroupRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string RemoveUsersFromGroupRequest::getInstanceId() const {
  return instanceId_;
}

void RemoveUsersFromGroupRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::vector<RemoveUsersFromGroupRequest::std::string> RemoveUsersFromGroupRequest::getUserIds() const {
  return userIds_;
}

void RemoveUsersFromGroupRequest::setUserIds(const std::vector<RemoveUsersFromGroupRequest::std::string> &userIds) {
  userIds_ = userIds;
  for(int dep1 = 0; dep1 != userIds.size(); dep1++) {
    setParameter(std::string("UserIds") + "." + std::to_string(dep1 + 1), userIds[dep1]);
  }
}

