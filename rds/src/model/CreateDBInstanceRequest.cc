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

#include <alibabacloud/rds/model/CreateDBInstanceRequest.h>

using AlibabaCloud::Rds::Model::CreateDBInstanceRequest;

CreateDBInstanceRequest::CreateDBInstanceRequest()
    : RpcServiceRequest("rds", "2014-08-15", "CreateDBInstance") {
  setMethod(HttpRequest::Method::Post);
}

CreateDBInstanceRequest::~CreateDBInstanceRequest() {}

std::string CreateDBInstanceRequest::getDBParamGroupId() const {
  return dBParamGroupId_;
}

void CreateDBInstanceRequest::setDBParamGroupId(const std::string &dBParamGroupId) {
  dBParamGroupId_ = dBParamGroupId;
  setParameter(std::string("DBParamGroupId"), dBParamGroupId);
}

std::string CreateDBInstanceRequest::getBabelfishConfig() const {
  return babelfishConfig_;
}

void CreateDBInstanceRequest::setBabelfishConfig(const std::string &babelfishConfig) {
  babelfishConfig_ = babelfishConfig;
  setParameter(std::string("BabelfishConfig"), babelfishConfig);
}

long CreateDBInstanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateDBInstanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int CreateDBInstanceRequest::getDBInstanceStorage() const {
  return dBInstanceStorage_;
}

void CreateDBInstanceRequest::setDBInstanceStorage(int dBInstanceStorage) {
  dBInstanceStorage_ = dBInstanceStorage;
  setParameter(std::string("DBInstanceStorage"), std::to_string(dBInstanceStorage));
}

std::string CreateDBInstanceRequest::getSystemDBCharset() const {
  return systemDBCharset_;
}

void CreateDBInstanceRequest::setSystemDBCharset(const std::string &systemDBCharset) {
  systemDBCharset_ = systemDBCharset;
  setParameter(std::string("SystemDBCharset"), systemDBCharset);
}

std::string CreateDBInstanceRequest::getConnectionString() const {
  return connectionString_;
}

void CreateDBInstanceRequest::setConnectionString(const std::string &connectionString) {
  connectionString_ = connectionString;
  setParameter(std::string("ConnectionString"), connectionString);
}

bool CreateDBInstanceRequest::getAutoCreateProxy() const {
  return autoCreateProxy_;
}

void CreateDBInstanceRequest::setAutoCreateProxy(bool autoCreateProxy) {
  autoCreateProxy_ = autoCreateProxy;
  setParameter(std::string("AutoCreateProxy"), autoCreateProxy ? "true" : "false");
}

std::string CreateDBInstanceRequest::getOptimizedWrites() const {
  return optimizedWrites_;
}

void CreateDBInstanceRequest::setOptimizedWrites(const std::string &optimizedWrites) {
  optimizedWrites_ = optimizedWrites;
  setParameter(std::string("OptimizedWrites"), optimizedWrites);
}

std::string CreateDBInstanceRequest::getEngineVersion() const {
  return engineVersion_;
}

void CreateDBInstanceRequest::setEngineVersion(const std::string &engineVersion) {
  engineVersion_ = engineVersion;
  setParameter(std::string("EngineVersion"), engineVersion);
}

bool CreateDBInstanceRequest::getDeletionProtection() const {
  return deletionProtection_;
}

void CreateDBInstanceRequest::setDeletionProtection(bool deletionProtection) {
  deletionProtection_ = deletionProtection;
  setParameter(std::string("DeletionProtection"), deletionProtection ? "true" : "false");
}

std::string CreateDBInstanceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateDBInstanceRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateDBInstanceRequest::getTargetDedicatedHostIdForMaster() const {
  return targetDedicatedHostIdForMaster_;
}

void CreateDBInstanceRequest::setTargetDedicatedHostIdForMaster(const std::string &targetDedicatedHostIdForMaster) {
  targetDedicatedHostIdForMaster_ = targetDedicatedHostIdForMaster;
  setParameter(std::string("TargetDedicatedHostIdForMaster"), targetDedicatedHostIdForMaster);
}

std::string CreateDBInstanceRequest::getDBInstanceDescription() const {
  return dBInstanceDescription_;
}

void CreateDBInstanceRequest::setDBInstanceDescription(const std::string &dBInstanceDescription) {
  dBInstanceDescription_ = dBInstanceDescription;
  setParameter(std::string("DBInstanceDescription"), dBInstanceDescription);
}

std::vector<CreateDBInstanceRequest::Tag> CreateDBInstanceRequest::getTag() const {
  return tag_;
}

void CreateDBInstanceRequest::setTag(const std::vector<CreateDBInstanceRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string CreateDBInstanceRequest::getBusinessInfo() const {
  return businessInfo_;
}

void CreateDBInstanceRequest::setBusinessInfo(const std::string &businessInfo) {
  businessInfo_ = businessInfo;
  setParameter(std::string("BusinessInfo"), businessInfo);
}

std::string CreateDBInstanceRequest::getWhitelistTemplateList() const {
  return whitelistTemplateList_;
}

void CreateDBInstanceRequest::setWhitelistTemplateList(const std::string &whitelistTemplateList) {
  whitelistTemplateList_ = whitelistTemplateList;
  setParameter(std::string("WhitelistTemplateList"), whitelistTemplateList);
}

std::string CreateDBInstanceRequest::getPeriod() const {
  return period_;
}

void CreateDBInstanceRequest::setPeriod(const std::string &period) {
  period_ = period;
  setParameter(std::string("Period"), period);
}

bool CreateDBInstanceRequest::getDryRun() const {
  return dryRun_;
}

void CreateDBInstanceRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateDBInstanceRequest::getBackupId() const {
  return backupId_;
}

void CreateDBInstanceRequest::setBackupId(const std::string &backupId) {
  backupId_ = backupId;
  setParameter(std::string("BackupId"), backupId);
}

std::string CreateDBInstanceRequest::getEncryptionKey() const {
  return encryptionKey_;
}

void CreateDBInstanceRequest::setEncryptionKey(const std::string &encryptionKey) {
  encryptionKey_ = encryptionKey;
  setParameter(std::string("EncryptionKey"), encryptionKey);
}

long CreateDBInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void CreateDBInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateDBInstanceRequest::getDBInstanceClass() const {
  return dBInstanceClass_;
}

void CreateDBInstanceRequest::setDBInstanceClass(const std::string &dBInstanceClass) {
  dBInstanceClass_ = dBInstanceClass;
  setParameter(std::string("DBInstanceClass"), dBInstanceClass);
}

std::string CreateDBInstanceRequest::getSecurityIPList() const {
  return securityIPList_;
}

void CreateDBInstanceRequest::setSecurityIPList(const std::string &securityIPList) {
  securityIPList_ = securityIPList;
  setParameter(std::string("SecurityIPList"), securityIPList);
}

std::string CreateDBInstanceRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateDBInstanceRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string CreateDBInstanceRequest::getPrivateIpAddress() const {
  return privateIpAddress_;
}

void CreateDBInstanceRequest::setPrivateIpAddress(const std::string &privateIpAddress) {
  privateIpAddress_ = privateIpAddress;
  setParameter(std::string("PrivateIpAddress"), privateIpAddress);
}

std::string CreateDBInstanceRequest::getTargetDedicatedHostIdForLog() const {
  return targetDedicatedHostIdForLog_;
}

void CreateDBInstanceRequest::setTargetDedicatedHostIdForLog(const std::string &targetDedicatedHostIdForLog) {
  targetDedicatedHostIdForLog_ = targetDedicatedHostIdForLog;
  setParameter(std::string("TargetDedicatedHostIdForLog"), targetDedicatedHostIdForLog);
}

std::string CreateDBInstanceRequest::getAutoRenew() const {
  return autoRenew_;
}

void CreateDBInstanceRequest::setAutoRenew(const std::string &autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew);
}

std::string CreateDBInstanceRequest::getPort() const {
  return port_;
}

void CreateDBInstanceRequest::setPort(const std::string &port) {
  port_ = port;
  setParameter(std::string("Port"), port);
}

std::string CreateDBInstanceRequest::getRoleARN() const {
  return roleARN_;
}

void CreateDBInstanceRequest::setRoleARN(const std::string &roleARN) {
  roleARN_ = roleARN;
  setParameter(std::string("RoleARN"), roleARN);
}

std::string CreateDBInstanceRequest::getPromotionCode() const {
  return promotionCode_;
}

void CreateDBInstanceRequest::setPromotionCode(const std::string &promotionCode) {
  promotionCode_ = promotionCode;
  setParameter(std::string("PromotionCode"), promotionCode);
}

std::string CreateDBInstanceRequest::getTunnelId() const {
  return tunnelId_;
}

void CreateDBInstanceRequest::setTunnelId(const std::string &tunnelId) {
  tunnelId_ = tunnelId;
  setParameter(std::string("TunnelId"), tunnelId);
}

std::string CreateDBInstanceRequest::getZoneId() const {
  return zoneId_;
}

void CreateDBInstanceRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string CreateDBInstanceRequest::getStorageAutoScale() const {
  return storageAutoScale_;
}

void CreateDBInstanceRequest::setStorageAutoScale(const std::string &storageAutoScale) {
  storageAutoScale_ = storageAutoScale;
  setParameter(std::string("StorageAutoScale"), storageAutoScale);
}

std::string CreateDBInstanceRequest::getInstanceNetworkType() const {
  return instanceNetworkType_;
}

void CreateDBInstanceRequest::setInstanceNetworkType(const std::string &instanceNetworkType) {
  instanceNetworkType_ = instanceNetworkType;
  setParameter(std::string("InstanceNetworkType"), instanceNetworkType);
}

std::string CreateDBInstanceRequest::getConnectionMode() const {
  return connectionMode_;
}

void CreateDBInstanceRequest::setConnectionMode(const std::string &connectionMode) {
  connectionMode_ = connectionMode;
  setParameter(std::string("ConnectionMode"), connectionMode);
}

std::string CreateDBInstanceRequest::getClientToken() const {
  return clientToken_;
}

void CreateDBInstanceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateDBInstanceRequest::getTargetDedicatedHostIdForSlave() const {
  return targetDedicatedHostIdForSlave_;
}

void CreateDBInstanceRequest::setTargetDedicatedHostIdForSlave(const std::string &targetDedicatedHostIdForSlave) {
  targetDedicatedHostIdForSlave_ = targetDedicatedHostIdForSlave;
  setParameter(std::string("TargetDedicatedHostIdForSlave"), targetDedicatedHostIdForSlave);
}

bool CreateDBInstanceRequest::getExternalReplication() const {
  return externalReplication_;
}

void CreateDBInstanceRequest::setExternalReplication(bool externalReplication) {
  externalReplication_ = externalReplication;
  setParameter(std::string("ExternalReplication"), externalReplication ? "true" : "false");
}

std::string CreateDBInstanceRequest::getZoneIdSlave1() const {
  return zoneIdSlave1_;
}

void CreateDBInstanceRequest::setZoneIdSlave1(const std::string &zoneIdSlave1) {
  zoneIdSlave1_ = zoneIdSlave1;
  setParameter(std::string("ZoneIdSlave1"), zoneIdSlave1);
}

std::string CreateDBInstanceRequest::getZoneIdSlave2() const {
  return zoneIdSlave2_;
}

void CreateDBInstanceRequest::setZoneIdSlave2(const std::string &zoneIdSlave2) {
  zoneIdSlave2_ = zoneIdSlave2;
  setParameter(std::string("ZoneIdSlave2"), zoneIdSlave2);
}

bool CreateDBInstanceRequest::getAutoUseCoupon() const {
  return autoUseCoupon_;
}

void CreateDBInstanceRequest::setAutoUseCoupon(bool autoUseCoupon) {
  autoUseCoupon_ = autoUseCoupon;
  setParameter(std::string("AutoUseCoupon"), autoUseCoupon ? "true" : "false");
}

std::string CreateDBInstanceRequest::getDBIsIgnoreCase() const {
  return dBIsIgnoreCase_;
}

void CreateDBInstanceRequest::setDBIsIgnoreCase(const std::string &dBIsIgnoreCase) {
  dBIsIgnoreCase_ = dBIsIgnoreCase;
  setParameter(std::string("DBIsIgnoreCase"), dBIsIgnoreCase);
}

std::string CreateDBInstanceRequest::getIoAccelerationEnabled() const {
  return ioAccelerationEnabled_;
}

void CreateDBInstanceRequest::setIoAccelerationEnabled(const std::string &ioAccelerationEnabled) {
  ioAccelerationEnabled_ = ioAccelerationEnabled;
  setParameter(std::string("IoAccelerationEnabled"), ioAccelerationEnabled);
}

bool CreateDBInstanceRequest::getColdDataEnabled() const {
  return coldDataEnabled_;
}

void CreateDBInstanceRequest::setColdDataEnabled(bool coldDataEnabled) {
  coldDataEnabled_ = coldDataEnabled;
  setParameter(std::string("ColdDataEnabled"), coldDataEnabled ? "true" : "false");
}

std::string CreateDBInstanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateDBInstanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateDBInstanceRequest::getRegionId() const {
  return regionId_;
}

void CreateDBInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateDBInstanceRequest::getEngine() const {
  return engine_;
}

void CreateDBInstanceRequest::setEngine(const std::string &engine) {
  engine_ = engine;
  setParameter(std::string("Engine"), engine);
}

std::string CreateDBInstanceRequest::getDBTimeZone() const {
  return dBTimeZone_;
}

void CreateDBInstanceRequest::setDBTimeZone(const std::string &dBTimeZone) {
  dBTimeZone_ = dBTimeZone;
  setParameter(std::string("DBTimeZone"), dBTimeZone);
}

std::string CreateDBInstanceRequest::getDBInstanceStorageType() const {
  return dBInstanceStorageType_;
}

void CreateDBInstanceRequest::setDBInstanceStorageType(const std::string &dBInstanceStorageType) {
  dBInstanceStorageType_ = dBInstanceStorageType;
  setParameter(std::string("DBInstanceStorageType"), dBInstanceStorageType);
}

std::string CreateDBInstanceRequest::getDedicatedHostGroupId() const {
  return dedicatedHostGroupId_;
}

void CreateDBInstanceRequest::setDedicatedHostGroupId(const std::string &dedicatedHostGroupId) {
  dedicatedHostGroupId_ = dedicatedHostGroupId;
  setParameter(std::string("DedicatedHostGroupId"), dedicatedHostGroupId);
}

std::string CreateDBInstanceRequest::getCreateStrategy() const {
  return createStrategy_;
}

void CreateDBInstanceRequest::setCreateStrategy(const std::string &createStrategy) {
  createStrategy_ = createStrategy;
  setParameter(std::string("CreateStrategy"), createStrategy);
}

std::string CreateDBInstanceRequest::getDBInstanceNetType() const {
  return dBInstanceNetType_;
}

void CreateDBInstanceRequest::setDBInstanceNetType(const std::string &dBInstanceNetType) {
  dBInstanceNetType_ = dBInstanceNetType;
  setParameter(std::string("DBInstanceNetType"), dBInstanceNetType);
}

int CreateDBInstanceRequest::getAmount() const {
  return amount_;
}

void CreateDBInstanceRequest::setAmount(int amount) {
  amount_ = amount;
  setParameter(std::string("Amount"), std::to_string(amount));
}

bool CreateDBInstanceRequest::getAutoPay() const {
  return autoPay_;
}

void CreateDBInstanceRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

CreateDBInstanceRequest::ServerlessConfig CreateDBInstanceRequest::getServerlessConfig() const {
  return serverlessConfig_;
}

void CreateDBInstanceRequest::setServerlessConfig(const CreateDBInstanceRequest::ServerlessConfig &serverlessConfig) {
  serverlessConfig_ = serverlessConfig;
  setParameter(std::string("ServerlessConfig") + ".MinCapacity", std::to_string(serverlessConfig.minCapacity));
  setParameter(std::string("ServerlessConfig") + ".MaxCapacity", std::to_string(serverlessConfig.maxCapacity));
  setParameter(std::string("ServerlessConfig") + ".AutoPause", serverlessConfig.autoPause ? "true" : "false");
  setParameter(std::string("ServerlessConfig") + ".SwitchForce", serverlessConfig.switchForce ? "true" : "false");
}

std::string CreateDBInstanceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateDBInstanceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateDBInstanceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateDBInstanceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string CreateDBInstanceRequest::getUsedTime() const {
  return usedTime_;
}

void CreateDBInstanceRequest::setUsedTime(const std::string &usedTime) {
  usedTime_ = usedTime;
  setParameter(std::string("UsedTime"), usedTime);
}

bool CreateDBInstanceRequest::getBurstingEnabled() const {
  return burstingEnabled_;
}

void CreateDBInstanceRequest::setBurstingEnabled(bool burstingEnabled) {
  burstingEnabled_ = burstingEnabled;
  setParameter(std::string("BurstingEnabled"), burstingEnabled ? "true" : "false");
}

std::string CreateDBInstanceRequest::getTargetMinorVersion() const {
  return targetMinorVersion_;
}

void CreateDBInstanceRequest::setTargetMinorVersion(const std::string &targetMinorVersion) {
  targetMinorVersion_ = targetMinorVersion;
  setParameter(std::string("TargetMinorVersion"), targetMinorVersion);
}

std::string CreateDBInstanceRequest::getUserBackupId() const {
  return userBackupId_;
}

void CreateDBInstanceRequest::setUserBackupId(const std::string &userBackupId) {
  userBackupId_ = userBackupId;
  setParameter(std::string("UserBackupId"), userBackupId);
}

int CreateDBInstanceRequest::getStorageUpperBound() const {
  return storageUpperBound_;
}

void CreateDBInstanceRequest::setStorageUpperBound(int storageUpperBound) {
  storageUpperBound_ = storageUpperBound;
  setParameter(std::string("StorageUpperBound"), std::to_string(storageUpperBound));
}

int CreateDBInstanceRequest::getStorageThreshold() const {
  return storageThreshold_;
}

void CreateDBInstanceRequest::setStorageThreshold(int storageThreshold) {
  storageThreshold_ = storageThreshold;
  setParameter(std::string("StorageThreshold"), std::to_string(storageThreshold));
}

std::string CreateDBInstanceRequest::getVPCId() const {
  return vPCId_;
}

void CreateDBInstanceRequest::setVPCId(const std::string &vPCId) {
  vPCId_ = vPCId;
  setParameter(std::string("VPCId"), vPCId);
}

std::string CreateDBInstanceRequest::getCategory() const {
  return category_;
}

void CreateDBInstanceRequest::setCategory(const std::string &category) {
  category_ = category;
  setParameter(std::string("Category"), category);
}

std::string CreateDBInstanceRequest::getPayType() const {
  return payType_;
}

void CreateDBInstanceRequest::setPayType(const std::string &payType) {
  payType_ = payType;
  setParameter(std::string("PayType"), payType);
}

std::string CreateDBInstanceRequest::getBpeEnabled() const {
  return bpeEnabled_;
}

void CreateDBInstanceRequest::setBpeEnabled(const std::string &bpeEnabled) {
  bpeEnabled_ = bpeEnabled;
  setParameter(std::string("BpeEnabled"), bpeEnabled);
}

