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

#include <alibabacloud/live/model/DescribeLiveDomainBpsDataRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveDomainBpsDataRequest;

DescribeLiveDomainBpsDataRequest::DescribeLiveDomainBpsDataRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeLiveDomainBpsData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLiveDomainBpsDataRequest::~DescribeLiveDomainBpsDataRequest() {}

std::string DescribeLiveDomainBpsDataRequest::getLocationNameEn() const {
  return locationNameEn_;
}

void DescribeLiveDomainBpsDataRequest::setLocationNameEn(const std::string &locationNameEn) {
  locationNameEn_ = locationNameEn;
  setParameter(std::string("LocationNameEn"), locationNameEn);
}

std::string DescribeLiveDomainBpsDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeLiveDomainBpsDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeLiveDomainBpsDataRequest::getIspNameEn() const {
  return ispNameEn_;
}

void DescribeLiveDomainBpsDataRequest::setIspNameEn(const std::string &ispNameEn) {
  ispNameEn_ = ispNameEn;
  setParameter(std::string("IspNameEn"), ispNameEn);
}

std::string DescribeLiveDomainBpsDataRequest::getRegionId() const {
  return regionId_;
}

void DescribeLiveDomainBpsDataRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeLiveDomainBpsDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeLiveDomainBpsDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeLiveDomainBpsDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeLiveDomainBpsDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeLiveDomainBpsDataRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLiveDomainBpsDataRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeLiveDomainBpsDataRequest::getInterval() const {
  return interval_;
}

void DescribeLiveDomainBpsDataRequest::setInterval(const std::string &interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), interval);
}

