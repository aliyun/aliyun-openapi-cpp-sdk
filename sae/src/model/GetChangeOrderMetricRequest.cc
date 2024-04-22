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

#include <alibabacloud/sae/model/GetChangeOrderMetricRequest.h>

using AlibabaCloud::Sae::Model::GetChangeOrderMetricRequest;

GetChangeOrderMetricRequest::GetChangeOrderMetricRequest()
    : RoaServiceRequest("sae", "2019-05-06") {
  setResourcePath("/pop/v1/sam/getChangeOrderMetric"};
  setMethod(HttpRequest::Method::Get);
}

GetChangeOrderMetricRequest::~GetChangeOrderMetricRequest() {}

std::string GetChangeOrderMetricRequest::getAppSource() const {
  return appSource_;
}

void GetChangeOrderMetricRequest::setAppSource(const std::string &appSource) {
  appSource_ = appSource;
  setParameter(std::string("AppSource"), appSource);
}

std::string GetChangeOrderMetricRequest::getCreateTime() const {
  return createTime_;
}

void GetChangeOrderMetricRequest::setCreateTime(const std::string &createTime) {
  createTime_ = createTime;
  setParameter(std::string("CreateTime"), createTime);
}

std::string GetChangeOrderMetricRequest::getCpuStrategy() const {
  return cpuStrategy_;
}

void GetChangeOrderMetricRequest::setCpuStrategy(const std::string &cpuStrategy) {
  cpuStrategy_ = cpuStrategy;
  setParameter(std::string("CpuStrategy"), cpuStrategy);
}

std::string GetChangeOrderMetricRequest::getRegionId() const {
  return regionId_;
}

void GetChangeOrderMetricRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long GetChangeOrderMetricRequest::getLimit() const {
  return limit_;
}

void GetChangeOrderMetricRequest::setLimit(long limit) {
  limit_ = limit;
  setParameter(std::string("Limit"), std::to_string(limit));
}

std::string GetChangeOrderMetricRequest::getOrderBy() const {
  return orderBy_;
}

void GetChangeOrderMetricRequest::setOrderBy(const std::string &orderBy) {
  orderBy_ = orderBy;
  setParameter(std::string("OrderBy"), orderBy);
}

