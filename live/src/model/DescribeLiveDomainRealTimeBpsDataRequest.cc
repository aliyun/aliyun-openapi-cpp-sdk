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

#include <alibabacloud/live/model/DescribeLiveDomainRealTimeBpsDataRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveDomainRealTimeBpsDataRequest;

DescribeLiveDomainRealTimeBpsDataRequest::DescribeLiveDomainRealTimeBpsDataRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeLiveDomainRealTimeBpsData") {
  setMethod(HttpRequest::Method::Get);
}

DescribeLiveDomainRealTimeBpsDataRequest::~DescribeLiveDomainRealTimeBpsDataRequest() {}

std::string DescribeLiveDomainRealTimeBpsDataRequest::getLocationNameEn() const {
  return locationNameEn_;
}

void DescribeLiveDomainRealTimeBpsDataRequest::setLocationNameEn(const std::string &locationNameEn) {
  locationNameEn_ = locationNameEn;
  setParameter(std::string("LocationNameEn"), locationNameEn);
}

std::string DescribeLiveDomainRealTimeBpsDataRequest::getIspNameEn() const {
  return ispNameEn_;
}

void DescribeLiveDomainRealTimeBpsDataRequest::setIspNameEn(const std::string &ispNameEn) {
  ispNameEn_ = ispNameEn;
  setParameter(std::string("IspNameEn"), ispNameEn);
}

std::string DescribeLiveDomainRealTimeBpsDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeLiveDomainRealTimeBpsDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeLiveDomainRealTimeBpsDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeLiveDomainRealTimeBpsDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeLiveDomainRealTimeBpsDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeLiveDomainRealTimeBpsDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeLiveDomainRealTimeBpsDataRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLiveDomainRealTimeBpsDataRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

