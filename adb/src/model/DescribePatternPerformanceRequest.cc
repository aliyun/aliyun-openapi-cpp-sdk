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

#include <alibabacloud/adb/model/DescribePatternPerformanceRequest.h>

using AlibabaCloud::Adb::Model::DescribePatternPerformanceRequest;

DescribePatternPerformanceRequest::DescribePatternPerformanceRequest()
    : RpcServiceRequest("adb", "2019-03-15", "DescribePatternPerformance") {
  setMethod(HttpRequest::Method::Post);
}

DescribePatternPerformanceRequest::~DescribePatternPerformanceRequest() {}

std::string DescribePatternPerformanceRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribePatternPerformanceRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribePatternPerformanceRequest::getPatternId() const {
  return patternId_;
}

void DescribePatternPerformanceRequest::setPatternId(const std::string &patternId) {
  patternId_ = patternId;
  setParameter(std::string("PatternId"), patternId);
}

std::string DescribePatternPerformanceRequest::getEndTime() const {
  return endTime_;
}

void DescribePatternPerformanceRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribePatternPerformanceRequest::getStartTime() const {
  return startTime_;
}

void DescribePatternPerformanceRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribePatternPerformanceRequest::getRegionId() const {
  return regionId_;
}

void DescribePatternPerformanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

