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

#include <alibabacloud/polardb/model/ModifyEncryptionDBRolePrivilegeRequest.h>

using AlibabaCloud::Polardb::Model::ModifyEncryptionDBRolePrivilegeRequest;

ModifyEncryptionDBRolePrivilegeRequest::ModifyEncryptionDBRolePrivilegeRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "ModifyEncryptionDBRolePrivilege") {
  setMethod(HttpRequest::Method::Post);
}

ModifyEncryptionDBRolePrivilegeRequest::~ModifyEncryptionDBRolePrivilegeRequest() {}

long ModifyEncryptionDBRolePrivilegeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyEncryptionDBRolePrivilegeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyEncryptionDBRolePrivilegeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyEncryptionDBRolePrivilegeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyEncryptionDBRolePrivilegeRequest::getRolePrivilegeConfig() const {
  return rolePrivilegeConfig_;
}

void ModifyEncryptionDBRolePrivilegeRequest::setRolePrivilegeConfig(const std::string &rolePrivilegeConfig) {
  rolePrivilegeConfig_ = rolePrivilegeConfig;
  setParameter(std::string("RolePrivilegeConfig"), rolePrivilegeConfig);
}

std::string ModifyEncryptionDBRolePrivilegeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyEncryptionDBRolePrivilegeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyEncryptionDBRolePrivilegeRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyEncryptionDBRolePrivilegeRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyEncryptionDBRolePrivilegeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyEncryptionDBRolePrivilegeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyEncryptionDBRolePrivilegeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyEncryptionDBRolePrivilegeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyEncryptionDBRolePrivilegeRequest::getRolePrivilegeName() const {
  return rolePrivilegeName_;
}

void ModifyEncryptionDBRolePrivilegeRequest::setRolePrivilegeName(const std::string &rolePrivilegeName) {
  rolePrivilegeName_ = rolePrivilegeName;
  setParameter(std::string("RolePrivilegeName"), rolePrivilegeName);
}

