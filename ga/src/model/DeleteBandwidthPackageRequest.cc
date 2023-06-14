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

#include <alibabacloud/ga/model/DeleteBandwidthPackageRequest.h>

using AlibabaCloud::Ga::Model::DeleteBandwidthPackageRequest;

DeleteBandwidthPackageRequest::DeleteBandwidthPackageRequest()
    : RpcServiceRequest("ga", "2019-11-20", "DeleteBandwidthPackage") {
  setMethod(HttpRequest::Method::Post);
}

DeleteBandwidthPackageRequest::~DeleteBandwidthPackageRequest() {}

std::string DeleteBandwidthPackageRequest::getBandwidthPackageId() const {
  return bandwidthPackageId_;
}

void DeleteBandwidthPackageRequest::setBandwidthPackageId(const std::string &bandwidthPackageId) {
  bandwidthPackageId_ = bandwidthPackageId;
  setParameter(std::string("BandwidthPackageId"), bandwidthPackageId);
}

std::string DeleteBandwidthPackageRequest::getClientToken() const {
  return clientToken_;
}

void DeleteBandwidthPackageRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteBandwidthPackageRequest::getRegionId() const {
  return regionId_;
}

void DeleteBandwidthPackageRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

