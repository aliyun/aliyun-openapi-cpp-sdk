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

#include <alibabacloud/polardb/model/DeleteDatabaseZonalRequest.h>

using AlibabaCloud::Polardb::Model::DeleteDatabaseZonalRequest;

DeleteDatabaseZonalRequest::DeleteDatabaseZonalRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DeleteDatabaseZonal") {
  setMethod(HttpRequest::Method::Post);
}

DeleteDatabaseZonalRequest::~DeleteDatabaseZonalRequest() {}

long DeleteDatabaseZonalRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteDatabaseZonalRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteDatabaseZonalRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteDatabaseZonalRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteDatabaseZonalRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteDatabaseZonalRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteDatabaseZonalRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DeleteDatabaseZonalRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DeleteDatabaseZonalRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteDatabaseZonalRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteDatabaseZonalRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteDatabaseZonalRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteDatabaseZonalRequest::getDBName() const {
  return dBName_;
}

void DeleteDatabaseZonalRequest::setDBName(const std::string &dBName) {
  dBName_ = dBName;
  setParameter(std::string("DBName"), dBName);
}

