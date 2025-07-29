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

#include <alibabacloud/live/model/DescribeLiveDomainRealTimeTrafficDataRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveDomainRealTimeTrafficDataRequest;

DescribeLiveDomainRealTimeTrafficDataRequest::DescribeLiveDomainRealTimeTrafficDataRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeLiveDomainRealTimeTrafficData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLiveDomainRealTimeTrafficDataRequest::~DescribeLiveDomainRealTimeTrafficDataRequest() {}

std::string DescribeLiveDomainRealTimeTrafficDataRequest::getLocationNameEn() const {
  return locationNameEn_;
}

void DescribeLiveDomainRealTimeTrafficDataRequest::setLocationNameEn(const std::string &locationNameEn) {
  locationNameEn_ = locationNameEn;
  setParameter(std::string("LocationNameEn"), locationNameEn);
}

std::string DescribeLiveDomainRealTimeTrafficDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeLiveDomainRealTimeTrafficDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeLiveDomainRealTimeTrafficDataRequest::getIspNameEn() const {
  return ispNameEn_;
}

void DescribeLiveDomainRealTimeTrafficDataRequest::setIspNameEn(const std::string &ispNameEn) {
  ispNameEn_ = ispNameEn;
  setParameter(std::string("IspNameEn"), ispNameEn);
}

std::string DescribeLiveDomainRealTimeTrafficDataRequest::getRegionId() const {
  return regionId_;
}

void DescribeLiveDomainRealTimeTrafficDataRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeLiveDomainRealTimeTrafficDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeLiveDomainRealTimeTrafficDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeLiveDomainRealTimeTrafficDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeLiveDomainRealTimeTrafficDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeLiveDomainRealTimeTrafficDataRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLiveDomainRealTimeTrafficDataRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

