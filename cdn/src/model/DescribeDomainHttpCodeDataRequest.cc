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

#include <alibabacloud/cdn/model/DescribeDomainHttpCodeDataRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainHttpCodeDataRequest;

DescribeDomainHttpCodeDataRequest::DescribeDomainHttpCodeDataRequest()
    : RpcServiceRequest("cdn", "2014-11-11", "DescribeDomainHttpCodeData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDomainHttpCodeDataRequest::~DescribeDomainHttpCodeDataRequest() {}

std::string DescribeDomainHttpCodeDataRequest::getLocationNameEn() const {
  return locationNameEn_;
}

void DescribeDomainHttpCodeDataRequest::setLocationNameEn(const std::string &locationNameEn) {
  locationNameEn_ = locationNameEn;
  setParameter(std::string("LocationNameEn"), locationNameEn);
}

std::string DescribeDomainHttpCodeDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeDomainHttpCodeDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeDomainHttpCodeDataRequest::getIspNameEn() const {
  return ispNameEn_;
}

void DescribeDomainHttpCodeDataRequest::setIspNameEn(const std::string &ispNameEn) {
  ispNameEn_ = ispNameEn;
  setParameter(std::string("IspNameEn"), ispNameEn);
}

std::string DescribeDomainHttpCodeDataRequest::getTimeMerge() const {
  return timeMerge_;
}

void DescribeDomainHttpCodeDataRequest::setTimeMerge(const std::string &timeMerge) {
  timeMerge_ = timeMerge;
  setParameter(std::string("TimeMerge"), timeMerge);
}

std::string DescribeDomainHttpCodeDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeDomainHttpCodeDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeDomainHttpCodeDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeDomainHttpCodeDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeDomainHttpCodeDataRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDomainHttpCodeDataRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeDomainHttpCodeDataRequest::getInterval() const {
  return interval_;
}

void DescribeDomainHttpCodeDataRequest::setInterval(const std::string &interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), interval);
}

