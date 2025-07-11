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

#include <alibabacloud/eds-user/model/DescribeGroupsRequest.h>

using AlibabaCloud::Eds_user::Model::DescribeGroupsRequest;

DescribeGroupsRequest::DescribeGroupsRequest()
    : RpcServiceRequest("eds-user", "2021-03-08", "DescribeGroups") {
  setMethod(HttpRequest::Method::Post);
}

DescribeGroupsRequest::~DescribeGroupsRequest() {}

std::string DescribeGroupsRequest::getGroupId() const {
  return groupId_;
}

void DescribeGroupsRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string DescribeGroupsRequest::getGroupName() const {
  return groupName_;
}

void DescribeGroupsRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

std::string DescribeGroupsRequest::getBizType() const {
  return bizType_;
}

void DescribeGroupsRequest::setBizType(const std::string &bizType) {
  bizType_ = bizType;
  setParameter(std::string("BizType"), bizType);
}

std::string DescribeGroupsRequest::getSolutionId() const {
  return solutionId_;
}

void DescribeGroupsRequest::setSolutionId(const std::string &solutionId) {
  solutionId_ = solutionId;
  setParameter(std::string("SolutionId"), solutionId);
}

