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

#include <alibabacloud/live/model/DescribeLiveDrmUsageDataRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveDrmUsageDataRequest;

DescribeLiveDrmUsageDataRequest::DescribeLiveDrmUsageDataRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeLiveDrmUsageData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLiveDrmUsageDataRequest::~DescribeLiveDrmUsageDataRequest() {}

std::string DescribeLiveDrmUsageDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeLiveDrmUsageDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeLiveDrmUsageDataRequest::getRegionId() const {
  return regionId_;
}

void DescribeLiveDrmUsageDataRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeLiveDrmUsageDataRequest::getSplitBy() const {
  return splitBy_;
}

void DescribeLiveDrmUsageDataRequest::setSplitBy(const std::string &splitBy) {
  splitBy_ = splitBy;
  setParameter(std::string("SplitBy"), splitBy);
}

std::string DescribeLiveDrmUsageDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeLiveDrmUsageDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeLiveDrmUsageDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeLiveDrmUsageDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeLiveDrmUsageDataRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLiveDrmUsageDataRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeLiveDrmUsageDataRequest::getInterval() const {
  return interval_;
}

void DescribeLiveDrmUsageDataRequest::setInterval(const std::string &interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), interval);
}

