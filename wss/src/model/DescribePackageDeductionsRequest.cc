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

#include <alibabacloud/wss/model/DescribePackageDeductionsRequest.h>

using AlibabaCloud::Wss::Model::DescribePackageDeductionsRequest;

DescribePackageDeductionsRequest::DescribePackageDeductionsRequest()
    : RpcServiceRequest("wss", "2021-12-21", "DescribePackageDeductions") {
  setMethod(HttpRequest::Method::Post);
}

DescribePackageDeductionsRequest::~DescribePackageDeductionsRequest() {}

long DescribePackageDeductionsRequest::getEndTime() const {
  return endTime_;
}

void DescribePackageDeductionsRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long DescribePackageDeductionsRequest::getStartTime() const {
  return startTime_;
}

void DescribePackageDeductionsRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

int DescribePackageDeductionsRequest::getPageNum() const {
  return pageNum_;
}

void DescribePackageDeductionsRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

std::string DescribePackageDeductionsRequest::getResourceType() const {
  return resourceType_;
}

void DescribePackageDeductionsRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::vector<std::string> DescribePackageDeductionsRequest::getPackageIds() const {
  return packageIds_;
}

void DescribePackageDeductionsRequest::setPackageIds(const std::vector<std::string> &packageIds) {
  packageIds_ = packageIds;
}

std::vector<std::string> DescribePackageDeductionsRequest::getInstanceIds() const {
  return instanceIds_;
}

void DescribePackageDeductionsRequest::setInstanceIds(const std::vector<std::string> &instanceIds) {
  instanceIds_ = instanceIds;
}

int DescribePackageDeductionsRequest::getPageSize() const {
  return pageSize_;
}

void DescribePackageDeductionsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

