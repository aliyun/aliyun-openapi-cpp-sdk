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

#include <alibabacloud/cloud-siem/model/ListDisposeStrategyRequest.h>

using AlibabaCloud::Cloud_siem::Model::ListDisposeStrategyRequest;

ListDisposeStrategyRequest::ListDisposeStrategyRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "ListDisposeStrategy") {
  setMethod(HttpRequest::Method::Post);
}

ListDisposeStrategyRequest::~ListDisposeStrategyRequest() {}

std::string ListDisposeStrategyRequest::getEntityIdentity() const {
  return entityIdentity_;
}

void ListDisposeStrategyRequest::setEntityIdentity(const std::string &entityIdentity) {
  entityIdentity_ = entityIdentity;
  setBodyParameter(std::string("EntityIdentity"), entityIdentity);
}

std::string ListDisposeStrategyRequest::getPlaybookName() const {
  return playbookName_;
}

void ListDisposeStrategyRequest::setPlaybookName(const std::string &playbookName) {
  playbookName_ = playbookName;
  setBodyParameter(std::string("PlaybookName"), playbookName);
}

std::string ListDisposeStrategyRequest::getPlaybookTypes() const {
  return playbookTypes_;
}

void ListDisposeStrategyRequest::setPlaybookTypes(const std::string &playbookTypes) {
  playbookTypes_ = playbookTypes;
  setBodyParameter(std::string("PlaybookTypes"), playbookTypes);
}

long ListDisposeStrategyRequest::getRoleFor() const {
  return roleFor_;
}

void ListDisposeStrategyRequest::setRoleFor(long roleFor) {
  roleFor_ = roleFor;
  setBodyParameter(std::string("RoleFor"), std::to_string(roleFor));
}

long ListDisposeStrategyRequest::getStartTime() const {
  return startTime_;
}

void ListDisposeStrategyRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setBodyParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string ListDisposeStrategyRequest::getRegionId() const {
  return regionId_;
}

void ListDisposeStrategyRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

int ListDisposeStrategyRequest::getPageSize() const {
  return pageSize_;
}

void ListDisposeStrategyRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

int ListDisposeStrategyRequest::getRoleType() const {
  return roleType_;
}

void ListDisposeStrategyRequest::setRoleType(int roleType) {
  roleType_ = roleType;
  setBodyParameter(std::string("RoleType"), std::to_string(roleType));
}

std::string ListDisposeStrategyRequest::getOrderField() const {
  return orderField_;
}

void ListDisposeStrategyRequest::setOrderField(const std::string &orderField) {
  orderField_ = orderField;
  setBodyParameter(std::string("OrderField"), orderField);
}

std::string ListDisposeStrategyRequest::getOrder() const {
  return order_;
}

void ListDisposeStrategyRequest::setOrder(const std::string &order) {
  order_ = order;
  setBodyParameter(std::string("Order"), order);
}

std::string ListDisposeStrategyRequest::getSophonTaskId() const {
  return sophonTaskId_;
}

void ListDisposeStrategyRequest::setSophonTaskId(const std::string &sophonTaskId) {
  sophonTaskId_ = sophonTaskId;
  setBodyParameter(std::string("SophonTaskId"), sophonTaskId);
}

int ListDisposeStrategyRequest::getEffectiveStatus() const {
  return effectiveStatus_;
}

void ListDisposeStrategyRequest::setEffectiveStatus(int effectiveStatus) {
  effectiveStatus_ = effectiveStatus;
  setBodyParameter(std::string("EffectiveStatus"), std::to_string(effectiveStatus));
}

long ListDisposeStrategyRequest::getEndTime() const {
  return endTime_;
}

void ListDisposeStrategyRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setBodyParameter(std::string("EndTime"), std::to_string(endTime));
}

int ListDisposeStrategyRequest::getCurrentPage() const {
  return currentPage_;
}

void ListDisposeStrategyRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setBodyParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string ListDisposeStrategyRequest::getPlaybookUuid() const {
  return playbookUuid_;
}

void ListDisposeStrategyRequest::setPlaybookUuid(const std::string &playbookUuid) {
  playbookUuid_ = playbookUuid;
  setBodyParameter(std::string("PlaybookUuid"), playbookUuid);
}

std::string ListDisposeStrategyRequest::getEntityType() const {
  return entityType_;
}

void ListDisposeStrategyRequest::setEntityType(const std::string &entityType) {
  entityType_ = entityType;
  setBodyParameter(std::string("EntityType"), entityType);
}

std::string ListDisposeStrategyRequest::getIncidentUuid() const {
  return incidentUuid_;
}

void ListDisposeStrategyRequest::setIncidentUuid(const std::string &incidentUuid) {
  incidentUuid_ = incidentUuid;
  setBodyParameter(std::string("IncidentUuid"), incidentUuid);
}

