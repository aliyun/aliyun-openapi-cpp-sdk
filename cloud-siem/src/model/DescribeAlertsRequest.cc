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

#include <alibabacloud/cloud-siem/model/DescribeAlertsRequest.h>

using AlibabaCloud::Cloud_siem::Model::DescribeAlertsRequest;

DescribeAlertsRequest::DescribeAlertsRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "DescribeAlerts") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAlertsRequest::~DescribeAlertsRequest() {}

long DescribeAlertsRequest::getRoleFor() const {
  return roleFor_;
}

void DescribeAlertsRequest::setRoleFor(long roleFor) {
  roleFor_ = roleFor;
  setBodyParameter(std::string("RoleFor"), std::to_string(roleFor));
}

std::string DescribeAlertsRequest::getAlertName() const {
  return alertName_;
}

void DescribeAlertsRequest::setAlertName(const std::string &alertName) {
  alertName_ = alertName;
  setBodyParameter(std::string("AlertName"), alertName);
}

std::string DescribeAlertsRequest::getEntityName() const {
  return entityName_;
}

void DescribeAlertsRequest::setEntityName(const std::string &entityName) {
  entityName_ = entityName;
  setBodyParameter(std::string("EntityName"), entityName);
}

std::string DescribeAlertsRequest::getAssetName() const {
  return assetName_;
}

void DescribeAlertsRequest::setAssetName(const std::string &assetName) {
  assetName_ = assetName;
  setBodyParameter(std::string("AssetName"), assetName);
}

std::string DescribeAlertsRequest::getEntityId() const {
  return entityId_;
}

void DescribeAlertsRequest::setEntityId(const std::string &entityId) {
  entityId_ = entityId;
  setBodyParameter(std::string("EntityId"), entityId);
}

std::string DescribeAlertsRequest::getSource() const {
  return source_;
}

void DescribeAlertsRequest::setSource(const std::string &source) {
  source_ = source;
  setBodyParameter(std::string("Source"), source);
}

std::string DescribeAlertsRequest::getIsDefend() const {
  return isDefend_;
}

void DescribeAlertsRequest::setIsDefend(const std::string &isDefend) {
  isDefend_ = isDefend;
  setBodyParameter(std::string("IsDefend"), isDefend);
}

long DescribeAlertsRequest::getStartTime() const {
  return startTime_;
}

void DescribeAlertsRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setBodyParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string DescribeAlertsRequest::getSubUserId() const {
  return subUserId_;
}

void DescribeAlertsRequest::setSubUserId(const std::string &subUserId) {
  subUserId_ = subUserId;
  setBodyParameter(std::string("SubUserId"), subUserId);
}

std::string DescribeAlertsRequest::getRegionId() const {
  return regionId_;
}

void DescribeAlertsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

int DescribeAlertsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeAlertsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

int DescribeAlertsRequest::getRoleType() const {
  return roleType_;
}

void DescribeAlertsRequest::setRoleType(int roleType) {
  roleType_ = roleType;
  setBodyParameter(std::string("RoleType"), std::to_string(roleType));
}

std::vector<std::string> DescribeAlertsRequest::getLevel() const {
  return level_;
}

void DescribeAlertsRequest::setLevel(const std::vector<std::string> &level) {
  level_ = level;
}

long DescribeAlertsRequest::getEndTime() const {
  return endTime_;
}

void DescribeAlertsRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setBodyParameter(std::string("EndTime"), std::to_string(endTime));
}

std::string DescribeAlertsRequest::getAlertTitle() const {
  return alertTitle_;
}

void DescribeAlertsRequest::setAlertTitle(const std::string &alertTitle) {
  alertTitle_ = alertTitle;
  setBodyParameter(std::string("AlertTitle"), alertTitle);
}

int DescribeAlertsRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeAlertsRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setBodyParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeAlertsRequest::getAlertType() const {
  return alertType_;
}

void DescribeAlertsRequest::setAlertType(const std::string &alertType) {
  alertType_ = alertType;
  setBodyParameter(std::string("AlertType"), alertType);
}

std::string DescribeAlertsRequest::getAlertUuid() const {
  return alertUuid_;
}

void DescribeAlertsRequest::setAlertUuid(const std::string &alertUuid) {
  alertUuid_ = alertUuid;
  setBodyParameter(std::string("AlertUuid"), alertUuid);
}

std::string DescribeAlertsRequest::getAssetId() const {
  return assetId_;
}

void DescribeAlertsRequest::setAssetId(const std::string &assetId) {
  assetId_ = assetId;
  setBodyParameter(std::string("AssetId"), assetId);
}

std::string DescribeAlertsRequest::getLabelType() const {
  return labelType_;
}

void DescribeAlertsRequest::setLabelType(const std::string &labelType) {
  labelType_ = labelType;
  setBodyParameter(std::string("LabelType"), labelType);
}

