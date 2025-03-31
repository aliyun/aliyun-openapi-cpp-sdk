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

#include <alibabacloud/cloud-siem/model/DescribeWhiteRuleListRequest.h>

using AlibabaCloud::Cloud_siem::Model::DescribeWhiteRuleListRequest;

DescribeWhiteRuleListRequest::DescribeWhiteRuleListRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "DescribeWhiteRuleList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeWhiteRuleListRequest::~DescribeWhiteRuleListRequest() {}

long DescribeWhiteRuleListRequest::getRoleFor() const {
  return roleFor_;
}

void DescribeWhiteRuleListRequest::setRoleFor(long roleFor) {
  roleFor_ = roleFor;
  setBodyParameter(std::string("RoleFor"), std::to_string(roleFor));
}

std::string DescribeWhiteRuleListRequest::getAlertName() const {
  return alertName_;
}

void DescribeWhiteRuleListRequest::setAlertName(const std::string &alertName) {
  alertName_ = alertName;
  setBodyParameter(std::string("AlertName"), alertName);
}

std::string DescribeWhiteRuleListRequest::getRegionId() const {
  return regionId_;
}

void DescribeWhiteRuleListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

int DescribeWhiteRuleListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeWhiteRuleListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

int DescribeWhiteRuleListRequest::getRoleType() const {
  return roleType_;
}

void DescribeWhiteRuleListRequest::setRoleType(int roleType) {
  roleType_ = roleType;
  setBodyParameter(std::string("RoleType"), std::to_string(roleType));
}

int DescribeWhiteRuleListRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeWhiteRuleListRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setBodyParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeWhiteRuleListRequest::getAlertType() const {
  return alertType_;
}

void DescribeWhiteRuleListRequest::setAlertType(const std::string &alertType) {
  alertType_ = alertType;
  setBodyParameter(std::string("AlertType"), alertType);
}

std::string DescribeWhiteRuleListRequest::getIncidentUuid() const {
  return incidentUuid_;
}

void DescribeWhiteRuleListRequest::setIncidentUuid(const std::string &incidentUuid) {
  incidentUuid_ = incidentUuid;
  setBodyParameter(std::string("IncidentUuid"), incidentUuid);
}

