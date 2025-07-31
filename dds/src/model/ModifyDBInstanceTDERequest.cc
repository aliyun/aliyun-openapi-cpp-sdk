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

#include <alibabacloud/dds/model/ModifyDBInstanceTDERequest.h>

using AlibabaCloud::Dds::Model::ModifyDBInstanceTDERequest;

ModifyDBInstanceTDERequest::ModifyDBInstanceTDERequest()
    : RpcServiceRequest("dds", "2015-12-01", "ModifyDBInstanceTDE") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBInstanceTDERequest::~ModifyDBInstanceTDERequest() {}

long ModifyDBInstanceTDERequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBInstanceTDERequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBInstanceTDERequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBInstanceTDERequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBInstanceTDERequest::getSwitchMode() const {
  return switchMode_;
}

void ModifyDBInstanceTDERequest::setSwitchMode(const std::string &switchMode) {
  switchMode_ = switchMode;
  setParameter(std::string("SwitchMode"), switchMode);
}

std::string ModifyDBInstanceTDERequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyDBInstanceTDERequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifyDBInstanceTDERequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBInstanceTDERequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDBInstanceTDERequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDBInstanceTDERequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ModifyDBInstanceTDERequest::getEncryptionKey() const {
  return encryptionKey_;
}

void ModifyDBInstanceTDERequest::setEncryptionKey(const std::string &encryptionKey) {
  encryptionKey_ = encryptionKey;
  setParameter(std::string("EncryptionKey"), encryptionKey);
}

long ModifyDBInstanceTDERequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBInstanceTDERequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyDBInstanceTDERequest::getEncryptorName() const {
  return encryptorName_;
}

void ModifyDBInstanceTDERequest::setEncryptorName(const std::string &encryptorName) {
  encryptorName_ = encryptorName;
  setParameter(std::string("EncryptorName"), encryptorName);
}

std::string ModifyDBInstanceTDERequest::getRoleARN() const {
  return roleARN_;
}

void ModifyDBInstanceTDERequest::setRoleARN(const std::string &roleARN) {
  roleARN_ = roleARN;
  setParameter(std::string("RoleARN"), roleARN);
}

std::string ModifyDBInstanceTDERequest::getTDEStatus() const {
  return tDEStatus_;
}

void ModifyDBInstanceTDERequest::setTDEStatus(const std::string &tDEStatus) {
  tDEStatus_ = tDEStatus;
  setParameter(std::string("TDEStatus"), tDEStatus);
}

