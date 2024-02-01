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

#include <alibabacloud/ecs/model/ModifyInstanceSpecRequest.h>

using AlibabaCloud::Ecs::Model::ModifyInstanceSpecRequest;

ModifyInstanceSpecRequest::ModifyInstanceSpecRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ModifyInstanceSpec") {
  setMethod(HttpRequest::Method::Post);
}

ModifyInstanceSpecRequest::~ModifyInstanceSpecRequest() {}

long ModifyInstanceSpecRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyInstanceSpecRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyInstanceSpecRequest::getClientToken() const {
  return clientToken_;
}

void ModifyInstanceSpecRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

bool ModifyInstanceSpecRequest::getAllowMigrateAcrossZone() const {
  return allowMigrateAcrossZone_;
}

void ModifyInstanceSpecRequest::setAllowMigrateAcrossZone(bool allowMigrateAcrossZone) {
  allowMigrateAcrossZone_ = allowMigrateAcrossZone;
  setParameter(std::string("AllowMigrateAcrossZone"), allowMigrateAcrossZone ? "true" : "false");
}

int ModifyInstanceSpecRequest::getInternetMaxBandwidthOut() const {
  return internetMaxBandwidthOut_;
}

void ModifyInstanceSpecRequest::setInternetMaxBandwidthOut(int internetMaxBandwidthOut) {
  internetMaxBandwidthOut_ = internetMaxBandwidthOut;
  setParameter(std::string("InternetMaxBandwidthOut"), std::to_string(internetMaxBandwidthOut));
}

std::string ModifyInstanceSpecRequest::getSystemDiskCategory() const {
  return systemDiskCategory_;
}

void ModifyInstanceSpecRequest::setSystemDiskCategory(const std::string &systemDiskCategory) {
  systemDiskCategory_ = systemDiskCategory;
  setParameter(std::string("SystemDisk.Category"), systemDiskCategory);
}

std::string ModifyInstanceSpecRequest::getInstanceType() const {
  return instanceType_;
}

void ModifyInstanceSpecRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string ModifyInstanceSpecRequest::getTemporaryEndTime() const {
  return temporaryEndTime_;
}

void ModifyInstanceSpecRequest::setTemporaryEndTime(const std::string &temporaryEndTime) {
  temporaryEndTime_ = temporaryEndTime;
  setParameter(std::string("Temporary.EndTime"), temporaryEndTime);
}

std::string ModifyInstanceSpecRequest::getModifyMode() const {
  return modifyMode_;
}

void ModifyInstanceSpecRequest::setModifyMode(const std::string &modifyMode) {
  modifyMode_ = modifyMode;
  setParameter(std::string("ModifyMode"), modifyMode);
}

bool ModifyInstanceSpecRequest::getDryRun() const {
  return dryRun_;
}

void ModifyInstanceSpecRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string ModifyInstanceSpecRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyInstanceSpecRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyInstanceSpecRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyInstanceSpecRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyInstanceSpecRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyInstanceSpecRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int ModifyInstanceSpecRequest::getTemporaryInternetMaxBandwidthOut() const {
  return temporaryInternetMaxBandwidthOut_;
}

void ModifyInstanceSpecRequest::setTemporaryInternetMaxBandwidthOut(int temporaryInternetMaxBandwidthOut) {
  temporaryInternetMaxBandwidthOut_ = temporaryInternetMaxBandwidthOut;
  setParameter(std::string("Temporary.InternetMaxBandwidthOut"), std::to_string(temporaryInternetMaxBandwidthOut));
}

std::string ModifyInstanceSpecRequest::getTemporaryStartTime() const {
  return temporaryStartTime_;
}

void ModifyInstanceSpecRequest::setTemporaryStartTime(const std::string &temporaryStartTime) {
  temporaryStartTime_ = temporaryStartTime;
  setParameter(std::string("Temporary.StartTime"), temporaryStartTime);
}

bool ModifyInstanceSpecRequest::getAsync() const {
  return async_;
}

void ModifyInstanceSpecRequest::setAsync(bool async) {
  async_ = async;
  setParameter(std::string("Async"), async ? "true" : "false");
}

std::vector<ModifyInstanceSpecRequest::Disk> ModifyInstanceSpecRequest::getDisk() const {
  return disk_;
}

void ModifyInstanceSpecRequest::setDisk(const std::vector<ModifyInstanceSpecRequest::Disk> &disk) {
  disk_ = disk;
  for(int dep1 = 0; dep1 != disk.size(); dep1++) {
  auto diskObj = disk.at(dep1);
  std::string diskObjStr = std::string("Disk") + "." + std::to_string(dep1 + 1);
    setParameter(diskObjStr + ".PerformanceLevel", diskObj.performanceLevel);
    setParameter(diskObjStr + ".DiskId", diskObj.diskId);
    setParameter(diskObjStr + ".Category", diskObj.category);
  }
}

std::string ModifyInstanceSpecRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyInstanceSpecRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int ModifyInstanceSpecRequest::getInternetMaxBandwidthIn() const {
  return internetMaxBandwidthIn_;
}

void ModifyInstanceSpecRequest::setInternetMaxBandwidthIn(int internetMaxBandwidthIn) {
  internetMaxBandwidthIn_ = internetMaxBandwidthIn;
  setParameter(std::string("InternetMaxBandwidthIn"), std::to_string(internetMaxBandwidthIn));
}

