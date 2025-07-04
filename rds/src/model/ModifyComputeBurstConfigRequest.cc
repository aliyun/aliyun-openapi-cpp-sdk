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

#include <alibabacloud/rds/model/ModifyComputeBurstConfigRequest.h>

using AlibabaCloud::Rds::Model::ModifyComputeBurstConfigRequest;

ModifyComputeBurstConfigRequest::ModifyComputeBurstConfigRequest()
    : RpcServiceRequest("rds", "2014-08-15", "ModifyComputeBurstConfig") {
  setMethod(HttpRequest::Method::Post);
}

ModifyComputeBurstConfigRequest::~ModifyComputeBurstConfigRequest() {}

std::string ModifyComputeBurstConfigRequest::getClientToken() const {
  return clientToken_;
}

void ModifyComputeBurstConfigRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyComputeBurstConfigRequest::getCpuShrinkThreshold() const {
  return cpuShrinkThreshold_;
}

void ModifyComputeBurstConfigRequest::setCpuShrinkThreshold(const std::string &cpuShrinkThreshold) {
  cpuShrinkThreshold_ = cpuShrinkThreshold;
  setParameter(std::string("CpuShrinkThreshold"), cpuShrinkThreshold);
}

std::string ModifyComputeBurstConfigRequest::getBurstStatus() const {
  return burstStatus_;
}

void ModifyComputeBurstConfigRequest::setBurstStatus(const std::string &burstStatus) {
  burstStatus_ = burstStatus;
  setParameter(std::string("BurstStatus"), burstStatus);
}

std::string ModifyComputeBurstConfigRequest::getPeriodScaleMemory() const {
  return periodScaleMemory_;
}

void ModifyComputeBurstConfigRequest::setPeriodScaleMemory(const std::string &periodScaleMemory) {
  periodScaleMemory_ = periodScaleMemory;
  setParameter(std::string("PeriodScaleMemory"), periodScaleMemory);
}

std::string ModifyComputeBurstConfigRequest::getSwitchTimeMode() const {
  return switchTimeMode_;
}

void ModifyComputeBurstConfigRequest::setSwitchTimeMode(const std::string &switchTimeMode) {
  switchTimeMode_ = switchTimeMode;
  setParameter(std::string("SwitchTimeMode"), switchTimeMode);
}

std::string ModifyComputeBurstConfigRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ModifyComputeBurstConfigRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ModifyComputeBurstConfigRequest::getPeriodScaleCpus() const {
  return periodScaleCpus_;
}

void ModifyComputeBurstConfigRequest::setPeriodScaleCpus(const std::string &periodScaleCpus) {
  periodScaleCpus_ = periodScaleCpus;
  setParameter(std::string("PeriodScaleCpus"), periodScaleCpus);
}

std::string ModifyComputeBurstConfigRequest::getRegionId() const {
  return regionId_;
}

void ModifyComputeBurstConfigRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyComputeBurstConfigRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyComputeBurstConfigRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifyComputeBurstConfigRequest::getSwitchTime() const {
  return switchTime_;
}

void ModifyComputeBurstConfigRequest::setSwitchTime(const std::string &switchTime) {
  switchTime_ = switchTime;
  setParameter(std::string("SwitchTime"), switchTime);
}

std::string ModifyComputeBurstConfigRequest::getScaleType() const {
  return scaleType_;
}

void ModifyComputeBurstConfigRequest::setScaleType(const std::string &scaleType) {
  scaleType_ = scaleType;
  setParameter(std::string("ScaleType"), scaleType);
}

std::string ModifyComputeBurstConfigRequest::getTaskId() const {
  return taskId_;
}

void ModifyComputeBurstConfigRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

std::string ModifyComputeBurstConfigRequest::getMemoryEnlargeThreshold() const {
  return memoryEnlargeThreshold_;
}

void ModifyComputeBurstConfigRequest::setMemoryEnlargeThreshold(const std::string &memoryEnlargeThreshold) {
  memoryEnlargeThreshold_ = memoryEnlargeThreshold;
  setParameter(std::string("MemoryEnlargeThreshold"), memoryEnlargeThreshold);
}

std::string ModifyComputeBurstConfigRequest::getCrontabJobId() const {
  return crontabJobId_;
}

void ModifyComputeBurstConfigRequest::setCrontabJobId(const std::string &crontabJobId) {
  crontabJobId_ = crontabJobId;
  setParameter(std::string("CrontabJobId"), crontabJobId);
}

std::string ModifyComputeBurstConfigRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyComputeBurstConfigRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyComputeBurstConfigRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyComputeBurstConfigRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyComputeBurstConfigRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyComputeBurstConfigRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyComputeBurstConfigRequest::getScaleMaxMemory() const {
  return scaleMaxMemory_;
}

void ModifyComputeBurstConfigRequest::setScaleMaxMemory(const std::string &scaleMaxMemory) {
  scaleMaxMemory_ = scaleMaxMemory;
  setParameter(std::string("ScaleMaxMemory"), scaleMaxMemory);
}

std::string ModifyComputeBurstConfigRequest::getMemoryShrinkThreshold() const {
  return memoryShrinkThreshold_;
}

void ModifyComputeBurstConfigRequest::setMemoryShrinkThreshold(const std::string &memoryShrinkThreshold) {
  memoryShrinkThreshold_ = memoryShrinkThreshold;
  setParameter(std::string("MemoryShrinkThreshold"), memoryShrinkThreshold);
}

std::string ModifyComputeBurstConfigRequest::getScaleMaxCpus() const {
  return scaleMaxCpus_;
}

void ModifyComputeBurstConfigRequest::setScaleMaxCpus(const std::string &scaleMaxCpus) {
  scaleMaxCpus_ = scaleMaxCpus;
  setParameter(std::string("ScaleMaxCpus"), scaleMaxCpus);
}

std::string ModifyComputeBurstConfigRequest::getCpuEnlargeThreshold() const {
  return cpuEnlargeThreshold_;
}

void ModifyComputeBurstConfigRequest::setCpuEnlargeThreshold(const std::string &cpuEnlargeThreshold) {
  cpuEnlargeThreshold_ = cpuEnlargeThreshold;
  setParameter(std::string("CpuEnlargeThreshold"), cpuEnlargeThreshold);
}

