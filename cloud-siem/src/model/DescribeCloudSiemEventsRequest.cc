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

#include <alibabacloud/cloud-siem/model/DescribeCloudSiemEventsRequest.h>

using AlibabaCloud::Cloud_siem::Model::DescribeCloudSiemEventsRequest;

DescribeCloudSiemEventsRequest::DescribeCloudSiemEventsRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "DescribeCloudSiemEvents") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCloudSiemEventsRequest::~DescribeCloudSiemEventsRequest() {}

long DescribeCloudSiemEventsRequest::getRoleFor() const {
  return roleFor_;
}

void DescribeCloudSiemEventsRequest::setRoleFor(long roleFor) {
  roleFor_ = roleFor;
  setBodyParameter(std::string("RoleFor"), std::to_string(roleFor));
}

long DescribeCloudSiemEventsRequest::getStartTime() const {
  return startTime_;
}

void DescribeCloudSiemEventsRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setBodyParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string DescribeCloudSiemEventsRequest::getEventName() const {
  return eventName_;
}

void DescribeCloudSiemEventsRequest::setEventName(const std::string &eventName) {
  eventName_ = eventName;
  setBodyParameter(std::string("EventName"), eventName);
}

std::string DescribeCloudSiemEventsRequest::getRegionId() const {
  return regionId_;
}

void DescribeCloudSiemEventsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

int DescribeCloudSiemEventsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeCloudSiemEventsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

int DescribeCloudSiemEventsRequest::getRoleType() const {
  return roleType_;
}

void DescribeCloudSiemEventsRequest::setRoleType(int roleType) {
  roleType_ = roleType;
  setBodyParameter(std::string("RoleType"), std::to_string(roleType));
}

std::string DescribeCloudSiemEventsRequest::getOrderField() const {
  return orderField_;
}

void DescribeCloudSiemEventsRequest::setOrderField(const std::string &orderField) {
  orderField_ = orderField;
  setBodyParameter(std::string("OrderField"), orderField);
}

std::string DescribeCloudSiemEventsRequest::getOrder() const {
  return order_;
}

void DescribeCloudSiemEventsRequest::setOrder(const std::string &order) {
  order_ = order;
  setBodyParameter(std::string("Order"), order);
}

long DescribeCloudSiemEventsRequest::getEndTime() const {
  return endTime_;
}

void DescribeCloudSiemEventsRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setBodyParameter(std::string("EndTime"), std::to_string(endTime));
}

int DescribeCloudSiemEventsRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeCloudSiemEventsRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setBodyParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::vector<std::string> DescribeCloudSiemEventsRequest::getThreadLevel() const {
  return threadLevel_;
}

void DescribeCloudSiemEventsRequest::setThreadLevel(const std::vector<std::string> &threadLevel) {
  threadLevel_ = threadLevel;
}

std::string DescribeCloudSiemEventsRequest::getEntityUuid() const {
  return entityUuid_;
}

void DescribeCloudSiemEventsRequest::setEntityUuid(const std::string &entityUuid) {
  entityUuid_ = entityUuid;
  setBodyParameter(std::string("EntityUuid"), entityUuid);
}

std::string DescribeCloudSiemEventsRequest::getAssetId() const {
  return assetId_;
}

void DescribeCloudSiemEventsRequest::setAssetId(const std::string &assetId) {
  assetId_ = assetId;
  setBodyParameter(std::string("AssetId"), assetId);
}

std::string DescribeCloudSiemEventsRequest::getIncidentUuid() const {
  return incidentUuid_;
}

void DescribeCloudSiemEventsRequest::setIncidentUuid(const std::string &incidentUuid) {
  incidentUuid_ = incidentUuid;
  setBodyParameter(std::string("IncidentUuid"), incidentUuid);
}

int DescribeCloudSiemEventsRequest::getStatus() const {
  return status_;
}

void DescribeCloudSiemEventsRequest::setStatus(int status) {
  status_ = status;
  setBodyParameter(std::string("Status"), std::to_string(status));
}

