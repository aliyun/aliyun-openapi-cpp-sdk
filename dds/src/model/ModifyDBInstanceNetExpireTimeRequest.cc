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

#include <alibabacloud/dds/model/ModifyDBInstanceNetExpireTimeRequest.h>

using AlibabaCloud::Dds::Model::ModifyDBInstanceNetExpireTimeRequest;

ModifyDBInstanceNetExpireTimeRequest::ModifyDBInstanceNetExpireTimeRequest()
    : RpcServiceRequest("dds", "2015-12-01", "ModifyDBInstanceNetExpireTime") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBInstanceNetExpireTimeRequest::~ModifyDBInstanceNetExpireTimeRequest() {}

long ModifyDBInstanceNetExpireTimeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBInstanceNetExpireTimeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBInstanceNetExpireTimeRequest::getConnectionString() const {
  return connectionString_;
}

void ModifyDBInstanceNetExpireTimeRequest::setConnectionString(const std::string &connectionString) {
  connectionString_ = connectionString;
  setParameter(std::string("ConnectionString"), connectionString);
}

int ModifyDBInstanceNetExpireTimeRequest::getClassicExpendExpiredDays() const {
  return classicExpendExpiredDays_;
}

void ModifyDBInstanceNetExpireTimeRequest::setClassicExpendExpiredDays(int classicExpendExpiredDays) {
  classicExpendExpiredDays_ = classicExpendExpiredDays;
  setParameter(std::string("ClassicExpendExpiredDays"), std::to_string(classicExpendExpiredDays));
}

std::string ModifyDBInstanceNetExpireTimeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBInstanceNetExpireTimeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBInstanceNetExpireTimeRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyDBInstanceNetExpireTimeRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifyDBInstanceNetExpireTimeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBInstanceNetExpireTimeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDBInstanceNetExpireTimeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDBInstanceNetExpireTimeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyDBInstanceNetExpireTimeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBInstanceNetExpireTimeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

