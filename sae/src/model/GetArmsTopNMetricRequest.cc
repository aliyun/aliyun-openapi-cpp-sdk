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

#include <alibabacloud/sae/model/GetArmsTopNMetricRequest.h>

using AlibabaCloud::Sae::Model::GetArmsTopNMetricRequest;

GetArmsTopNMetricRequest::GetArmsTopNMetricRequest()
    : RoaServiceRequest("sae", "2019-05-06") {
  setResourcePath("/pop/v1/sam/getArmsTopNMetric"};
  setMethod(HttpRequest::Method::Get);
}

GetArmsTopNMetricRequest::~GetArmsTopNMetricRequest() {}

std::string GetArmsTopNMetricRequest::getAppSource() const {
  return appSource_;
}

void GetArmsTopNMetricRequest::setAppSource(const std::string &appSource) {
  appSource_ = appSource;
  setParameter(std::string("AppSource"), appSource);
}

std::string GetArmsTopNMetricRequest::getCpuStrategy() const {
  return cpuStrategy_;
}

void GetArmsTopNMetricRequest::setCpuStrategy(const std::string &cpuStrategy) {
  cpuStrategy_ = cpuStrategy;
  setParameter(std::string("CpuStrategy"), cpuStrategy);
}

std::string GetArmsTopNMetricRequest::getRegionId() const {
  return regionId_;
}

void GetArmsTopNMetricRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long GetArmsTopNMetricRequest::getLimit() const {
  return limit_;
}

void GetArmsTopNMetricRequest::setLimit(long limit) {
  limit_ = limit;
  setParameter(std::string("Limit"), std::to_string(limit));
}

std::string GetArmsTopNMetricRequest::getOrderBy() const {
  return orderBy_;
}

void GetArmsTopNMetricRequest::setOrderBy(const std::string &orderBy) {
  orderBy_ = orderBy;
  setParameter(std::string("OrderBy"), orderBy);
}

long GetArmsTopNMetricRequest::getEndTime() const {
  return endTime_;
}

void GetArmsTopNMetricRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long GetArmsTopNMetricRequest::getStartTime() const {
  return startTime_;
}

void GetArmsTopNMetricRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

