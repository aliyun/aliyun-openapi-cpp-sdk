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

#include <alibabacloud/cdn/model/DescribeDomainAverageResponseTimeRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainAverageResponseTimeRequest;

DescribeDomainAverageResponseTimeRequest::DescribeDomainAverageResponseTimeRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "DescribeDomainAverageResponseTime") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDomainAverageResponseTimeRequest::~DescribeDomainAverageResponseTimeRequest() {}

std::string DescribeDomainAverageResponseTimeRequest::getLocationNameEn() const {
  return locationNameEn_;
}

void DescribeDomainAverageResponseTimeRequest::setLocationNameEn(const std::string &locationNameEn) {
  locationNameEn_ = locationNameEn;
  setParameter(std::string("LocationNameEn"), locationNameEn);
}

std::string DescribeDomainAverageResponseTimeRequest::getStartTime() const {
  return startTime_;
}

void DescribeDomainAverageResponseTimeRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeDomainAverageResponseTimeRequest::getIspNameEn() const {
  return ispNameEn_;
}

void DescribeDomainAverageResponseTimeRequest::setIspNameEn(const std::string &ispNameEn) {
  ispNameEn_ = ispNameEn;
  setParameter(std::string("IspNameEn"), ispNameEn);
}

std::string DescribeDomainAverageResponseTimeRequest::getDomainType() const {
  return domainType_;
}

void DescribeDomainAverageResponseTimeRequest::setDomainType(const std::string &domainType) {
  domainType_ = domainType;
  setParameter(std::string("DomainType"), domainType);
}

std::string DescribeDomainAverageResponseTimeRequest::getTimeMerge() const {
  return timeMerge_;
}

void DescribeDomainAverageResponseTimeRequest::setTimeMerge(const std::string &timeMerge) {
  timeMerge_ = timeMerge;
  setParameter(std::string("TimeMerge"), timeMerge);
}

std::string DescribeDomainAverageResponseTimeRequest::getDomainName() const {
  return domainName_;
}

void DescribeDomainAverageResponseTimeRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeDomainAverageResponseTimeRequest::getEndTime() const {
  return endTime_;
}

void DescribeDomainAverageResponseTimeRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeDomainAverageResponseTimeRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDomainAverageResponseTimeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeDomainAverageResponseTimeRequest::getInterval() const {
  return interval_;
}

void DescribeDomainAverageResponseTimeRequest::setInterval(const std::string &interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), interval);
}

