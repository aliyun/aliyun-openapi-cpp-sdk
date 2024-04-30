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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainQpsDataRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnDomainQpsDataRequest;

DescribeDcdnDomainQpsDataRequest::DescribeDcdnDomainQpsDataRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnDomainQpsData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDcdnDomainQpsDataRequest::~DescribeDcdnDomainQpsDataRequest() {}

std::string DescribeDcdnDomainQpsDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeDcdnDomainQpsDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeDcdnDomainQpsDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeDcdnDomainQpsDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeDcdnDomainQpsDataRequest::getInterval() const {
  return interval_;
}

void DescribeDcdnDomainQpsDataRequest::setInterval(const std::string &interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), interval);
}

std::string DescribeDcdnDomainQpsDataRequest::getLocationNameEn() const {
  return locationNameEn_;
}

void DescribeDcdnDomainQpsDataRequest::setLocationNameEn(const std::string &locationNameEn) {
  locationNameEn_ = locationNameEn;
  setParameter(std::string("LocationNameEn"), locationNameEn);
}

std::string DescribeDcdnDomainQpsDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeDcdnDomainQpsDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeDcdnDomainQpsDataRequest::getIspNameEn() const {
  return ispNameEn_;
}

void DescribeDcdnDomainQpsDataRequest::setIspNameEn(const std::string &ispNameEn) {
  ispNameEn_ = ispNameEn;
  setParameter(std::string("IspNameEn"), ispNameEn);
}

