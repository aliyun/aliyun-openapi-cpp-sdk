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

#include <alibabacloud/gpdb/model/CreateDBInstanceRequest.h>

using AlibabaCloud::Gpdb::Model::CreateDBInstanceRequest;

CreateDBInstanceRequest::CreateDBInstanceRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "CreateDBInstance") {
  setMethod(HttpRequest::Method::Post);
}

CreateDBInstanceRequest::~CreateDBInstanceRequest() {}

std::string CreateDBInstanceRequest::getEngineVersion() const {
  return engineVersion_;
}

void CreateDBInstanceRequest::setEngineVersion(const std::string &engineVersion) {
  engineVersion_ = engineVersion;
  setParameter(std::string("EngineVersion"), engineVersion);
}

std::string CreateDBInstanceRequest::getDBInstanceCategory() const {
  return dBInstanceCategory_;
}

void CreateDBInstanceRequest::setDBInstanceCategory(const std::string &dBInstanceCategory) {
  dBInstanceCategory_ = dBInstanceCategory;
  setParameter(std::string("DBInstanceCategory"), dBInstanceCategory);
}

std::string CreateDBInstanceRequest::getStorageType() const {
  return storageType_;
}

void CreateDBInstanceRequest::setStorageType(const std::string &storageType) {
  storageType_ = storageType;
  setParameter(std::string("StorageType"), storageType);
}

std::string CreateDBInstanceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateDBInstanceRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateDBInstanceRequest::getEncryptionType() const {
  return encryptionType_;
}

void CreateDBInstanceRequest::setEncryptionType(const std::string &encryptionType) {
  encryptionType_ = encryptionType;
  setParameter(std::string("EncryptionType"), encryptionType);
}

std::string CreateDBInstanceRequest::getDBInstanceDescription() const {
  return dBInstanceDescription_;
}

void CreateDBInstanceRequest::setDBInstanceDescription(const std::string &dBInstanceDescription) {
  dBInstanceDescription_ = dBInstanceDescription;
  setParameter(std::string("DBInstanceDescription"), dBInstanceDescription);
}

std::string CreateDBInstanceRequest::getServerlessMode() const {
  return serverlessMode_;
}

void CreateDBInstanceRequest::setServerlessMode(const std::string &serverlessMode) {
  serverlessMode_ = serverlessMode;
  setParameter(std::string("ServerlessMode"), serverlessMode);
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

std::string CreateDBInstanceRequest::getPeriod() const {
  return period_;
}

void CreateDBInstanceRequest::setPeriod(const std::string &period) {
  period_ = period;
  setParameter(std::string("Period"), period);
}

std::string CreateDBInstanceRequest::getVectorConfigurationStatus() const {
  return vectorConfigurationStatus_;
}

void CreateDBInstanceRequest::setVectorConfigurationStatus(const std::string &vectorConfigurationStatus) {
  vectorConfigurationStatus_ = vectorConfigurationStatus;
  setParameter(std::string("VectorConfigurationStatus"), vectorConfigurationStatus);
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

std::string CreateDBInstanceRequest::getSegDiskPerformanceLevel() const {
  return segDiskPerformanceLevel_;
}

void CreateDBInstanceRequest::setSegDiskPerformanceLevel(const std::string &segDiskPerformanceLevel) {
  segDiskPerformanceLevel_ = segDiskPerformanceLevel;
  setParameter(std::string("SegDiskPerformanceLevel"), segDiskPerformanceLevel);
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

std::string CreateDBInstanceRequest::getZoneId() const {
  return zoneId_;
}

void CreateDBInstanceRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string CreateDBInstanceRequest::getInstanceNetworkType() const {
  return instanceNetworkType_;
}

void CreateDBInstanceRequest::setInstanceNetworkType(const std::string &instanceNetworkType) {
  instanceNetworkType_ = instanceNetworkType;
  setParameter(std::string("InstanceNetworkType"), instanceNetworkType);
}

std::string CreateDBInstanceRequest::getClientToken() const {
  return clientToken_;
}

void CreateDBInstanceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateDBInstanceRequest::getInstanceSpec() const {
  return instanceSpec_;
}

void CreateDBInstanceRequest::setInstanceSpec(const std::string &instanceSpec) {
  instanceSpec_ = instanceSpec;
  setParameter(std::string("InstanceSpec"), instanceSpec);
}

long CreateDBInstanceRequest::getStorageSize() const {
  return storageSize_;
}

void CreateDBInstanceRequest::setStorageSize(long storageSize) {
  storageSize_ = storageSize;
  setParameter(std::string("StorageSize"), std::to_string(storageSize));
}

std::string CreateDBInstanceRequest::getSegStorageType() const {
  return segStorageType_;
}

void CreateDBInstanceRequest::setSegStorageType(const std::string &segStorageType) {
  segStorageType_ = segStorageType;
  setParameter(std::string("SegStorageType"), segStorageType);
}

std::string CreateDBInstanceRequest::getMasterNodeNum() const {
  return masterNodeNum_;
}

void CreateDBInstanceRequest::setMasterNodeNum(const std::string &masterNodeNum) {
  masterNodeNum_ = masterNodeNum;
  setParameter(std::string("MasterNodeNum"), masterNodeNum);
}

std::string CreateDBInstanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateDBInstanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateDBInstanceRequest::getSegNodeNum() const {
  return segNodeNum_;
}

void CreateDBInstanceRequest::setSegNodeNum(const std::string &segNodeNum) {
  segNodeNum_ = segNodeNum;
  setParameter(std::string("SegNodeNum"), segNodeNum);
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

bool CreateDBInstanceRequest::getCreateSampleData() const {
  return createSampleData_;
}

void CreateDBInstanceRequest::setCreateSampleData(bool createSampleData) {
  createSampleData_ = createSampleData;
  setParameter(std::string("CreateSampleData"), createSampleData ? "true" : "false");
}

std::string CreateDBInstanceRequest::getDBInstanceGroupCount() const {
  return dBInstanceGroupCount_;
}

void CreateDBInstanceRequest::setDBInstanceGroupCount(const std::string &dBInstanceGroupCount) {
  dBInstanceGroupCount_ = dBInstanceGroupCount;
  setParameter(std::string("DBInstanceGroupCount"), dBInstanceGroupCount);
}

std::string CreateDBInstanceRequest::getDBInstanceMode() const {
  return dBInstanceMode_;
}

void CreateDBInstanceRequest::setDBInstanceMode(const std::string &dBInstanceMode) {
  dBInstanceMode_ = dBInstanceMode;
  setParameter(std::string("DBInstanceMode"), dBInstanceMode);
}

std::string CreateDBInstanceRequest::getUsedTime() const {
  return usedTime_;
}

void CreateDBInstanceRequest::setUsedTime(const std::string &usedTime) {
  usedTime_ = usedTime;
  setParameter(std::string("UsedTime"), usedTime);
}

std::string CreateDBInstanceRequest::getVPCId() const {
  return vPCId_;
}

void CreateDBInstanceRequest::setVPCId(const std::string &vPCId) {
  vPCId_ = vPCId;
  setParameter(std::string("VPCId"), vPCId);
}

int CreateDBInstanceRequest::getServerlessResource() const {
  return serverlessResource_;
}

void CreateDBInstanceRequest::setServerlessResource(int serverlessResource) {
  serverlessResource_ = serverlessResource;
  setParameter(std::string("ServerlessResource"), std::to_string(serverlessResource));
}

int CreateDBInstanceRequest::getIdleTime() const {
  return idleTime_;
}

void CreateDBInstanceRequest::setIdleTime(int idleTime) {
  idleTime_ = idleTime;
  setParameter(std::string("IdleTime"), std::to_string(idleTime));
}

std::string CreateDBInstanceRequest::getPayType() const {
  return payType_;
}

void CreateDBInstanceRequest::setPayType(const std::string &payType) {
  payType_ = payType;
  setParameter(std::string("PayType"), payType);
}

