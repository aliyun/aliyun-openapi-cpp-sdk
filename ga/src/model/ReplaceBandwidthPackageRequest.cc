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

#include <alibabacloud/ga/model/ReplaceBandwidthPackageRequest.h>

using AlibabaCloud::Ga::Model::ReplaceBandwidthPackageRequest;

ReplaceBandwidthPackageRequest::ReplaceBandwidthPackageRequest()
    : RpcServiceRequest("ga", "2019-11-20", "ReplaceBandwidthPackage") {
  setMethod(HttpRequest::Method::Post);
}

ReplaceBandwidthPackageRequest::~ReplaceBandwidthPackageRequest() {}

std::string ReplaceBandwidthPackageRequest::getBandwidthPackageId() const {
  return bandwidthPackageId_;
}

void ReplaceBandwidthPackageRequest::setBandwidthPackageId(const std::string &bandwidthPackageId) {
  bandwidthPackageId_ = bandwidthPackageId;
  setParameter(std::string("BandwidthPackageId"), bandwidthPackageId);
}

std::string ReplaceBandwidthPackageRequest::getRegionId() const {
  return regionId_;
}

void ReplaceBandwidthPackageRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ReplaceBandwidthPackageRequest::getTargetBandwidthPackageId() const {
  return targetBandwidthPackageId_;
}

void ReplaceBandwidthPackageRequest::setTargetBandwidthPackageId(const std::string &targetBandwidthPackageId) {
  targetBandwidthPackageId_ = targetBandwidthPackageId;
  setParameter(std::string("TargetBandwidthPackageId"), targetBandwidthPackageId);
}

std::string ReplaceBandwidthPackageRequest::getAcceleratorId() const {
  return acceleratorId_;
}

void ReplaceBandwidthPackageRequest::setAcceleratorId(const std::string &acceleratorId) {
  acceleratorId_ = acceleratorId;
  setParameter(std::string("AcceleratorId"), acceleratorId);
}

