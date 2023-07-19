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

#include <alibabacloud/dts/model/WhiteIpListRequest.h>

using AlibabaCloud::Dts::Model::WhiteIpListRequest;

WhiteIpListRequest::WhiteIpListRequest()
    : RpcServiceRequest("dts", "2020-01-01", "WhiteIpList") {
  setMethod(HttpRequest::Method::Post);
}

WhiteIpListRequest::~WhiteIpListRequest() {}

std::string WhiteIpListRequest::getDestinationRegion() const {
  return destinationRegion_;
}

void WhiteIpListRequest::setDestinationRegion(const std::string &destinationRegion) {
  destinationRegion_ = destinationRegion;
  setParameter(std::string("DestinationRegion"), destinationRegion);
}

std::string WhiteIpListRequest::getType() const {
  return type_;
}

void WhiteIpListRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string WhiteIpListRequest::getRegionId() const {
  return regionId_;
}

void WhiteIpListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string WhiteIpListRequest::getRegion() const {
  return region_;
}

void WhiteIpListRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

