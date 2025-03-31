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

#include <alibabacloud/cloud-siem/model/DescribeEventDisposeRequest.h>

using AlibabaCloud::Cloud_siem::Model::DescribeEventDisposeRequest;

DescribeEventDisposeRequest::DescribeEventDisposeRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "DescribeEventDispose") {
  setMethod(HttpRequest::Method::Post);
}

DescribeEventDisposeRequest::~DescribeEventDisposeRequest() {}

long DescribeEventDisposeRequest::getRoleFor() const {
  return roleFor_;
}

void DescribeEventDisposeRequest::setRoleFor(long roleFor) {
  roleFor_ = roleFor;
  setBodyParameter(std::string("RoleFor"), std::to_string(roleFor));
}

std::string DescribeEventDisposeRequest::getRegionId() const {
  return regionId_;
}

void DescribeEventDisposeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

int DescribeEventDisposeRequest::getPageSize() const {
  return pageSize_;
}

void DescribeEventDisposeRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

int DescribeEventDisposeRequest::getRoleType() const {
  return roleType_;
}

void DescribeEventDisposeRequest::setRoleType(int roleType) {
  roleType_ = roleType;
  setBodyParameter(std::string("RoleType"), std::to_string(roleType));
}

int DescribeEventDisposeRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeEventDisposeRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setBodyParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeEventDisposeRequest::getIncidentUuid() const {
  return incidentUuid_;
}

void DescribeEventDisposeRequest::setIncidentUuid(const std::string &incidentUuid) {
  incidentUuid_ = incidentUuid;
  setBodyParameter(std::string("IncidentUuid"), incidentUuid);
}

