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

#include <alibabacloud/rds/model/ModifyDBProxyRequest.h>

using AlibabaCloud::Rds::Model::ModifyDBProxyRequest;

ModifyDBProxyRequest::ModifyDBProxyRequest()
    : RpcServiceRequest("rds", "2014-08-15", "ModifyDBProxy") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBProxyRequest::~ModifyDBProxyRequest() {}

long ModifyDBProxyRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBProxyRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBProxyRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBProxyRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBProxyRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ModifyDBProxyRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ModifyDBProxyRequest::getAccountName() const {
  return accountName_;
}

void ModifyDBProxyRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setParameter(std::string("AccountName"), accountName);
}

std::string ModifyDBProxyRequest::getRegionId() const {
  return regionId_;
}

void ModifyDBProxyRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<ModifyDBProxyRequest::DBProxyNodes> ModifyDBProxyRequest::getDBProxyNodes() const {
  return dBProxyNodes_;
}

void ModifyDBProxyRequest::setDBProxyNodes(const std::vector<ModifyDBProxyRequest::DBProxyNodes> &dBProxyNodes) {
  dBProxyNodes_ = dBProxyNodes;
  for(int dep1 = 0; dep1 != dBProxyNodes.size(); dep1++) {
    setParameter(std::string("DBProxyNodes") + "." + std::to_string(dep1 + 1) + ".cpuCores", dBProxyNodes[dep1].cpuCores);
    setParameter(std::string("DBProxyNodes") + "." + std::to_string(dep1 + 1) + ".zoneId", dBProxyNodes[dep1].zoneId);
    setParameter(std::string("DBProxyNodes") + "." + std::to_string(dep1 + 1) + ".nodeCounts", dBProxyNodes[dep1].nodeCounts);
  }
}

std::string ModifyDBProxyRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyDBProxyRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifyDBProxyRequest::getPersistentConnectionStatus() const {
  return persistentConnectionStatus_;
}

void ModifyDBProxyRequest::setPersistentConnectionStatus(const std::string &persistentConnectionStatus) {
  persistentConnectionStatus_ = persistentConnectionStatus;
  setParameter(std::string("PersistentConnectionStatus"), persistentConnectionStatus);
}

std::string ModifyDBProxyRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBProxyRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDBProxyRequest::getDBProxyEngineType() const {
  return dBProxyEngineType_;
}

void ModifyDBProxyRequest::setDBProxyEngineType(const std::string &dBProxyEngineType) {
  dBProxyEngineType_ = dBProxyEngineType;
  setParameter(std::string("DBProxyEngineType"), dBProxyEngineType);
}

long ModifyDBProxyRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBProxyRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyDBProxyRequest::getDBProxyInstanceNum() const {
  return dBProxyInstanceNum_;
}

void ModifyDBProxyRequest::setDBProxyInstanceNum(const std::string &dBProxyInstanceNum) {
  dBProxyInstanceNum_ = dBProxyInstanceNum;
  setParameter(std::string("DBProxyInstanceNum"), dBProxyInstanceNum);
}

std::string ModifyDBProxyRequest::getConfigDBProxyService() const {
  return configDBProxyService_;
}

void ModifyDBProxyRequest::setConfigDBProxyService(const std::string &configDBProxyService) {
  configDBProxyService_ = configDBProxyService;
  setParameter(std::string("ConfigDBProxyService"), configDBProxyService);
}

std::string ModifyDBProxyRequest::getVSwitchId() const {
  return vSwitchId_;
}

void ModifyDBProxyRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string ModifyDBProxyRequest::getAccountPassword() const {
  return accountPassword_;
}

void ModifyDBProxyRequest::setAccountPassword(const std::string &accountPassword) {
  accountPassword_ = accountPassword;
  setParameter(std::string("AccountPassword"), accountPassword);
}

std::string ModifyDBProxyRequest::getDBProxyInstanceType() const {
  return dBProxyInstanceType_;
}

void ModifyDBProxyRequest::setDBProxyInstanceType(const std::string &dBProxyInstanceType) {
  dBProxyInstanceType_ = dBProxyInstanceType;
  setParameter(std::string("DBProxyInstanceType"), dBProxyInstanceType);
}

std::string ModifyDBProxyRequest::getVPCId() const {
  return vPCId_;
}

void ModifyDBProxyRequest::setVPCId(const std::string &vPCId) {
  vPCId_ = vPCId;
  setParameter(std::string("VPCId"), vPCId);
}

std::string ModifyDBProxyRequest::getInstanceNetworkType() const {
  return instanceNetworkType_;
}

void ModifyDBProxyRequest::setInstanceNetworkType(const std::string &instanceNetworkType) {
  instanceNetworkType_ = instanceNetworkType;
  setParameter(std::string("InstanceNetworkType"), instanceNetworkType);
}

