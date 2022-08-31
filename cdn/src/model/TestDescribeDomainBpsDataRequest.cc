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

#include <alibabacloud/cdn/model/TestDescribeDomainBpsDataRequest.h>

using AlibabaCloud::Cdn::Model::TestDescribeDomainBpsDataRequest;

TestDescribeDomainBpsDataRequest::TestDescribeDomainBpsDataRequest()
    : RpcServiceRequest("cdn", "2014-11-11", "TestDescribeDomainBpsData") {
  setMethod(HttpRequest::Method::Post);
}

TestDescribeDomainBpsDataRequest::~TestDescribeDomainBpsDataRequest() {}

std::string TestDescribeDomainBpsDataRequest::getDomainType() const {
  return domainType_;
}

void TestDescribeDomainBpsDataRequest::setDomainType(const std::string &domainType) {
  domainType_ = domainType;
  setParameter(std::string("DomainType"), domainType);
}

std::string TestDescribeDomainBpsDataRequest::getTimeMerge() const {
  return timeMerge_;
}

void TestDescribeDomainBpsDataRequest::setTimeMerge(const std::string &timeMerge) {
  timeMerge_ = timeMerge;
  setParameter(std::string("TimeMerge"), timeMerge);
}

std::string TestDescribeDomainBpsDataRequest::getDomainName() const {
  return domainName_;
}

void TestDescribeDomainBpsDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string TestDescribeDomainBpsDataRequest::getEndTime() const {
  return endTime_;
}

void TestDescribeDomainBpsDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string TestDescribeDomainBpsDataRequest::getInterval() const {
  return interval_;
}

void TestDescribeDomainBpsDataRequest::setInterval(const std::string &interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), interval);
}

std::string TestDescribeDomainBpsDataRequest::getLocationNameEn() const {
  return locationNameEn_;
}

void TestDescribeDomainBpsDataRequest::setLocationNameEn(const std::string &locationNameEn) {
  locationNameEn_ = locationNameEn;
  setParameter(std::string("LocationNameEn"), locationNameEn);
}

std::string TestDescribeDomainBpsDataRequest::getStartTime() const {
  return startTime_;
}

void TestDescribeDomainBpsDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string TestDescribeDomainBpsDataRequest::getIspNameEn() const {
  return ispNameEn_;
}

void TestDescribeDomainBpsDataRequest::setIspNameEn(const std::string &ispNameEn) {
  ispNameEn_ = ispNameEn;
  setParameter(std::string("IspNameEn"), ispNameEn);
}

