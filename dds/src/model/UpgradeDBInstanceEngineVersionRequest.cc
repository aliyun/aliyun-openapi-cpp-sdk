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

#include <alibabacloud/dds/model/UpgradeDBInstanceEngineVersionRequest.h>

using AlibabaCloud::Dds::Model::UpgradeDBInstanceEngineVersionRequest;

UpgradeDBInstanceEngineVersionRequest::UpgradeDBInstanceEngineVersionRequest()
    : RpcServiceRequest("dds", "2015-12-01", "UpgradeDBInstanceEngineVersion") {
  setMethod(HttpRequest::Method::Post);
}

UpgradeDBInstanceEngineVersionRequest::~UpgradeDBInstanceEngineVersionRequest() {}

long UpgradeDBInstanceEngineVersionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpgradeDBInstanceEngineVersionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UpgradeDBInstanceEngineVersionRequest::getEngineVersion() const {
  return engineVersion_;
}

void UpgradeDBInstanceEngineVersionRequest::setEngineVersion(const std::string &engineVersion) {
  engineVersion_ = engineVersion;
  setParameter(std::string("EngineVersion"), engineVersion);
}

std::string UpgradeDBInstanceEngineVersionRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UpgradeDBInstanceEngineVersionRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

int UpgradeDBInstanceEngineVersionRequest::getSwitchMode() const {
  return switchMode_;
}

void UpgradeDBInstanceEngineVersionRequest::setSwitchMode(int switchMode) {
  switchMode_ = switchMode;
  setParameter(std::string("SwitchMode"), std::to_string(switchMode));
}

std::string UpgradeDBInstanceEngineVersionRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void UpgradeDBInstanceEngineVersionRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string UpgradeDBInstanceEngineVersionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpgradeDBInstanceEngineVersionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UpgradeDBInstanceEngineVersionRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UpgradeDBInstanceEngineVersionRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long UpgradeDBInstanceEngineVersionRequest::getOwnerId() const {
  return ownerId_;
}

void UpgradeDBInstanceEngineVersionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

