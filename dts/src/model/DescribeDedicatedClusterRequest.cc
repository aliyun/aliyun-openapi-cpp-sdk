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

#include <alibabacloud/dts/model/DescribeDedicatedClusterRequest.h>

using AlibabaCloud::Dts::Model::DescribeDedicatedClusterRequest;

DescribeDedicatedClusterRequest::DescribeDedicatedClusterRequest()
    : RpcServiceRequest("dts", "2020-01-01", "DescribeDedicatedCluster") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDedicatedClusterRequest::~DescribeDedicatedClusterRequest() {}

std::string DescribeDedicatedClusterRequest::getDedicatedClusterId() const {
  return dedicatedClusterId_;
}

void DescribeDedicatedClusterRequest::setDedicatedClusterId(const std::string &dedicatedClusterId) {
  dedicatedClusterId_ = dedicatedClusterId;
  setParameter(std::string("DedicatedClusterId"), dedicatedClusterId);
}

std::string DescribeDedicatedClusterRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDedicatedClusterRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string DescribeDedicatedClusterRequest::getRegionId() const {
  return regionId_;
}

void DescribeDedicatedClusterRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

