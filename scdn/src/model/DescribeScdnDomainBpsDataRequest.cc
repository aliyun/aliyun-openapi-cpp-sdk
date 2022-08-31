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

#include <alibabacloud/scdn/model/DescribeScdnDomainBpsDataRequest.h>

using AlibabaCloud::Scdn::Model::DescribeScdnDomainBpsDataRequest;

DescribeScdnDomainBpsDataRequest::DescribeScdnDomainBpsDataRequest()
    : RpcServiceRequest("scdn", "2017-11-15", "DescribeScdnDomainBpsData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeScdnDomainBpsDataRequest::~DescribeScdnDomainBpsDataRequest() {}

std::string DescribeScdnDomainBpsDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeScdnDomainBpsDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeScdnDomainBpsDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeScdnDomainBpsDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeScdnDomainBpsDataRequest::getInterval() const {
  return interval_;
}

void DescribeScdnDomainBpsDataRequest::setInterval(const std::string &interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), interval);
}

std::string DescribeScdnDomainBpsDataRequest::getLocationNameEn() const {
  return locationNameEn_;
}

void DescribeScdnDomainBpsDataRequest::setLocationNameEn(const std::string &locationNameEn) {
  locationNameEn_ = locationNameEn;
  setParameter(std::string("LocationNameEn"), locationNameEn);
}

std::string DescribeScdnDomainBpsDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeScdnDomainBpsDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeScdnDomainBpsDataRequest::getIspNameEn() const {
  return ispNameEn_;
}

void DescribeScdnDomainBpsDataRequest::setIspNameEn(const std::string &ispNameEn) {
  ispNameEn_ = ispNameEn;
  setParameter(std::string("IspNameEn"), ispNameEn);
}

