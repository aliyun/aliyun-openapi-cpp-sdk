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

#include <alibabacloud/gpdb/model/DescribeDataShareInstancesRequest.h>

using AlibabaCloud::Gpdb::Model::DescribeDataShareInstancesRequest;

DescribeDataShareInstancesRequest::DescribeDataShareInstancesRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "DescribeDataShareInstances") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDataShareInstancesRequest::~DescribeDataShareInstancesRequest() {}

int DescribeDataShareInstancesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDataShareInstancesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDataShareInstancesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDataShareInstancesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDataShareInstancesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeDataShareInstancesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeDataShareInstancesRequest::getRegionId() const {
  return regionId_;
}

void DescribeDataShareInstancesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeDataShareInstancesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDataShareInstancesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDataShareInstancesRequest::getSearchValue() const {
  return searchValue_;
}

void DescribeDataShareInstancesRequest::setSearchValue(const std::string &searchValue) {
  searchValue_ = searchValue;
  setParameter(std::string("SearchValue"), searchValue);
}

long DescribeDataShareInstancesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDataShareInstancesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

