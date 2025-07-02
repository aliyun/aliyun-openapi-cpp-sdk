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

#include <alibabacloud/eds-user/model/ModifyGroupRequest.h>

using AlibabaCloud::Eds_user::Model::ModifyGroupRequest;

ModifyGroupRequest::ModifyGroupRequest()
    : RpcServiceRequest("eds-user", "2021-03-08", "ModifyGroup") {
  setMethod(HttpRequest::Method::Post);
}

ModifyGroupRequest::~ModifyGroupRequest() {}

std::string ModifyGroupRequest::getGroupId() const {
  return groupId_;
}

void ModifyGroupRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string ModifyGroupRequest::getNewGroupName() const {
  return newGroupName_;
}

void ModifyGroupRequest::setNewGroupName(const std::string &newGroupName) {
  newGroupName_ = newGroupName;
  setParameter(std::string("NewGroupName"), newGroupName);
}

