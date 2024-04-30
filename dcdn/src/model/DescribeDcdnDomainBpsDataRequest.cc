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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainBpsDataRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnDomainBpsDataRequest;

DescribeDcdnDomainBpsDataRequest::DescribeDcdnDomainBpsDataRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnDomainBpsData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDcdnDomainBpsDataRequest::~DescribeDcdnDomainBpsDataRequest() {}

std::string DescribeDcdnDomainBpsDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeDcdnDomainBpsDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeDcdnDomainBpsDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeDcdnDomainBpsDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeDcdnDomainBpsDataRequest::getInterval() const {
  return interval_;
}

void DescribeDcdnDomainBpsDataRequest::setInterval(const std::string &interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), interval);
}

std::string DescribeDcdnDomainBpsDataRequest::getLocationNameEn() const {
  return locationNameEn_;
}

void DescribeDcdnDomainBpsDataRequest::setLocationNameEn(const std::string &locationNameEn) {
  locationNameEn_ = locationNameEn;
  setParameter(std::string("LocationNameEn"), locationNameEn);
}

std::string DescribeDcdnDomainBpsDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeDcdnDomainBpsDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeDcdnDomainBpsDataRequest::getIspNameEn() const {
  return ispNameEn_;
}

void DescribeDcdnDomainBpsDataRequest::setIspNameEn(const std::string &ispNameEn) {
  ispNameEn_ = ispNameEn;
  setParameter(std::string("IspNameEn"), ispNameEn);
}

