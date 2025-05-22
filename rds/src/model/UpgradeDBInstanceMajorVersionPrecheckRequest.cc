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

#include <alibabacloud/rds/model/UpgradeDBInstanceMajorVersionPrecheckRequest.h>

using AlibabaCloud::Rds::Model::UpgradeDBInstanceMajorVersionPrecheckRequest;

UpgradeDBInstanceMajorVersionPrecheckRequest::UpgradeDBInstanceMajorVersionPrecheckRequest()
    : RpcServiceRequest("rds", "2014-08-15", "UpgradeDBInstanceMajorVersionPrecheck") {
  setMethod(HttpRequest::Method::Post);
}

UpgradeDBInstanceMajorVersionPrecheckRequest::~UpgradeDBInstanceMajorVersionPrecheckRequest() {}

long UpgradeDBInstanceMajorVersionPrecheckRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpgradeDBInstanceMajorVersionPrecheckRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UpgradeDBInstanceMajorVersionPrecheckRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UpgradeDBInstanceMajorVersionPrecheckRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string UpgradeDBInstanceMajorVersionPrecheckRequest::getRegionId() const {
  return regionId_;
}

void UpgradeDBInstanceMajorVersionPrecheckRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpgradeDBInstanceMajorVersionPrecheckRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void UpgradeDBInstanceMajorVersionPrecheckRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string UpgradeDBInstanceMajorVersionPrecheckRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpgradeDBInstanceMajorVersionPrecheckRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UpgradeDBInstanceMajorVersionPrecheckRequest::getUpgradeMode() const {
  return upgradeMode_;
}

void UpgradeDBInstanceMajorVersionPrecheckRequest::setUpgradeMode(const std::string &upgradeMode) {
  upgradeMode_ = upgradeMode;
  setParameter(std::string("UpgradeMode"), upgradeMode);
}

std::string UpgradeDBInstanceMajorVersionPrecheckRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UpgradeDBInstanceMajorVersionPrecheckRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long UpgradeDBInstanceMajorVersionPrecheckRequest::getOwnerId() const {
  return ownerId_;
}

void UpgradeDBInstanceMajorVersionPrecheckRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpgradeDBInstanceMajorVersionPrecheckRequest::getTargetMajorVersion() const {
  return targetMajorVersion_;
}

void UpgradeDBInstanceMajorVersionPrecheckRequest::setTargetMajorVersion(const std::string &targetMajorVersion) {
  targetMajorVersion_ = targetMajorVersion;
  setParameter(std::string("TargetMajorVersion"), targetMajorVersion);
}

