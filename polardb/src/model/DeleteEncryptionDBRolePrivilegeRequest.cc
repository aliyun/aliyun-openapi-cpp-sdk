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

#include <alibabacloud/polardb/model/DeleteEncryptionDBRolePrivilegeRequest.h>

using AlibabaCloud::Polardb::Model::DeleteEncryptionDBRolePrivilegeRequest;

DeleteEncryptionDBRolePrivilegeRequest::DeleteEncryptionDBRolePrivilegeRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DeleteEncryptionDBRolePrivilege") {
  setMethod(HttpRequest::Method::Post);
}

DeleteEncryptionDBRolePrivilegeRequest::~DeleteEncryptionDBRolePrivilegeRequest() {}

long DeleteEncryptionDBRolePrivilegeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteEncryptionDBRolePrivilegeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteEncryptionDBRolePrivilegeRequest::getRolePrivilegeNameList() const {
  return rolePrivilegeNameList_;
}

void DeleteEncryptionDBRolePrivilegeRequest::setRolePrivilegeNameList(const std::string &rolePrivilegeNameList) {
  rolePrivilegeNameList_ = rolePrivilegeNameList;
  setParameter(std::string("RolePrivilegeNameList"), rolePrivilegeNameList);
}

std::string DeleteEncryptionDBRolePrivilegeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteEncryptionDBRolePrivilegeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteEncryptionDBRolePrivilegeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteEncryptionDBRolePrivilegeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteEncryptionDBRolePrivilegeRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DeleteEncryptionDBRolePrivilegeRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DeleteEncryptionDBRolePrivilegeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteEncryptionDBRolePrivilegeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteEncryptionDBRolePrivilegeRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteEncryptionDBRolePrivilegeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

