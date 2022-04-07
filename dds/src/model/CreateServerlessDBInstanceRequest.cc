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

#include <alibabacloud/dds/model/CreateServerlessDBInstanceRequest.h>

using AlibabaCloud::Dds::Model::CreateServerlessDBInstanceRequest;

CreateServerlessDBInstanceRequest::CreateServerlessDBInstanceRequest()
    : RpcServiceRequest("dds", "2015-12-01", "CreateServerlessDBInstance") {
  setMethod(HttpRequest::Method::Post);
}

CreateServerlessDBInstanceRequest::~CreateServerlessDBInstanceRequest() {}

std::string CreateServerlessDBInstanceRequest::getCapacityUnit() const {
  return capacityUnit_;
}

void CreateServerlessDBInstanceRequest::setCapacityUnit(const std::string &capacityUnit) {
  capacityUnit_ = capacityUnit;
  setParameter(std::string("CapacityUnit"), capacityUnit);
}

long CreateServerlessDBInstanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateServerlessDBInstanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int CreateServerlessDBInstanceRequest::getDBInstanceStorage() const {
  return dBInstanceStorage_;
}

void CreateServerlessDBInstanceRequest::setDBInstanceStorage(int dBInstanceStorage) {
  dBInstanceStorage_ = dBInstanceStorage;
  setParameter(std::string("DBInstanceStorage"), std::to_string(dBInstanceStorage));
}

std::string CreateServerlessDBInstanceRequest::getClientToken() const {
  return clientToken_;
}

void CreateServerlessDBInstanceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateServerlessDBInstanceRequest::getPeriodPriceType() const {
  return periodPriceType_;
}

void CreateServerlessDBInstanceRequest::setPeriodPriceType(const std::string &periodPriceType) {
  periodPriceType_ = periodPriceType;
  setParameter(std::string("PeriodPriceType"), periodPriceType);
}

std::string CreateServerlessDBInstanceRequest::getEngineVersion() const {
  return engineVersion_;
}

void CreateServerlessDBInstanceRequest::setEngineVersion(const std::string &engineVersion) {
  engineVersion_ = engineVersion;
  setParameter(std::string("EngineVersion"), engineVersion);
}

std::string CreateServerlessDBInstanceRequest::getNetworkType() const {
  return networkType_;
}

void CreateServerlessDBInstanceRequest::setNetworkType(const std::string &networkType) {
  networkType_ = networkType;
  setParameter(std::string("NetworkType"), networkType);
}

std::string CreateServerlessDBInstanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateServerlessDBInstanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateServerlessDBInstanceRequest::getStorageEngine() const {
  return storageEngine_;
}

void CreateServerlessDBInstanceRequest::setStorageEngine(const std::string &storageEngine) {
  storageEngine_ = storageEngine;
  setParameter(std::string("StorageEngine"), storageEngine);
}

std::string CreateServerlessDBInstanceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateServerlessDBInstanceRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateServerlessDBInstanceRequest::getSecurityToken() const {
  return securityToken_;
}

void CreateServerlessDBInstanceRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string CreateServerlessDBInstanceRequest::getRegionId() const {
  return regionId_;
}

void CreateServerlessDBInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateServerlessDBInstanceRequest::getEngine() const {
  return engine_;
}

void CreateServerlessDBInstanceRequest::setEngine(const std::string &engine) {
  engine_ = engine;
  setParameter(std::string("Engine"), engine);
}

std::string CreateServerlessDBInstanceRequest::getDBInstanceDescription() const {
  return dBInstanceDescription_;
}

void CreateServerlessDBInstanceRequest::setDBInstanceDescription(const std::string &dBInstanceDescription) {
  dBInstanceDescription_ = dBInstanceDescription;
  setParameter(std::string("DBInstanceDescription"), dBInstanceDescription);
}

int CreateServerlessDBInstanceRequest::getPeriod() const {
  return period_;
}

void CreateServerlessDBInstanceRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

std::string CreateServerlessDBInstanceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateServerlessDBInstanceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateServerlessDBInstanceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateServerlessDBInstanceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateServerlessDBInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void CreateServerlessDBInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateServerlessDBInstanceRequest::getSecurityIPList() const {
  return securityIPList_;
}

void CreateServerlessDBInstanceRequest::setSecurityIPList(const std::string &securityIPList) {
  securityIPList_ = securityIPList;
  setParameter(std::string("SecurityIPList"), securityIPList);
}

std::string CreateServerlessDBInstanceRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateServerlessDBInstanceRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string CreateServerlessDBInstanceRequest::getAccountPassword() const {
  return accountPassword_;
}

void CreateServerlessDBInstanceRequest::setAccountPassword(const std::string &accountPassword) {
  accountPassword_ = accountPassword;
  setParameter(std::string("AccountPassword"), accountPassword);
}

std::string CreateServerlessDBInstanceRequest::getAutoRenew() const {
  return autoRenew_;
}

void CreateServerlessDBInstanceRequest::setAutoRenew(const std::string &autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew);
}

std::string CreateServerlessDBInstanceRequest::getVpcId() const {
  return vpcId_;
}

void CreateServerlessDBInstanceRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string CreateServerlessDBInstanceRequest::getZoneId() const {
  return zoneId_;
}

void CreateServerlessDBInstanceRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string CreateServerlessDBInstanceRequest::getChargeType() const {
  return chargeType_;
}

void CreateServerlessDBInstanceRequest::setChargeType(const std::string &chargeType) {
  chargeType_ = chargeType;
  setParameter(std::string("ChargeType"), chargeType);
}

