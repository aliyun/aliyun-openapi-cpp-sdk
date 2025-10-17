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

#include <alibabacloud/polardb/model/ModifyEncryptionDBSecretRequest.h>

using AlibabaCloud::Polardb::Model::ModifyEncryptionDBSecretRequest;

ModifyEncryptionDBSecretRequest::ModifyEncryptionDBSecretRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "ModifyEncryptionDBSecret") {
  setMethod(HttpRequest::Method::Post);
}

ModifyEncryptionDBSecretRequest::~ModifyEncryptionDBSecretRequest() {}

long ModifyEncryptionDBSecretRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyEncryptionDBSecretRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyEncryptionDBSecretRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyEncryptionDBSecretRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyEncryptionDBSecretRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyEncryptionDBSecretRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyEncryptionDBSecretRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyEncryptionDBSecretRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyEncryptionDBSecretRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyEncryptionDBSecretRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ModifyEncryptionDBSecretRequest::getEncryptionKey() const {
  return encryptionKey_;
}

void ModifyEncryptionDBSecretRequest::setEncryptionKey(const std::string &encryptionKey) {
  encryptionKey_ = encryptionKey;
  setParameter(std::string("EncryptionKey"), encryptionKey);
}

long ModifyEncryptionDBSecretRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyEncryptionDBSecretRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyEncryptionDBSecretRequest::getEncryptionDBStatus() const {
  return encryptionDBStatus_;
}

void ModifyEncryptionDBSecretRequest::setEncryptionDBStatus(const std::string &encryptionDBStatus) {
  encryptionDBStatus_ = encryptionDBStatus;
  setParameter(std::string("EncryptionDBStatus"), encryptionDBStatus);
}

std::string ModifyEncryptionDBSecretRequest::getRoleArn() const {
  return roleArn_;
}

void ModifyEncryptionDBSecretRequest::setRoleArn(const std::string &roleArn) {
  roleArn_ = roleArn;
  setParameter(std::string("RoleArn"), roleArn);
}

