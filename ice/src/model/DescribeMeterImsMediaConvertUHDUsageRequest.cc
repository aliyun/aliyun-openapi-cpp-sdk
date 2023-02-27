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

#include <alibabacloud/ice/model/DescribeMeterImsMediaConvertUHDUsageRequest.h>

using AlibabaCloud::ICE::Model::DescribeMeterImsMediaConvertUHDUsageRequest;

DescribeMeterImsMediaConvertUHDUsageRequest::DescribeMeterImsMediaConvertUHDUsageRequest()
    : RpcServiceRequest("ice", "2020-11-09", "DescribeMeterImsMediaConvertUHDUsage") {
  setMethod(HttpRequest::Method::Post);
}

DescribeMeterImsMediaConvertUHDUsageRequest::~DescribeMeterImsMediaConvertUHDUsageRequest() {}

long DescribeMeterImsMediaConvertUHDUsageRequest::getStartTs() const {
  return startTs_;
}

void DescribeMeterImsMediaConvertUHDUsageRequest::setStartTs(long startTs) {
  startTs_ = startTs;
  setParameter(std::string("StartTs"), std::to_string(startTs));
}

std::string DescribeMeterImsMediaConvertUHDUsageRequest::getRegionId() const {
  return regionId_;
}

void DescribeMeterImsMediaConvertUHDUsageRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long DescribeMeterImsMediaConvertUHDUsageRequest::getEndTs() const {
  return endTs_;
}

void DescribeMeterImsMediaConvertUHDUsageRequest::setEndTs(long endTs) {
  endTs_ = endTs;
  setParameter(std::string("EndTs"), std::to_string(endTs));
}

std::string DescribeMeterImsMediaConvertUHDUsageRequest::getInterval() const {
  return interval_;
}

void DescribeMeterImsMediaConvertUHDUsageRequest::setInterval(const std::string &interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), interval);
}

