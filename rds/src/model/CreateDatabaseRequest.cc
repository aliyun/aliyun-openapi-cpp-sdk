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

#include <alibabacloud/rds/model/CreateDatabaseRequest.h>

using AlibabaCloud::Rds::Model::CreateDatabaseRequest;

CreateDatabaseRequest::CreateDatabaseRequest()
    : RpcServiceRequest("rds", "2014-08-15", "CreateDatabase") {
  setMethod(HttpRequest::Method::Post);
}

CreateDatabaseRequest::~CreateDatabaseRequest() {}

long CreateDatabaseRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateDatabaseRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateDatabaseRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateDatabaseRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateDatabaseRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateDatabaseRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateDatabaseRequest::getRegionId() const {
  return regionId_;
}

void CreateDatabaseRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateDatabaseRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void CreateDatabaseRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string CreateDatabaseRequest::getDBDescription() const {
  return dBDescription_;
}

void CreateDatabaseRequest::setDBDescription(const std::string &dBDescription) {
  dBDescription_ = dBDescription;
  setParameter(std::string("DBDescription"), dBDescription);
}

std::string CreateDatabaseRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateDatabaseRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateDatabaseRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateDatabaseRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateDatabaseRequest::getOwnerId() const {
  return ownerId_;
}

void CreateDatabaseRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateDatabaseRequest::getDBName() const {
  return dBName_;
}

void CreateDatabaseRequest::setDBName(const std::string &dBName) {
  dBName_ = dBName;
  setParameter(std::string("DBName"), dBName);
}

std::string CreateDatabaseRequest::getCharacterSetName() const {
  return characterSetName_;
}

void CreateDatabaseRequest::setCharacterSetName(const std::string &characterSetName) {
  characterSetName_ = characterSetName;
  setParameter(std::string("CharacterSetName"), characterSetName);
}

