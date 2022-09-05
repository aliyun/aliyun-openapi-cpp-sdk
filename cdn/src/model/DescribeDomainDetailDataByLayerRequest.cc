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

#include <alibabacloud/cdn/model/DescribeDomainDetailDataByLayerRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainDetailDataByLayerRequest;

DescribeDomainDetailDataByLayerRequest::DescribeDomainDetailDataByLayerRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "DescribeDomainDetailDataByLayer") {
  setMethod(HttpRequest::Method::Get);
}

DescribeDomainDetailDataByLayerRequest::~DescribeDomainDetailDataByLayerRequest() {}

std::string DescribeDomainDetailDataByLayerRequest::getLocationNameEn() const {
  return locationNameEn_;
}

void DescribeDomainDetailDataByLayerRequest::setLocationNameEn(const std::string &locationNameEn) {
  locationNameEn_ = locationNameEn;
  setParameter(std::string("LocationNameEn"), locationNameEn);
}

std::string DescribeDomainDetailDataByLayerRequest::getStartTime() const {
  return startTime_;
}

void DescribeDomainDetailDataByLayerRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeDomainDetailDataByLayerRequest::getIspNameEn() const {
  return ispNameEn_;
}

void DescribeDomainDetailDataByLayerRequest::setIspNameEn(const std::string &ispNameEn) {
  ispNameEn_ = ispNameEn;
  setParameter(std::string("IspNameEn"), ispNameEn);
}

std::string DescribeDomainDetailDataByLayerRequest::getLayer() const {
  return layer_;
}

void DescribeDomainDetailDataByLayerRequest::setLayer(const std::string &layer) {
  layer_ = layer;
  setParameter(std::string("Layer"), layer);
}

std::string DescribeDomainDetailDataByLayerRequest::getDomainName() const {
  return domainName_;
}

void DescribeDomainDetailDataByLayerRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeDomainDetailDataByLayerRequest::getEndTime() const {
  return endTime_;
}

void DescribeDomainDetailDataByLayerRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeDomainDetailDataByLayerRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDomainDetailDataByLayerRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeDomainDetailDataByLayerRequest::getField() const {
  return field_;
}

void DescribeDomainDetailDataByLayerRequest::setField(const std::string &field) {
  field_ = field;
  setParameter(std::string("Field"), field);
}

