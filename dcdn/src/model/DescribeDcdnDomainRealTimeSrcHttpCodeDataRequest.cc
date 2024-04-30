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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainRealTimeSrcHttpCodeDataRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnDomainRealTimeSrcHttpCodeDataRequest;

DescribeDcdnDomainRealTimeSrcHttpCodeDataRequest::DescribeDcdnDomainRealTimeSrcHttpCodeDataRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnDomainRealTimeSrcHttpCodeData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDcdnDomainRealTimeSrcHttpCodeDataRequest::~DescribeDcdnDomainRealTimeSrcHttpCodeDataRequest() {}

std::string DescribeDcdnDomainRealTimeSrcHttpCodeDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeDcdnDomainRealTimeSrcHttpCodeDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeDcdnDomainRealTimeSrcHttpCodeDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeDcdnDomainRealTimeSrcHttpCodeDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeDcdnDomainRealTimeSrcHttpCodeDataRequest::getLocationNameEn() const {
  return locationNameEn_;
}

void DescribeDcdnDomainRealTimeSrcHttpCodeDataRequest::setLocationNameEn(const std::string &locationNameEn) {
  locationNameEn_ = locationNameEn;
  setParameter(std::string("LocationNameEn"), locationNameEn);
}

std::string DescribeDcdnDomainRealTimeSrcHttpCodeDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeDcdnDomainRealTimeSrcHttpCodeDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeDcdnDomainRealTimeSrcHttpCodeDataRequest::getIspNameEn() const {
  return ispNameEn_;
}

void DescribeDcdnDomainRealTimeSrcHttpCodeDataRequest::setIspNameEn(const std::string &ispNameEn) {
  ispNameEn_ = ispNameEn;
  setParameter(std::string("IspNameEn"), ispNameEn);
}

