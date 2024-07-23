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

#include <alibabacloud/rds/model/DescribeMigrateTaskByIdRequest.h>

using AlibabaCloud::Rds::Model::DescribeMigrateTaskByIdRequest;

DescribeMigrateTaskByIdRequest::DescribeMigrateTaskByIdRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeMigrateTaskById") {
  setMethod(HttpRequest::Method::Post);
}

DescribeMigrateTaskByIdRequest::~DescribeMigrateTaskByIdRequest() {}

long DescribeMigrateTaskByIdRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeMigrateTaskByIdRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeMigrateTaskByIdRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeMigrateTaskByIdRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeMigrateTaskByIdRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeMigrateTaskByIdRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeMigrateTaskByIdRequest::getRegionId() const {
  return regionId_;
}

void DescribeMigrateTaskByIdRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeMigrateTaskByIdRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeMigrateTaskByIdRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeMigrateTaskByIdRequest::getMigrateTaskId() const {
  return migrateTaskId_;
}

void DescribeMigrateTaskByIdRequest::setMigrateTaskId(const std::string &migrateTaskId) {
  migrateTaskId_ = migrateTaskId;
  setParameter(std::string("MigrateTaskId"), migrateTaskId);
}

std::string DescribeMigrateTaskByIdRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeMigrateTaskByIdRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long DescribeMigrateTaskByIdRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeMigrateTaskByIdRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

