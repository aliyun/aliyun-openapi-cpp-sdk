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

#include <alibabacloud/cloud-siem/model/DescribeDisposeStrategyPlaybookRequest.h>

using AlibabaCloud::Cloud_siem::Model::DescribeDisposeStrategyPlaybookRequest;

DescribeDisposeStrategyPlaybookRequest::DescribeDisposeStrategyPlaybookRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "DescribeDisposeStrategyPlaybook") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDisposeStrategyPlaybookRequest::~DescribeDisposeStrategyPlaybookRequest() {}

long DescribeDisposeStrategyPlaybookRequest::getRoleFor() const {
  return roleFor_;
}

void DescribeDisposeStrategyPlaybookRequest::setRoleFor(long roleFor) {
  roleFor_ = roleFor;
  setBodyParameter(std::string("RoleFor"), std::to_string(roleFor));
}

long DescribeDisposeStrategyPlaybookRequest::getStartTime() const {
  return startTime_;
}

void DescribeDisposeStrategyPlaybookRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setBodyParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string DescribeDisposeStrategyPlaybookRequest::getRegionId() const {
  return regionId_;
}

void DescribeDisposeStrategyPlaybookRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

int DescribeDisposeStrategyPlaybookRequest::getRoleType() const {
  return roleType_;
}

void DescribeDisposeStrategyPlaybookRequest::setRoleType(int roleType) {
  roleType_ = roleType;
  setBodyParameter(std::string("RoleType"), std::to_string(roleType));
}

long DescribeDisposeStrategyPlaybookRequest::getEndTime() const {
  return endTime_;
}

void DescribeDisposeStrategyPlaybookRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setBodyParameter(std::string("EndTime"), std::to_string(endTime));
}

