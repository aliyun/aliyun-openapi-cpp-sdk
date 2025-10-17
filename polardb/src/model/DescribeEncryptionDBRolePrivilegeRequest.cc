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

#include <alibabacloud/polardb/model/DescribeEncryptionDBRolePrivilegeRequest.h>

using AlibabaCloud::Polardb::Model::DescribeEncryptionDBRolePrivilegeRequest;

DescribeEncryptionDBRolePrivilegeRequest::DescribeEncryptionDBRolePrivilegeRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeEncryptionDBRolePrivilege") {
  setMethod(HttpRequest::Method::Post);
}

DescribeEncryptionDBRolePrivilegeRequest::~DescribeEncryptionDBRolePrivilegeRequest() {}

long DescribeEncryptionDBRolePrivilegeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeEncryptionDBRolePrivilegeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeEncryptionDBRolePrivilegeRequest::getRolePrivilegeNameList() const {
  return rolePrivilegeNameList_;
}

void DescribeEncryptionDBRolePrivilegeRequest::setRolePrivilegeNameList(const std::string &rolePrivilegeNameList) {
  rolePrivilegeNameList_ = rolePrivilegeNameList;
  setParameter(std::string("RolePrivilegeNameList"), rolePrivilegeNameList);
}

std::string DescribeEncryptionDBRolePrivilegeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeEncryptionDBRolePrivilegeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeEncryptionDBRolePrivilegeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeEncryptionDBRolePrivilegeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeEncryptionDBRolePrivilegeRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeEncryptionDBRolePrivilegeRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeEncryptionDBRolePrivilegeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeEncryptionDBRolePrivilegeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeEncryptionDBRolePrivilegeRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeEncryptionDBRolePrivilegeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

