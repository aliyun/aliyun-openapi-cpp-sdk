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

#include <alibabacloud/cloud-siem/model/ListCloudSiemPredefinedRulesRequest.h>

using AlibabaCloud::Cloud_siem::Model::ListCloudSiemPredefinedRulesRequest;

ListCloudSiemPredefinedRulesRequest::ListCloudSiemPredefinedRulesRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "ListCloudSiemPredefinedRules") {
  setMethod(HttpRequest::Method::Post);
}

ListCloudSiemPredefinedRulesRequest::~ListCloudSiemPredefinedRulesRequest() {}

long ListCloudSiemPredefinedRulesRequest::getRoleFor() const {
  return roleFor_;
}

void ListCloudSiemPredefinedRulesRequest::setRoleFor(long roleFor) {
  roleFor_ = roleFor;
  setBodyParameter(std::string("RoleFor"), std::to_string(roleFor));
}

std::string ListCloudSiemPredefinedRulesRequest::getAttCk() const {
  return attCk_;
}

void ListCloudSiemPredefinedRulesRequest::setAttCk(const std::string &attCk) {
  attCk_ = attCk;
  setBodyParameter(std::string("AttCk"), attCk);
}

std::string ListCloudSiemPredefinedRulesRequest::getRuleName() const {
  return ruleName_;
}

void ListCloudSiemPredefinedRulesRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setBodyParameter(std::string("RuleName"), ruleName);
}

long ListCloudSiemPredefinedRulesRequest::getStartTime() const {
  return startTime_;
}

void ListCloudSiemPredefinedRulesRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setBodyParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string ListCloudSiemPredefinedRulesRequest::getRegionId() const {
  return regionId_;
}

void ListCloudSiemPredefinedRulesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

int ListCloudSiemPredefinedRulesRequest::getPageSize() const {
  return pageSize_;
}

void ListCloudSiemPredefinedRulesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

int ListCloudSiemPredefinedRulesRequest::getRoleType() const {
  return roleType_;
}

void ListCloudSiemPredefinedRulesRequest::setRoleType(int roleType) {
  roleType_ = roleType;
  setBodyParameter(std::string("RoleType"), std::to_string(roleType));
}

std::string ListCloudSiemPredefinedRulesRequest::getId() const {
  return id_;
}

void ListCloudSiemPredefinedRulesRequest::setId(const std::string &id) {
  id_ = id;
  setBodyParameter(std::string("Id"), id);
}

std::string ListCloudSiemPredefinedRulesRequest::getOrderField() const {
  return orderField_;
}

void ListCloudSiemPredefinedRulesRequest::setOrderField(const std::string &orderField) {
  orderField_ = orderField;
  setBodyParameter(std::string("OrderField"), orderField);
}

std::string ListCloudSiemPredefinedRulesRequest::getOrder() const {
  return order_;
}

void ListCloudSiemPredefinedRulesRequest::setOrder(const std::string &order) {
  order_ = order;
  setBodyParameter(std::string("Order"), order);
}

std::string ListCloudSiemPredefinedRulesRequest::getRuleType() const {
  return ruleType_;
}

void ListCloudSiemPredefinedRulesRequest::setRuleType(const std::string &ruleType) {
  ruleType_ = ruleType;
  setBodyParameter(std::string("RuleType"), ruleType);
}

long ListCloudSiemPredefinedRulesRequest::getEndTime() const {
  return endTime_;
}

void ListCloudSiemPredefinedRulesRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setBodyParameter(std::string("EndTime"), std::to_string(endTime));
}

int ListCloudSiemPredefinedRulesRequest::getCurrentPage() const {
  return currentPage_;
}

void ListCloudSiemPredefinedRulesRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setBodyParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string ListCloudSiemPredefinedRulesRequest::getLogSource() const {
  return logSource_;
}

void ListCloudSiemPredefinedRulesRequest::setLogSource(const std::string &logSource) {
  logSource_ = logSource;
  setBodyParameter(std::string("LogSource"), logSource);
}

std::string ListCloudSiemPredefinedRulesRequest::getAlertType() const {
  return alertType_;
}

void ListCloudSiemPredefinedRulesRequest::setAlertType(const std::string &alertType) {
  alertType_ = alertType;
  setBodyParameter(std::string("AlertType"), alertType);
}

std::string ListCloudSiemPredefinedRulesRequest::getEventTransferType() const {
  return eventTransferType_;
}

void ListCloudSiemPredefinedRulesRequest::setEventTransferType(const std::string &eventTransferType) {
  eventTransferType_ = eventTransferType;
  setBodyParameter(std::string("EventTransferType"), eventTransferType);
}

std::vector<std::string> ListCloudSiemPredefinedRulesRequest::getThreatLevel() const {
  return threatLevel_;
}

void ListCloudSiemPredefinedRulesRequest::setThreatLevel(const std::vector<std::string> &threatLevel) {
  threatLevel_ = threatLevel;
}

int ListCloudSiemPredefinedRulesRequest::getStatus() const {
  return status_;
}

void ListCloudSiemPredefinedRulesRequest::setStatus(int status) {
  status_ = status;
  setBodyParameter(std::string("Status"), std::to_string(status));
}

