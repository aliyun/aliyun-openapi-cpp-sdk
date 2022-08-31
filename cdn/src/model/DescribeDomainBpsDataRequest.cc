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

#include <alibabacloud/cdn/model/DescribeDomainBpsDataRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainBpsDataRequest;

DescribeDomainBpsDataRequest::DescribeDomainBpsDataRequest()
    : RpcServiceRequest("cdn", "2014-11-11", "DescribeDomainBpsData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDomainBpsDataRequest::~DescribeDomainBpsDataRequest() {}

std::string DescribeDomainBpsDataRequest::getLocationNameEn() const {
  return locationNameEn_;
}

void DescribeDomainBpsDataRequest::setLocationNameEn(const std::string &locationNameEn) {
  locationNameEn_ = locationNameEn;
  setParameter(std::string("LocationNameEn"), locationNameEn);
}

std::string DescribeDomainBpsDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeDomainBpsDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeDomainBpsDataRequest::getIspNameEn() const {
  return ispNameEn_;
}

void DescribeDomainBpsDataRequest::setIspNameEn(const std::string &ispNameEn) {
  ispNameEn_ = ispNameEn;
  setParameter(std::string("IspNameEn"), ispNameEn);
}

std::string DescribeDomainBpsDataRequest::getDomainType() const {
  return domainType_;
}

void DescribeDomainBpsDataRequest::setDomainType(const std::string &domainType) {
  domainType_ = domainType;
  setParameter(std::string("DomainType"), domainType);
}

std::string DescribeDomainBpsDataRequest::getTimeMerge() const {
  return timeMerge_;
}

void DescribeDomainBpsDataRequest::setTimeMerge(const std::string &timeMerge) {
  timeMerge_ = timeMerge;
  setParameter(std::string("TimeMerge"), timeMerge);
}

std::string DescribeDomainBpsDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeDomainBpsDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeDomainBpsDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeDomainBpsDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeDomainBpsDataRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDomainBpsDataRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeDomainBpsDataRequest::getInterval() const {
  return interval_;
}

void DescribeDomainBpsDataRequest::setInterval(const std::string &interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), interval);
}

