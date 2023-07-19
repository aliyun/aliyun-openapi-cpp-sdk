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

#include <alibabacloud/dts/model/DescribeJobMonitorRuleRequest.h>

using AlibabaCloud::Dts::Model::DescribeJobMonitorRuleRequest;

DescribeJobMonitorRuleRequest::DescribeJobMonitorRuleRequest()
    : RpcServiceRequest("dts", "2020-01-01", "DescribeJobMonitorRule") {
  setMethod(HttpRequest::Method::Post);
}

DescribeJobMonitorRuleRequest::~DescribeJobMonitorRuleRequest() {}

std::string DescribeJobMonitorRuleRequest::getRegionId() const {
  return regionId_;
}

void DescribeJobMonitorRuleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeJobMonitorRuleRequest::getDtsJobId() const {
  return dtsJobId_;
}

void DescribeJobMonitorRuleRequest::setDtsJobId(const std::string &dtsJobId) {
  dtsJobId_ = dtsJobId;
  setParameter(std::string("DtsJobId"), dtsJobId);
}

