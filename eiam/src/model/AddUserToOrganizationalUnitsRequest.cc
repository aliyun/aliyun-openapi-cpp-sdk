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

#include <alibabacloud/eiam/model/AddUserToOrganizationalUnitsRequest.h>

using AlibabaCloud::Eiam::Model::AddUserToOrganizationalUnitsRequest;

AddUserToOrganizationalUnitsRequest::AddUserToOrganizationalUnitsRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "AddUserToOrganizationalUnits") {
  setMethod(HttpRequest::Method::Post);
}

AddUserToOrganizationalUnitsRequest::~AddUserToOrganizationalUnitsRequest() {}

std::string AddUserToOrganizationalUnitsRequest::getUserId() const {
  return userId_;
}

void AddUserToOrganizationalUnitsRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::vector<AddUserToOrganizationalUnitsRequest::std::string> AddUserToOrganizationalUnitsRequest::getOrganizationalUnitIds() const {
  return organizationalUnitIds_;
}

void AddUserToOrganizationalUnitsRequest::setOrganizationalUnitIds(const std::vector<AddUserToOrganizationalUnitsRequest::std::string> &organizationalUnitIds) {
  organizationalUnitIds_ = organizationalUnitIds;
  for(int dep1 = 0; dep1 != organizationalUnitIds.size(); dep1++) {
    setParameter(std::string("OrganizationalUnitIds") + "." + std::to_string(dep1 + 1), organizationalUnitIds[dep1]);
  }
}

std::string AddUserToOrganizationalUnitsRequest::getInstanceId() const {
  return instanceId_;
}

void AddUserToOrganizationalUnitsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

