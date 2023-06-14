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

#include <alibabacloud/ga/model/DescribeBandwidthPackageRequest.h>

using AlibabaCloud::Ga::Model::DescribeBandwidthPackageRequest;

DescribeBandwidthPackageRequest::DescribeBandwidthPackageRequest()
    : RpcServiceRequest("ga", "2019-11-20", "DescribeBandwidthPackage") {
  setMethod(HttpRequest::Method::Post);
}

DescribeBandwidthPackageRequest::~DescribeBandwidthPackageRequest() {}

std::string DescribeBandwidthPackageRequest::getBandwidthPackageId() const {
  return bandwidthPackageId_;
}

void DescribeBandwidthPackageRequest::setBandwidthPackageId(const std::string &bandwidthPackageId) {
  bandwidthPackageId_ = bandwidthPackageId;
  setParameter(std::string("BandwidthPackageId"), bandwidthPackageId);
}

std::string DescribeBandwidthPackageRequest::getRegionId() const {
  return regionId_;
}

void DescribeBandwidthPackageRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

