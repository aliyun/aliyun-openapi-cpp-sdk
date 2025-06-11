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

#include <alibabacloud/oceanbasepro/model/ModifyTenantUserRolesRequest.h>

using AlibabaCloud::OceanBasePro::Model::ModifyTenantUserRolesRequest;

ModifyTenantUserRolesRequest::ModifyTenantUserRolesRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "ModifyTenantUserRoles") {
  setMethod(HttpRequest::Method::Post);
}

ModifyTenantUserRolesRequest::~ModifyTenantUserRolesRequest() {}

std::string ModifyTenantUserRolesRequest::getUserType() const {
  return userType_;
}

void ModifyTenantUserRolesRequest::setUserType(const std::string &userType) {
  userType_ = userType;
  setBodyParameter(std::string("UserType"), userType);
}

std::string ModifyTenantUserRolesRequest::getUserRole() const {
  return userRole_;
}

void ModifyTenantUserRolesRequest::setUserRole(const std::string &userRole) {
  userRole_ = userRole;
  setBodyParameter(std::string("UserRole"), userRole);
}

std::string ModifyTenantUserRolesRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyTenantUserRolesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyTenantUserRolesRequest::getModifyType() const {
  return modifyType_;
}

void ModifyTenantUserRolesRequest::setModifyType(const std::string &modifyType) {
  modifyType_ = modifyType;
  setBodyParameter(std::string("ModifyType"), modifyType);
}

std::string ModifyTenantUserRolesRequest::getGlobalPermissions() const {
  return globalPermissions_;
}

void ModifyTenantUserRolesRequest::setGlobalPermissions(const std::string &globalPermissions) {
  globalPermissions_ = globalPermissions;
  setBodyParameter(std::string("GlobalPermissions"), globalPermissions);
}

std::string ModifyTenantUserRolesRequest::getTenantId() const {
  return tenantId_;
}

void ModifyTenantUserRolesRequest::setTenantId(const std::string &tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), tenantId);
}

std::string ModifyTenantUserRolesRequest::getUserName() const {
  return userName_;
}

void ModifyTenantUserRolesRequest::setUserName(const std::string &userName) {
  userName_ = userName;
  setBodyParameter(std::string("UserName"), userName);
}

