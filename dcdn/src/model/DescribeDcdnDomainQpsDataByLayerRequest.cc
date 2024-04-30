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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainQpsDataByLayerRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnDomainQpsDataByLayerRequest;

DescribeDcdnDomainQpsDataByLayerRequest::DescribeDcdnDomainQpsDataByLayerRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnDomainQpsDataByLayer") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDcdnDomainQpsDataByLayerRequest::~DescribeDcdnDomainQpsDataByLayerRequest() {}

std::string DescribeDcdnDomainQpsDataByLayerRequest::getDomainName() const {
  return domainName_;
}

void DescribeDcdnDomainQpsDataByLayerRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeDcdnDomainQpsDataByLayerRequest::getEndTime() const {
  return endTime_;
}

void DescribeDcdnDomainQpsDataByLayerRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeDcdnDomainQpsDataByLayerRequest::getInterval() const {
  return interval_;
}

void DescribeDcdnDomainQpsDataByLayerRequest::setInterval(const std::string &interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), interval);
}

std::string DescribeDcdnDomainQpsDataByLayerRequest::getLocationNameEn() const {
  return locationNameEn_;
}

void DescribeDcdnDomainQpsDataByLayerRequest::setLocationNameEn(const std::string &locationNameEn) {
  locationNameEn_ = locationNameEn;
  setParameter(std::string("LocationNameEn"), locationNameEn);
}

std::string DescribeDcdnDomainQpsDataByLayerRequest::getStartTime() const {
  return startTime_;
}

void DescribeDcdnDomainQpsDataByLayerRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeDcdnDomainQpsDataByLayerRequest::getIspNameEn() const {
  return ispNameEn_;
}

void DescribeDcdnDomainQpsDataByLayerRequest::setIspNameEn(const std::string &ispNameEn) {
  ispNameEn_ = ispNameEn;
  setParameter(std::string("IspNameEn"), ispNameEn);
}

std::string DescribeDcdnDomainQpsDataByLayerRequest::getLayer() const {
  return layer_;
}

void DescribeDcdnDomainQpsDataByLayerRequest::setLayer(const std::string &layer) {
  layer_ = layer;
  setParameter(std::string("Layer"), layer);
}

