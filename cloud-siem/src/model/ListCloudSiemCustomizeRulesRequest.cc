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

#include <alibabacloud/cloud-siem/model/ListCloudSiemCustomizeRulesRequest.h>

using AlibabaCloud::Cloud_siem::Model::ListCloudSiemCustomizeRulesRequest;

ListCloudSiemCustomizeRulesRequest::ListCloudSiemCustomizeRulesRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "ListCloudSiemCustomizeRules") {
  setMethod(HttpRequest::Method::Post);
}

ListCloudSiemCustomizeRulesRequest::~ListCloudSiemCustomizeRulesRequest() {}

long ListCloudSiemCustomizeRulesRequest::getRoleFor() const {
  return roleFor_;
}

void ListCloudSiemCustomizeRulesRequest::setRoleFor(long roleFor) {
  roleFor_ = roleFor;
  setBodyParameter(std::string("RoleFor"), std::to_string(roleFor));
}

std::string ListCloudSiemCustomizeRulesRequest::getRuleName() const {
  return ruleName_;
}

void ListCloudSiemCustomizeRulesRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setBodyParameter(std::string("RuleName"), ruleName);
}

long ListCloudSiemCustomizeRulesRequest::getStartTime() const {
  return startTime_;
}

void ListCloudSiemCustomizeRulesRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setBodyParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string ListCloudSiemCustomizeRulesRequest::getRegionId() const {
  return regionId_;
}

void ListCloudSiemCustomizeRulesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

int ListCloudSiemCustomizeRulesRequest::getPageSize() const {
  return pageSize_;
}

void ListCloudSiemCustomizeRulesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

int ListCloudSiemCustomizeRulesRequest::getRoleType() const {
  return roleType_;
}

void ListCloudSiemCustomizeRulesRequest::setRoleType(int roleType) {
  roleType_ = roleType;
  setBodyParameter(std::string("RoleType"), std::to_string(roleType));
}

std::string ListCloudSiemCustomizeRulesRequest::getId() const {
  return id_;
}

void ListCloudSiemCustomizeRulesRequest::setId(const std::string &id) {
  id_ = id;
  setBodyParameter(std::string("Id"), id);
}

std::string ListCloudSiemCustomizeRulesRequest::getOrderField() const {
  return orderField_;
}

void ListCloudSiemCustomizeRulesRequest::setOrderField(const std::string &orderField) {
  orderField_ = orderField;
  setBodyParameter(std::string("OrderField"), orderField);
}

std::string ListCloudSiemCustomizeRulesRequest::getOrder() const {
  return order_;
}

void ListCloudSiemCustomizeRulesRequest::setOrder(const std::string &order) {
  order_ = order;
  setBodyParameter(std::string("Order"), order);
}

std::string ListCloudSiemCustomizeRulesRequest::getRuleType() const {
  return ruleType_;
}

void ListCloudSiemCustomizeRulesRequest::setRuleType(const std::string &ruleType) {
  ruleType_ = ruleType;
  setBodyParameter(std::string("RuleType"), ruleType);
}

long ListCloudSiemCustomizeRulesRequest::getEndTime() const {
  return endTime_;
}

void ListCloudSiemCustomizeRulesRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setBodyParameter(std::string("EndTime"), std::to_string(endTime));
}

int ListCloudSiemCustomizeRulesRequest::getCurrentPage() const {
  return currentPage_;
}

void ListCloudSiemCustomizeRulesRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setBodyParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string ListCloudSiemCustomizeRulesRequest::getAlertType() const {
  return alertType_;
}

void ListCloudSiemCustomizeRulesRequest::setAlertType(const std::string &alertType) {
  alertType_ = alertType;
  setBodyParameter(std::string("AlertType"), alertType);
}

std::vector<std::string> ListCloudSiemCustomizeRulesRequest::getThreatLevel() const {
  return threatLevel_;
}

void ListCloudSiemCustomizeRulesRequest::setThreatLevel(const std::vector<std::string> &threatLevel) {
  threatLevel_ = threatLevel;
}

int ListCloudSiemCustomizeRulesRequest::getStatus() const {
  return status_;
}

void ListCloudSiemCustomizeRulesRequest::setStatus(int status) {
  status_ = status;
  setBodyParameter(std::string("Status"), std::to_string(status));
}

