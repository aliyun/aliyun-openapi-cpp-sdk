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

#include <alibabacloud/cloud-siem/model/DescribeAlertsCountRequest.h>

using AlibabaCloud::Cloud_siem::Model::DescribeAlertsCountRequest;

DescribeAlertsCountRequest::DescribeAlertsCountRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "DescribeAlertsCount") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAlertsCountRequest::~DescribeAlertsCountRequest() {}

long DescribeAlertsCountRequest::getRoleFor() const {
  return roleFor_;
}

void DescribeAlertsCountRequest::setRoleFor(long roleFor) {
  roleFor_ = roleFor;
  setBodyParameter(std::string("RoleFor"), std::to_string(roleFor));
}

long DescribeAlertsCountRequest::getStartTime() const {
  return startTime_;
}

void DescribeAlertsCountRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setBodyParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string DescribeAlertsCountRequest::getRegionId() const {
  return regionId_;
}

void DescribeAlertsCountRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

int DescribeAlertsCountRequest::getRoleType() const {
  return roleType_;
}

void DescribeAlertsCountRequest::setRoleType(int roleType) {
  roleType_ = roleType;
  setBodyParameter(std::string("RoleType"), std::to_string(roleType));
}

std::string DescribeAlertsCountRequest::getQueryType() const {
  return queryType_;
}

void DescribeAlertsCountRequest::setQueryType(const std::string &queryType) {
  queryType_ = queryType;
  setBodyParameter(std::string("QueryType"), queryType);
}

long DescribeAlertsCountRequest::getEndTime() const {
  return endTime_;
}

void DescribeAlertsCountRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setBodyParameter(std::string("EndTime"), std::to_string(endTime));
}

