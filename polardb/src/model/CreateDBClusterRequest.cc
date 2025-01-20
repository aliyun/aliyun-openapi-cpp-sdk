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

#include <alibabacloud/polardb/model/CreateDBClusterRequest.h>

using AlibabaCloud::Polardb::Model::CreateDBClusterRequest;

CreateDBClusterRequest::CreateDBClusterRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "CreateDBCluster") {
  setMethod(HttpRequest::Method::Post);
}

CreateDBClusterRequest::~CreateDBClusterRequest() {}

long CreateDBClusterRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateDBClusterRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateDBClusterRequest::getDBClusterDescription() const {
  return dBClusterDescription_;
}

void CreateDBClusterRequest::setDBClusterDescription(const std::string &dBClusterDescription) {
  dBClusterDescription_ = dBClusterDescription;
  setParameter(std::string("DBClusterDescription"), dBClusterDescription);
}

std::string CreateDBClusterRequest::getProxyClass() const {
  return proxyClass_;
}

void CreateDBClusterRequest::setProxyClass(const std::string &proxyClass) {
  proxyClass_ = proxyClass;
  setParameter(std::string("ProxyClass"), proxyClass);
}

std::string CreateDBClusterRequest::getProxyType() const {
  return proxyType_;
}

void CreateDBClusterRequest::setProxyType(const std::string &proxyType) {
  proxyType_ = proxyType;
  setParameter(std::string("ProxyType"), proxyType);
}

std::string CreateDBClusterRequest::getScaleMax() const {
  return scaleMax_;
}

void CreateDBClusterRequest::setScaleMax(const std::string &scaleMax) {
  scaleMax_ = scaleMax;
  setParameter(std::string("ScaleMax"), scaleMax);
}

std::string CreateDBClusterRequest::getStorageType() const {
  return storageType_;
}

void CreateDBClusterRequest::setStorageType(const std::string &storageType) {
  storageType_ = storageType;
  setParameter(std::string("StorageType"), storageType);
}

std::string CreateDBClusterRequest::getCreationCategory() const {
  return creationCategory_;
}

void CreateDBClusterRequest::setCreationCategory(const std::string &creationCategory) {
  creationCategory_ = creationCategory;
  setParameter(std::string("CreationCategory"), creationCategory);
}

std::string CreateDBClusterRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateDBClusterRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateDBClusterRequest::getDBNodeClass() const {
  return dBNodeClass_;
}

void CreateDBClusterRequest::setDBNodeClass(const std::string &dBNodeClass) {
  dBNodeClass_ = dBNodeClass;
  setParameter(std::string("DBNodeClass"), dBNodeClass);
}

std::string CreateDBClusterRequest::getCreationOption() const {
  return creationOption_;
}

void CreateDBClusterRequest::setCreationOption(const std::string &creationOption) {
  creationOption_ = creationOption;
  setParameter(std::string("CreationOption"), creationOption);
}

std::vector<CreateDBClusterRequest::Tag> CreateDBClusterRequest::getTag() const {
  return tag_;
}

void CreateDBClusterRequest::setTag(const std::vector<CreateDBClusterRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string CreateDBClusterRequest::getSourceResourceId() const {
  return sourceResourceId_;
}

void CreateDBClusterRequest::setSourceResourceId(const std::string &sourceResourceId) {
  sourceResourceId_ = sourceResourceId;
  setParameter(std::string("SourceResourceId"), sourceResourceId);
}

std::string CreateDBClusterRequest::getScaleMin() const {
  return scaleMin_;
}

void CreateDBClusterRequest::setScaleMin(const std::string &scaleMin) {
  scaleMin_ = scaleMin;
  setParameter(std::string("ScaleMin"), scaleMin);
}

std::string CreateDBClusterRequest::getBackupRetentionPolicyOnClusterDeletion() const {
  return backupRetentionPolicyOnClusterDeletion_;
}

void CreateDBClusterRequest::setBackupRetentionPolicyOnClusterDeletion(const std::string &backupRetentionPolicyOnClusterDeletion) {
  backupRetentionPolicyOnClusterDeletion_ = backupRetentionPolicyOnClusterDeletion;
  setParameter(std::string("BackupRetentionPolicyOnClusterDeletion"), backupRetentionPolicyOnClusterDeletion);
}

std::string CreateDBClusterRequest::getPeriod() const {
  return period_;
}

void CreateDBClusterRequest::setPeriod(const std::string &period) {
  period_ = period;
  setParameter(std::string("Period"), period);
}

long CreateDBClusterRequest::getOwnerId() const {
  return ownerId_;
}

void CreateDBClusterRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateDBClusterRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateDBClusterRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string CreateDBClusterRequest::getSecurityIPList() const {
  return securityIPList_;
}

void CreateDBClusterRequest::setSecurityIPList(const std::string &securityIPList) {
  securityIPList_ = securityIPList;
  setParameter(std::string("SecurityIPList"), securityIPList);
}

std::string CreateDBClusterRequest::getDBMinorVersion() const {
  return dBMinorVersion_;
}

void CreateDBClusterRequest::setDBMinorVersion(const std::string &dBMinorVersion) {
  dBMinorVersion_ = dBMinorVersion;
  setParameter(std::string("DBMinorVersion"), dBMinorVersion);
}

long CreateDBClusterRequest::getProvisionedIops() const {
  return provisionedIops_;
}

void CreateDBClusterRequest::setProvisionedIops(long provisionedIops) {
  provisionedIops_ = provisionedIops;
  setParameter(std::string("ProvisionedIops"), std::to_string(provisionedIops));
}

bool CreateDBClusterRequest::getAutoRenew() const {
  return autoRenew_;
}

void CreateDBClusterRequest::setAutoRenew(bool autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew ? "true" : "false");
}

std::string CreateDBClusterRequest::getHotStandbyCluster() const {
  return hotStandbyCluster_;
}

void CreateDBClusterRequest::setHotStandbyCluster(const std::string &hotStandbyCluster) {
  hotStandbyCluster_ = hotStandbyCluster;
  setParameter(std::string("HotStandbyCluster"), hotStandbyCluster);
}

std::string CreateDBClusterRequest::getStoragePayType() const {
  return storagePayType_;
}

void CreateDBClusterRequest::setStoragePayType(const std::string &storagePayType) {
  storagePayType_ = storagePayType;
  setParameter(std::string("StoragePayType"), storagePayType);
}

std::string CreateDBClusterRequest::getZoneId() const {
  return zoneId_;
}

void CreateDBClusterRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string CreateDBClusterRequest::getStorageAutoScale() const {
  return storageAutoScale_;
}

void CreateDBClusterRequest::setStorageAutoScale(const std::string &storageAutoScale) {
  storageAutoScale_ = storageAutoScale;
  setParameter(std::string("StorageAutoScale"), storageAutoScale);
}

bool CreateDBClusterRequest::getTDEStatus() const {
  return tDEStatus_;
}

void CreateDBClusterRequest::setTDEStatus(bool tDEStatus) {
  tDEStatus_ = tDEStatus;
  setParameter(std::string("TDEStatus"), tDEStatus ? "true" : "false");
}

std::string CreateDBClusterRequest::getAllowShutDown() const {
  return allowShutDown_;
}

void CreateDBClusterRequest::setAllowShutDown(const std::string &allowShutDown) {
  allowShutDown_ = allowShutDown;
  setParameter(std::string("AllowShutDown"), allowShutDown);
}

std::string CreateDBClusterRequest::getLowerCaseTableNames() const {
  return lowerCaseTableNames_;
}

void CreateDBClusterRequest::setLowerCaseTableNames(const std::string &lowerCaseTableNames) {
  lowerCaseTableNames_ = lowerCaseTableNames;
  setParameter(std::string("LowerCaseTableNames"), lowerCaseTableNames);
}

bool CreateDBClusterRequest::getStorageEncryption() const {
  return storageEncryption_;
}

void CreateDBClusterRequest::setStorageEncryption(bool storageEncryption) {
  storageEncryption_ = storageEncryption;
  setParameter(std::string("StorageEncryption"), storageEncryption ? "true" : "false");
}

std::string CreateDBClusterRequest::getScaleRoNumMax() const {
  return scaleRoNumMax_;
}

void CreateDBClusterRequest::setScaleRoNumMax(const std::string &scaleRoNumMax) {
  scaleRoNumMax_ = scaleRoNumMax;
  setParameter(std::string("ScaleRoNumMax"), scaleRoNumMax);
}

std::string CreateDBClusterRequest::getStandbyAZ() const {
  return standbyAZ_;
}

void CreateDBClusterRequest::setStandbyAZ(const std::string &standbyAZ) {
  standbyAZ_ = standbyAZ;
  setParameter(std::string("StandbyAZ"), standbyAZ);
}

std::string CreateDBClusterRequest::getClientToken() const {
  return clientToken_;
}

void CreateDBClusterRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateDBClusterRequest::getDefaultTimeZone() const {
  return defaultTimeZone_;
}

void CreateDBClusterRequest::setDefaultTimeZone(const std::string &defaultTimeZone) {
  defaultTimeZone_ = defaultTimeZone;
  setParameter(std::string("DefaultTimeZone"), defaultTimeZone);
}

std::string CreateDBClusterRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateDBClusterRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateDBClusterRequest::getClusterNetworkType() const {
  return clusterNetworkType_;
}

void CreateDBClusterRequest::setClusterNetworkType(const std::string &clusterNetworkType) {
  clusterNetworkType_ = clusterNetworkType;
  setParameter(std::string("ClusterNetworkType"), clusterNetworkType);
}

std::string CreateDBClusterRequest::getStorageEncryptionKey() const {
  return storageEncryptionKey_;
}

void CreateDBClusterRequest::setStorageEncryptionKey(const std::string &storageEncryptionKey) {
  storageEncryptionKey_ = storageEncryptionKey;
  setParameter(std::string("StorageEncryptionKey"), storageEncryptionKey);
}

std::string CreateDBClusterRequest::getParameterGroupId() const {
  return parameterGroupId_;
}

void CreateDBClusterRequest::setParameterGroupId(const std::string &parameterGroupId) {
  parameterGroupId_ = parameterGroupId;
  setParameter(std::string("ParameterGroupId"), parameterGroupId);
}

std::string CreateDBClusterRequest::getRegionId() const {
  return regionId_;
}

void CreateDBClusterRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateDBClusterRequest::getEngine() const {
  return engine_;
}

void CreateDBClusterRequest::setEngine(const std::string &engine) {
  engine_ = engine;
  setParameter(std::string("Engine"), engine);
}

std::string CreateDBClusterRequest::getGDNId() const {
  return gDNId_;
}

void CreateDBClusterRequest::setGDNId(const std::string &gDNId) {
  gDNId_ = gDNId;
  setParameter(std::string("GDNId"), gDNId);
}

std::string CreateDBClusterRequest::getLooseXEngine() const {
  return looseXEngine_;
}

void CreateDBClusterRequest::setLooseXEngine(const std::string &looseXEngine) {
  looseXEngine_ = looseXEngine;
  setParameter(std::string("LooseXEngine"), looseXEngine);
}

std::string CreateDBClusterRequest::getLoosePolarLogBin() const {
  return loosePolarLogBin_;
}

void CreateDBClusterRequest::setLoosePolarLogBin(const std::string &loosePolarLogBin) {
  loosePolarLogBin_ = loosePolarLogBin;
  setParameter(std::string("LoosePolarLogBin"), loosePolarLogBin);
}

std::string CreateDBClusterRequest::getArchitecture() const {
  return architecture_;
}

void CreateDBClusterRequest::setArchitecture(const std::string &architecture) {
  architecture_ = architecture;
  setParameter(std::string("Architecture"), architecture);
}

std::string CreateDBClusterRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateDBClusterRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateDBClusterRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateDBClusterRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string CreateDBClusterRequest::getLooseXEngineUseMemoryPct() const {
  return looseXEngineUseMemoryPct_;
}

void CreateDBClusterRequest::setLooseXEngineUseMemoryPct(const std::string &looseXEngineUseMemoryPct) {
  looseXEngineUseMemoryPct_ = looseXEngineUseMemoryPct;
  setParameter(std::string("LooseXEngineUseMemoryPct"), looseXEngineUseMemoryPct);
}

std::string CreateDBClusterRequest::getUsedTime() const {
  return usedTime_;
}

void CreateDBClusterRequest::setUsedTime(const std::string &usedTime) {
  usedTime_ = usedTime;
  setParameter(std::string("UsedTime"), usedTime);
}

std::string CreateDBClusterRequest::getBurstingEnabled() const {
  return burstingEnabled_;
}

void CreateDBClusterRequest::setBurstingEnabled(const std::string &burstingEnabled) {
  burstingEnabled_ = burstingEnabled;
  setParameter(std::string("BurstingEnabled"), burstingEnabled);
}

std::string CreateDBClusterRequest::getTargetMinorVersion() const {
  return targetMinorVersion_;
}

void CreateDBClusterRequest::setTargetMinorVersion(const std::string &targetMinorVersion) {
  targetMinorVersion_ = targetMinorVersion;
  setParameter(std::string("TargetMinorVersion"), targetMinorVersion);
}

int CreateDBClusterRequest::getDBNodeNum() const {
  return dBNodeNum_;
}

void CreateDBClusterRequest::setDBNodeNum(int dBNodeNum) {
  dBNodeNum_ = dBNodeNum;
  setParameter(std::string("DBNodeNum"), std::to_string(dBNodeNum));
}

long CreateDBClusterRequest::getStorageUpperBound() const {
  return storageUpperBound_;
}

void CreateDBClusterRequest::setStorageUpperBound(long storageUpperBound) {
  storageUpperBound_ = storageUpperBound;
  setParameter(std::string("StorageUpperBound"), std::to_string(storageUpperBound));
}

std::string CreateDBClusterRequest::getVPCId() const {
  return vPCId_;
}

void CreateDBClusterRequest::setVPCId(const std::string &vPCId) {
  vPCId_ = vPCId;
  setParameter(std::string("VPCId"), vPCId);
}

std::string CreateDBClusterRequest::getScaleRoNumMin() const {
  return scaleRoNumMin_;
}

void CreateDBClusterRequest::setScaleRoNumMin(const std::string &scaleRoNumMin) {
  scaleRoNumMin_ = scaleRoNumMin;
  setParameter(std::string("ScaleRoNumMin"), scaleRoNumMin);
}

std::string CreateDBClusterRequest::getDBType() const {
  return dBType_;
}

void CreateDBClusterRequest::setDBType(const std::string &dBType) {
  dBType_ = dBType;
  setParameter(std::string("DBType"), dBType);
}

std::string CreateDBClusterRequest::getDBVersion() const {
  return dBVersion_;
}

void CreateDBClusterRequest::setDBVersion(const std::string &dBVersion) {
  dBVersion_ = dBVersion;
  setParameter(std::string("DBVersion"), dBVersion);
}

std::string CreateDBClusterRequest::getStrictConsistency() const {
  return strictConsistency_;
}

void CreateDBClusterRequest::setStrictConsistency(const std::string &strictConsistency) {
  strictConsistency_ = strictConsistency;
  setParameter(std::string("StrictConsistency"), strictConsistency);
}

std::string CreateDBClusterRequest::getCloneDataPoint() const {
  return cloneDataPoint_;
}

void CreateDBClusterRequest::setCloneDataPoint(const std::string &cloneDataPoint) {
  cloneDataPoint_ = cloneDataPoint;
  setParameter(std::string("CloneDataPoint"), cloneDataPoint);
}

std::string CreateDBClusterRequest::getPayType() const {
  return payType_;
}

void CreateDBClusterRequest::setPayType(const std::string &payType) {
  payType_ = payType;
  setParameter(std::string("PayType"), payType);
}

long CreateDBClusterRequest::getStorageSpace() const {
  return storageSpace_;
}

void CreateDBClusterRequest::setStorageSpace(long storageSpace) {
  storageSpace_ = storageSpace;
  setParameter(std::string("StorageSpace"), std::to_string(storageSpace));
}

std::string CreateDBClusterRequest::getServerlessType() const {
  return serverlessType_;
}

void CreateDBClusterRequest::setServerlessType(const std::string &serverlessType) {
  serverlessType_ = serverlessType;
  setParameter(std::string("ServerlessType"), serverlessType);
}

