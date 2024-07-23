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

#include <alibabacloud/rds/model/UpgradeDBProxyInstanceKernelVersionRequest.h>

using AlibabaCloud::Rds::Model::UpgradeDBProxyInstanceKernelVersionRequest;

UpgradeDBProxyInstanceKernelVersionRequest::UpgradeDBProxyInstanceKernelVersionRequest()
    : RpcServiceRequest("rds", "2014-08-15", "UpgradeDBProxyInstanceKernelVersion") {
  setMethod(HttpRequest::Method::Post);
}

UpgradeDBProxyInstanceKernelVersionRequest::~UpgradeDBProxyInstanceKernelVersionRequest() {}

long UpgradeDBProxyInstanceKernelVersionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpgradeDBProxyInstanceKernelVersionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UpgradeDBProxyInstanceKernelVersionRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UpgradeDBProxyInstanceKernelVersionRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string UpgradeDBProxyInstanceKernelVersionRequest::getRegionId() const {
  return regionId_;
}

void UpgradeDBProxyInstanceKernelVersionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpgradeDBProxyInstanceKernelVersionRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void UpgradeDBProxyInstanceKernelVersionRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string UpgradeDBProxyInstanceKernelVersionRequest::getSwitchTime() const {
  return switchTime_;
}

void UpgradeDBProxyInstanceKernelVersionRequest::setSwitchTime(const std::string &switchTime) {
  switchTime_ = switchTime;
  setParameter(std::string("SwitchTime"), switchTime);
}

std::string UpgradeDBProxyInstanceKernelVersionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpgradeDBProxyInstanceKernelVersionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UpgradeDBProxyInstanceKernelVersionRequest::getDBProxyEngineType() const {
  return dBProxyEngineType_;
}

void UpgradeDBProxyInstanceKernelVersionRequest::setDBProxyEngineType(const std::string &dBProxyEngineType) {
  dBProxyEngineType_ = dBProxyEngineType;
  setParameter(std::string("DBProxyEngineType"), dBProxyEngineType);
}

long UpgradeDBProxyInstanceKernelVersionRequest::getOwnerId() const {
  return ownerId_;
}

void UpgradeDBProxyInstanceKernelVersionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpgradeDBProxyInstanceKernelVersionRequest::getUpgradeTime() const {
  return upgradeTime_;
}

void UpgradeDBProxyInstanceKernelVersionRequest::setUpgradeTime(const std::string &upgradeTime) {
  upgradeTime_ = upgradeTime;
  setParameter(std::string("UpgradeTime"), upgradeTime);
}

