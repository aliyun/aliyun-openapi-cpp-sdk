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

#include <alibabacloud/ram/model/CreateGroupRequest.h>

using AlibabaCloud::Ram::Model::CreateGroupRequest;

CreateGroupRequest::CreateGroupRequest()
    : RpcServiceRequest("ram", "2015-05-01", "CreateGroup") {
  setMethod(HttpRequest::Method::Post);
}

CreateGroupRequest::~CreateGroupRequest() {}

std::string CreateGroupRequest::getComments() const {
  return comments_;
}

void CreateGroupRequest::setComments(const std::string &comments) {
  comments_ = comments;
  setParameter(std::string("Comments"), comments);
}

std::string CreateGroupRequest::getGroupName() const {
  return groupName_;
}

void CreateGroupRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

