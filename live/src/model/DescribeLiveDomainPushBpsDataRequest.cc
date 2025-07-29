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

#include <alibabacloud/live/model/DescribeLiveDomainPushBpsDataRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveDomainPushBpsDataRequest;

DescribeLiveDomainPushBpsDataRequest::DescribeLiveDomainPushBpsDataRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeLiveDomainPushBpsData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLiveDomainPushBpsDataRequest::~DescribeLiveDomainPushBpsDataRequest() {}

std::string DescribeLiveDomainPushBpsDataRequest::getLocationNameEn() const {
  return locationNameEn_;
}

void DescribeLiveDomainPushBpsDataRequest::setLocationNameEn(const std::string &locationNameEn) {
  locationNameEn_ = locationNameEn;
  setParameter(std::string("LocationNameEn"), locationNameEn);
}

std::string DescribeLiveDomainPushBpsDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeLiveDomainPushBpsDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeLiveDomainPushBpsDataRequest::getIspNameEn() const {
  return ispNameEn_;
}

void DescribeLiveDomainPushBpsDataRequest::setIspNameEn(const std::string &ispNameEn) {
  ispNameEn_ = ispNameEn;
  setParameter(std::string("IspNameEn"), ispNameEn);
}

std::string DescribeLiveDomainPushBpsDataRequest::getRegionId() const {
  return regionId_;
}

void DescribeLiveDomainPushBpsDataRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeLiveDomainPushBpsDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeLiveDomainPushBpsDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeLiveDomainPushBpsDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeLiveDomainPushBpsDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeLiveDomainPushBpsDataRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLiveDomainPushBpsDataRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeLiveDomainPushBpsDataRequest::getInterval() const {
  return interval_;
}

void DescribeLiveDomainPushBpsDataRequest::setInterval(const std::string &interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), interval);
}

