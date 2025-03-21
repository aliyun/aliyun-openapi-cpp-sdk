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

#include <alibabacloud/eiam/model/UpdateGroupRequest.h>

using AlibabaCloud::Eiam::Model::UpdateGroupRequest;

UpdateGroupRequest::UpdateGroupRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "UpdateGroup") {
  setMethod(HttpRequest::Method::Post);
}

UpdateGroupRequest::~UpdateGroupRequest() {}

std::string UpdateGroupRequest::getGroupId() const {
  return groupId_;
}

void UpdateGroupRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string UpdateGroupRequest::getGroupExternalId() const {
  return groupExternalId_;
}

void UpdateGroupRequest::setGroupExternalId(const std::string &groupExternalId) {
  groupExternalId_ = groupExternalId;
  setParameter(std::string("GroupExternalId"), groupExternalId);
}

std::string UpdateGroupRequest::getGroupName() const {
  return groupName_;
}

void UpdateGroupRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

std::string UpdateGroupRequest::getInstanceId() const {
  return instanceId_;
}

void UpdateGroupRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

