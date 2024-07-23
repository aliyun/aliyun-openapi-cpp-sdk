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

#include <alibabacloud/rds/model/ModifyDBInstanceDeletionProtectionRequest.h>

using AlibabaCloud::Rds::Model::ModifyDBInstanceDeletionProtectionRequest;

ModifyDBInstanceDeletionProtectionRequest::ModifyDBInstanceDeletionProtectionRequest()
    : RpcServiceRequest("rds", "2014-08-15", "ModifyDBInstanceDeletionProtection") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBInstanceDeletionProtectionRequest::~ModifyDBInstanceDeletionProtectionRequest() {}

long ModifyDBInstanceDeletionProtectionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBInstanceDeletionProtectionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBInstanceDeletionProtectionRequest::getClientToken() const {
  return clientToken_;
}

void ModifyDBInstanceDeletionProtectionRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyDBInstanceDeletionProtectionRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBInstanceDeletionProtectionRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

bool ModifyDBInstanceDeletionProtectionRequest::getDeletionProtection() const {
  return deletionProtection_;
}

void ModifyDBInstanceDeletionProtectionRequest::setDeletionProtection(bool deletionProtection) {
  deletionProtection_ = deletionProtection;
  setParameter(std::string("DeletionProtection"), deletionProtection ? "true" : "false");
}

std::string ModifyDBInstanceDeletionProtectionRequest::getRegionId() const {
  return regionId_;
}

void ModifyDBInstanceDeletionProtectionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyDBInstanceDeletionProtectionRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyDBInstanceDeletionProtectionRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifyDBInstanceDeletionProtectionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBInstanceDeletionProtectionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDBInstanceDeletionProtectionRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDBInstanceDeletionProtectionRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyDBInstanceDeletionProtectionRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBInstanceDeletionProtectionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

