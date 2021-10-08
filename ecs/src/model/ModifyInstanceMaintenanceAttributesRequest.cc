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

#include <alibabacloud/ecs/model/ModifyInstanceMaintenanceAttributesRequest.h>

using AlibabaCloud::Ecs::Model::ModifyInstanceMaintenanceAttributesRequest;

ModifyInstanceMaintenanceAttributesRequest::ModifyInstanceMaintenanceAttributesRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ModifyInstanceMaintenanceAttributes") {
  setMethod(HttpRequest::Method::Post);
}

ModifyInstanceMaintenanceAttributesRequest::~ModifyInstanceMaintenanceAttributesRequest() {}

long ModifyInstanceMaintenanceAttributesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyInstanceMaintenanceAttributesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::vector<ModifyInstanceMaintenanceAttributesRequest::MaintenanceWindow> ModifyInstanceMaintenanceAttributesRequest::getMaintenanceWindow() const {
  return maintenanceWindow_;
}

void ModifyInstanceMaintenanceAttributesRequest::setMaintenanceWindow(const std::vector<ModifyInstanceMaintenanceAttributesRequest::MaintenanceWindow> &maintenanceWindow) {
  maintenanceWindow_ = maintenanceWindow;
  for(int dep1 = 0; dep1 != maintenanceWindow.size(); dep1++) {
  auto maintenanceWindowObj = maintenanceWindow.at(dep1);
  std::string maintenanceWindowObjStr = std::string("MaintenanceWindow") + "." + std::to_string(dep1 + 1);
    setParameter(maintenanceWindowObjStr + ".EndTime", maintenanceWindowObj.endTime);
    setParameter(maintenanceWindowObjStr + ".StartTime", maintenanceWindowObj.startTime);
  }
}

std::string ModifyInstanceMaintenanceAttributesRequest::getRegionId() const {
  return regionId_;
}

void ModifyInstanceMaintenanceAttributesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyInstanceMaintenanceAttributesRequest::getActionOnMaintenance() const {
  return actionOnMaintenance_;
}

void ModifyInstanceMaintenanceAttributesRequest::setActionOnMaintenance(const std::string &actionOnMaintenance) {
  actionOnMaintenance_ = actionOnMaintenance;
  setParameter(std::string("ActionOnMaintenance"), actionOnMaintenance);
}

std::string ModifyInstanceMaintenanceAttributesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyInstanceMaintenanceAttributesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyInstanceMaintenanceAttributesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyInstanceMaintenanceAttributesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyInstanceMaintenanceAttributesRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyInstanceMaintenanceAttributesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

bool ModifyInstanceMaintenanceAttributesRequest::getNotifyOnMaintenance() const {
  return notifyOnMaintenance_;
}

void ModifyInstanceMaintenanceAttributesRequest::setNotifyOnMaintenance(bool notifyOnMaintenance) {
  notifyOnMaintenance_ = notifyOnMaintenance;
  setParameter(std::string("NotifyOnMaintenance"), notifyOnMaintenance ? "true" : "false");
}

std::vector<std::string> ModifyInstanceMaintenanceAttributesRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyInstanceMaintenanceAttributesRequest::setInstanceId(const std::vector<std::string> &instanceId) {
  instanceId_ = instanceId;
}

