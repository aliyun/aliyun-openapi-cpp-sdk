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

#include <alibabacloud/ram/model/UpdateGroupRequest.h>

using AlibabaCloud::Ram::Model::UpdateGroupRequest;

UpdateGroupRequest::UpdateGroupRequest()
    : RpcServiceRequest("ram", "2015-05-01", "UpdateGroup") {
  setMethod(HttpRequest::Method::Post);
}

UpdateGroupRequest::~UpdateGroupRequest() {}

std::string UpdateGroupRequest::getGroupName() const {
  return groupName_;
}

void UpdateGroupRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

std::string UpdateGroupRequest::getNewGroupName() const {
  return newGroupName_;
}

void UpdateGroupRequest::setNewGroupName(const std::string &newGroupName) {
  newGroupName_ = newGroupName;
  setParameter(std::string("NewGroupName"), newGroupName);
}

std::string UpdateGroupRequest::getNewComments() const {
  return newComments_;
}

void UpdateGroupRequest::setNewComments(const std::string &newComments) {
  newComments_ = newComments;
  setParameter(std::string("NewComments"), newComments);
}

