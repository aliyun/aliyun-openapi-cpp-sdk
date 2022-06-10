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

#include <alibabacloud/ecs/model/CreateInstanceRequest.h>

using AlibabaCloud::Ecs::Model::CreateInstanceRequest;

CreateInstanceRequest::CreateInstanceRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "CreateInstance") {
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

std::string CreateInstanceRequest::getHpcClusterId() const {
  return hpcClusterId_;
}

void CreateInstanceRequest::setHpcClusterId(const std::string &hpcClusterId) {
  hpcClusterId_ = hpcClusterId;
  setParameter(std::string("HpcClusterId"), hpcClusterId);
}

int CreateInstanceRequest::getHttpPutResponseHopLimit() const {
  return httpPutResponseHopLimit_;
}

void CreateInstanceRequest::setHttpPutResponseHopLimit(int httpPutResponseHopLimit) {
  httpPutResponseHopLimit_ = httpPutResponseHopLimit;
  setParameter(std::string("HttpPutResponseHopLimit"), std::to_string(httpPutResponseHopLimit));
}

std::string CreateInstanceRequest::getSecurityEnhancementStrategy() const {
  return securityEnhancementStrategy_;
}

void CreateInstanceRequest::setSecurityEnhancementStrategy(const std::string &securityEnhancementStrategy) {
  securityEnhancementStrategy_ = securityEnhancementStrategy;
  setParameter(std::string("SecurityEnhancementStrategy"), securityEnhancementStrategy);
}

std::string CreateInstanceRequest::getKeyPairName() const {
  return keyPairName_;
}

void CreateInstanceRequest::setKeyPairName(const std::string &keyPairName) {
  keyPairName_ = keyPairName;
  setParameter(std::string("KeyPairName"), keyPairName);
}

float CreateInstanceRequest::getSpotPriceLimit() const {
  return spotPriceLimit_;
}

void CreateInstanceRequest::setSpotPriceLimit(float spotPriceLimit) {
  spotPriceLimit_ = spotPriceLimit;
  setParameter(std::string("SpotPriceLimit"), std::to_string(spotPriceLimit));
}

bool CreateInstanceRequest::getDeletionProtection() const {
  return deletionProtection_;
}

void CreateInstanceRequest::setDeletionProtection(bool deletionProtection) {
  deletionProtection_ = deletionProtection;
  setParameter(std::string("DeletionProtection"), deletionProtection ? "true" : "false");
}

std::string CreateInstanceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateInstanceRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateInstanceRequest::getPrivatePoolOptionsMatchCriteria() const {
  return privatePoolOptionsMatchCriteria_;
}

void CreateInstanceRequest::setPrivatePoolOptionsMatchCriteria(const std::string &privatePoolOptionsMatchCriteria) {
  privatePoolOptionsMatchCriteria_ = privatePoolOptionsMatchCriteria;
  setParameter(std::string("PrivatePoolOptions.MatchCriteria"), privatePoolOptionsMatchCriteria);
}

std::string CreateInstanceRequest::getHostName() const {
  return hostName_;
}

void CreateInstanceRequest::setHostName(const std::string &hostName) {
  hostName_ = hostName;
  setParameter(std::string("HostName"), hostName);
}

std::string CreateInstanceRequest::getPassword() const {
  return password_;
}

void CreateInstanceRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

CreateInstanceRequest::SystemDisk CreateInstanceRequest::getSystemDisk() const {
  return systemDisk_;
}

void CreateInstanceRequest::setSystemDisk(const CreateInstanceRequest::SystemDisk &systemDisk) {
  systemDisk_ = systemDisk;
  setParameter(std::string("SystemDisk") + ".StorageClusterId", systemDisk.storageClusterId);
}

int CreateInstanceRequest::getDeploymentSetGroupNo() const {
  return deploymentSetGroupNo_;
}

void CreateInstanceRequest::setDeploymentSetGroupNo(int deploymentSetGroupNo) {
  deploymentSetGroupNo_ = deploymentSetGroupNo;
  setParameter(std::string("DeploymentSetGroupNo"), std::to_string(deploymentSetGroupNo));
}

int CreateInstanceRequest::getStorageSetPartitionNumber() const {
  return storageSetPartitionNumber_;
}

void CreateInstanceRequest::setStorageSetPartitionNumber(int storageSetPartitionNumber) {
  storageSetPartitionNumber_ = storageSetPartitionNumber;
  setParameter(std::string("StorageSetPartitionNumber"), std::to_string(storageSetPartitionNumber));
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

std::string CreateInstanceRequest::getPrivatePoolOptionsId() const {
  return privatePoolOptionsId_;
}

void CreateInstanceRequest::setPrivatePoolOptionsId(const std::string &privatePoolOptionsId) {
  privatePoolOptionsId_ = privatePoolOptionsId;
  setParameter(std::string("PrivatePoolOptions.Id"), privatePoolOptionsId);
}

int CreateInstanceRequest::getAutoRenewPeriod() const {
  return autoRenewPeriod_;
}

void CreateInstanceRequest::setAutoRenewPeriod(int autoRenewPeriod) {
  autoRenewPeriod_ = autoRenewPeriod;
  setParameter(std::string("AutoRenewPeriod"), std::to_string(autoRenewPeriod));
}

std::string CreateInstanceRequest::getNodeControllerId() const {
  return nodeControllerId_;
}

void CreateInstanceRequest::setNodeControllerId(const std::string &nodeControllerId) {
  nodeControllerId_ = nodeControllerId;
  setParameter(std::string("NodeControllerId"), nodeControllerId);
}

int CreateInstanceRequest::getPeriod() const {
  return period_;
}

void CreateInstanceRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

bool CreateInstanceRequest::getDryRun() const {
  return dryRun_;
}

void CreateInstanceRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

long CreateInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void CreateInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateInstanceRequest::getCapacityReservationPreference() const {
  return capacityReservationPreference_;
}

void CreateInstanceRequest::setCapacityReservationPreference(const std::string &capacityReservationPreference) {
  capacityReservationPreference_ = capacityReservationPreference;
  setParameter(std::string("CapacityReservationPreference"), capacityReservationPreference);
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

std::string CreateInstanceRequest::getSpotStrategy() const {
  return spotStrategy_;
}

void CreateInstanceRequest::setSpotStrategy(const std::string &spotStrategy) {
  spotStrategy_ = spotStrategy;
  setParameter(std::string("SpotStrategy"), spotStrategy);
}

std::string CreateInstanceRequest::getPeriodUnit() const {
  return periodUnit_;
}

void CreateInstanceRequest::setPeriodUnit(const std::string &periodUnit) {
  periodUnit_ = periodUnit;
  setParameter(std::string("PeriodUnit"), periodUnit);
}

std::string CreateInstanceRequest::getInstanceName() const {
  return instanceName_;
}

void CreateInstanceRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setParameter(std::string("InstanceName"), instanceName);
}

bool CreateInstanceRequest::getAutoRenew() const {
  return autoRenew_;
}

void CreateInstanceRequest::setAutoRenew(bool autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew ? "true" : "false");
}

std::string CreateInstanceRequest::getInternetChargeType() const {
  return internetChargeType_;
}

void CreateInstanceRequest::setInternetChargeType(const std::string &internetChargeType) {
  internetChargeType_ = internetChargeType;
  setParameter(std::string("InternetChargeType"), internetChargeType);
}

std::string CreateInstanceRequest::getZoneId() const {
  return zoneId_;
}

void CreateInstanceRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

int CreateInstanceRequest::getInternetMaxBandwidthIn() const {
  return internetMaxBandwidthIn_;
}

void CreateInstanceRequest::setInternetMaxBandwidthIn(int internetMaxBandwidthIn) {
  internetMaxBandwidthIn_ = internetMaxBandwidthIn;
  setParameter(std::string("InternetMaxBandwidthIn"), std::to_string(internetMaxBandwidthIn));
}

bool CreateInstanceRequest::getUseAdditionalService() const {
  return useAdditionalService_;
}

void CreateInstanceRequest::setUseAdditionalService(bool useAdditionalService) {
  useAdditionalService_ = useAdditionalService;
  setParameter(std::string("UseAdditionalService"), useAdditionalService ? "true" : "false");
}

std::string CreateInstanceRequest::getAffinity() const {
  return affinity_;
}

void CreateInstanceRequest::setAffinity(const std::string &affinity) {
  affinity_ = affinity;
  setParameter(std::string("Affinity"), affinity);
}

std::string CreateInstanceRequest::getImageId() const {
  return imageId_;
}

void CreateInstanceRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

std::string CreateInstanceRequest::getClientToken() const {
  return clientToken_;
}

void CreateInstanceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateInstanceRequest::getVlanId() const {
  return vlanId_;
}

void CreateInstanceRequest::setVlanId(const std::string &vlanId) {
  vlanId_ = vlanId;
  setParameter(std::string("VlanId"), vlanId);
}

std::string CreateInstanceRequest::getSpotInterruptionBehavior() const {
  return spotInterruptionBehavior_;
}

void CreateInstanceRequest::setSpotInterruptionBehavior(const std::string &spotInterruptionBehavior) {
  spotInterruptionBehavior_ = spotInterruptionBehavior;
  setParameter(std::string("SpotInterruptionBehavior"), spotInterruptionBehavior);
}

std::string CreateInstanceRequest::getIoOptimized() const {
  return ioOptimized_;
}

void CreateInstanceRequest::setIoOptimized(const std::string &ioOptimized) {
  ioOptimized_ = ioOptimized;
  setParameter(std::string("IoOptimized"), ioOptimized);
}

std::string CreateInstanceRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void CreateInstanceRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setParameter(std::string("SecurityGroupId"), securityGroupId);
}

int CreateInstanceRequest::getInternetMaxBandwidthOut() const {
  return internetMaxBandwidthOut_;
}

void CreateInstanceRequest::setInternetMaxBandwidthOut(int internetMaxBandwidthOut) {
  internetMaxBandwidthOut_ = internetMaxBandwidthOut;
  setParameter(std::string("InternetMaxBandwidthOut"), std::to_string(internetMaxBandwidthOut));
}

bool CreateInstanceRequest::getHibernationOptionsConfigured() const {
  return hibernationOptionsConfigured_;
}

void CreateInstanceRequest::setHibernationOptionsConfigured(bool hibernationOptionsConfigured) {
  hibernationOptionsConfigured_ = hibernationOptionsConfigured;
  setParameter(std::string("HibernationOptions.Configured"), hibernationOptionsConfigured ? "true" : "false");
}

std::string CreateInstanceRequest::getDescription() const {
  return description_;
}

void CreateInstanceRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateInstanceRequest::getSystemDiskCategory() const {
  return systemDiskCategory_;
}

void CreateInstanceRequest::setSystemDiskCategory(const std::string &systemDiskCategory) {
  systemDiskCategory_ = systemDiskCategory;
  setParameter(std::string("SystemDisk.Category"), systemDiskCategory);
}

std::string CreateInstanceRequest::getCapacityReservationId() const {
  return capacityReservationId_;
}

void CreateInstanceRequest::setCapacityReservationId(const std::string &capacityReservationId) {
  capacityReservationId_ = capacityReservationId;
  setParameter(std::string("CapacityReservationId"), capacityReservationId);
}

std::string CreateInstanceRequest::getSystemDiskPerformanceLevel() const {
  return systemDiskPerformanceLevel_;
}

void CreateInstanceRequest::setSystemDiskPerformanceLevel(const std::string &systemDiskPerformanceLevel) {
  systemDiskPerformanceLevel_ = systemDiskPerformanceLevel;
  setParameter(std::string("SystemDisk.PerformanceLevel"), systemDiskPerformanceLevel);
}

std::string CreateInstanceRequest::getUserData() const {
  return userData_;
}

void CreateInstanceRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

bool CreateInstanceRequest::getPasswordInherit() const {
  return passwordInherit_;
}

void CreateInstanceRequest::setPasswordInherit(bool passwordInherit) {
  passwordInherit_ = passwordInherit;
  setParameter(std::string("PasswordInherit"), passwordInherit ? "true" : "false");
}

std::string CreateInstanceRequest::getRegionId() const {
  return regionId_;
}

void CreateInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateInstanceRequest::getHttpEndpoint() const {
  return httpEndpoint_;
}

void CreateInstanceRequest::setHttpEndpoint(const std::string &httpEndpoint) {
  httpEndpoint_ = httpEndpoint;
  setParameter(std::string("HttpEndpoint"), httpEndpoint);
}

std::string CreateInstanceRequest::getInstanceType() const {
  return instanceType_;
}

void CreateInstanceRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::vector<CreateInstanceRequest::Arn> CreateInstanceRequest::getArn() const {
  return arn_;
}

void CreateInstanceRequest::setArn(const std::vector<CreateInstanceRequest::Arn> &arn) {
  arn_ = arn;
  for(int dep1 = 0; dep1 != arn.size(); dep1++) {
  auto arnObj = arn.at(dep1);
  std::string arnObjStr = std::string("Arn") + "." + std::to_string(dep1 + 1);
    setParameter(arnObjStr + ".Rolearn", arnObj.rolearn);
    setParameter(arnObjStr + ".RoleType", arnObj.roleType);
    setParameter(arnObjStr + ".AssumeRoleFor", std::to_string(arnObj.assumeRoleFor));
  }
}

std::string CreateInstanceRequest::getInstanceChargeType() const {
  return instanceChargeType_;
}

void CreateInstanceRequest::setInstanceChargeType(const std::string &instanceChargeType) {
  instanceChargeType_ = instanceChargeType;
  setParameter(std::string("InstanceChargeType"), instanceChargeType);
}

std::string CreateInstanceRequest::getDeploymentSetId() const {
  return deploymentSetId_;
}

void CreateInstanceRequest::setDeploymentSetId(const std::string &deploymentSetId) {
  deploymentSetId_ = deploymentSetId;
  setParameter(std::string("DeploymentSetId"), deploymentSetId);
}

std::string CreateInstanceRequest::getInnerIpAddress() const {
  return innerIpAddress_;
}

void CreateInstanceRequest::setInnerIpAddress(const std::string &innerIpAddress) {
  innerIpAddress_ = innerIpAddress;
  setParameter(std::string("InnerIpAddress"), innerIpAddress);
}

std::string CreateInstanceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateInstanceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateInstanceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateInstanceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string CreateInstanceRequest::getTenancy() const {
  return tenancy_;
}

void CreateInstanceRequest::setTenancy(const std::string &tenancy) {
  tenancy_ = tenancy;
  setParameter(std::string("Tenancy"), tenancy);
}

std::string CreateInstanceRequest::getSystemDiskDiskName() const {
  return systemDiskDiskName_;
}

void CreateInstanceRequest::setSystemDiskDiskName(const std::string &systemDiskDiskName) {
  systemDiskDiskName_ = systemDiskDiskName;
  setParameter(std::string("SystemDisk.DiskName"), systemDiskDiskName);
}

std::string CreateInstanceRequest::getRamRoleName() const {
  return ramRoleName_;
}

void CreateInstanceRequest::setRamRoleName(const std::string &ramRoleName) {
  ramRoleName_ = ramRoleName;
  setParameter(std::string("RamRoleName"), ramRoleName);
}

std::string CreateInstanceRequest::getDedicatedHostId() const {
  return dedicatedHostId_;
}

void CreateInstanceRequest::setDedicatedHostId(const std::string &dedicatedHostId) {
  dedicatedHostId_ = dedicatedHostId;
  setParameter(std::string("DedicatedHostId"), dedicatedHostId);
}

std::string CreateInstanceRequest::getClusterId() const {
  return clusterId_;
}

void CreateInstanceRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string CreateInstanceRequest::getCreditSpecification() const {
  return creditSpecification_;
}

void CreateInstanceRequest::setCreditSpecification(const std::string &creditSpecification) {
  creditSpecification_ = creditSpecification;
  setParameter(std::string("CreditSpecification"), creditSpecification);
}

int CreateInstanceRequest::getSpotDuration() const {
  return spotDuration_;
}

void CreateInstanceRequest::setSpotDuration(int spotDuration) {
  spotDuration_ = spotDuration;
  setParameter(std::string("SpotDuration"), std::to_string(spotDuration));
}

std::vector<CreateInstanceRequest::DataDisk> CreateInstanceRequest::getDataDisk() const {
  return dataDisk_;
}

void CreateInstanceRequest::setDataDisk(const std::vector<CreateInstanceRequest::DataDisk> &dataDisk) {
  dataDisk_ = dataDisk;
  for(int dep1 = 0; dep1 != dataDisk.size(); dep1++) {
  auto dataDiskObj = dataDisk.at(dep1);
  std::string dataDiskObjStr = std::string("DataDisk") + "." + std::to_string(dep1 + 1);
    setParameter(dataDiskObjStr + ".DiskName", dataDiskObj.diskName);
    setParameter(dataDiskObjStr + ".SnapshotId", dataDiskObj.snapshotId);
    setParameter(dataDiskObjStr + ".Size", std::to_string(dataDiskObj.size));
    setParameter(dataDiskObjStr + ".Encrypted", dataDiskObj.encrypted ? "true" : "false");
    setParameter(dataDiskObjStr + ".PerformanceLevel", dataDiskObj.performanceLevel);
    setParameter(dataDiskObjStr + ".EncryptAlgorithm", dataDiskObj.encryptAlgorithm);
    setParameter(dataDiskObjStr + ".Description", dataDiskObj.description);
    setParameter(dataDiskObjStr + ".StorageClusterId", dataDiskObj.storageClusterId);
    setParameter(dataDiskObjStr + ".Category", dataDiskObj.category);
    setParameter(dataDiskObjStr + ".KMSKeyId", dataDiskObj.kMSKeyId);
    setParameter(dataDiskObjStr + ".Device", dataDiskObj.device);
    setParameter(dataDiskObjStr + ".DeleteWithInstance", dataDiskObj.deleteWithInstance ? "true" : "false");
  }
}

std::string CreateInstanceRequest::getStorageSetId() const {
  return storageSetId_;
}

void CreateInstanceRequest::setStorageSetId(const std::string &storageSetId) {
  storageSetId_ = storageSetId;
  setParameter(std::string("StorageSetId"), storageSetId);
}

int CreateInstanceRequest::getSystemDiskSize() const {
  return systemDiskSize_;
}

void CreateInstanceRequest::setSystemDiskSize(int systemDiskSize) {
  systemDiskSize_ = systemDiskSize;
  setParameter(std::string("SystemDisk.Size"), std::to_string(systemDiskSize));
}

std::string CreateInstanceRequest::getImageFamily() const {
  return imageFamily_;
}

void CreateInstanceRequest::setImageFamily(const std::string &imageFamily) {
  imageFamily_ = imageFamily;
  setParameter(std::string("ImageFamily"), imageFamily);
}

std::string CreateInstanceRequest::getHttpTokens() const {
  return httpTokens_;
}

void CreateInstanceRequest::setHttpTokens(const std::string &httpTokens) {
  httpTokens_ = httpTokens;
  setParameter(std::string("HttpTokens"), httpTokens);
}

std::string CreateInstanceRequest::getSystemDiskDescription() const {
  return systemDiskDescription_;
}

void CreateInstanceRequest::setSystemDiskDescription(const std::string &systemDiskDescription) {
  systemDiskDescription_ = systemDiskDescription;
  setParameter(std::string("SystemDisk.Description"), systemDiskDescription);
}

