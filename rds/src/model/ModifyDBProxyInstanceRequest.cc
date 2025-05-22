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

#include <alibabacloud/rds/model/ModifyDBProxyInstanceRequest.h>

using AlibabaCloud::Rds::Model::ModifyDBProxyInstanceRequest;

ModifyDBProxyInstanceRequest::ModifyDBProxyInstanceRequest()
    : RpcServiceRequest("rds", "2014-08-15", "ModifyDBProxyInstance") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBProxyInstanceRequest::~ModifyDBProxyInstanceRequest() {}

long ModifyDBProxyInstanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBProxyInstanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBProxyInstanceRequest::getVSwitchIds() const {
  return vSwitchIds_;
}

void ModifyDBProxyInstanceRequest::setVSwitchIds(const std::string &vSwitchIds) {
  vSwitchIds_ = vSwitchIds;
  setParameter(std::string("VSwitchIds"), vSwitchIds);
}

std::string ModifyDBProxyInstanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBProxyInstanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::vector<ModifyDBProxyInstanceRequest::MigrateAZ> ModifyDBProxyInstanceRequest::getMigrateAZ() const {
  return migrateAZ_;
}

void ModifyDBProxyInstanceRequest::setMigrateAZ(const std::vector<ModifyDBProxyInstanceRequest::MigrateAZ> &migrateAZ) {
  migrateAZ_ = migrateAZ;
  for(int dep1 = 0; dep1 != migrateAZ.size(); dep1++) {
    setParameter(std::string("MigrateAZ") + "." + std::to_string(dep1 + 1) + ".destVpcId", migrateAZ[dep1].destVpcId);
    setParameter(std::string("MigrateAZ") + "." + std::to_string(dep1 + 1) + ".dbProxyEndpointId", migrateAZ[dep1].dbProxyEndpointId);
    setParameter(std::string("MigrateAZ") + "." + std::to_string(dep1 + 1) + ".destVSwitchId", migrateAZ[dep1].destVSwitchId);
  }
}

std::string ModifyDBProxyInstanceRequest::getEffectiveTime() const {
  return effectiveTime_;
}

void ModifyDBProxyInstanceRequest::setEffectiveTime(const std::string &effectiveTime) {
  effectiveTime_ = effectiveTime;
  setParameter(std::string("EffectiveTime"), effectiveTime);
}

std::string ModifyDBProxyInstanceRequest::getEffectiveSpecificTime() const {
  return effectiveSpecificTime_;
}

void ModifyDBProxyInstanceRequest::setEffectiveSpecificTime(const std::string &effectiveSpecificTime) {
  effectiveSpecificTime_ = effectiveSpecificTime;
  setParameter(std::string("EffectiveSpecificTime"), effectiveSpecificTime);
}

std::string ModifyDBProxyInstanceRequest::getRegionId() const {
  return regionId_;
}

void ModifyDBProxyInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<ModifyDBProxyInstanceRequest::DBProxyNodes> ModifyDBProxyInstanceRequest::getDBProxyNodes() const {
  return dBProxyNodes_;
}

void ModifyDBProxyInstanceRequest::setDBProxyNodes(const std::vector<ModifyDBProxyInstanceRequest::DBProxyNodes> &dBProxyNodes) {
  dBProxyNodes_ = dBProxyNodes;
  for(int dep1 = 0; dep1 != dBProxyNodes.size(); dep1++) {
    setParameter(std::string("DBProxyNodes") + "." + std::to_string(dep1 + 1) + ".cpuCores", dBProxyNodes[dep1].cpuCores);
    setParameter(std::string("DBProxyNodes") + "." + std::to_string(dep1 + 1) + ".zoneId", dBProxyNodes[dep1].zoneId);
    setParameter(std::string("DBProxyNodes") + "." + std::to_string(dep1 + 1) + ".nodeCounts", dBProxyNodes[dep1].nodeCounts);
  }
}

std::string ModifyDBProxyInstanceRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyDBProxyInstanceRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifyDBProxyInstanceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBProxyInstanceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDBProxyInstanceRequest::getDBProxyEngineType() const {
  return dBProxyEngineType_;
}

void ModifyDBProxyInstanceRequest::setDBProxyEngineType(const std::string &dBProxyEngineType) {
  dBProxyEngineType_ = dBProxyEngineType;
  setParameter(std::string("DBProxyEngineType"), dBProxyEngineType);
}

long ModifyDBProxyInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBProxyInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyDBProxyInstanceRequest::getDBProxyInstanceNum() const {
  return dBProxyInstanceNum_;
}

void ModifyDBProxyInstanceRequest::setDBProxyInstanceNum(const std::string &dBProxyInstanceNum) {
  dBProxyInstanceNum_ = dBProxyInstanceNum;
  setParameter(std::string("DBProxyInstanceNum"), dBProxyInstanceNum);
}

std::string ModifyDBProxyInstanceRequest::getDBProxyInstanceType() const {
  return dBProxyInstanceType_;
}

void ModifyDBProxyInstanceRequest::setDBProxyInstanceType(const std::string &dBProxyInstanceType) {
  dBProxyInstanceType_ = dBProxyInstanceType;
  setParameter(std::string("DBProxyInstanceType"), dBProxyInstanceType);
}

