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

#include <alibabacloud/adcp/model/UpdateUserPermissionRequest.h>

using AlibabaCloud::Adcp::Model::UpdateUserPermissionRequest;

UpdateUserPermissionRequest::UpdateUserPermissionRequest()
    : RpcServiceRequest("adcp", "2022-01-01", "UpdateUserPermission") {
  setMethod(HttpRequest::Method::Post);
}

UpdateUserPermissionRequest::~UpdateUserPermissionRequest() {}

std::string UpdateUserPermissionRequest::getUserId() const {
  return userId_;
}

void UpdateUserPermissionRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string UpdateUserPermissionRequest::getRoleType() const {
  return roleType_;
}

void UpdateUserPermissionRequest::setRoleType(const std::string &roleType) {
  roleType_ = roleType;
  setParameter(std::string("RoleType"), roleType);
}

std::string UpdateUserPermissionRequest::getRoleName() const {
  return roleName_;
}

void UpdateUserPermissionRequest::setRoleName(const std::string &roleName) {
  roleName_ = roleName;
  setParameter(std::string("RoleName"), roleName);
}

std::string UpdateUserPermissionRequest::getClusterId() const {
  return clusterId_;
}

void UpdateUserPermissionRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string UpdateUserPermissionRequest::get_Namespace() const {
  return _namespace_;
}

void UpdateUserPermissionRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

