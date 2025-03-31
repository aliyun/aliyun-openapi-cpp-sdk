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

#include <alibabacloud/cloud-siem/model/DescribeEntityInfoRequest.h>

using AlibabaCloud::Cloud_siem::Model::DescribeEntityInfoRequest;

DescribeEntityInfoRequest::DescribeEntityInfoRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "DescribeEntityInfo") {
  setMethod(HttpRequest::Method::Post);
}

DescribeEntityInfoRequest::~DescribeEntityInfoRequest() {}

std::string DescribeEntityInfoRequest::getEntityIdentity() const {
  return entityIdentity_;
}

void DescribeEntityInfoRequest::setEntityIdentity(const std::string &entityIdentity) {
  entityIdentity_ = entityIdentity;
  setBodyParameter(std::string("EntityIdentity"), entityIdentity);
}

long DescribeEntityInfoRequest::getRoleFor() const {
  return roleFor_;
}

void DescribeEntityInfoRequest::setRoleFor(long roleFor) {
  roleFor_ = roleFor;
  setBodyParameter(std::string("RoleFor"), std::to_string(roleFor));
}

long DescribeEntityInfoRequest::getEntityId() const {
  return entityId_;
}

void DescribeEntityInfoRequest::setEntityId(long entityId) {
  entityId_ = entityId;
  setBodyParameter(std::string("EntityId"), std::to_string(entityId));
}

std::string DescribeEntityInfoRequest::getRegionId() const {
  return regionId_;
}

void DescribeEntityInfoRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

int DescribeEntityInfoRequest::getRoleType() const {
  return roleType_;
}

void DescribeEntityInfoRequest::setRoleType(int roleType) {
  roleType_ = roleType;
  setBodyParameter(std::string("RoleType"), std::to_string(roleType));
}

std::string DescribeEntityInfoRequest::getSophonTaskId() const {
  return sophonTaskId_;
}

void DescribeEntityInfoRequest::setSophonTaskId(const std::string &sophonTaskId) {
  sophonTaskId_ = sophonTaskId;
  setBodyParameter(std::string("SophonTaskId"), sophonTaskId);
}

std::string DescribeEntityInfoRequest::getIncidentUuid() const {
  return incidentUuid_;
}

void DescribeEntityInfoRequest::setIncidentUuid(const std::string &incidentUuid) {
  incidentUuid_ = incidentUuid;
  setBodyParameter(std::string("IncidentUuid"), incidentUuid);
}

