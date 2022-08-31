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

#include <alibabacloud/scdn/model/DescribeScdnDomainTrafficDataRequest.h>

using AlibabaCloud::Scdn::Model::DescribeScdnDomainTrafficDataRequest;

DescribeScdnDomainTrafficDataRequest::DescribeScdnDomainTrafficDataRequest()
    : RpcServiceRequest("scdn", "2017-11-15", "DescribeScdnDomainTrafficData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeScdnDomainTrafficDataRequest::~DescribeScdnDomainTrafficDataRequest() {}

std::string DescribeScdnDomainTrafficDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeScdnDomainTrafficDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeScdnDomainTrafficDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeScdnDomainTrafficDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeScdnDomainTrafficDataRequest::getInterval() const {
  return interval_;
}

void DescribeScdnDomainTrafficDataRequest::setInterval(const std::string &interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), interval);
}

std::string DescribeScdnDomainTrafficDataRequest::getLocationNameEn() const {
  return locationNameEn_;
}

void DescribeScdnDomainTrafficDataRequest::setLocationNameEn(const std::string &locationNameEn) {
  locationNameEn_ = locationNameEn;
  setParameter(std::string("LocationNameEn"), locationNameEn);
}

std::string DescribeScdnDomainTrafficDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeScdnDomainTrafficDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeScdnDomainTrafficDataRequest::getIspNameEn() const {
  return ispNameEn_;
}

void DescribeScdnDomainTrafficDataRequest::setIspNameEn(const std::string &ispNameEn) {
  ispNameEn_ = ispNameEn;
  setParameter(std::string("IspNameEn"), ispNameEn);
}

