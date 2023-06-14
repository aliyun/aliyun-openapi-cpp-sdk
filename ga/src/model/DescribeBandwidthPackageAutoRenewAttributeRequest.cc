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

#include <alibabacloud/ga/model/DescribeBandwidthPackageAutoRenewAttributeRequest.h>

using AlibabaCloud::Ga::Model::DescribeBandwidthPackageAutoRenewAttributeRequest;

DescribeBandwidthPackageAutoRenewAttributeRequest::DescribeBandwidthPackageAutoRenewAttributeRequest()
    : RpcServiceRequest("ga", "2019-11-20", "DescribeBandwidthPackageAutoRenewAttribute") {
  setMethod(HttpRequest::Method::Post);
}

DescribeBandwidthPackageAutoRenewAttributeRequest::~DescribeBandwidthPackageAutoRenewAttributeRequest() {}

std::string DescribeBandwidthPackageAutoRenewAttributeRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeBandwidthPackageAutoRenewAttributeRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeBandwidthPackageAutoRenewAttributeRequest::getRegionId() const {
  return regionId_;
}

void DescribeBandwidthPackageAutoRenewAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

