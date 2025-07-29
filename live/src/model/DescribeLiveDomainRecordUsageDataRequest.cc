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

#include <alibabacloud/live/model/DescribeLiveDomainRecordUsageDataRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveDomainRecordUsageDataRequest;

DescribeLiveDomainRecordUsageDataRequest::DescribeLiveDomainRecordUsageDataRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeLiveDomainRecordUsageData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLiveDomainRecordUsageDataRequest::~DescribeLiveDomainRecordUsageDataRequest() {}

std::string DescribeLiveDomainRecordUsageDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeLiveDomainRecordUsageDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeLiveDomainRecordUsageDataRequest::getRegionId() const {
  return regionId_;
}

void DescribeLiveDomainRecordUsageDataRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeLiveDomainRecordUsageDataRequest::getSplitBy() const {
  return splitBy_;
}

void DescribeLiveDomainRecordUsageDataRequest::setSplitBy(const std::string &splitBy) {
  splitBy_ = splitBy;
  setParameter(std::string("SplitBy"), splitBy);
}

std::string DescribeLiveDomainRecordUsageDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeLiveDomainRecordUsageDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeLiveDomainRecordUsageDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeLiveDomainRecordUsageDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeLiveDomainRecordUsageDataRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLiveDomainRecordUsageDataRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeLiveDomainRecordUsageDataRequest::getInterval() const {
  return interval_;
}

void DescribeLiveDomainRecordUsageDataRequest::setInterval(const std::string &interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), interval);
}

std::string DescribeLiveDomainRecordUsageDataRequest::getRegion() const {
  return region_;
}

void DescribeLiveDomainRecordUsageDataRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

