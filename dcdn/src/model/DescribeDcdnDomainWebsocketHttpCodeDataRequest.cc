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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainWebsocketHttpCodeDataRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnDomainWebsocketHttpCodeDataRequest;

DescribeDcdnDomainWebsocketHttpCodeDataRequest::DescribeDcdnDomainWebsocketHttpCodeDataRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnDomainWebsocketHttpCodeData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDcdnDomainWebsocketHttpCodeDataRequest::~DescribeDcdnDomainWebsocketHttpCodeDataRequest() {}

std::string DescribeDcdnDomainWebsocketHttpCodeDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeDcdnDomainWebsocketHttpCodeDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeDcdnDomainWebsocketHttpCodeDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeDcdnDomainWebsocketHttpCodeDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeDcdnDomainWebsocketHttpCodeDataRequest::getInterval() const {
  return interval_;
}

void DescribeDcdnDomainWebsocketHttpCodeDataRequest::setInterval(const std::string &interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), interval);
}

std::string DescribeDcdnDomainWebsocketHttpCodeDataRequest::getLocationNameEn() const {
  return locationNameEn_;
}

void DescribeDcdnDomainWebsocketHttpCodeDataRequest::setLocationNameEn(const std::string &locationNameEn) {
  locationNameEn_ = locationNameEn;
  setParameter(std::string("LocationNameEn"), locationNameEn);
}

std::string DescribeDcdnDomainWebsocketHttpCodeDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeDcdnDomainWebsocketHttpCodeDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeDcdnDomainWebsocketHttpCodeDataRequest::getIspNameEn() const {
  return ispNameEn_;
}

void DescribeDcdnDomainWebsocketHttpCodeDataRequest::setIspNameEn(const std::string &ispNameEn) {
  ispNameEn_ = ispNameEn;
  setParameter(std::string("IspNameEn"), ispNameEn);
}

