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

#include <alibabacloud/sae/model/GetScaleAppMetricRequest.h>

using AlibabaCloud::Sae::Model::GetScaleAppMetricRequest;

GetScaleAppMetricRequest::GetScaleAppMetricRequest()
    : RoaServiceRequest("sae", "2019-05-06") {
  setResourcePath("/pop/v1/sam/getScaleAppMetric"};
  setMethod(HttpRequest::Method::Get);
}

GetScaleAppMetricRequest::~GetScaleAppMetricRequest() {}

std::string GetScaleAppMetricRequest::getAppSource() const {
  return appSource_;
}

void GetScaleAppMetricRequest::setAppSource(const std::string &appSource) {
  appSource_ = appSource;
  setParameter(std::string("AppSource"), appSource);
}

std::string GetScaleAppMetricRequest::getCpuStrategy() const {
  return cpuStrategy_;
}

void GetScaleAppMetricRequest::setCpuStrategy(const std::string &cpuStrategy) {
  cpuStrategy_ = cpuStrategy;
  setParameter(std::string("CpuStrategy"), cpuStrategy);
}

std::string GetScaleAppMetricRequest::getRegionId() const {
  return regionId_;
}

void GetScaleAppMetricRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long GetScaleAppMetricRequest::getLimit() const {
  return limit_;
}

void GetScaleAppMetricRequest::setLimit(long limit) {
  limit_ = limit;
  setParameter(std::string("Limit"), std::to_string(limit));
}

