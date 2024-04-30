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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainIpaBpsDataRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnDomainIpaBpsDataRequest;

DescribeDcdnDomainIpaBpsDataRequest::DescribeDcdnDomainIpaBpsDataRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnDomainIpaBpsData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDcdnDomainIpaBpsDataRequest::~DescribeDcdnDomainIpaBpsDataRequest() {}

std::string DescribeDcdnDomainIpaBpsDataRequest::getFixTimeGap() const {
  return fixTimeGap_;
}

void DescribeDcdnDomainIpaBpsDataRequest::setFixTimeGap(const std::string &fixTimeGap) {
  fixTimeGap_ = fixTimeGap;
  setParameter(std::string("FixTimeGap"), fixTimeGap);
}

std::string DescribeDcdnDomainIpaBpsDataRequest::getTimeMerge() const {
  return timeMerge_;
}

void DescribeDcdnDomainIpaBpsDataRequest::setTimeMerge(const std::string &timeMerge) {
  timeMerge_ = timeMerge;
  setParameter(std::string("TimeMerge"), timeMerge);
}

std::string DescribeDcdnDomainIpaBpsDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeDcdnDomainIpaBpsDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeDcdnDomainIpaBpsDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeDcdnDomainIpaBpsDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeDcdnDomainIpaBpsDataRequest::getInterval() const {
  return interval_;
}

void DescribeDcdnDomainIpaBpsDataRequest::setInterval(const std::string &interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), interval);
}

std::string DescribeDcdnDomainIpaBpsDataRequest::getLocationNameEn() const {
  return locationNameEn_;
}

void DescribeDcdnDomainIpaBpsDataRequest::setLocationNameEn(const std::string &locationNameEn) {
  locationNameEn_ = locationNameEn;
  setParameter(std::string("LocationNameEn"), locationNameEn);
}

std::string DescribeDcdnDomainIpaBpsDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeDcdnDomainIpaBpsDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeDcdnDomainIpaBpsDataRequest::getIspNameEn() const {
  return ispNameEn_;
}

void DescribeDcdnDomainIpaBpsDataRequest::setIspNameEn(const std::string &ispNameEn) {
  ispNameEn_ = ispNameEn;
  setParameter(std::string("IspNameEn"), ispNameEn);
}

