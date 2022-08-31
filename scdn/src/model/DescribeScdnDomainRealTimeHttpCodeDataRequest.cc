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

#include <alibabacloud/scdn/model/DescribeScdnDomainRealTimeHttpCodeDataRequest.h>

using AlibabaCloud::Scdn::Model::DescribeScdnDomainRealTimeHttpCodeDataRequest;

DescribeScdnDomainRealTimeHttpCodeDataRequest::DescribeScdnDomainRealTimeHttpCodeDataRequest()
    : RpcServiceRequest("scdn", "2017-11-15", "DescribeScdnDomainRealTimeHttpCodeData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeScdnDomainRealTimeHttpCodeDataRequest::~DescribeScdnDomainRealTimeHttpCodeDataRequest() {}

std::string DescribeScdnDomainRealTimeHttpCodeDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeScdnDomainRealTimeHttpCodeDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeScdnDomainRealTimeHttpCodeDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeScdnDomainRealTimeHttpCodeDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeScdnDomainRealTimeHttpCodeDataRequest::getLocationNameEn() const {
  return locationNameEn_;
}

void DescribeScdnDomainRealTimeHttpCodeDataRequest::setLocationNameEn(const std::string &locationNameEn) {
  locationNameEn_ = locationNameEn;
  setParameter(std::string("LocationNameEn"), locationNameEn);
}

std::string DescribeScdnDomainRealTimeHttpCodeDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeScdnDomainRealTimeHttpCodeDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeScdnDomainRealTimeHttpCodeDataRequest::getIspNameEn() const {
  return ispNameEn_;
}

void DescribeScdnDomainRealTimeHttpCodeDataRequest::setIspNameEn(const std::string &ispNameEn) {
  ispNameEn_ = ispNameEn;
  setParameter(std::string("IspNameEn"), ispNameEn);
}

