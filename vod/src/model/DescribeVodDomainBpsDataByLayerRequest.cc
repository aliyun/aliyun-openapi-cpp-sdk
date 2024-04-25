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

#include <alibabacloud/vod/model/DescribeVodDomainBpsDataByLayerRequest.h>

using AlibabaCloud::Vod::Model::DescribeVodDomainBpsDataByLayerRequest;

DescribeVodDomainBpsDataByLayerRequest::DescribeVodDomainBpsDataByLayerRequest()
    : RpcServiceRequest("vod", "2017-03-21", "DescribeVodDomainBpsDataByLayer") {
  setMethod(HttpRequest::Method::Post);
}

DescribeVodDomainBpsDataByLayerRequest::~DescribeVodDomainBpsDataByLayerRequest() {}

std::string DescribeVodDomainBpsDataByLayerRequest::getLocationNameEn() const {
  return locationNameEn_;
}

void DescribeVodDomainBpsDataByLayerRequest::setLocationNameEn(const std::string &locationNameEn) {
  locationNameEn_ = locationNameEn;
  setParameter(std::string("LocationNameEn"), locationNameEn);
}

std::string DescribeVodDomainBpsDataByLayerRequest::getStartTime() const {
  return startTime_;
}

void DescribeVodDomainBpsDataByLayerRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeVodDomainBpsDataByLayerRequest::getIspNameEn() const {
  return ispNameEn_;
}

void DescribeVodDomainBpsDataByLayerRequest::setIspNameEn(const std::string &ispNameEn) {
  ispNameEn_ = ispNameEn;
  setParameter(std::string("IspNameEn"), ispNameEn);
}

std::string DescribeVodDomainBpsDataByLayerRequest::getLayer() const {
  return layer_;
}

void DescribeVodDomainBpsDataByLayerRequest::setLayer(const std::string &layer) {
  layer_ = layer;
  setParameter(std::string("Layer"), layer);
}

std::string DescribeVodDomainBpsDataByLayerRequest::getDomainName() const {
  return domainName_;
}

void DescribeVodDomainBpsDataByLayerRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeVodDomainBpsDataByLayerRequest::getEndTime() const {
  return endTime_;
}

void DescribeVodDomainBpsDataByLayerRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeVodDomainBpsDataByLayerRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeVodDomainBpsDataByLayerRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeVodDomainBpsDataByLayerRequest::getInterval() const {
  return interval_;
}

void DescribeVodDomainBpsDataByLayerRequest::setInterval(const std::string &interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), interval);
}

