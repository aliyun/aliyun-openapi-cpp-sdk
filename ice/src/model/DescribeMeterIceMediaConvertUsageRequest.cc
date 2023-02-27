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

#include <alibabacloud/ice/model/DescribeMeterIceMediaConvertUsageRequest.h>

using AlibabaCloud::ICE::Model::DescribeMeterIceMediaConvertUsageRequest;

DescribeMeterIceMediaConvertUsageRequest::DescribeMeterIceMediaConvertUsageRequest()
    : RpcServiceRequest("ice", "2020-11-09", "DescribeMeterIceMediaConvertUsage") {
  setMethod(HttpRequest::Method::Post);
}

DescribeMeterIceMediaConvertUsageRequest::~DescribeMeterIceMediaConvertUsageRequest() {}

long DescribeMeterIceMediaConvertUsageRequest::getStartTs() const {
  return startTs_;
}

void DescribeMeterIceMediaConvertUsageRequest::setStartTs(long startTs) {
  startTs_ = startTs;
  setParameter(std::string("StartTs"), std::to_string(startTs));
}

long DescribeMeterIceMediaConvertUsageRequest::getEndTs() const {
  return endTs_;
}

void DescribeMeterIceMediaConvertUsageRequest::setEndTs(long endTs) {
  endTs_ = endTs;
  setParameter(std::string("EndTs"), std::to_string(endTs));
}

long DescribeMeterIceMediaConvertUsageRequest::getInterval() const {
  return interval_;
}

void DescribeMeterIceMediaConvertUsageRequest::setInterval(long interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), std::to_string(interval));
}

std::string DescribeMeterIceMediaConvertUsageRequest::getRegion() const {
  return region_;
}

void DescribeMeterIceMediaConvertUsageRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

