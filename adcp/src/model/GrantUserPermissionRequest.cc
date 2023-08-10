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

#include <alibabacloud/adcp/model/GrantUserPermissionRequest.h>

using AlibabaCloud::Adcp::Model::GrantUserPermissionRequest;

GrantUserPermissionRequest::GrantUserPermissionRequest()
    : RpcServiceRequest("adcp", "2022-01-01", "GrantUserPermission") {
  setMethod(HttpRequest::Method::Post);
}

GrantUserPermissionRequest::~GrantUserPermissionRequest() {}

std::string GrantUserPermissionRequest::getUserId() const {
  return userId_;
}

void GrantUserPermissionRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

bool GrantUserPermissionRequest::getIsRamRole() const {
  return isRamRole_;
}

void GrantUserPermissionRequest::setIsRamRole(bool isRamRole) {
  isRamRole_ = isRamRole;
  setParameter(std::string("IsRamRole"), isRamRole ? "true" : "false");
}

std::string GrantUserPermissionRequest::getRoleType() const {
  return roleType_;
}

void GrantUserPermissionRequest::setRoleType(const std::string &roleType) {
  roleType_ = roleType;
  setParameter(std::string("RoleType"), roleType);
}

std::string GrantUserPermissionRequest::getRoleName() const {
  return roleName_;
}

void GrantUserPermissionRequest::setRoleName(const std::string &roleName) {
  roleName_ = roleName;
  setParameter(std::string("RoleName"), roleName);
}

std::string GrantUserPermissionRequest::getClusterId() const {
  return clusterId_;
}

void GrantUserPermissionRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string GrantUserPermissionRequest::get_Namespace() const {
  return _namespace_;
}

void GrantUserPermissionRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

