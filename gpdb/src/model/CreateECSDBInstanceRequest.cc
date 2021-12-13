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

#include <alibabacloud/gpdb/model/CreateECSDBInstanceRequest.h>

using AlibabaCloud::Gpdb::Model::CreateECSDBInstanceRequest;

CreateECSDBInstanceRequest::CreateECSDBInstanceRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "CreateECSDBInstance") {
  setMethod(HttpRequest::Method::Post);
}

CreateECSDBInstanceRequest::~CreateECSDBInstanceRequest() {}

std::string CreateECSDBInstanceRequest::getEngineVersion() const {
  return engineVersion_;
}

void CreateECSDBInstanceRequest::setEngineVersion(const std::string &engineVersion) {
  engineVersion_ = engineVersion;
  setParameter(std::string("EngineVersion"), engineVersion);
}

std::string CreateECSDBInstanceRequest::getDBInstanceCategory() const {
  return dBInstanceCategory_;
}

void CreateECSDBInstanceRequest::setDBInstanceCategory(const std::string &dBInstanceCategory) {
  dBInstanceCategory_ = dBInstanceCategory;
  setParameter(std::string("DBInstanceCategory"), dBInstanceCategory);
}

std::string CreateECSDBInstanceRequest::getEncryptionType() const {
  return encryptionType_;
}

void CreateECSDBInstanceRequest::setEncryptionType(const std::string &encryptionType) {
  encryptionType_ = encryptionType;
  setParameter(std::string("EncryptionType"), encryptionType);
}

std::string CreateECSDBInstanceRequest::getDBInstanceDescription() const {
  return dBInstanceDescription_;
}

void CreateECSDBInstanceRequest::setDBInstanceDescription(const std::string &dBInstanceDescription) {
  dBInstanceDescription_ = dBInstanceDescription;
  setParameter(std::string("DBInstanceDescription"), dBInstanceDescription);
}

std::string CreateECSDBInstanceRequest::getPeriod() const {
  return period_;
}

void CreateECSDBInstanceRequest::setPeriod(const std::string &period) {
  period_ = period;
  setParameter(std::string("Period"), period);
}

std::string CreateECSDBInstanceRequest::getBackupId() const {
  return backupId_;
}

void CreateECSDBInstanceRequest::setBackupId(const std::string &backupId) {
  backupId_ = backupId;
  setParameter(std::string("BackupId"), backupId);
}

std::string CreateECSDBInstanceRequest::getEncryptionKey() const {
  return encryptionKey_;
}

void CreateECSDBInstanceRequest::setEncryptionKey(const std::string &encryptionKey) {
  encryptionKey_ = encryptionKey;
  setParameter(std::string("EncryptionKey"), encryptionKey);
}

long CreateECSDBInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void CreateECSDBInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateECSDBInstanceRequest::getSecurityIPList() const {
  return securityIPList_;
}

void CreateECSDBInstanceRequest::setSecurityIPList(const std::string &securityIPList) {
  securityIPList_ = securityIPList;
  setParameter(std::string("SecurityIPList"), securityIPList);
}

std::string CreateECSDBInstanceRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateECSDBInstanceRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string CreateECSDBInstanceRequest::getPrivateIpAddress() const {
  return privateIpAddress_;
}

void CreateECSDBInstanceRequest::setPrivateIpAddress(const std::string &privateIpAddress) {
  privateIpAddress_ = privateIpAddress;
  setParameter(std::string("PrivateIpAddress"), privateIpAddress);
}

std::string CreateECSDBInstanceRequest::getZoneId() const {
  return zoneId_;
}

void CreateECSDBInstanceRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string CreateECSDBInstanceRequest::getInstanceNetworkType() const {
  return instanceNetworkType_;
}

void CreateECSDBInstanceRequest::setInstanceNetworkType(const std::string &instanceNetworkType) {
  instanceNetworkType_ = instanceNetworkType;
  setParameter(std::string("InstanceNetworkType"), instanceNetworkType);
}

std::string CreateECSDBInstanceRequest::getClientToken() const {
  return clientToken_;
}

void CreateECSDBInstanceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateECSDBInstanceRequest::getInstanceSpec() const {
  return instanceSpec_;
}

void CreateECSDBInstanceRequest::setInstanceSpec(const std::string &instanceSpec) {
  instanceSpec_ = instanceSpec;
  setParameter(std::string("InstanceSpec"), instanceSpec);
}

int CreateECSDBInstanceRequest::getStorageSize() const {
  return storageSize_;
}

void CreateECSDBInstanceRequest::setStorageSize(int storageSize) {
  storageSize_ = storageSize;
  setParameter(std::string("StorageSize"), std::to_string(storageSize));
}

std::string CreateECSDBInstanceRequest::getSegStorageType() const {
  return segStorageType_;
}

void CreateECSDBInstanceRequest::setSegStorageType(const std::string &segStorageType) {
  segStorageType_ = segStorageType;
  setParameter(std::string("SegStorageType"), segStorageType);
}

int CreateECSDBInstanceRequest::getMasterNodeNum() const {
  return masterNodeNum_;
}

void CreateECSDBInstanceRequest::setMasterNodeNum(int masterNodeNum) {
  masterNodeNum_ = masterNodeNum;
  setParameter(std::string("MasterNodeNum"), std::to_string(masterNodeNum));
}

std::string CreateECSDBInstanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateECSDBInstanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

int CreateECSDBInstanceRequest::getSegNodeNum() const {
  return segNodeNum_;
}

void CreateECSDBInstanceRequest::setSegNodeNum(int segNodeNum) {
  segNodeNum_ = segNodeNum;
  setParameter(std::string("SegNodeNum"), std::to_string(segNodeNum));
}

std::string CreateECSDBInstanceRequest::getRegionId() const {
  return regionId_;
}

void CreateECSDBInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateECSDBInstanceRequest::getEngine() const {
  return engine_;
}

void CreateECSDBInstanceRequest::setEngine(const std::string &engine) {
  engine_ = engine;
  setParameter(std::string("Engine"), engine);
}

std::string CreateECSDBInstanceRequest::getUsedTime() const {
  return usedTime_;
}

void CreateECSDBInstanceRequest::setUsedTime(const std::string &usedTime) {
  usedTime_ = usedTime;
  setParameter(std::string("UsedTime"), usedTime);
}

std::string CreateECSDBInstanceRequest::getVPCId() const {
  return vPCId_;
}

void CreateECSDBInstanceRequest::setVPCId(const std::string &vPCId) {
  vPCId_ = vPCId;
  setParameter(std::string("VPCId"), vPCId);
}

std::string CreateECSDBInstanceRequest::getPayType() const {
  return payType_;
}

void CreateECSDBInstanceRequest::setPayType(const std::string &payType) {
  payType_ = payType;
  setParameter(std::string("PayType"), payType);
}

std::string CreateECSDBInstanceRequest::getSrcDbInstanceName() const {
  return srcDbInstanceName_;
}

void CreateECSDBInstanceRequest::setSrcDbInstanceName(const std::string &srcDbInstanceName) {
  srcDbInstanceName_ = srcDbInstanceName;
  setParameter(std::string("SrcDbInstanceName"), srcDbInstanceName);
}

