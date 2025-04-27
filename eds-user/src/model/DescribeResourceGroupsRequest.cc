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

#include <alibabacloud/eds-user/model/DescribeResourceGroupsRequest.h>

using AlibabaCloud::Eds_user::Model::DescribeResourceGroupsRequest;

DescribeResourceGroupsRequest::DescribeResourceGroupsRequest()
    : RpcServiceRequest("eds-user", "2021-03-08", "DescribeResourceGroups") {
  setMethod(HttpRequest::Method::Post);
}

DescribeResourceGroupsRequest::~DescribeResourceGroupsRequest() {}

std::string DescribeResourceGroupsRequest::getResourceGroupName() const {
  return resourceGroupName_;
}

void DescribeResourceGroupsRequest::setResourceGroupName(const std::string &resourceGroupName) {
  resourceGroupName_ = resourceGroupName;
  setParameter(std::string("ResourceGroupName"), resourceGroupName);
}

long DescribeResourceGroupsRequest::getNeedContainResourceGroupWithOfficeSite() const {
  return needContainResourceGroupWithOfficeSite_;
}

void DescribeResourceGroupsRequest::setNeedContainResourceGroupWithOfficeSite(long needContainResourceGroupWithOfficeSite) {
  needContainResourceGroupWithOfficeSite_ = needContainResourceGroupWithOfficeSite;
  setParameter(std::string("NeedContainResourceGroupWithOfficeSite"), std::to_string(needContainResourceGroupWithOfficeSite));
}

int DescribeResourceGroupsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeResourceGroupsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeResourceGroupsRequest::getPlatform() const {
  return platform_;
}

void DescribeResourceGroupsRequest::setPlatform(const std::string &platform) {
  platform_ = platform;
  setParameter(std::string("Platform"), platform);
}

std::vector<DescribeResourceGroupsRequest::std::string> DescribeResourceGroupsRequest::getResourceGroupIds() const {
  return resourceGroupIds_;
}

void DescribeResourceGroupsRequest::setResourceGroupIds(const std::vector<DescribeResourceGroupsRequest::std::string> &resourceGroupIds) {
  resourceGroupIds_ = resourceGroupIds;
  for(int dep1 = 0; dep1 != resourceGroupIds.size(); dep1++) {
    setParameter(std::string("ResourceGroupIds") + "." + std::to_string(dep1 + 1), resourceGroupIds[dep1]);
  }
}

int DescribeResourceGroupsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeResourceGroupsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

