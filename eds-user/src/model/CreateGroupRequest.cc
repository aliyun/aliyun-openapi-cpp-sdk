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

#include <alibabacloud/eds-user/model/CreateGroupRequest.h>

using AlibabaCloud::Eds_user::Model::CreateGroupRequest;

CreateGroupRequest::CreateGroupRequest()
    : RpcServiceRequest("eds-user", "2021-03-08", "CreateGroup") {
  setMethod(HttpRequest::Method::Post);
}

CreateGroupRequest::~CreateGroupRequest() {}

std::string CreateGroupRequest::getGroupName() const {
  return groupName_;
}

void CreateGroupRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

std::string CreateGroupRequest::getBizType() const {
  return bizType_;
}

void CreateGroupRequest::setBizType(const std::string &bizType) {
  bizType_ = bizType;
  setParameter(std::string("BizType"), bizType);
}

std::string CreateGroupRequest::getParentGroupId() const {
  return parentGroupId_;
}

void CreateGroupRequest::setParentGroupId(const std::string &parentGroupId) {
  parentGroupId_ = parentGroupId;
  setParameter(std::string("ParentGroupId"), parentGroupId);
}

std::string CreateGroupRequest::getSolutionId() const {
  return solutionId_;
}

void CreateGroupRequest::setSolutionId(const std::string &solutionId) {
  solutionId_ = solutionId;
  setParameter(std::string("SolutionId"), solutionId);
}

