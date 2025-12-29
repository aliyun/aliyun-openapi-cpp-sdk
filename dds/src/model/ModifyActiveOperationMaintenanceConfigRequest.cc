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

#include <alibabacloud/dds/model/ModifyActiveOperationMaintenanceConfigRequest.h>

using AlibabaCloud::Dds::Model::ModifyActiveOperationMaintenanceConfigRequest;

ModifyActiveOperationMaintenanceConfigRequest::ModifyActiveOperationMaintenanceConfigRequest()
    : RpcServiceRequest("dds", "2015-12-01", "ModifyActiveOperationMaintenanceConfig") {
  setMethod(HttpRequest::Method::Post);
}

ModifyActiveOperationMaintenanceConfigRequest::~ModifyActiveOperationMaintenanceConfigRequest() {}

long ModifyActiveOperationMaintenanceConfigRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyActiveOperationMaintenanceConfigRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyActiveOperationMaintenanceConfigRequest::getCycleTime() const {
  return cycleTime_;
}

void ModifyActiveOperationMaintenanceConfigRequest::setCycleTime(const std::string &cycleTime) {
  cycleTime_ = cycleTime;
  setParameter(std::string("CycleTime"), cycleTime);
}

std::string ModifyActiveOperationMaintenanceConfigRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyActiveOperationMaintenanceConfigRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyActiveOperationMaintenanceConfigRequest::getRegionId() const {
  return regionId_;
}

void ModifyActiveOperationMaintenanceConfigRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyActiveOperationMaintenanceConfigRequest::getMaintainStartTime() const {
  return maintainStartTime_;
}

void ModifyActiveOperationMaintenanceConfigRequest::setMaintainStartTime(const std::string &maintainStartTime) {
  maintainStartTime_ = maintainStartTime;
  setParameter(std::string("MaintainStartTime"), maintainStartTime);
}

std::string ModifyActiveOperationMaintenanceConfigRequest::getCycleType() const {
  return cycleType_;
}

void ModifyActiveOperationMaintenanceConfigRequest::setCycleType(const std::string &cycleType) {
  cycleType_ = cycleType;
  setParameter(std::string("CycleType"), cycleType);
}

std::string ModifyActiveOperationMaintenanceConfigRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyActiveOperationMaintenanceConfigRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyActiveOperationMaintenanceConfigRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyActiveOperationMaintenanceConfigRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyActiveOperationMaintenanceConfigRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyActiveOperationMaintenanceConfigRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyActiveOperationMaintenanceConfigRequest::getMaintainEndTime() const {
  return maintainEndTime_;
}

void ModifyActiveOperationMaintenanceConfigRequest::setMaintainEndTime(const std::string &maintainEndTime) {
  maintainEndTime_ = maintainEndTime;
  setParameter(std::string("MaintainEndTime"), maintainEndTime);
}

int ModifyActiveOperationMaintenanceConfigRequest::getStatus() const {
  return status_;
}

void ModifyActiveOperationMaintenanceConfigRequest::setStatus(int status) {
  status_ = status;
  setParameter(std::string("Status"), std::to_string(status));
}

