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

#include <alibabacloud/rds/model/ModifyDatabaseConfigRequest.h>

using AlibabaCloud::Rds::Model::ModifyDatabaseConfigRequest;

ModifyDatabaseConfigRequest::ModifyDatabaseConfigRequest()
    : RpcServiceRequest("rds", "2014-08-15", "ModifyDatabaseConfig") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDatabaseConfigRequest::~ModifyDatabaseConfigRequest() {}

std::string ModifyDatabaseConfigRequest::getDatabasePropertyValue() const {
  return databasePropertyValue_;
}

void ModifyDatabaseConfigRequest::setDatabasePropertyValue(const std::string &databasePropertyValue) {
  databasePropertyValue_ = databasePropertyValue;
  setParameter(std::string("DatabasePropertyValue"), databasePropertyValue);
}

long ModifyDatabaseConfigRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDatabaseConfigRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDatabaseConfigRequest::getClientToken() const {
  return clientToken_;
}

void ModifyDatabaseConfigRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyDatabaseConfigRequest::getDatabasePropertyName() const {
  return databasePropertyName_;
}

void ModifyDatabaseConfigRequest::setDatabasePropertyName(const std::string &databasePropertyName) {
  databasePropertyName_ = databasePropertyName;
  setParameter(std::string("DatabasePropertyName"), databasePropertyName);
}

std::string ModifyDatabaseConfigRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ModifyDatabaseConfigRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ModifyDatabaseConfigRequest::getRegionId() const {
  return regionId_;
}

void ModifyDatabaseConfigRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyDatabaseConfigRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyDatabaseConfigRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifyDatabaseConfigRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDatabaseConfigRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDatabaseConfigRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDatabaseConfigRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyDatabaseConfigRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDatabaseConfigRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyDatabaseConfigRequest::getDBName() const {
  return dBName_;
}

void ModifyDatabaseConfigRequest::setDBName(const std::string &dBName) {
  dBName_ = dBName;
  setParameter(std::string("DBName"), dBName);
}

