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

#include <alibabacloud/rds/model/UpgradeDBInstanceKernelVersionRequest.h>

using AlibabaCloud::Rds::Model::UpgradeDBInstanceKernelVersionRequest;

UpgradeDBInstanceKernelVersionRequest::UpgradeDBInstanceKernelVersionRequest()
    : RpcServiceRequest("rds", "2014-08-15", "UpgradeDBInstanceKernelVersion") {
  setMethod(HttpRequest::Method::Post);
}

UpgradeDBInstanceKernelVersionRequest::~UpgradeDBInstanceKernelVersionRequest() {}

long UpgradeDBInstanceKernelVersionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpgradeDBInstanceKernelVersionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UpgradeDBInstanceKernelVersionRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UpgradeDBInstanceKernelVersionRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string UpgradeDBInstanceKernelVersionRequest::getRegionId() const {
  return regionId_;
}

void UpgradeDBInstanceKernelVersionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpgradeDBInstanceKernelVersionRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void UpgradeDBInstanceKernelVersionRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string UpgradeDBInstanceKernelVersionRequest::getSwitchTime() const {
  return switchTime_;
}

void UpgradeDBInstanceKernelVersionRequest::setSwitchTime(const std::string &switchTime) {
  switchTime_ = switchTime;
  setParameter(std::string("SwitchTime"), switchTime);
}

std::string UpgradeDBInstanceKernelVersionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpgradeDBInstanceKernelVersionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long UpgradeDBInstanceKernelVersionRequest::getOwnerId() const {
  return ownerId_;
}

void UpgradeDBInstanceKernelVersionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpgradeDBInstanceKernelVersionRequest::getTargetMinorVersion() const {
  return targetMinorVersion_;
}

void UpgradeDBInstanceKernelVersionRequest::setTargetMinorVersion(const std::string &targetMinorVersion) {
  targetMinorVersion_ = targetMinorVersion;
  setParameter(std::string("TargetMinorVersion"), targetMinorVersion);
}

std::string UpgradeDBInstanceKernelVersionRequest::getUpgradeTime() const {
  return upgradeTime_;
}

void UpgradeDBInstanceKernelVersionRequest::setUpgradeTime(const std::string &upgradeTime) {
  upgradeTime_ = upgradeTime;
  setParameter(std::string("UpgradeTime"), upgradeTime);
}

