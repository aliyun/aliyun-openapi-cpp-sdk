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

#include <alibabacloud/ens/model/DescribeSecurityGroupsRequest.h>

using AlibabaCloud::Ens::Model::DescribeSecurityGroupsRequest;

DescribeSecurityGroupsRequest::DescribeSecurityGroupsRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeSecurityGroups") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSecurityGroupsRequest::~DescribeSecurityGroupsRequest() {}

std::string DescribeSecurityGroupsRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void DescribeSecurityGroupsRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setParameter(std::string("SecurityGroupId"), securityGroupId);
}

std::string DescribeSecurityGroupsRequest::getSecurityGroupName() const {
  return securityGroupName_;
}

void DescribeSecurityGroupsRequest::setSecurityGroupName(const std::string &securityGroupName) {
  securityGroupName_ = securityGroupName;
  setParameter(std::string("SecurityGroupName"), securityGroupName);
}

int DescribeSecurityGroupsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeSecurityGroupsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int DescribeSecurityGroupsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeSecurityGroupsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

