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

#include <alibabacloud/polardb/model/UpgradeDBClusterVersionZonalRequest.h>

using AlibabaCloud::Polardb::Model::UpgradeDBClusterVersionZonalRequest;

UpgradeDBClusterVersionZonalRequest::UpgradeDBClusterVersionZonalRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "UpgradeDBClusterVersionZonal") {
  setMethod(HttpRequest::Method::Post);
}

UpgradeDBClusterVersionZonalRequest::~UpgradeDBClusterVersionZonalRequest() {}

long UpgradeDBClusterVersionZonalRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpgradeDBClusterVersionZonalRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UpgradeDBClusterVersionZonalRequest::getClientToken() const {
  return clientToken_;
}

void UpgradeDBClusterVersionZonalRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpgradeDBClusterVersionZonalRequest::getUpgradeType() const {
  return upgradeType_;
}

void UpgradeDBClusterVersionZonalRequest::setUpgradeType(const std::string &upgradeType) {
  upgradeType_ = upgradeType;
  setParameter(std::string("UpgradeType"), upgradeType);
}

std::string UpgradeDBClusterVersionZonalRequest::getPlannedEndTime() const {
  return plannedEndTime_;
}

void UpgradeDBClusterVersionZonalRequest::setPlannedEndTime(const std::string &plannedEndTime) {
  plannedEndTime_ = plannedEndTime;
  setParameter(std::string("PlannedEndTime"), plannedEndTime);
}

std::string UpgradeDBClusterVersionZonalRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UpgradeDBClusterVersionZonalRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string UpgradeDBClusterVersionZonalRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpgradeDBClusterVersionZonalRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UpgradeDBClusterVersionZonalRequest::getDBClusterId() const {
  return dBClusterId_;
}

void UpgradeDBClusterVersionZonalRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string UpgradeDBClusterVersionZonalRequest::getUpgradeLabel() const {
  return upgradeLabel_;
}

void UpgradeDBClusterVersionZonalRequest::setUpgradeLabel(const std::string &upgradeLabel) {
  upgradeLabel_ = upgradeLabel;
  setParameter(std::string("UpgradeLabel"), upgradeLabel);
}

std::string UpgradeDBClusterVersionZonalRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UpgradeDBClusterVersionZonalRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string UpgradeDBClusterVersionZonalRequest::getPlannedFlashingOffTime() const {
  return plannedFlashingOffTime_;
}

void UpgradeDBClusterVersionZonalRequest::setPlannedFlashingOffTime(const std::string &plannedFlashingOffTime) {
  plannedFlashingOffTime_ = plannedFlashingOffTime;
  setParameter(std::string("PlannedFlashingOffTime"), plannedFlashingOffTime);
}

long UpgradeDBClusterVersionZonalRequest::getOwnerId() const {
  return ownerId_;
}

void UpgradeDBClusterVersionZonalRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpgradeDBClusterVersionZonalRequest::getPlannedStartTime() const {
  return plannedStartTime_;
}

void UpgradeDBClusterVersionZonalRequest::setPlannedStartTime(const std::string &plannedStartTime) {
  plannedStartTime_ = plannedStartTime;
  setParameter(std::string("PlannedStartTime"), plannedStartTime);
}

std::string UpgradeDBClusterVersionZonalRequest::getTargetDBRevisionVersionCode() const {
  return targetDBRevisionVersionCode_;
}

void UpgradeDBClusterVersionZonalRequest::setTargetDBRevisionVersionCode(const std::string &targetDBRevisionVersionCode) {
  targetDBRevisionVersionCode_ = targetDBRevisionVersionCode;
  setParameter(std::string("TargetDBRevisionVersionCode"), targetDBRevisionVersionCode);
}

std::string UpgradeDBClusterVersionZonalRequest::getTargetProxyRevisionVersionCode() const {
  return targetProxyRevisionVersionCode_;
}

void UpgradeDBClusterVersionZonalRequest::setTargetProxyRevisionVersionCode(const std::string &targetProxyRevisionVersionCode) {
  targetProxyRevisionVersionCode_ = targetProxyRevisionVersionCode;
  setParameter(std::string("TargetProxyRevisionVersionCode"), targetProxyRevisionVersionCode);
}

std::string UpgradeDBClusterVersionZonalRequest::getUpgradePolicy() const {
  return upgradePolicy_;
}

void UpgradeDBClusterVersionZonalRequest::setUpgradePolicy(const std::string &upgradePolicy) {
  upgradePolicy_ = upgradePolicy;
  setParameter(std::string("UpgradePolicy"), upgradePolicy);
}

bool UpgradeDBClusterVersionZonalRequest::getFromTimeService() const {
  return fromTimeService_;
}

void UpgradeDBClusterVersionZonalRequest::setFromTimeService(bool fromTimeService) {
  fromTimeService_ = fromTimeService;
  setParameter(std::string("FromTimeService"), fromTimeService ? "true" : "false");
}

