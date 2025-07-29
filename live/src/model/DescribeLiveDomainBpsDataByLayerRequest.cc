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

#include <alibabacloud/live/model/DescribeLiveDomainBpsDataByLayerRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveDomainBpsDataByLayerRequest;

DescribeLiveDomainBpsDataByLayerRequest::DescribeLiveDomainBpsDataByLayerRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeLiveDomainBpsDataByLayer") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLiveDomainBpsDataByLayerRequest::~DescribeLiveDomainBpsDataByLayerRequest() {}

std::string DescribeLiveDomainBpsDataByLayerRequest::getLocationNameEn() const {
  return locationNameEn_;
}

void DescribeLiveDomainBpsDataByLayerRequest::setLocationNameEn(const std::string &locationNameEn) {
  locationNameEn_ = locationNameEn;
  setParameter(std::string("LocationNameEn"), locationNameEn);
}

std::string DescribeLiveDomainBpsDataByLayerRequest::getStartTime() const {
  return startTime_;
}

void DescribeLiveDomainBpsDataByLayerRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeLiveDomainBpsDataByLayerRequest::getIspNameEn() const {
  return ispNameEn_;
}

void DescribeLiveDomainBpsDataByLayerRequest::setIspNameEn(const std::string &ispNameEn) {
  ispNameEn_ = ispNameEn;
  setParameter(std::string("IspNameEn"), ispNameEn);
}

std::string DescribeLiveDomainBpsDataByLayerRequest::getLayer() const {
  return layer_;
}

void DescribeLiveDomainBpsDataByLayerRequest::setLayer(const std::string &layer) {
  layer_ = layer;
  setParameter(std::string("Layer"), layer);
}

std::string DescribeLiveDomainBpsDataByLayerRequest::getRegionId() const {
  return regionId_;
}

void DescribeLiveDomainBpsDataByLayerRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeLiveDomainBpsDataByLayerRequest::getDomainName() const {
  return domainName_;
}

void DescribeLiveDomainBpsDataByLayerRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeLiveDomainBpsDataByLayerRequest::getEndTime() const {
  return endTime_;
}

void DescribeLiveDomainBpsDataByLayerRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeLiveDomainBpsDataByLayerRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLiveDomainBpsDataByLayerRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeLiveDomainBpsDataByLayerRequest::getInterval() const {
  return interval_;
}

void DescribeLiveDomainBpsDataByLayerRequest::setInterval(const std::string &interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), interval);
}

