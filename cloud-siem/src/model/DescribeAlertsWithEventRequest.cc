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

long DescribeAlertsWithEventRequest::getRoleFor() const {
  return roleFor_;
}

void DescribeAlertsWithEventRequest::setRoleFor(long roleFor) {
  roleFor_ = roleFor;
  setBodyParameter(std::string("RoleFor"), std::to_string(roleFor));
}

std::string DescribeAlertsWithEventRequest::getAlertName() const {
  return alertName_;
}

void DescribeAlertsWithEventRequest::setAlertName(const std::string &alertName) {
  alertName_ = alertName;
  setBodyParameter(std::string("AlertName"), alertName);
}

std::string DescribeAlertsWithEventRequest::getEntityName() const {
  return entityName_;
}

void DescribeAlertsWithEventRequest::setEntityName(const std::string &entityName) {
  entityName_ = entityName;
  setBodyParameter(std::string("EntityName"), entityName);
}

std::string DescribeAlertsWithEventRequest::getAssetName() const {
  return assetName_;
}

void DescribeAlertsWithEventRequest::setAssetName(const std::string &assetName) {
  assetName_ = assetName;
  setBodyParameter(std::string("AssetName"), assetName);
}

std::string DescribeAlertsWithEventRequest::getEntityId() const {
  return entityId_;
}

void DescribeAlertsWithEventRequest::setEntityId(const std::string &entityId) {
  entityId_ = entityId;
  setBodyParameter(std::string("EntityId"), entityId);
}

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

long DescribeAlertsWithEventRequest::getStartTime() const {
  return startTime_;
}

void DescribeAlertsWithEventRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setBodyParameter(std::string("StartTime"), std::to_string(startTime));
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

int DescribeAlertsWithEventRequest::getRoleType() const {
  return roleType_;
}

void DescribeAlertsWithEventRequest::setRoleType(int roleType) {
  roleType_ = roleType;
  setBodyParameter(std::string("RoleType"), std::to_string(roleType));
}

std::vector<std::string> DescribeAlertsWithEventRequest::getLevel() const {
  return level_;
}

void DescribeAlertsWithEventRequest::setLevel(const std::vector<std::string> &level) {
  level_ = level;
}

long DescribeAlertsWithEventRequest::getEndTime() const {
  return endTime_;
}

void DescribeAlertsWithEventRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setBodyParameter(std::string("EndTime"), std::to_string(endTime));
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

std::string DescribeAlertsWithEventRequest::getAlertType() const {
  return alertType_;
}

void DescribeAlertsWithEventRequest::setAlertType(const std::string &alertType) {
  alertType_ = alertType;
  setBodyParameter(std::string("AlertType"), alertType);
}

std::string DescribeAlertsWithEventRequest::getAssetId() const {
  return assetId_;
}

void DescribeAlertsWithEventRequest::setAssetId(const std::string &assetId) {
  assetId_ = assetId;
  setBodyParameter(std::string("AssetId"), assetId);
}

std::string DescribeAlertsWithEventRequest::getIncidentUuid() const {
  return incidentUuid_;
}

void DescribeAlertsWithEventRequest::setIncidentUuid(const std::string &incidentUuid) {
  incidentUuid_ = incidentUuid;
  setBodyParameter(std::string("IncidentUuid"), incidentUuid);
}

