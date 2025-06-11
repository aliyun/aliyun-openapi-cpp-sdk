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

#include <alibabacloud/oceanbasepro/model/CreateTenantUserRequest.h>

using AlibabaCloud::OceanBasePro::Model::CreateTenantUserRequest;

CreateTenantUserRequest::CreateTenantUserRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "CreateTenantUser") {
  setMethod(HttpRequest::Method::Post);
}

CreateTenantUserRequest::~CreateTenantUserRequest() {}

std::string CreateTenantUserRequest::getRoles() const {
  return roles_;
}

void CreateTenantUserRequest::setRoles(const std::string &roles) {
  roles_ = roles;
  setBodyParameter(std::string("Roles"), roles);
}

std::string CreateTenantUserRequest::getDescription() const {
  return description_;
}

void CreateTenantUserRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string CreateTenantUserRequest::getUserPassword() const {
  return userPassword_;
}

void CreateTenantUserRequest::setUserPassword(const std::string &userPassword) {
  userPassword_ = userPassword;
  setBodyParameter(std::string("UserPassword"), userPassword);
}

std::string CreateTenantUserRequest::getGlobalPermissions() const {
  return globalPermissions_;
}

void CreateTenantUserRequest::setGlobalPermissions(const std::string &globalPermissions) {
  globalPermissions_ = globalPermissions;
  setBodyParameter(std::string("GlobalPermissions"), globalPermissions);
}

std::string CreateTenantUserRequest::getTenantId() const {
  return tenantId_;
}

void CreateTenantUserRequest::setTenantId(const std::string &tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), tenantId);
}

std::string CreateTenantUserRequest::getEncryptionType() const {
  return encryptionType_;
}

void CreateTenantUserRequest::setEncryptionType(const std::string &encryptionType) {
  encryptionType_ = encryptionType;
  setBodyParameter(std::string("EncryptionType"), encryptionType);
}

std::string CreateTenantUserRequest::getUserType() const {
  return userType_;
}

void CreateTenantUserRequest::setUserType(const std::string &userType) {
  userType_ = userType;
  setBodyParameter(std::string("UserType"), userType);
}

std::string CreateTenantUserRequest::getInstanceId() const {
  return instanceId_;
}

void CreateTenantUserRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string CreateTenantUserRequest::getUserName() const {
  return userName_;
}

void CreateTenantUserRequest::setUserName(const std::string &userName) {
  userName_ = userName;
  setBodyParameter(std::string("UserName"), userName);
}

