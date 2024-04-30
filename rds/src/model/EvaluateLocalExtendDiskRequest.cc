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

#include <alibabacloud/rds/model/EvaluateLocalExtendDiskRequest.h>

using AlibabaCloud::Rds::Model::EvaluateLocalExtendDiskRequest;

EvaluateLocalExtendDiskRequest::EvaluateLocalExtendDiskRequest()
    : RpcServiceRequest("rds", "2014-08-15", "EvaluateLocalExtendDisk") {
  setMethod(HttpRequest::Method::Post);
}

EvaluateLocalExtendDiskRequest::~EvaluateLocalExtendDiskRequest() {}

std::string EvaluateLocalExtendDiskRequest::getDBInstanceName() const {
  return dBInstanceName_;
}

void EvaluateLocalExtendDiskRequest::setDBInstanceName(const std::string &dBInstanceName) {
  dBInstanceName_ = dBInstanceName;
  setParameter(std::string("DBInstanceName"), dBInstanceName);
}

long EvaluateLocalExtendDiskRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void EvaluateLocalExtendDiskRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int EvaluateLocalExtendDiskRequest::getStorage() const {
  return storage_;
}

void EvaluateLocalExtendDiskRequest::setStorage(int storage) {
  storage_ = storage;
  setParameter(std::string("Storage"), std::to_string(storage));
}

std::string EvaluateLocalExtendDiskRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void EvaluateLocalExtendDiskRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string EvaluateLocalExtendDiskRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void EvaluateLocalExtendDiskRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string EvaluateLocalExtendDiskRequest::getRegionId() const {
  return regionId_;
}

void EvaluateLocalExtendDiskRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string EvaluateLocalExtendDiskRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void EvaluateLocalExtendDiskRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long EvaluateLocalExtendDiskRequest::getOwnerId() const {
  return ownerId_;
}

void EvaluateLocalExtendDiskRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

