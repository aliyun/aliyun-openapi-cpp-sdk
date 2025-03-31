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

#include <alibabacloud/cloud-siem/model/DescribeAlertsWithEntityRequest.h>

using AlibabaCloud::Cloud_siem::Model::DescribeAlertsWithEntityRequest;

DescribeAlertsWithEntityRequest::DescribeAlertsWithEntityRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "DescribeAlertsWithEntity") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAlertsWithEntityRequest::~DescribeAlertsWithEntityRequest() {}

long DescribeAlertsWithEntityRequest::getRoleFor() const {
  return roleFor_;
}

void DescribeAlertsWithEntityRequest::setRoleFor(long roleFor) {
  roleFor_ = roleFor;
  setBodyParameter(std::string("RoleFor"), std::to_string(roleFor));
}

long DescribeAlertsWithEntityRequest::getEntityId() const {
  return entityId_;
}

void DescribeAlertsWithEntityRequest::setEntityId(long entityId) {
  entityId_ = entityId;
  setBodyParameter(std::string("EntityId"), std::to_string(entityId));
}

long DescribeAlertsWithEntityRequest::getStartTime() const {
  return startTime_;
}

void DescribeAlertsWithEntityRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setBodyParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string DescribeAlertsWithEntityRequest::getRegionId() const {
  return regionId_;
}

void DescribeAlertsWithEntityRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

int DescribeAlertsWithEntityRequest::getPageSize() const {
  return pageSize_;
}

void DescribeAlertsWithEntityRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

int DescribeAlertsWithEntityRequest::getRoleType() const {
  return roleType_;
}

void DescribeAlertsWithEntityRequest::setRoleType(int roleType) {
  roleType_ = roleType;
  setBodyParameter(std::string("RoleType"), std::to_string(roleType));
}

std::string DescribeAlertsWithEntityRequest::getSophonTaskId() const {
  return sophonTaskId_;
}

void DescribeAlertsWithEntityRequest::setSophonTaskId(const std::string &sophonTaskId) {
  sophonTaskId_ = sophonTaskId;
  setBodyParameter(std::string("SophonTaskId"), sophonTaskId);
}

long DescribeAlertsWithEntityRequest::getEndTime() const {
  return endTime_;
}

void DescribeAlertsWithEntityRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setBodyParameter(std::string("EndTime"), std::to_string(endTime));
}

int DescribeAlertsWithEntityRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeAlertsWithEntityRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setBodyParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeAlertsWithEntityRequest::getEntityUuid() const {
  return entityUuid_;
}

void DescribeAlertsWithEntityRequest::setEntityUuid(const std::string &entityUuid) {
  entityUuid_ = entityUuid;
  setBodyParameter(std::string("EntityUuid"), entityUuid);
}

std::string DescribeAlertsWithEntityRequest::getIncidentUuid() const {
  return incidentUuid_;
}

void DescribeAlertsWithEntityRequest::setIncidentUuid(const std::string &incidentUuid) {
  incidentUuid_ = incidentUuid;
  setBodyParameter(std::string("IncidentUuid"), incidentUuid);
}

