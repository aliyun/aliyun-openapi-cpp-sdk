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

#include <alibabacloud/rds/model/ModifyReadonlyInstanceDelayReplicationTimeRequest.h>

using AlibabaCloud::Rds::Model::ModifyReadonlyInstanceDelayReplicationTimeRequest;

ModifyReadonlyInstanceDelayReplicationTimeRequest::ModifyReadonlyInstanceDelayReplicationTimeRequest()
    : RpcServiceRequest("rds", "2014-08-15", "ModifyReadonlyInstanceDelayReplicationTime") {
  setMethod(HttpRequest::Method::Post);
}

ModifyReadonlyInstanceDelayReplicationTimeRequest::~ModifyReadonlyInstanceDelayReplicationTimeRequest() {}

long ModifyReadonlyInstanceDelayReplicationTimeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyReadonlyInstanceDelayReplicationTimeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyReadonlyInstanceDelayReplicationTimeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyReadonlyInstanceDelayReplicationTimeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyReadonlyInstanceDelayReplicationTimeRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ModifyReadonlyInstanceDelayReplicationTimeRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ModifyReadonlyInstanceDelayReplicationTimeRequest::getRegionId() const {
  return regionId_;
}

void ModifyReadonlyInstanceDelayReplicationTimeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyReadonlyInstanceDelayReplicationTimeRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyReadonlyInstanceDelayReplicationTimeRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifyReadonlyInstanceDelayReplicationTimeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyReadonlyInstanceDelayReplicationTimeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long ModifyReadonlyInstanceDelayReplicationTimeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyReadonlyInstanceDelayReplicationTimeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyReadonlyInstanceDelayReplicationTimeRequest::getReadSQLReplicationTime() const {
  return readSQLReplicationTime_;
}

void ModifyReadonlyInstanceDelayReplicationTimeRequest::setReadSQLReplicationTime(const std::string &readSQLReplicationTime) {
  readSQLReplicationTime_ = readSQLReplicationTime;
  setParameter(std::string("ReadSQLReplicationTime"), readSQLReplicationTime);
}

