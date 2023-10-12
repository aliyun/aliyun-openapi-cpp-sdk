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

#include <alibabacloud/oceanbasepro/model/ModifyTenantUserPasswordRequest.h>

using AlibabaCloud::OceanBasePro::Model::ModifyTenantUserPasswordRequest;

ModifyTenantUserPasswordRequest::ModifyTenantUserPasswordRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "ModifyTenantUserPassword") {
  setMethod(HttpRequest::Method::Post);
}

ModifyTenantUserPasswordRequest::~ModifyTenantUserPasswordRequest() {}

std::string ModifyTenantUserPasswordRequest::getUserPassword() const {
  return userPassword_;
}

void ModifyTenantUserPasswordRequest::setUserPassword(const std::string &userPassword) {
  userPassword_ = userPassword;
  setBodyParameter(std::string("UserPassword"), userPassword);
}

std::string ModifyTenantUserPasswordRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyTenantUserPasswordRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyTenantUserPasswordRequest::getTenantId() const {
  return tenantId_;
}

void ModifyTenantUserPasswordRequest::setTenantId(const std::string &tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), tenantId);
}

std::string ModifyTenantUserPasswordRequest::getEncryptionType() const {
  return encryptionType_;
}

void ModifyTenantUserPasswordRequest::setEncryptionType(const std::string &encryptionType) {
  encryptionType_ = encryptionType;
  setBodyParameter(std::string("EncryptionType"), encryptionType);
}

std::string ModifyTenantUserPasswordRequest::getUserName() const {
  return userName_;
}

void ModifyTenantUserPasswordRequest::setUserName(const std::string &userName) {
  userName_ = userName;
  setBodyParameter(std::string("UserName"), userName);
}

