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

#include <alibabacloud/eiam/model/CreateGroupRequest.h>

using AlibabaCloud::Eiam::Model::CreateGroupRequest;

CreateGroupRequest::CreateGroupRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "CreateGroup") {
  setMethod(HttpRequest::Method::Post);
}

CreateGroupRequest::~CreateGroupRequest() {}

std::string CreateGroupRequest::getDescription() const {
  return description_;
}

void CreateGroupRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateGroupRequest::getGroupExternalId() const {
  return groupExternalId_;
}

void CreateGroupRequest::setGroupExternalId(const std::string &groupExternalId) {
  groupExternalId_ = groupExternalId;
  setParameter(std::string("GroupExternalId"), groupExternalId);
}

std::string CreateGroupRequest::getGroupName() const {
  return groupName_;
}

void CreateGroupRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

std::string CreateGroupRequest::getInstanceId() const {
  return instanceId_;
}

void CreateGroupRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

