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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainBpsDataByLayerRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnDomainBpsDataByLayerRequest;

DescribeDcdnDomainBpsDataByLayerRequest::DescribeDcdnDomainBpsDataByLayerRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnDomainBpsDataByLayer") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDcdnDomainBpsDataByLayerRequest::~DescribeDcdnDomainBpsDataByLayerRequest() {}

std::string DescribeDcdnDomainBpsDataByLayerRequest::getDomainName() const {
  return domainName_;
}

void DescribeDcdnDomainBpsDataByLayerRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeDcdnDomainBpsDataByLayerRequest::getEndTime() const {
  return endTime_;
}

void DescribeDcdnDomainBpsDataByLayerRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeDcdnDomainBpsDataByLayerRequest::getInterval() const {
  return interval_;
}

void DescribeDcdnDomainBpsDataByLayerRequest::setInterval(const std::string &interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), interval);
}

std::string DescribeDcdnDomainBpsDataByLayerRequest::getLocationNameEn() const {
  return locationNameEn_;
}

void DescribeDcdnDomainBpsDataByLayerRequest::setLocationNameEn(const std::string &locationNameEn) {
  locationNameEn_ = locationNameEn;
  setParameter(std::string("LocationNameEn"), locationNameEn);
}

std::string DescribeDcdnDomainBpsDataByLayerRequest::getStartTime() const {
  return startTime_;
}

void DescribeDcdnDomainBpsDataByLayerRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeDcdnDomainBpsDataByLayerRequest::getIspNameEn() const {
  return ispNameEn_;
}

void DescribeDcdnDomainBpsDataByLayerRequest::setIspNameEn(const std::string &ispNameEn) {
  ispNameEn_ = ispNameEn;
  setParameter(std::string("IspNameEn"), ispNameEn);
}

std::string DescribeDcdnDomainBpsDataByLayerRequest::getLayer() const {
  return layer_;
}

void DescribeDcdnDomainBpsDataByLayerRequest::setLayer(const std::string &layer) {
  layer_ = layer;
  setParameter(std::string("Layer"), layer);
}

