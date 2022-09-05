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

#include <alibabacloud/cdn/model/DescribeDomainBpsDataByLayerRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainBpsDataByLayerRequest;

DescribeDomainBpsDataByLayerRequest::DescribeDomainBpsDataByLayerRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "DescribeDomainBpsDataByLayer") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDomainBpsDataByLayerRequest::~DescribeDomainBpsDataByLayerRequest() {}

std::string DescribeDomainBpsDataByLayerRequest::getLocationNameEn() const {
  return locationNameEn_;
}

void DescribeDomainBpsDataByLayerRequest::setLocationNameEn(const std::string &locationNameEn) {
  locationNameEn_ = locationNameEn;
  setParameter(std::string("LocationNameEn"), locationNameEn);
}

std::string DescribeDomainBpsDataByLayerRequest::getStartTime() const {
  return startTime_;
}

void DescribeDomainBpsDataByLayerRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeDomainBpsDataByLayerRequest::getIspNameEn() const {
  return ispNameEn_;
}

void DescribeDomainBpsDataByLayerRequest::setIspNameEn(const std::string &ispNameEn) {
  ispNameEn_ = ispNameEn;
  setParameter(std::string("IspNameEn"), ispNameEn);
}

std::string DescribeDomainBpsDataByLayerRequest::getLayer() const {
  return layer_;
}

void DescribeDomainBpsDataByLayerRequest::setLayer(const std::string &layer) {
  layer_ = layer;
  setParameter(std::string("Layer"), layer);
}

std::string DescribeDomainBpsDataByLayerRequest::getDomainName() const {
  return domainName_;
}

void DescribeDomainBpsDataByLayerRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeDomainBpsDataByLayerRequest::getEndTime() const {
  return endTime_;
}

void DescribeDomainBpsDataByLayerRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeDomainBpsDataByLayerRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDomainBpsDataByLayerRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeDomainBpsDataByLayerRequest::getInterval() const {
  return interval_;
}

void DescribeDomainBpsDataByLayerRequest::setInterval(const std::string &interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), interval);
}

