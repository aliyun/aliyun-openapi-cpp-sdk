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

#include <alibabacloud/sae/model/GetWarningEventMetricRequest.h>

using AlibabaCloud::Sae::Model::GetWarningEventMetricRequest;

GetWarningEventMetricRequest::GetWarningEventMetricRequest()
    : RoaServiceRequest("sae", "2019-05-06") {
  setResourcePath("/pop/v1/sam/getWarningEventMetric"};
  setMethod(HttpRequest::Method::Get);
}

GetWarningEventMetricRequest::~GetWarningEventMetricRequest() {}

std::string GetWarningEventMetricRequest::getAppSource() const {
  return appSource_;
}

void GetWarningEventMetricRequest::setAppSource(const std::string &appSource) {
  appSource_ = appSource;
  setParameter(std::string("AppSource"), appSource);
}

std::string GetWarningEventMetricRequest::getCpuStrategy() const {
  return cpuStrategy_;
}

void GetWarningEventMetricRequest::setCpuStrategy(const std::string &cpuStrategy) {
  cpuStrategy_ = cpuStrategy;
  setParameter(std::string("CpuStrategy"), cpuStrategy);
}

std::string GetWarningEventMetricRequest::getRegionId() const {
  return regionId_;
}

void GetWarningEventMetricRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long GetWarningEventMetricRequest::getLimit() const {
  return limit_;
}

void GetWarningEventMetricRequest::setLimit(long limit) {
  limit_ = limit;
  setParameter(std::string("Limit"), std::to_string(limit));
}

long GetWarningEventMetricRequest::getEndTime() const {
  return endTime_;
}

void GetWarningEventMetricRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long GetWarningEventMetricRequest::getStartTime() const {
  return startTime_;
}

void GetWarningEventMetricRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

