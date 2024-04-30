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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainRealTimeQpsDataRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnDomainRealTimeQpsDataRequest;

DescribeDcdnDomainRealTimeQpsDataRequest::DescribeDcdnDomainRealTimeQpsDataRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnDomainRealTimeQpsData") {
  setMethod(HttpRequest::Method::Get);
}

DescribeDcdnDomainRealTimeQpsDataRequest::~DescribeDcdnDomainRealTimeQpsDataRequest() {}

std::string DescribeDcdnDomainRealTimeQpsDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeDcdnDomainRealTimeQpsDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeDcdnDomainRealTimeQpsDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeDcdnDomainRealTimeQpsDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeDcdnDomainRealTimeQpsDataRequest::getLocationNameEn() const {
  return locationNameEn_;
}

void DescribeDcdnDomainRealTimeQpsDataRequest::setLocationNameEn(const std::string &locationNameEn) {
  locationNameEn_ = locationNameEn;
  setParameter(std::string("LocationNameEn"), locationNameEn);
}

std::string DescribeDcdnDomainRealTimeQpsDataRequest::getIspNameEn() const {
  return ispNameEn_;
}

void DescribeDcdnDomainRealTimeQpsDataRequest::setIspNameEn(const std::string &ispNameEn) {
  ispNameEn_ = ispNameEn;
  setParameter(std::string("IspNameEn"), ispNameEn);
}

std::string DescribeDcdnDomainRealTimeQpsDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeDcdnDomainRealTimeQpsDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

