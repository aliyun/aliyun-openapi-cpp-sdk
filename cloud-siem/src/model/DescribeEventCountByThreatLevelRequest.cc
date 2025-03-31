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

#include <alibabacloud/cloud-siem/model/DescribeEventCountByThreatLevelRequest.h>

using AlibabaCloud::Cloud_siem::Model::DescribeEventCountByThreatLevelRequest;

DescribeEventCountByThreatLevelRequest::DescribeEventCountByThreatLevelRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "DescribeEventCountByThreatLevel") {
  setMethod(HttpRequest::Method::Post);
}

DescribeEventCountByThreatLevelRequest::~DescribeEventCountByThreatLevelRequest() {}

long DescribeEventCountByThreatLevelRequest::getRoleFor() const {
  return roleFor_;
}

void DescribeEventCountByThreatLevelRequest::setRoleFor(long roleFor) {
  roleFor_ = roleFor;
  setBodyParameter(std::string("RoleFor"), std::to_string(roleFor));
}

long DescribeEventCountByThreatLevelRequest::getStartTime() const {
  return startTime_;
}

void DescribeEventCountByThreatLevelRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setBodyParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string DescribeEventCountByThreatLevelRequest::getRegionId() const {
  return regionId_;
}

void DescribeEventCountByThreatLevelRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

int DescribeEventCountByThreatLevelRequest::getRoleType() const {
  return roleType_;
}

void DescribeEventCountByThreatLevelRequest::setRoleType(int roleType) {
  roleType_ = roleType;
  setBodyParameter(std::string("RoleType"), std::to_string(roleType));
}

long DescribeEventCountByThreatLevelRequest::getEndTime() const {
  return endTime_;
}

void DescribeEventCountByThreatLevelRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setBodyParameter(std::string("EndTime"), std::to_string(endTime));
}

