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

#include <alibabacloud/r-kvstore/model/CreateInstanceRequest.h>

using AlibabaCloud::R_kvstore::Model::CreateInstanceRequest;

CreateInstanceRequest::CreateInstanceRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "CreateInstance") {
  setMethod(HttpRequest::Method::Post);
}

CreateInstanceRequest::~CreateInstanceRequest() {}

long CreateInstanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateInstanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateInstanceRequest::getConnectionStringPrefix() const {
  return connectionStringPrefix_;
}

void CreateInstanceRequest::setConnectionStringPrefix(const std::string &connectionStringPrefix) {
  connectionStringPrefix_ = connectionStringPrefix;
  setParameter(std::string("ConnectionStringPrefix"), connectionStringPrefix);
}

std::string CreateInstanceRequest::getSecondaryZoneId() const {
  return secondaryZoneId_;
}

void CreateInstanceRequest::setSecondaryZoneId(const std::string &secondaryZoneId) {
  secondaryZoneId_ = secondaryZoneId;
  setParameter(std::string("SecondaryZoneId"), secondaryZoneId);
}

int CreateInstanceRequest::getSlaveReadOnlyCount() const {
  return slaveReadOnlyCount_;
}

void CreateInstanceRequest::setSlaveReadOnlyCount(int slaveReadOnlyCount) {
  slaveReadOnlyCount_ = slaveReadOnlyCount;
  setParameter(std::string("SlaveReadOnlyCount"), std::to_string(slaveReadOnlyCount));
}

std::string CreateInstanceRequest::getCouponNo() const {
  return couponNo_;
}

void CreateInstanceRequest::setCouponNo(const std::string &couponNo) {
  couponNo_ = couponNo;
  setParameter(std::string("CouponNo"), couponNo);
}

std::string CreateInstanceRequest::getNetworkType() const {
  return networkType_;
}

void CreateInstanceRequest::setNetworkType(const std::string &networkType) {
  networkType_ = networkType;
  setParameter(std::string("NetworkType"), networkType);
}

std::string CreateInstanceRequest::getEngineVersion() const {
  return engineVersion_;
}

void CreateInstanceRequest::setEngineVersion(const std::string &engineVersion) {
  engineVersion_ = engineVersion;
  setParameter(std::string("EngineVersion"), engineVersion);
}

std::string CreateInstanceRequest::getPhysicalInstanceId() const {
  return physicalInstanceId_;
}

void CreateInstanceRequest::setPhysicalInstanceId(const std::string &physicalInstanceId) {
  physicalInstanceId_ = physicalInstanceId;
  setParameter(std::string("PhysicalInstanceId"), physicalInstanceId);
}

std::string CreateInstanceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateInstanceRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateInstanceRequest::getPassword() const {
  return password_;
}

void CreateInstanceRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

std::string CreateInstanceRequest::getSecurityToken() const {
  return securityToken_;
}

void CreateInstanceRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::vector<CreateInstanceRequest::Tag> CreateInstanceRequest::getTag() const {
  return tag_;
}

void CreateInstanceRequest::setTag(const std::vector<CreateInstanceRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string CreateInstanceRequest::getGlobalSecurityGroupIds() const {
  return globalSecurityGroupIds_;
}

void CreateInstanceRequest::setGlobalSecurityGroupIds(const std::string &globalSecurityGroupIds) {
  globalSecurityGroupIds_ = globalSecurityGroupIds;
  setParameter(std::string("GlobalSecurityGroupIds"), globalSecurityGroupIds);
}

std::string CreateInstanceRequest::getBusinessInfo() const {
  return businessInfo_;
}

void CreateInstanceRequest::setBusinessInfo(const std::string &businessInfo) {
  businessInfo_ = businessInfo;
  setParameter(std::string("BusinessInfo"), businessInfo);
}

int CreateInstanceRequest::getShardCount() const {
  return shardCount_;
}

void CreateInstanceRequest::setShardCount(int shardCount) {
  shardCount_ = shardCount;
  setParameter(std::string("ShardCount"), std::to_string(shardCount));
}

std::string CreateInstanceRequest::getAutoRenewPeriod() const {
  return autoRenewPeriod_;
}

void CreateInstanceRequest::setAutoRenewPeriod(const std::string &autoRenewPeriod) {
  autoRenewPeriod_ = autoRenewPeriod;
  setParameter(std::string("AutoRenewPeriod"), autoRenewPeriod);
}

std::string CreateInstanceRequest::getPeriod() const {
  return period_;
}

void CreateInstanceRequest::setPeriod(const std::string &period) {
  period_ = period;
  setParameter(std::string("Period"), period);
}

bool CreateInstanceRequest::getDryRun() const {
  return dryRun_;
}

void CreateInstanceRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateInstanceRequest::getBackupId() const {
  return backupId_;
}

void CreateInstanceRequest::setBackupId(const std::string &backupId) {
  backupId_ = backupId;
  setParameter(std::string("BackupId"), backupId);
}

long CreateInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void CreateInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateInstanceRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateInstanceRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string CreateInstanceRequest::getPrivateIpAddress() const {
  return privateIpAddress_;
}

void CreateInstanceRequest::setPrivateIpAddress(const std::string &privateIpAddress) {
  privateIpAddress_ = privateIpAddress;
  setParameter(std::string("PrivateIpAddress"), privateIpAddress);
}

std::string CreateInstanceRequest::getInstanceName() const {
  return instanceName_;
}

void CreateInstanceRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setParameter(std::string("InstanceName"), instanceName);
}

std::string CreateInstanceRequest::getAutoRenew() const {
  return autoRenew_;
}

void CreateInstanceRequest::setAutoRenew(const std::string &autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew);
}

std::string CreateInstanceRequest::getPort() const {
  return port_;
}

void CreateInstanceRequest::setPort(const std::string &port) {
  port_ = port;
  setParameter(std::string("Port"), port);
}

std::string CreateInstanceRequest::getZoneId() const {
  return zoneId_;
}

void CreateInstanceRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

int CreateInstanceRequest::getReplicaCount() const {
  return replicaCount_;
}

void CreateInstanceRequest::setReplicaCount(int replicaCount) {
  replicaCount_ = replicaCount;
  setParameter(std::string("ReplicaCount"), std::to_string(replicaCount));
}

std::string CreateInstanceRequest::getAppendonly() const {
  return appendonly_;
}

void CreateInstanceRequest::setAppendonly(const std::string &appendonly) {
  appendonly_ = appendonly;
  setParameter(std::string("Appendonly"), appendonly);
}

std::string CreateInstanceRequest::getNodeType() const {
  return nodeType_;
}

void CreateInstanceRequest::setNodeType(const std::string &nodeType) {
  nodeType_ = nodeType;
  setParameter(std::string("NodeType"), nodeType);
}

std::string CreateInstanceRequest::getAutoUseCoupon() const {
  return autoUseCoupon_;
}

void CreateInstanceRequest::setAutoUseCoupon(const std::string &autoUseCoupon) {
  autoUseCoupon_ = autoUseCoupon;
  setParameter(std::string("AutoUseCoupon"), autoUseCoupon);
}

std::string CreateInstanceRequest::getInstanceClass() const {
  return instanceClass_;
}

void CreateInstanceRequest::setInstanceClass(const std::string &instanceClass) {
  instanceClass_ = instanceClass;
  setParameter(std::string("InstanceClass"), instanceClass);
}

std::string CreateInstanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateInstanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

long CreateInstanceRequest::getCapacity() const {
  return capacity_;
}

void CreateInstanceRequest::setCapacity(long capacity) {
  capacity_ = capacity;
  setParameter(std::string("Capacity"), std::to_string(capacity));
}

std::string CreateInstanceRequest::getRegionId() const {
  return regionId_;
}

void CreateInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateInstanceRequest::getInstanceType() const {
  return instanceType_;
}

void CreateInstanceRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string CreateInstanceRequest::getDedicatedHostGroupId() const {
  return dedicatedHostGroupId_;
}

void CreateInstanceRequest::setDedicatedHostGroupId(const std::string &dedicatedHostGroupId) {
  dedicatedHostGroupId_ = dedicatedHostGroupId;
  setParameter(std::string("DedicatedHostGroupId"), dedicatedHostGroupId);
}

std::string CreateInstanceRequest::getRestoreTime() const {
  return restoreTime_;
}

void CreateInstanceRequest::setRestoreTime(const std::string &restoreTime) {
  restoreTime_ = restoreTime;
  setParameter(std::string("RestoreTime"), restoreTime);
}

std::string CreateInstanceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateInstanceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateInstanceRequest::getSrcDBInstanceId() const {
  return srcDBInstanceId_;
}

void CreateInstanceRequest::setSrcDBInstanceId(const std::string &srcDBInstanceId) {
  srcDBInstanceId_ = srcDBInstanceId;
  setParameter(std::string("SrcDBInstanceId"), srcDBInstanceId);
}

std::string CreateInstanceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateInstanceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

bool CreateInstanceRequest::getGlobalInstance() const {
  return globalInstance_;
}

void CreateInstanceRequest::setGlobalInstance(bool globalInstance) {
  globalInstance_ = globalInstance;
  setParameter(std::string("GlobalInstance"), globalInstance ? "true" : "false");
}

std::string CreateInstanceRequest::getRecoverConfigMode() const {
  return recoverConfigMode_;
}

void CreateInstanceRequest::setRecoverConfigMode(const std::string &recoverConfigMode) {
  recoverConfigMode_ = recoverConfigMode;
  setParameter(std::string("RecoverConfigMode"), recoverConfigMode);
}

std::string CreateInstanceRequest::getToken() const {
  return token_;
}

void CreateInstanceRequest::setToken(const std::string &token) {
  token_ = token;
  setParameter(std::string("Token"), token);
}

std::string CreateInstanceRequest::getGlobalInstanceId() const {
  return globalInstanceId_;
}

void CreateInstanceRequest::setGlobalInstanceId(const std::string &globalInstanceId) {
  globalInstanceId_ = globalInstanceId;
  setParameter(std::string("GlobalInstanceId"), globalInstanceId);
}

std::string CreateInstanceRequest::getParamGroupId() const {
  return paramGroupId_;
}

void CreateInstanceRequest::setParamGroupId(const std::string &paramGroupId) {
  paramGroupId_ = paramGroupId;
  setParameter(std::string("ParamGroupId"), paramGroupId);
}

std::string CreateInstanceRequest::getVpcId() const {
  return vpcId_;
}

void CreateInstanceRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

bool CreateInstanceRequest::getDeletePhysicalInstance() const {
  return deletePhysicalInstance_;
}

void CreateInstanceRequest::setDeletePhysicalInstance(bool deletePhysicalInstance) {
  deletePhysicalInstance_ = deletePhysicalInstance;
  setParameter(std::string("DeletePhysicalInstance"), deletePhysicalInstance ? "true" : "false");
}

int CreateInstanceRequest::getReadOnlyCount() const {
  return readOnlyCount_;
}

void CreateInstanceRequest::setReadOnlyCount(int readOnlyCount) {
  readOnlyCount_ = readOnlyCount;
  setParameter(std::string("ReadOnlyCount"), std::to_string(readOnlyCount));
}

std::string CreateInstanceRequest::getChargeType() const {
  return chargeType_;
}

void CreateInstanceRequest::setChargeType(const std::string &chargeType) {
  chargeType_ = chargeType;
  setParameter(std::string("ChargeType"), chargeType);
}

std::string CreateInstanceRequest::getConfig() const {
  return config_;
}

void CreateInstanceRequest::setConfig(const std::string &config) {
  config_ = config;
  setParameter(std::string("Config"), config);
}

int CreateInstanceRequest::getSlaveReplicaCount() const {
  return slaveReplicaCount_;
}

void CreateInstanceRequest::setSlaveReplicaCount(int slaveReplicaCount) {
  slaveReplicaCount_ = slaveReplicaCount;
  setParameter(std::string("SlaveReplicaCount"), std::to_string(slaveReplicaCount));
}

std::string CreateInstanceRequest::getClusterBackupId() const {
  return clusterBackupId_;
}

void CreateInstanceRequest::setClusterBackupId(const std::string &clusterBackupId) {
  clusterBackupId_ = clusterBackupId;
  setParameter(std::string("ClusterBackupId"), clusterBackupId);
}

