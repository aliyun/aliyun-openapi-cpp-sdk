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

#include <alibabacloud/cdn/model/DescribeDomainBpsDataByTimeStampRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainBpsDataByTimeStampRequest;

DescribeDomainBpsDataByTimeStampRequest::DescribeDomainBpsDataByTimeStampRequest()
    : RpcServiceRequest("cdn", "2014-11-11", "DescribeDomainBpsDataByTimeStamp") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDomainBpsDataByTimeStampRequest::~DescribeDomainBpsDataByTimeStampRequest() {}

std::string DescribeDomainBpsDataByTimeStampRequest::getLocationNames() const {
  return locationNames_;
}

void DescribeDomainBpsDataByTimeStampRequest::setLocationNames(const std::string &locationNames) {
  locationNames_ = locationNames;
  setParameter(std::string("LocationNames"), locationNames);
}

std::string DescribeDomainBpsDataByTimeStampRequest::getIspNames() const {
  return ispNames_;
}

void DescribeDomainBpsDataByTimeStampRequest::setIspNames(const std::string &ispNames) {
  ispNames_ = ispNames;
  setParameter(std::string("IspNames"), ispNames);
}

std::string DescribeDomainBpsDataByTimeStampRequest::getDomainName() const {
  return domainName_;
}

void DescribeDomainBpsDataByTimeStampRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long DescribeDomainBpsDataByTimeStampRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDomainBpsDataByTimeStampRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeDomainBpsDataByTimeStampRequest::getTimePoint() const {
  return timePoint_;
}

void DescribeDomainBpsDataByTimeStampRequest::setTimePoint(const std::string &timePoint) {
  timePoint_ = timePoint;
  setParameter(std::string("TimePoint"), timePoint);
}

