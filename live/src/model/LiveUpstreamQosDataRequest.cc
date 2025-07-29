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

#include <alibabacloud/live/model/LiveUpstreamQosDataRequest.h>

using AlibabaCloud::Live::Model::LiveUpstreamQosDataRequest;

LiveUpstreamQosDataRequest::LiveUpstreamQosDataRequest()
    : RpcServiceRequest("live", "2016-11-01", "LiveUpstreamQosData") {
  setMethod(HttpRequest::Method::Post);
}

LiveUpstreamQosDataRequest::~LiveUpstreamQosDataRequest() {}

std::string LiveUpstreamQosDataRequest::getCdnDomains() const {
  return cdnDomains_;
}

void LiveUpstreamQosDataRequest::setCdnDomains(const std::string &cdnDomains) {
  cdnDomains_ = cdnDomains;
  setParameter(std::string("CdnDomains"), cdnDomains);
}

std::string LiveUpstreamQosDataRequest::getStartTime() const {
  return startTime_;
}

void LiveUpstreamQosDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string LiveUpstreamQosDataRequest::getCdnProvinces() const {
  return cdnProvinces_;
}

void LiveUpstreamQosDataRequest::setCdnProvinces(const std::string &cdnProvinces) {
  cdnProvinces_ = cdnProvinces;
  setParameter(std::string("CdnProvinces"), cdnProvinces);
}

std::string LiveUpstreamQosDataRequest::getRegionId() const {
  return regionId_;
}

void LiveUpstreamQosDataRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string LiveUpstreamQosDataRequest::getKwaiSidcs() const {
  return kwaiSidcs_;
}

void LiveUpstreamQosDataRequest::setKwaiSidcs(const std::string &kwaiSidcs) {
  kwaiSidcs_ = kwaiSidcs;
  setParameter(std::string("KwaiSidcs"), kwaiSidcs);
}

std::vector<LiveUpstreamQosDataRequest::int> LiveUpstreamQosDataRequest::getKwaiTsc() const {
  return kwaiTsc_;
}

void LiveUpstreamQosDataRequest::setKwaiTsc(const std::vector<LiveUpstreamQosDataRequest::int> &kwaiTsc) {
  kwaiTsc_ = kwaiTsc;
  for(int dep1 = 0; dep1 != kwaiTsc.size(); dep1++) {
    setParameter(std::string("KwaiTsc") + "." + std::to_string(dep1 + 1), std::to_string(kwaiTsc[dep1]));
  }
}

std::string LiveUpstreamQosDataRequest::getUpstreamDomains() const {
  return upstreamDomains_;
}

void LiveUpstreamQosDataRequest::setUpstreamDomains(const std::string &upstreamDomains) {
  upstreamDomains_ = upstreamDomains;
  setParameter(std::string("UpstreamDomains"), upstreamDomains);
}

std::string LiveUpstreamQosDataRequest::getEndTime() const {
  return endTime_;
}

void LiveUpstreamQosDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long LiveUpstreamQosDataRequest::getOwnerId() const {
  return ownerId_;
}

void LiveUpstreamQosDataRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string LiveUpstreamQosDataRequest::getCdnIsps() const {
  return cdnIsps_;
}

void LiveUpstreamQosDataRequest::setCdnIsps(const std::string &cdnIsps) {
  cdnIsps_ = cdnIsps;
  setParameter(std::string("CdnIsps"), cdnIsps);
}

std::string LiveUpstreamQosDataRequest::getRegion() const {
  return region_;
}

void LiveUpstreamQosDataRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

