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

#include <alibabacloud/ice/model/DescribeMeterImsLiveRecordUsageRequest.h>

using AlibabaCloud::ICE::Model::DescribeMeterImsLiveRecordUsageRequest;

DescribeMeterImsLiveRecordUsageRequest::DescribeMeterImsLiveRecordUsageRequest()
    : RpcServiceRequest("ice", "2020-11-09", "DescribeMeterImsLiveRecordUsage") {
  setMethod(HttpRequest::Method::Post);
}

DescribeMeterImsLiveRecordUsageRequest::~DescribeMeterImsLiveRecordUsageRequest() {}

long DescribeMeterImsLiveRecordUsageRequest::getStartTs() const {
  return startTs_;
}

void DescribeMeterImsLiveRecordUsageRequest::setStartTs(long startTs) {
  startTs_ = startTs;
  setParameter(std::string("StartTs"), std::to_string(startTs));
}

long DescribeMeterImsLiveRecordUsageRequest::getEndTs() const {
  return endTs_;
}

void DescribeMeterImsLiveRecordUsageRequest::setEndTs(long endTs) {
  endTs_ = endTs;
  setParameter(std::string("EndTs"), std::to_string(endTs));
}

long DescribeMeterImsLiveRecordUsageRequest::getInterval() const {
  return interval_;
}

void DescribeMeterImsLiveRecordUsageRequest::setInterval(long interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), std::to_string(interval));
}

std::string DescribeMeterImsLiveRecordUsageRequest::getRegion() const {
  return region_;
}

void DescribeMeterImsLiveRecordUsageRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

