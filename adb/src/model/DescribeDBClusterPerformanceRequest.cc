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

#include <alibabacloud/adb/model/DescribeDBClusterPerformanceRequest.h>

using AlibabaCloud::Adb::Model::DescribeDBClusterPerformanceRequest;

DescribeDBClusterPerformanceRequest::DescribeDBClusterPerformanceRequest()
    : RpcServiceRequest("adb", "2021-12-01", "DescribeDBClusterPerformance") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBClusterPerformanceRequest::~DescribeDBClusterPerformanceRequest() {}

std::string DescribeDBClusterPerformanceRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeDBClusterPerformanceRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeDBClusterPerformanceRequest::getEndTime() const {
  return endTime_;
}

void DescribeDBClusterPerformanceRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeDBClusterPerformanceRequest::getStartTime() const {
  return startTime_;
}

void DescribeDBClusterPerformanceRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeDBClusterPerformanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBClusterPerformanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDBClusterPerformanceRequest::getRegionId() const {
  return regionId_;
}

void DescribeDBClusterPerformanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDBClusterPerformanceRequest::getResourcePools() const {
  return resourcePools_;
}

void DescribeDBClusterPerformanceRequest::setResourcePools(const std::string &resourcePools) {
  resourcePools_ = resourcePools;
  setParameter(std::string("ResourcePools"), resourcePools);
}

std::string DescribeDBClusterPerformanceRequest::getKey() const {
  return key_;
}

void DescribeDBClusterPerformanceRequest::setKey(const std::string &key) {
  key_ = key;
  setParameter(std::string("Key"), key);
}

