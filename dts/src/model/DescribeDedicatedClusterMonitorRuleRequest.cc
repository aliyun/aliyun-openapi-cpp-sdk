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

#include <alibabacloud/dts/model/DescribeDedicatedClusterMonitorRuleRequest.h>

using AlibabaCloud::Dts::Model::DescribeDedicatedClusterMonitorRuleRequest;

DescribeDedicatedClusterMonitorRuleRequest::DescribeDedicatedClusterMonitorRuleRequest()
    : RpcServiceRequest("dts", "2020-01-01", "DescribeDedicatedClusterMonitorRule") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDedicatedClusterMonitorRuleRequest::~DescribeDedicatedClusterMonitorRuleRequest() {}

std::string DescribeDedicatedClusterMonitorRuleRequest::getDedicatedClusterId() const {
  return dedicatedClusterId_;
}

void DescribeDedicatedClusterMonitorRuleRequest::setDedicatedClusterId(const std::string &dedicatedClusterId) {
  dedicatedClusterId_ = dedicatedClusterId;
  setParameter(std::string("DedicatedClusterId"), dedicatedClusterId);
}

std::string DescribeDedicatedClusterMonitorRuleRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDedicatedClusterMonitorRuleRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string DescribeDedicatedClusterMonitorRuleRequest::getRegionId() const {
  return regionId_;
}

void DescribeDedicatedClusterMonitorRuleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

