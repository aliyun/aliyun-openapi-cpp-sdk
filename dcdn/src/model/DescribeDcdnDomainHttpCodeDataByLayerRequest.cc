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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainHttpCodeDataByLayerRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnDomainHttpCodeDataByLayerRequest;

DescribeDcdnDomainHttpCodeDataByLayerRequest::DescribeDcdnDomainHttpCodeDataByLayerRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnDomainHttpCodeDataByLayer") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDcdnDomainHttpCodeDataByLayerRequest::~DescribeDcdnDomainHttpCodeDataByLayerRequest() {}

std::string DescribeDcdnDomainHttpCodeDataByLayerRequest::getDomainName() const {
  return domainName_;
}

void DescribeDcdnDomainHttpCodeDataByLayerRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeDcdnDomainHttpCodeDataByLayerRequest::getEndTime() const {
  return endTime_;
}

void DescribeDcdnDomainHttpCodeDataByLayerRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeDcdnDomainHttpCodeDataByLayerRequest::getInterval() const {
  return interval_;
}

void DescribeDcdnDomainHttpCodeDataByLayerRequest::setInterval(const std::string &interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), interval);
}

std::string DescribeDcdnDomainHttpCodeDataByLayerRequest::getLocationNameEn() const {
  return locationNameEn_;
}

void DescribeDcdnDomainHttpCodeDataByLayerRequest::setLocationNameEn(const std::string &locationNameEn) {
  locationNameEn_ = locationNameEn;
  setParameter(std::string("LocationNameEn"), locationNameEn);
}

std::string DescribeDcdnDomainHttpCodeDataByLayerRequest::getStartTime() const {
  return startTime_;
}

void DescribeDcdnDomainHttpCodeDataByLayerRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeDcdnDomainHttpCodeDataByLayerRequest::getIspNameEn() const {
  return ispNameEn_;
}

void DescribeDcdnDomainHttpCodeDataByLayerRequest::setIspNameEn(const std::string &ispNameEn) {
  ispNameEn_ = ispNameEn;
  setParameter(std::string("IspNameEn"), ispNameEn);
}

std::string DescribeDcdnDomainHttpCodeDataByLayerRequest::getLayer() const {
  return layer_;
}

void DescribeDcdnDomainHttpCodeDataByLayerRequest::setLayer(const std::string &layer) {
  layer_ = layer;
  setParameter(std::string("Layer"), layer);
}

