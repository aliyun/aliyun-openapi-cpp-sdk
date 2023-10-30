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

#include <alibabacloud/polardb/model/ModifyDBClusterPrimaryZoneRequest.h>

using AlibabaCloud::Polardb::Model::ModifyDBClusterPrimaryZoneRequest;

ModifyDBClusterPrimaryZoneRequest::ModifyDBClusterPrimaryZoneRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "ModifyDBClusterPrimaryZone") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBClusterPrimaryZoneRequest::~ModifyDBClusterPrimaryZoneRequest() {}

long ModifyDBClusterPrimaryZoneRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBClusterPrimaryZoneRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBClusterPrimaryZoneRequest::getPlannedEndTime() const {
  return plannedEndTime_;
}

void ModifyDBClusterPrimaryZoneRequest::setPlannedEndTime(const std::string &plannedEndTime) {
  plannedEndTime_ = plannedEndTime;
  setParameter(std::string("PlannedEndTime"), plannedEndTime);
}

std::string ModifyDBClusterPrimaryZoneRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBClusterPrimaryZoneRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBClusterPrimaryZoneRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBClusterPrimaryZoneRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDBClusterPrimaryZoneRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyDBClusterPrimaryZoneRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyDBClusterPrimaryZoneRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDBClusterPrimaryZoneRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyDBClusterPrimaryZoneRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBClusterPrimaryZoneRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyDBClusterPrimaryZoneRequest::getIsSwitchOverForDisaster() const {
  return isSwitchOverForDisaster_;
}

void ModifyDBClusterPrimaryZoneRequest::setIsSwitchOverForDisaster(const std::string &isSwitchOverForDisaster) {
  isSwitchOverForDisaster_ = isSwitchOverForDisaster;
  setParameter(std::string("IsSwitchOverForDisaster"), isSwitchOverForDisaster);
}

std::string ModifyDBClusterPrimaryZoneRequest::getVSwitchId() const {
  return vSwitchId_;
}

void ModifyDBClusterPrimaryZoneRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string ModifyDBClusterPrimaryZoneRequest::getPlannedStartTime() const {
  return plannedStartTime_;
}

void ModifyDBClusterPrimaryZoneRequest::setPlannedStartTime(const std::string &plannedStartTime) {
  plannedStartTime_ = plannedStartTime;
  setParameter(std::string("PlannedStartTime"), plannedStartTime);
}

std::string ModifyDBClusterPrimaryZoneRequest::getVPCId() const {
  return vPCId_;
}

void ModifyDBClusterPrimaryZoneRequest::setVPCId(const std::string &vPCId) {
  vPCId_ = vPCId;
  setParameter(std::string("VPCId"), vPCId);
}

std::string ModifyDBClusterPrimaryZoneRequest::getZoneId() const {
  return zoneId_;
}

void ModifyDBClusterPrimaryZoneRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string ModifyDBClusterPrimaryZoneRequest::getZoneType() const {
  return zoneType_;
}

void ModifyDBClusterPrimaryZoneRequest::setZoneType(const std::string &zoneType) {
  zoneType_ = zoneType;
  setParameter(std::string("ZoneType"), zoneType);
}

bool ModifyDBClusterPrimaryZoneRequest::getFromTimeService() const {
  return fromTimeService_;
}

void ModifyDBClusterPrimaryZoneRequest::setFromTimeService(bool fromTimeService) {
  fromTimeService_ = fromTimeService;
  setParameter(std::string("FromTimeService"), fromTimeService ? "true" : "false");
}

