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

#include <alibabacloud/polardb/model/CreateStoragePlanRequest.h>

using AlibabaCloud::Polardb::Model::CreateStoragePlanRequest;

CreateStoragePlanRequest::CreateStoragePlanRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "CreateStoragePlan") {
  setMethod(HttpRequest::Method::Post);
}

CreateStoragePlanRequest::~CreateStoragePlanRequest() {}

long CreateStoragePlanRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateStoragePlanRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateStoragePlanRequest::getClientToken() const {
  return clientToken_;
}

void CreateStoragePlanRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateStoragePlanRequest::getStorageType() const {
  return storageType_;
}

void CreateStoragePlanRequest::setStorageType(const std::string &storageType) {
  storageType_ = storageType;
  setParameter(std::string("StorageType"), storageType);
}

std::string CreateStoragePlanRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateStoragePlanRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateStoragePlanRequest::getPeriod() const {
  return period_;
}

void CreateStoragePlanRequest::setPeriod(const std::string &period) {
  period_ = period;
  setParameter(std::string("Period"), period);
}

std::string CreateStoragePlanRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateStoragePlanRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateStoragePlanRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateStoragePlanRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateStoragePlanRequest::getOwnerId() const {
  return ownerId_;
}

void CreateStoragePlanRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateStoragePlanRequest::getUsedTime() const {
  return usedTime_;
}

void CreateStoragePlanRequest::setUsedTime(const std::string &usedTime) {
  usedTime_ = usedTime;
  setParameter(std::string("UsedTime"), usedTime);
}

std::string CreateStoragePlanRequest::getStorageClass() const {
  return storageClass_;
}

void CreateStoragePlanRequest::setStorageClass(const std::string &storageClass) {
  storageClass_ = storageClass;
  setParameter(std::string("StorageClass"), storageClass);
}

