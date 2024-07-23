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

#include <alibabacloud/rds/model/ModifyDBInstanceTDERequest.h>

using AlibabaCloud::Rds::Model::ModifyDBInstanceTDERequest;

ModifyDBInstanceTDERequest::ModifyDBInstanceTDERequest()
    : RpcServiceRequest("rds", "2014-08-15", "ModifyDBInstanceTDE") {
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

std::string ModifyDBInstanceTDERequest::getCertificate() const {
  return certificate_;
}

void ModifyDBInstanceTDERequest::setCertificate(const std::string &certificate) {
  certificate_ = certificate;
  setParameter(std::string("Certificate"), certificate);
}

std::string ModifyDBInstanceTDERequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBInstanceTDERequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBInstanceTDERequest::getPrivateKey() const {
  return privateKey_;
}

void ModifyDBInstanceTDERequest::setPrivateKey(const std::string &privateKey) {
  privateKey_ = privateKey;
  setParameter(std::string("PrivateKey"), privateKey);
}

std::string ModifyDBInstanceTDERequest::getPassWord() const {
  return passWord_;
}

void ModifyDBInstanceTDERequest::setPassWord(const std::string &passWord) {
  passWord_ = passWord;
  setParameter(std::string("PassWord"), passWord);
}

std::string ModifyDBInstanceTDERequest::getRegionId() const {
  return regionId_;
}

void ModifyDBInstanceTDERequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
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

bool ModifyDBInstanceTDERequest::getIsRotate() const {
  return isRotate_;
}

void ModifyDBInstanceTDERequest::setIsRotate(bool isRotate) {
  isRotate_ = isRotate;
  setParameter(std::string("IsRotate"), isRotate ? "true" : "false");
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

std::string ModifyDBInstanceTDERequest::getDBName() const {
  return dBName_;
}

void ModifyDBInstanceTDERequest::setDBName(const std::string &dBName) {
  dBName_ = dBName;
  setParameter(std::string("DBName"), dBName);
}

std::string ModifyDBInstanceTDERequest::getRoleArn() const {
  return roleArn_;
}

void ModifyDBInstanceTDERequest::setRoleArn(const std::string &roleArn) {
  roleArn_ = roleArn;
  setParameter(std::string("RoleArn"), roleArn);
}

std::string ModifyDBInstanceTDERequest::getTDEStatus() const {
  return tDEStatus_;
}

void ModifyDBInstanceTDERequest::setTDEStatus(const std::string &tDEStatus) {
  tDEStatus_ = tDEStatus;
  setParameter(std::string("TDEStatus"), tDEStatus);
}

