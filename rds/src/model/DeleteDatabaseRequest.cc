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

#include <alibabacloud/rds/model/DeleteDatabaseRequest.h>

using AlibabaCloud::Rds::Model::DeleteDatabaseRequest;

DeleteDatabaseRequest::DeleteDatabaseRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DeleteDatabase") {
  setMethod(HttpRequest::Method::Post);
}

DeleteDatabaseRequest::~DeleteDatabaseRequest() {}

long DeleteDatabaseRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteDatabaseRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteDatabaseRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteDatabaseRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteDatabaseRequest::getRegionId() const {
  return regionId_;
}

void DeleteDatabaseRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteDatabaseRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DeleteDatabaseRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DeleteDatabaseRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteDatabaseRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteDatabaseRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteDatabaseRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteDatabaseRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteDatabaseRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteDatabaseRequest::getDBName() const {
  return dBName_;
}

void DeleteDatabaseRequest::setDBName(const std::string &dBName) {
  dBName_ = dBName;
  setParameter(std::string("DBName"), dBName);
}

