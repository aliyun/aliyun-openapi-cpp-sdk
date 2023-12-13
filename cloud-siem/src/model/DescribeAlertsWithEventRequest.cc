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

#include <alibabacloud/cloud-siem/model/DescribeAlertsWithEventRequest.h>

using AlibabaCloud::Cloud_siem::Model::DescribeAlertsWithEventRequest;

DescribeAlertsWithEventRequest::DescribeAlertsWithEventRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "DescribeAlertsWithEvent") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAlertsWithEventRequest::~DescribeAlertsWithEventRequest() {}

std::string DescribeAlertsWithEventRequest::getSource() const {
  return source_;
}

void DescribeAlertsWithEventRequest::setSource(const std::string &source) {
  source_ = source;
  setBodyParameter(std::string("Source"), source);
}

std::string DescribeAlertsWithEventRequest::getIsDefend() const {
  return isDefend_;
}

void DescribeAlertsWithEventRequest::setIsDefend(const std::string &isDefend) {
  isDefend_ = isDefend;
  setBodyParameter(std::string("IsDefend"), isDefend);
}

long DescribeAlertsWithEventRequest::getSubUserId() const {
  return subUserId_;
}

void DescribeAlertsWithEventRequest::setSubUserId(long subUserId) {
  subUserId_ = subUserId;
  setBodyParameter(std::string("SubUserId"), std::to_string(subUserId));
}

std::string DescribeAlertsWithEventRequest::getRegionId() const {
  return regionId_;
}

void DescribeAlertsWithEventRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

int DescribeAlertsWithEventRequest::getPageSize() const {
  return pageSize_;
}

void DescribeAlertsWithEventRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<std::string> DescribeAlertsWithEventRequest::getLevel() const {
  return level_;
}

void DescribeAlertsWithEventRequest::setLevel(const std::vector<std::string> &level) {
  level_ = level;
}

std::string DescribeAlertsWithEventRequest::getAlertTitle() const {
  return alertTitle_;
}

void DescribeAlertsWithEventRequest::setAlertTitle(const std::string &alertTitle) {
  alertTitle_ = alertTitle;
  setBodyParameter(std::string("AlertTitle"), alertTitle);
}

int DescribeAlertsWithEventRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeAlertsWithEventRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setBodyParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeAlertsWithEventRequest::getIncidentUuid() const {
  return incidentUuid_;
}

void DescribeAlertsWithEventRequest::setIncidentUuid(const std::string &incidentUuid) {
  incidentUuid_ = incidentUuid;
  setBodyParameter(std::string("IncidentUuid"), incidentUuid);
}

