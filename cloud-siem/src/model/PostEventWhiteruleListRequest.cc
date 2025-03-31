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

#include <alibabacloud/cloud-siem/model/PostEventWhiteruleListRequest.h>

using AlibabaCloud::Cloud_siem::Model::PostEventWhiteruleListRequest;

PostEventWhiteruleListRequest::PostEventWhiteruleListRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "PostEventWhiteruleList") {
  setMethod(HttpRequest::Method::Post);
}

PostEventWhiteruleListRequest::~PostEventWhiteruleListRequest() {}

long PostEventWhiteruleListRequest::getRoleFor() const {
  return roleFor_;
}

void PostEventWhiteruleListRequest::setRoleFor(long roleFor) {
  roleFor_ = roleFor;
  setBodyParameter(std::string("RoleFor"), std::to_string(roleFor));
}

std::string PostEventWhiteruleListRequest::getRegionId() const {
  return regionId_;
}

void PostEventWhiteruleListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

int PostEventWhiteruleListRequest::getRoleType() const {
  return roleType_;
}

void PostEventWhiteruleListRequest::setRoleType(int roleType) {
  roleType_ = roleType;
  setBodyParameter(std::string("RoleType"), std::to_string(roleType));
}

std::string PostEventWhiteruleListRequest::getWhiteruleList() const {
  return whiteruleList_;
}

void PostEventWhiteruleListRequest::setWhiteruleList(const std::string &whiteruleList) {
  whiteruleList_ = whiteruleList;
  setBodyParameter(std::string("WhiteruleList"), whiteruleList);
}

std::string PostEventWhiteruleListRequest::getIncidentUuid() const {
  return incidentUuid_;
}

void PostEventWhiteruleListRequest::setIncidentUuid(const std::string &incidentUuid) {
  incidentUuid_ = incidentUuid;
  setBodyParameter(std::string("IncidentUuid"), incidentUuid);
}

