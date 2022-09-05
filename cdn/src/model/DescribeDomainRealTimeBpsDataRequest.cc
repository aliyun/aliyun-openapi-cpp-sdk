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

#include <alibabacloud/cdn/model/DescribeDomainRealTimeBpsDataRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainRealTimeBpsDataRequest;

DescribeDomainRealTimeBpsDataRequest::DescribeDomainRealTimeBpsDataRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "DescribeDomainRealTimeBpsData") {
  setMethod(HttpRequest::Method::Get);
}

DescribeDomainRealTimeBpsDataRequest::~DescribeDomainRealTimeBpsDataRequest() {}

std::string DescribeDomainRealTimeBpsDataRequest::getLocationNameEn() const {
  return locationNameEn_;
}

void DescribeDomainRealTimeBpsDataRequest::setLocationNameEn(const std::string &locationNameEn) {
  locationNameEn_ = locationNameEn;
  setParameter(std::string("LocationNameEn"), locationNameEn);
}

std::string DescribeDomainRealTimeBpsDataRequest::getIspNameEn() const {
  return ispNameEn_;
}

void DescribeDomainRealTimeBpsDataRequest::setIspNameEn(const std::string &ispNameEn) {
  ispNameEn_ = ispNameEn;
  setParameter(std::string("IspNameEn"), ispNameEn);
}

std::string DescribeDomainRealTimeBpsDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeDomainRealTimeBpsDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeDomainRealTimeBpsDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeDomainRealTimeBpsDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeDomainRealTimeBpsDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeDomainRealTimeBpsDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeDomainRealTimeBpsDataRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDomainRealTimeBpsDataRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

