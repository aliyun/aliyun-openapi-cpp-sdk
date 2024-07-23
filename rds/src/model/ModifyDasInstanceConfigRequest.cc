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

#include <alibabacloud/rds/model/ModifyDasInstanceConfigRequest.h>

using AlibabaCloud::Rds::Model::ModifyDasInstanceConfigRequest;

ModifyDasInstanceConfigRequest::ModifyDasInstanceConfigRequest()
    : RpcServiceRequest("rds", "2014-08-15", "ModifyDasInstanceConfig") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDasInstanceConfigRequest::~ModifyDasInstanceConfigRequest() {}

long ModifyDasInstanceConfigRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDasInstanceConfigRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDasInstanceConfigRequest::getClientToken() const {
  return clientToken_;
}

void ModifyDasInstanceConfigRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyDasInstanceConfigRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDasInstanceConfigRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDasInstanceConfigRequest::getRegionId() const {
  return regionId_;
}

void ModifyDasInstanceConfigRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyDasInstanceConfigRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyDasInstanceConfigRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifyDasInstanceConfigRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDasInstanceConfigRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long ModifyDasInstanceConfigRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDasInstanceConfigRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int ModifyDasInstanceConfigRequest::getStorageUpperBound() const {
  return storageUpperBound_;
}

void ModifyDasInstanceConfigRequest::setStorageUpperBound(int storageUpperBound) {
  storageUpperBound_ = storageUpperBound;
  setParameter(std::string("StorageUpperBound"), std::to_string(storageUpperBound));
}

int ModifyDasInstanceConfigRequest::getStorageThreshold() const {
  return storageThreshold_;
}

void ModifyDasInstanceConfigRequest::setStorageThreshold(int storageThreshold) {
  storageThreshold_ = storageThreshold;
  setParameter(std::string("StorageThreshold"), std::to_string(storageThreshold));
}

std::string ModifyDasInstanceConfigRequest::getStorageAutoScale() const {
  return storageAutoScale_;
}

void ModifyDasInstanceConfigRequest::setStorageAutoScale(const std::string &storageAutoScale) {
  storageAutoScale_ = storageAutoScale;
  setParameter(std::string("StorageAutoScale"), storageAutoScale);
}

