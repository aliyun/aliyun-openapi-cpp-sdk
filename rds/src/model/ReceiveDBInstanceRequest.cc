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

#include <alibabacloud/rds/model/ReceiveDBInstanceRequest.h>

using AlibabaCloud::Rds::Model::ReceiveDBInstanceRequest;

ReceiveDBInstanceRequest::ReceiveDBInstanceRequest()
    : RpcServiceRequest("rds", "2014-08-15", "ReceiveDBInstance") {
  setMethod(HttpRequest::Method::Post);
}

ReceiveDBInstanceRequest::~ReceiveDBInstanceRequest() {}

long ReceiveDBInstanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ReceiveDBInstanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ReceiveDBInstanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ReceiveDBInstanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ReceiveDBInstanceRequest::getRegionId() const {
  return regionId_;
}

void ReceiveDBInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ReceiveDBInstanceRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ReceiveDBInstanceRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ReceiveDBInstanceRequest::getGuardDBInstanceId() const {
  return guardDBInstanceId_;
}

void ReceiveDBInstanceRequest::setGuardDBInstanceId(const std::string &guardDBInstanceId) {
  guardDBInstanceId_ = guardDBInstanceId;
  setParameter(std::string("GuardDBInstanceId"), guardDBInstanceId);
}

std::string ReceiveDBInstanceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ReceiveDBInstanceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ReceiveDBInstanceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ReceiveDBInstanceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ReceiveDBInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void ReceiveDBInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

