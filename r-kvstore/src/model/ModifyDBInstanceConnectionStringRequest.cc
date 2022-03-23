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

#include <alibabacloud/r-kvstore/model/ModifyDBInstanceConnectionStringRequest.h>

using AlibabaCloud::R_kvstore::Model::ModifyDBInstanceConnectionStringRequest;

ModifyDBInstanceConnectionStringRequest::ModifyDBInstanceConnectionStringRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "ModifyDBInstanceConnectionString") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBInstanceConnectionStringRequest::~ModifyDBInstanceConnectionStringRequest() {}

long ModifyDBInstanceConnectionStringRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBInstanceConnectionStringRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBInstanceConnectionStringRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBInstanceConnectionStringRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBInstanceConnectionStringRequest::getSecurityToken() const {
  return securityToken_;
}

void ModifyDBInstanceConnectionStringRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string ModifyDBInstanceConnectionStringRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyDBInstanceConnectionStringRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifyDBInstanceConnectionStringRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBInstanceConnectionStringRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDBInstanceConnectionStringRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDBInstanceConnectionStringRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ModifyDBInstanceConnectionStringRequest::getNewConnectionString() const {
  return newConnectionString_;
}

void ModifyDBInstanceConnectionStringRequest::setNewConnectionString(const std::string &newConnectionString) {
  newConnectionString_ = newConnectionString;
  setParameter(std::string("NewConnectionString"), newConnectionString);
}

long ModifyDBInstanceConnectionStringRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBInstanceConnectionStringRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyDBInstanceConnectionStringRequest::getIPType() const {
  return iPType_;
}

void ModifyDBInstanceConnectionStringRequest::setIPType(const std::string &iPType) {
  iPType_ = iPType;
  setParameter(std::string("IPType"), iPType);
}

std::string ModifyDBInstanceConnectionStringRequest::getCurrentConnectionString() const {
  return currentConnectionString_;
}

void ModifyDBInstanceConnectionStringRequest::setCurrentConnectionString(const std::string &currentConnectionString) {
  currentConnectionString_ = currentConnectionString;
  setParameter(std::string("CurrentConnectionString"), currentConnectionString);
}

std::string ModifyDBInstanceConnectionStringRequest::getPort() const {
  return port_;
}

void ModifyDBInstanceConnectionStringRequest::setPort(const std::string &port) {
  port_ = port;
  setParameter(std::string("Port"), port);
}

