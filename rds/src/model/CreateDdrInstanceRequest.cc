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

#include <alibabacloud/rds/model/CreateDdrInstanceRequest.h>

using AlibabaCloud::Rds::Model::CreateDdrInstanceRequest;

CreateDdrInstanceRequest::CreateDdrInstanceRequest()
    : RpcServiceRequest("rds", "2014-08-15", "CreateDdrInstance") {
  setMethod(HttpRequest::Method::Post);
}

CreateDdrInstanceRequest::~CreateDdrInstanceRequest() {}

long CreateDdrInstanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateDdrInstanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int CreateDdrInstanceRequest::getDBInstanceStorage() const {
  return dBInstanceStorage_;
}

void CreateDdrInstanceRequest::setDBInstanceStorage(int dBInstanceStorage) {
  dBInstanceStorage_ = dBInstanceStorage;
  setParameter(std::string("DBInstanceStorage"), std::to_string(dBInstanceStorage));
}

std::string CreateDdrInstanceRequest::getSystemDBCharset() const {
  return systemDBCharset_;
}

void CreateDdrInstanceRequest::setSystemDBCharset(const std::string &systemDBCharset) {
  systemDBCharset_ = systemDBCharset;
  setParameter(std::string("SystemDBCharset"), systemDBCharset);
}

std::string CreateDdrInstanceRequest::getBinlogRole() const {
  return binlogRole_;
}

void CreateDdrInstanceRequest::setBinlogRole(const std::string &binlogRole) {
  binlogRole_ = binlogRole;
  setParameter(std::string("BinlogRole"), binlogRole);
}

std::string CreateDdrInstanceRequest::getEngineVersion() const {
  return engineVersion_;
}

void CreateDdrInstanceRequest::setEngineVersion(const std::string &engineVersion) {
  engineVersion_ = engineVersion;
  setParameter(std::string("EngineVersion"), engineVersion);
}

std::string CreateDdrInstanceRequest::getUserBakSetURL() const {
  return userBakSetURL_;
}

void CreateDdrInstanceRequest::setUserBakSetURL(const std::string &userBakSetURL) {
  userBakSetURL_ = userBakSetURL;
  setParameter(std::string("UserBakSetURL"), userBakSetURL);
}

std::string CreateDdrInstanceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateDdrInstanceRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateDdrInstanceRequest::getDBInstanceDescription() const {
  return dBInstanceDescription_;
}

void CreateDdrInstanceRequest::setDBInstanceDescription(const std::string &dBInstanceDescription) {
  dBInstanceDescription_ = dBInstanceDescription;
  setParameter(std::string("DBInstanceDescription"), dBInstanceDescription);
}

std::string CreateDdrInstanceRequest::getBackupSetRegion() const {
  return backupSetRegion_;
}

void CreateDdrInstanceRequest::setBackupSetRegion(const std::string &backupSetRegion) {
  backupSetRegion_ = backupSetRegion;
  setParameter(std::string("BackupSetRegion"), backupSetRegion);
}

std::string CreateDdrInstanceRequest::getPeriod() const {
  return period_;
}

void CreateDdrInstanceRequest::setPeriod(const std::string &period) {
  period_ = period;
  setParameter(std::string("Period"), period);
}

std::string CreateDdrInstanceRequest::getBackupSetId() const {
  return backupSetId_;
}

void CreateDdrInstanceRequest::setBackupSetId(const std::string &backupSetId) {
  backupSetId_ = backupSetId;
  setParameter(std::string("BackupSetId"), backupSetId);
}

std::string CreateDdrInstanceRequest::getEncryptionKey() const {
  return encryptionKey_;
}

void CreateDdrInstanceRequest::setEncryptionKey(const std::string &encryptionKey) {
  encryptionKey_ = encryptionKey;
  setParameter(std::string("EncryptionKey"), encryptionKey);
}

long CreateDdrInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void CreateDdrInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateDdrInstanceRequest::getDBInstanceClass() const {
  return dBInstanceClass_;
}

void CreateDdrInstanceRequest::setDBInstanceClass(const std::string &dBInstanceClass) {
  dBInstanceClass_ = dBInstanceClass;
  setParameter(std::string("DBInstanceClass"), dBInstanceClass);
}

std::string CreateDdrInstanceRequest::getSecurityIPList() const {
  return securityIPList_;
}

void CreateDdrInstanceRequest::setSecurityIPList(const std::string &securityIPList) {
  securityIPList_ = securityIPList;
  setParameter(std::string("SecurityIPList"), securityIPList);
}

std::string CreateDdrInstanceRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateDdrInstanceRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string CreateDdrInstanceRequest::getPrivateIpAddress() const {
  return privateIpAddress_;
}

void CreateDdrInstanceRequest::setPrivateIpAddress(const std::string &privateIpAddress) {
  privateIpAddress_ = privateIpAddress;
  setParameter(std::string("PrivateIpAddress"), privateIpAddress);
}

std::string CreateDdrInstanceRequest::getBinlogName() const {
  return binlogName_;
}

void CreateDdrInstanceRequest::setBinlogName(const std::string &binlogName) {
  binlogName_ = binlogName;
  setParameter(std::string("BinlogName"), binlogName);
}

std::string CreateDdrInstanceRequest::getRoleARN() const {
  return roleARN_;
}

void CreateDdrInstanceRequest::setRoleARN(const std::string &roleARN) {
  roleARN_ = roleARN;
  setParameter(std::string("RoleARN"), roleARN);
}

std::string CreateDdrInstanceRequest::getTunnelId() const {
  return tunnelId_;
}

void CreateDdrInstanceRequest::setTunnelId(const std::string &tunnelId) {
  tunnelId_ = tunnelId;
  setParameter(std::string("TunnelId"), tunnelId);
}

std::string CreateDdrInstanceRequest::getZoneId() const {
  return zoneId_;
}

void CreateDdrInstanceRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string CreateDdrInstanceRequest::getInstanceNetworkType() const {
  return instanceNetworkType_;
}

void CreateDdrInstanceRequest::setInstanceNetworkType(const std::string &instanceNetworkType) {
  instanceNetworkType_ = instanceNetworkType;
  setParameter(std::string("InstanceNetworkType"), instanceNetworkType);
}

std::string CreateDdrInstanceRequest::getConnectionMode() const {
  return connectionMode_;
}

void CreateDdrInstanceRequest::setConnectionMode(const std::string &connectionMode) {
  connectionMode_ = connectionMode;
  setParameter(std::string("ConnectionMode"), connectionMode);
}

std::string CreateDdrInstanceRequest::getSourceDBInstanceName() const {
  return sourceDBInstanceName_;
}

void CreateDdrInstanceRequest::setSourceDBInstanceName(const std::string &sourceDBInstanceName) {
  sourceDBInstanceName_ = sourceDBInstanceName;
  setParameter(std::string("SourceDBInstanceName"), sourceDBInstanceName);
}

std::string CreateDdrInstanceRequest::getClientToken() const {
  return clientToken_;
}

void CreateDdrInstanceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateDdrInstanceRequest::getHostType() const {
  return hostType_;
}

void CreateDdrInstanceRequest::setHostType(const std::string &hostType) {
  hostType_ = hostType;
  setParameter(std::string("HostType"), hostType);
}

std::string CreateDdrInstanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateDdrInstanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateDdrInstanceRequest::getRegionId() const {
  return regionId_;
}

void CreateDdrInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateDdrInstanceRequest::getEngine() const {
  return engine_;
}

void CreateDdrInstanceRequest::setEngine(const std::string &engine) {
  engine_ = engine;
  setParameter(std::string("Engine"), engine);
}

std::string CreateDdrInstanceRequest::getDBInstanceStorageType() const {
  return dBInstanceStorageType_;
}

void CreateDdrInstanceRequest::setDBInstanceStorageType(const std::string &dBInstanceStorageType) {
  dBInstanceStorageType_ = dBInstanceStorageType;
  setParameter(std::string("DBInstanceStorageType"), dBInstanceStorageType);
}

std::string CreateDdrInstanceRequest::getDBInstanceNetType() const {
  return dBInstanceNetType_;
}

void CreateDdrInstanceRequest::setDBInstanceNetType(const std::string &dBInstanceNetType) {
  dBInstanceNetType_ = dBInstanceNetType;
  setParameter(std::string("DBInstanceNetType"), dBInstanceNetType);
}

std::string CreateDdrInstanceRequest::getBackupSetType() const {
  return backupSetType_;
}

void CreateDdrInstanceRequest::setBackupSetType(const std::string &backupSetType) {
  backupSetType_ = backupSetType;
  setParameter(std::string("BackupSetType"), backupSetType);
}

std::string CreateDdrInstanceRequest::getRestoreTime() const {
  return restoreTime_;
}

void CreateDdrInstanceRequest::setRestoreTime(const std::string &restoreTime) {
  restoreTime_ = restoreTime;
  setParameter(std::string("RestoreTime"), restoreTime);
}

std::string CreateDdrInstanceRequest::getBakSetName() const {
  return bakSetName_;
}

void CreateDdrInstanceRequest::setBakSetName(const std::string &bakSetName) {
  bakSetName_ = bakSetName;
  setParameter(std::string("BakSetName"), bakSetName);
}

std::string CreateDdrInstanceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateDdrInstanceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateDdrInstanceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateDdrInstanceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string CreateDdrInstanceRequest::getUsedTime() const {
  return usedTime_;
}

void CreateDdrInstanceRequest::setUsedTime(const std::string &usedTime) {
  usedTime_ = usedTime;
  setParameter(std::string("UsedTime"), usedTime);
}

std::string CreateDdrInstanceRequest::getBinlogPosition() const {
  return binlogPosition_;
}

void CreateDdrInstanceRequest::setBinlogPosition(const std::string &binlogPosition) {
  binlogPosition_ = binlogPosition;
  setParameter(std::string("BinlogPosition"), binlogPosition);
}

std::string CreateDdrInstanceRequest::getRestoreType() const {
  return restoreType_;
}

void CreateDdrInstanceRequest::setRestoreType(const std::string &restoreType) {
  restoreType_ = restoreType;
  setParameter(std::string("RestoreType"), restoreType);
}

std::string CreateDdrInstanceRequest::getVPCId() const {
  return vPCId_;
}

void CreateDdrInstanceRequest::setVPCId(const std::string &vPCId) {
  vPCId_ = vPCId;
  setParameter(std::string("VPCId"), vPCId);
}

std::string CreateDdrInstanceRequest::getPayType() const {
  return payType_;
}

void CreateDdrInstanceRequest::setPayType(const std::string &payType) {
  payType_ = payType;
  setParameter(std::string("PayType"), payType);
}

std::string CreateDdrInstanceRequest::getSourceRegion() const {
  return sourceRegion_;
}

void CreateDdrInstanceRequest::setSourceRegion(const std::string &sourceRegion) {
  sourceRegion_ = sourceRegion;
  setParameter(std::string("SourceRegion"), sourceRegion);
}

