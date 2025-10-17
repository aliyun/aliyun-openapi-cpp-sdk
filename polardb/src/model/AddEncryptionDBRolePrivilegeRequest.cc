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

#include <alibabacloud/polardb/model/AddEncryptionDBRolePrivilegeRequest.h>

using AlibabaCloud::Polardb::Model::AddEncryptionDBRolePrivilegeRequest;

AddEncryptionDBRolePrivilegeRequest::AddEncryptionDBRolePrivilegeRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "AddEncryptionDBRolePrivilege") {
  setMethod(HttpRequest::Method::Post);
}

AddEncryptionDBRolePrivilegeRequest::~AddEncryptionDBRolePrivilegeRequest() {}

long AddEncryptionDBRolePrivilegeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AddEncryptionDBRolePrivilegeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AddEncryptionDBRolePrivilegeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void AddEncryptionDBRolePrivilegeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string AddEncryptionDBRolePrivilegeRequest::getRolePrivilegeConfig() const {
  return rolePrivilegeConfig_;
}

void AddEncryptionDBRolePrivilegeRequest::setRolePrivilegeConfig(const std::string &rolePrivilegeConfig) {
  rolePrivilegeConfig_ = rolePrivilegeConfig;
  setParameter(std::string("RolePrivilegeConfig"), rolePrivilegeConfig);
}

std::string AddEncryptionDBRolePrivilegeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AddEncryptionDBRolePrivilegeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AddEncryptionDBRolePrivilegeRequest::getDBClusterId() const {
  return dBClusterId_;
}

void AddEncryptionDBRolePrivilegeRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string AddEncryptionDBRolePrivilegeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AddEncryptionDBRolePrivilegeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long AddEncryptionDBRolePrivilegeRequest::getOwnerId() const {
  return ownerId_;
}

void AddEncryptionDBRolePrivilegeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AddEncryptionDBRolePrivilegeRequest::getRolePrivilegeName() const {
  return rolePrivilegeName_;
}

void AddEncryptionDBRolePrivilegeRequest::setRolePrivilegeName(const std::string &rolePrivilegeName) {
  rolePrivilegeName_ = rolePrivilegeName;
  setParameter(std::string("RolePrivilegeName"), rolePrivilegeName);
}

