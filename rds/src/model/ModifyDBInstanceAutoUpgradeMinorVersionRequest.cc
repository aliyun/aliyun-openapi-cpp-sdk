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

#include <alibabacloud/rds/model/ModifyDBInstanceAutoUpgradeMinorVersionRequest.h>

using AlibabaCloud::Rds::Model::ModifyDBInstanceAutoUpgradeMinorVersionRequest;

ModifyDBInstanceAutoUpgradeMinorVersionRequest::ModifyDBInstanceAutoUpgradeMinorVersionRequest()
    : RpcServiceRequest("rds", "2014-08-15", "ModifyDBInstanceAutoUpgradeMinorVersion") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBInstanceAutoUpgradeMinorVersionRequest::~ModifyDBInstanceAutoUpgradeMinorVersionRequest() {}

long ModifyDBInstanceAutoUpgradeMinorVersionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBInstanceAutoUpgradeMinorVersionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBInstanceAutoUpgradeMinorVersionRequest::getClientToken() const {
  return clientToken_;
}

void ModifyDBInstanceAutoUpgradeMinorVersionRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyDBInstanceAutoUpgradeMinorVersionRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBInstanceAutoUpgradeMinorVersionRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBInstanceAutoUpgradeMinorVersionRequest::getAutoUpgradeMinorVersion() const {
  return autoUpgradeMinorVersion_;
}

void ModifyDBInstanceAutoUpgradeMinorVersionRequest::setAutoUpgradeMinorVersion(const std::string &autoUpgradeMinorVersion) {
  autoUpgradeMinorVersion_ = autoUpgradeMinorVersion;
  setParameter(std::string("AutoUpgradeMinorVersion"), autoUpgradeMinorVersion);
}

std::string ModifyDBInstanceAutoUpgradeMinorVersionRequest::getRegionId() const {
  return regionId_;
}

void ModifyDBInstanceAutoUpgradeMinorVersionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyDBInstanceAutoUpgradeMinorVersionRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyDBInstanceAutoUpgradeMinorVersionRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifyDBInstanceAutoUpgradeMinorVersionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBInstanceAutoUpgradeMinorVersionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long ModifyDBInstanceAutoUpgradeMinorVersionRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBInstanceAutoUpgradeMinorVersionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

