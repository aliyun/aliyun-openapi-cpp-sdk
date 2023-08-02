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

#include <alibabacloud/gpdb/model/DescribeDataSharePerformanceRequest.h>

using AlibabaCloud::Gpdb::Model::DescribeDataSharePerformanceRequest;

DescribeDataSharePerformanceRequest::DescribeDataSharePerformanceRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "DescribeDataSharePerformance") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDataSharePerformanceRequest::~DescribeDataSharePerformanceRequest() {}

std::string DescribeDataSharePerformanceRequest::getEndTime() const {
  return endTime_;
}

void DescribeDataSharePerformanceRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeDataSharePerformanceRequest::getStartTime() const {
  return startTime_;
}

void DescribeDataSharePerformanceRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeDataSharePerformanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDataSharePerformanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDataSharePerformanceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeDataSharePerformanceRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeDataSharePerformanceRequest::getRegionId() const {
  return regionId_;
}

void DescribeDataSharePerformanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDataSharePerformanceRequest::getKey() const {
  return key_;
}

void DescribeDataSharePerformanceRequest::setKey(const std::string &key) {
  key_ = key;
  setParameter(std::string("Key"), key);
}

