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

#include <alibabacloud/cloud-siem/model/DescribeCloudSiemAssetsCounterRequest.h>

using AlibabaCloud::Cloud_siem::Model::DescribeCloudSiemAssetsCounterRequest;

DescribeCloudSiemAssetsCounterRequest::DescribeCloudSiemAssetsCounterRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "DescribeCloudSiemAssetsCounter") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCloudSiemAssetsCounterRequest::~DescribeCloudSiemAssetsCounterRequest() {}

long DescribeCloudSiemAssetsCounterRequest::getRoleFor() const {
  return roleFor_;
}

void DescribeCloudSiemAssetsCounterRequest::setRoleFor(long roleFor) {
  roleFor_ = roleFor;
  setBodyParameter(std::string("RoleFor"), std::to_string(roleFor));
}

std::string DescribeCloudSiemAssetsCounterRequest::getRegionId() const {
  return regionId_;
}

void DescribeCloudSiemAssetsCounterRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

int DescribeCloudSiemAssetsCounterRequest::getRoleType() const {
  return roleType_;
}

void DescribeCloudSiemAssetsCounterRequest::setRoleType(int roleType) {
  roleType_ = roleType;
  setBodyParameter(std::string("RoleType"), std::to_string(roleType));
}

std::string DescribeCloudSiemAssetsCounterRequest::getIncidentUuid() const {
  return incidentUuid_;
}

void DescribeCloudSiemAssetsCounterRequest::setIncidentUuid(const std::string &incidentUuid) {
  incidentUuid_ = incidentUuid;
  setBodyParameter(std::string("IncidentUuid"), incidentUuid);
}

