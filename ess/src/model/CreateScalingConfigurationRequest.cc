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

#include <alibabacloud/ess/model/CreateScalingConfigurationRequest.h>

using AlibabaCloud::Ess::Model::CreateScalingConfigurationRequest;

CreateScalingConfigurationRequest::CreateScalingConfigurationRequest()
    : RpcServiceRequest("ess", "2014-08-28", "CreateScalingConfiguration") {
  setMethod(HttpRequest::Method::Post);
}

CreateScalingConfigurationRequest::~CreateScalingConfigurationRequest() {}

std::string CreateScalingConfigurationRequest::getHpcClusterId() const {
  return hpcClusterId_;
}

void CreateScalingConfigurationRequest::setHpcClusterId(const std::string &hpcClusterId) {
  hpcClusterId_ = hpcClusterId;
  setParameter(std::string("HpcClusterId"), hpcClusterId);
}

CreateScalingConfigurationRequest::SecurityOptions CreateScalingConfigurationRequest::getSecurityOptions() const {
  return securityOptions_;
}

void CreateScalingConfigurationRequest::setSecurityOptions(const CreateScalingConfigurationRequest::SecurityOptions &securityOptions) {
  securityOptions_ = securityOptions;
  setParameter(std::string("SecurityOptions") + ".ConfidentialComputingMode", securityOptions.confidentialComputingMode);
}

std::string CreateScalingConfigurationRequest::getSecurityEnhancementStrategy() const {
  return securityEnhancementStrategy_;
}

void CreateScalingConfigurationRequest::setSecurityEnhancementStrategy(const std::string &securityEnhancementStrategy) {
  securityEnhancementStrategy_ = securityEnhancementStrategy;
  setParameter(std::string("SecurityEnhancementStrategy"), securityEnhancementStrategy);
}

std::string CreateScalingConfigurationRequest::getKeyPairName() const {
  return keyPairName_;
}

void CreateScalingConfigurationRequest::setKeyPairName(const std::string &keyPairName) {
  keyPairName_ = keyPairName;
  setParameter(std::string("KeyPairName"), keyPairName);
}

std::vector<CreateScalingConfigurationRequest::SpotPriceLimit> CreateScalingConfigurationRequest::getSpotPriceLimit() const {
  return spotPriceLimit_;
}

void CreateScalingConfigurationRequest::setSpotPriceLimit(const std::vector<CreateScalingConfigurationRequest::SpotPriceLimit> &spotPriceLimit) {
  spotPriceLimit_ = spotPriceLimit;
  for(int dep1 = 0; dep1 != spotPriceLimit.size(); dep1++) {
  auto spotPriceLimitObj = spotPriceLimit.at(dep1);
  std::string spotPriceLimitObjStr = std::string("SpotPriceLimit") + "." + std::to_string(dep1 + 1);
    setParameter(spotPriceLimitObjStr + ".InstanceType", spotPriceLimitObj.instanceType);
    setParameter(spotPriceLimitObjStr + ".PriceLimit", std::to_string(spotPriceLimitObj.priceLimit));
  }
}

bool CreateScalingConfigurationRequest::getDeletionProtection() const {
  return deletionProtection_;
}

void CreateScalingConfigurationRequest::setDeletionProtection(bool deletionProtection) {
  deletionProtection_ = deletionProtection;
  setParameter(std::string("DeletionProtection"), deletionProtection ? "true" : "false");
}

std::string CreateScalingConfigurationRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateScalingConfigurationRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateScalingConfigurationRequest::getPrivatePoolOptionsMatchCriteria() const {
  return privatePoolOptionsMatchCriteria_;
}

void CreateScalingConfigurationRequest::setPrivatePoolOptionsMatchCriteria(const std::string &privatePoolOptionsMatchCriteria) {
  privatePoolOptionsMatchCriteria_ = privatePoolOptionsMatchCriteria;
  setParameter(std::string("PrivatePoolOptions.MatchCriteria"), privatePoolOptionsMatchCriteria);
}

std::string CreateScalingConfigurationRequest::getHostName() const {
  return hostName_;
}

void CreateScalingConfigurationRequest::setHostName(const std::string &hostName) {
  hostName_ = hostName;
  setParameter(std::string("HostName"), hostName);
}

std::string CreateScalingConfigurationRequest::getPassword() const {
  return password_;
}

void CreateScalingConfigurationRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

std::string CreateScalingConfigurationRequest::getInstanceDescription() const {
  return instanceDescription_;
}

void CreateScalingConfigurationRequest::setInstanceDescription(const std::string &instanceDescription) {
  instanceDescription_ = instanceDescription;
  setParameter(std::string("InstanceDescription"), instanceDescription);
}

int CreateScalingConfigurationRequest::getStorageSetPartitionNumber() const {
  return storageSetPartitionNumber_;
}

void CreateScalingConfigurationRequest::setStorageSetPartitionNumber(int storageSetPartitionNumber) {
  storageSetPartitionNumber_ = storageSetPartitionNumber;
  setParameter(std::string("StorageSetPartitionNumber"), std::to_string(storageSetPartitionNumber));
}

std::vector<CreateScalingConfigurationRequest::CustomPriorities> CreateScalingConfigurationRequest::getCustomPriorities() const {
  return customPriorities_;
}

void CreateScalingConfigurationRequest::setCustomPriorities(const std::vector<CreateScalingConfigurationRequest::CustomPriorities> &customPriorities) {
  customPriorities_ = customPriorities;
  for(int dep1 = 0; dep1 != customPriorities.size(); dep1++) {
  auto customPrioritiesObj = customPriorities.at(dep1);
  std::string customPrioritiesObjStr = std::string("CustomPriorities") + "." + std::to_string(dep1 + 1);
    setParameter(customPrioritiesObjStr + ".VswitchId", customPrioritiesObj.vswitchId);
    setParameter(customPrioritiesObjStr + ".InstanceType", customPrioritiesObj.instanceType);
  }
}

std::string CreateScalingConfigurationRequest::getSystemDiskAutoSnapshotPolicyId() const {
  return systemDiskAutoSnapshotPolicyId_;
}

void CreateScalingConfigurationRequest::setSystemDiskAutoSnapshotPolicyId(const std::string &systemDiskAutoSnapshotPolicyId) {
  systemDiskAutoSnapshotPolicyId_ = systemDiskAutoSnapshotPolicyId;
  setParameter(std::string("SystemDisk.AutoSnapshotPolicyId"), systemDiskAutoSnapshotPolicyId);
}

std::string CreateScalingConfigurationRequest::getPrivatePoolOptionsId() const {
  return privatePoolOptionsId_;
}

void CreateScalingConfigurationRequest::setPrivatePoolOptionsId(const std::string &privatePoolOptionsId) {
  privatePoolOptionsId_ = privatePoolOptionsId;
  setParameter(std::string("PrivatePoolOptions.Id"), privatePoolOptionsId);
}

bool CreateScalingConfigurationRequest::getImageOptionsLoginAsNonRoot() const {
  return imageOptionsLoginAsNonRoot_;
}

void CreateScalingConfigurationRequest::setImageOptionsLoginAsNonRoot(bool imageOptionsLoginAsNonRoot) {
  imageOptionsLoginAsNonRoot_ = imageOptionsLoginAsNonRoot;
  setParameter(std::string("ImageOptions.LoginAsNonRoot"), imageOptionsLoginAsNonRoot ? "true" : "false");
}

int CreateScalingConfigurationRequest::getIpv6AddressCount() const {
  return ipv6AddressCount_;
}

void CreateScalingConfigurationRequest::setIpv6AddressCount(int ipv6AddressCount) {
  ipv6AddressCount_ = ipv6AddressCount;
  setParameter(std::string("Ipv6AddressCount"), std::to_string(ipv6AddressCount));
}

int CreateScalingConfigurationRequest::getCpu() const {
  return cpu_;
}

void CreateScalingConfigurationRequest::setCpu(int cpu) {
  cpu_ = cpu;
  setParameter(std::string("Cpu"), std::to_string(cpu));
}

std::vector<std::string> CreateScalingConfigurationRequest::getSystemDiskCategories() const {
  return systemDiskCategories_;
}

void CreateScalingConfigurationRequest::setSystemDiskCategories(const std::vector<std::string> &systemDiskCategories) {
  systemDiskCategories_ = systemDiskCategories;
}

long CreateScalingConfigurationRequest::getOwnerId() const {
  return ownerId_;
}

void CreateScalingConfigurationRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateScalingConfigurationRequest::getScalingConfigurationName() const {
  return scalingConfigurationName_;
}

void CreateScalingConfigurationRequest::setScalingConfigurationName(const std::string &scalingConfigurationName) {
  scalingConfigurationName_ = scalingConfigurationName;
  setParameter(std::string("ScalingConfigurationName"), scalingConfigurationName);
}

std::string CreateScalingConfigurationRequest::getTags() const {
  return tags_;
}

void CreateScalingConfigurationRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string CreateScalingConfigurationRequest::getSpotStrategy() const {
  return spotStrategy_;
}

void CreateScalingConfigurationRequest::setSpotStrategy(const std::string &spotStrategy) {
  spotStrategy_ = spotStrategy;
  setParameter(std::string("SpotStrategy"), spotStrategy);
}

CreateScalingConfigurationRequest::CpuOptions CreateScalingConfigurationRequest::getCpuOptions() const {
  return cpuOptions_;
}

void CreateScalingConfigurationRequest::setCpuOptions(const CreateScalingConfigurationRequest::CpuOptions &cpuOptions) {
  cpuOptions_ = cpuOptions;
  for(int dep1 = 0; dep1 != cpuOptions.accelerators.size(); dep1++) {
    setParameter(std::string("CpuOptions") + ".Accelerators." + std::to_string(dep1 + 1), cpuOptions.accelerators[dep1]);
  }
}

bool CreateScalingConfigurationRequest::getSystemDiskBurstingEnabled() const {
  return systemDiskBurstingEnabled_;
}

void CreateScalingConfigurationRequest::setSystemDiskBurstingEnabled(bool systemDiskBurstingEnabled) {
  systemDiskBurstingEnabled_ = systemDiskBurstingEnabled;
  setParameter(std::string("SystemDisk.BurstingEnabled"), systemDiskBurstingEnabled ? "true" : "false");
}

std::string CreateScalingConfigurationRequest::getInstanceName() const {
  return instanceName_;
}

void CreateScalingConfigurationRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setParameter(std::string("InstanceName"), instanceName);
}

std::string CreateScalingConfigurationRequest::getInternetChargeType() const {
  return internetChargeType_;
}

void CreateScalingConfigurationRequest::setInternetChargeType(const std::string &internetChargeType) {
  internetChargeType_ = internetChargeType;
  setParameter(std::string("InternetChargeType"), internetChargeType);
}

std::string CreateScalingConfigurationRequest::getZoneId() const {
  return zoneId_;
}

void CreateScalingConfigurationRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

int CreateScalingConfigurationRequest::getInternetMaxBandwidthIn() const {
  return internetMaxBandwidthIn_;
}

void CreateScalingConfigurationRequest::setInternetMaxBandwidthIn(int internetMaxBandwidthIn) {
  internetMaxBandwidthIn_ = internetMaxBandwidthIn;
  setParameter(std::string("InternetMaxBandwidthIn"), std::to_string(internetMaxBandwidthIn));
}

std::vector<CreateScalingConfigurationRequest::InstancePatternInfo> CreateScalingConfigurationRequest::getInstancePatternInfo() const {
  return instancePatternInfo_;
}

void CreateScalingConfigurationRequest::setInstancePatternInfo(const std::vector<CreateScalingConfigurationRequest::InstancePatternInfo> &instancePatternInfo) {
  instancePatternInfo_ = instancePatternInfo;
  for(int dep1 = 0; dep1 != instancePatternInfo.size(); dep1++) {
  auto instancePatternInfoObj = instancePatternInfo.at(dep1);
  std::string instancePatternInfoObjStr = std::string("InstancePatternInfo") + "." + std::to_string(dep1 + 1);
    setParameter(instancePatternInfoObjStr + ".Memory", std::to_string(instancePatternInfoObj.memory));
    setParameter(instancePatternInfoObjStr + ".MaximumCpuCoreCount", std::to_string(instancePatternInfoObj.maximumCpuCoreCount));
    setParameter(instancePatternInfoObjStr + ".MaxPrice", std::to_string(instancePatternInfoObj.maxPrice));
    setParameter(instancePatternInfoObjStr + ".MinimumGpuAmount", std::to_string(instancePatternInfoObj.minimumGpuAmount));
    setParameter(instancePatternInfoObjStr + ".MaximumGpuAmount", std::to_string(instancePatternInfoObj.maximumGpuAmount));
    setParameter(instancePatternInfoObjStr + ".MaximumMemorySize", std::to_string(instancePatternInfoObj.maximumMemorySize));
    setParameter(instancePatternInfoObjStr + ".MinimumInitialCredit", std::to_string(instancePatternInfoObj.minimumInitialCredit));
    setParameter(instancePatternInfoObjStr + ".MinimumEniIpv6AddressQuantity", std::to_string(instancePatternInfoObj.minimumEniIpv6AddressQuantity));
    setParameter(instancePatternInfoObjStr + ".MinimumEniPrivateIpAddressQuantity", std::to_string(instancePatternInfoObj.minimumEniPrivateIpAddressQuantity));
    setParameter(instancePatternInfoObjStr + ".BurstablePerformance", instancePatternInfoObj.burstablePerformance);
    setParameter(instancePatternInfoObjStr + ".MinimumCpuCoreCount", std::to_string(instancePatternInfoObj.minimumCpuCoreCount));
    setParameter(instancePatternInfoObjStr + ".MinimumEniQuantity", std::to_string(instancePatternInfoObj.minimumEniQuantity));
    setParameter(instancePatternInfoObjStr + ".MinimumMemorySize", std::to_string(instancePatternInfoObj.minimumMemorySize));
    setParameter(instancePatternInfoObjStr + ".Cores", std::to_string(instancePatternInfoObj.cores));
    setParameter(instancePatternInfoObjStr + ".InstanceFamilyLevel", instancePatternInfoObj.instanceFamilyLevel);
    setParameter(instancePatternInfoObjStr + ".MinimumBaselineCredit", std::to_string(instancePatternInfoObj.minimumBaselineCredit));
  }
}

std::string CreateScalingConfigurationRequest::getAffinity() const {
  return affinity_;
}

void CreateScalingConfigurationRequest::setAffinity(const std::string &affinity) {
  affinity_ = affinity;
  setParameter(std::string("Affinity"), affinity);
}

std::vector<CreateScalingConfigurationRequest::NetworkInterfaces> CreateScalingConfigurationRequest::getNetworkInterfaces() const {
  return networkInterfaces_;
}

void CreateScalingConfigurationRequest::setNetworkInterfaces(const std::vector<CreateScalingConfigurationRequest::NetworkInterfaces> &networkInterfaces) {
  networkInterfaces_ = networkInterfaces;
  for(int dep1 = 0; dep1 != networkInterfaces.size(); dep1++) {
  auto networkInterfacesObj = networkInterfaces.at(dep1);
  std::string networkInterfacesObjStr = std::string("NetworkInterfaces") + "." + std::to_string(dep1 + 1);
    setParameter(networkInterfacesObjStr + ".Ipv6AddressCount", std::to_string(networkInterfacesObj.ipv6AddressCount));
    setParameter(networkInterfacesObjStr + ".InstanceType", networkInterfacesObj.instanceType);
    setParameter(networkInterfacesObjStr + ".NetworkInterfaceTrafficMode", networkInterfacesObj.networkInterfaceTrafficMode);
  }
}

std::string CreateScalingConfigurationRequest::getImageId() const {
  return imageId_;
}

void CreateScalingConfigurationRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

int CreateScalingConfigurationRequest::getMemory() const {
  return memory_;
}

void CreateScalingConfigurationRequest::setMemory(int memory) {
  memory_ = memory;
  setParameter(std::string("Memory"), std::to_string(memory));
}

std::string CreateScalingConfigurationRequest::getClientToken() const {
  return clientToken_;
}

void CreateScalingConfigurationRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateScalingConfigurationRequest::getSpotInterruptionBehavior() const {
  return spotInterruptionBehavior_;
}

void CreateScalingConfigurationRequest::setSpotInterruptionBehavior(const std::string &spotInterruptionBehavior) {
  spotInterruptionBehavior_ = spotInterruptionBehavior;
  setParameter(std::string("SpotInterruptionBehavior"), spotInterruptionBehavior);
}

std::string CreateScalingConfigurationRequest::getScalingGroupId() const {
  return scalingGroupId_;
}

void CreateScalingConfigurationRequest::setScalingGroupId(const std::string &scalingGroupId) {
  scalingGroupId_ = scalingGroupId;
  setParameter(std::string("ScalingGroupId"), scalingGroupId);
}

std::string CreateScalingConfigurationRequest::getIoOptimized() const {
  return ioOptimized_;
}

void CreateScalingConfigurationRequest::setIoOptimized(const std::string &ioOptimized) {
  ioOptimized_ = ioOptimized;
  setParameter(std::string("IoOptimized"), ioOptimized);
}

std::vector<std::string> CreateScalingConfigurationRequest::getInstanceTypes() const {
  return instanceTypes_;
}

void CreateScalingConfigurationRequest::setInstanceTypes(const std::vector<std::string> &instanceTypes) {
  instanceTypes_ = instanceTypes;
}

std::string CreateScalingConfigurationRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void CreateScalingConfigurationRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setParameter(std::string("SecurityGroupId"), securityGroupId);
}

int CreateScalingConfigurationRequest::getInternetMaxBandwidthOut() const {
  return internetMaxBandwidthOut_;
}

void CreateScalingConfigurationRequest::setInternetMaxBandwidthOut(int internetMaxBandwidthOut) {
  internetMaxBandwidthOut_ = internetMaxBandwidthOut;
  setParameter(std::string("InternetMaxBandwidthOut"), std::to_string(internetMaxBandwidthOut));
}

std::string CreateScalingConfigurationRequest::getSystemDiskKMSKeyId() const {
  return systemDiskKMSKeyId_;
}

void CreateScalingConfigurationRequest::setSystemDiskKMSKeyId(const std::string &systemDiskKMSKeyId) {
  systemDiskKMSKeyId_ = systemDiskKMSKeyId;
  setParameter(std::string("SystemDisk.KMSKeyId"), systemDiskKMSKeyId);
}

std::string CreateScalingConfigurationRequest::getSystemDiskCategory() const {
  return systemDiskCategory_;
}

void CreateScalingConfigurationRequest::setSystemDiskCategory(const std::string &systemDiskCategory) {
  systemDiskCategory_ = systemDiskCategory;
  setParameter(std::string("SystemDisk.Category"), systemDiskCategory);
}

std::string CreateScalingConfigurationRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateScalingConfigurationRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateScalingConfigurationRequest::getSystemDiskPerformanceLevel() const {
  return systemDiskPerformanceLevel_;
}

void CreateScalingConfigurationRequest::setSystemDiskPerformanceLevel(const std::string &systemDiskPerformanceLevel) {
  systemDiskPerformanceLevel_ = systemDiskPerformanceLevel;
  setParameter(std::string("SystemDisk.PerformanceLevel"), systemDiskPerformanceLevel);
}

std::string CreateScalingConfigurationRequest::getUserData() const {
  return userData_;
}

void CreateScalingConfigurationRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

bool CreateScalingConfigurationRequest::getPasswordInherit() const {
  return passwordInherit_;
}

void CreateScalingConfigurationRequest::setPasswordInherit(bool passwordInherit) {
  passwordInherit_ = passwordInherit;
  setParameter(std::string("PasswordInherit"), passwordInherit ? "true" : "false");
}

CreateScalingConfigurationRequest::ResourcePoolOptions CreateScalingConfigurationRequest::getResourcePoolOptions() const {
  return resourcePoolOptions_;
}

void CreateScalingConfigurationRequest::setResourcePoolOptions(const CreateScalingConfigurationRequest::ResourcePoolOptions &resourcePoolOptions) {
  resourcePoolOptions_ = resourcePoolOptions;
  setParameter(std::string("ResourcePoolOptions") + ".Strategy", resourcePoolOptions.strategy);
  for(int dep1 = 0; dep1 != resourcePoolOptions.privatePoolIds.size(); dep1++) {
    setParameter(std::string("ResourcePoolOptions") + ".PrivatePoolIds." + std::to_string(dep1 + 1), resourcePoolOptions.privatePoolIds[dep1]);
  }
}

std::string CreateScalingConfigurationRequest::getImageName() const {
  return imageName_;
}

void CreateScalingConfigurationRequest::setImageName(const std::string &imageName) {
  imageName_ = imageName;
  setParameter(std::string("ImageName"), imageName);
}

std::string CreateScalingConfigurationRequest::getHttpEndpoint() const {
  return httpEndpoint_;
}

void CreateScalingConfigurationRequest::setHttpEndpoint(const std::string &httpEndpoint) {
  httpEndpoint_ = httpEndpoint;
  setParameter(std::string("HttpEndpoint"), httpEndpoint);
}

std::string CreateScalingConfigurationRequest::getDedicatedHostClusterId() const {
  return dedicatedHostClusterId_;
}

void CreateScalingConfigurationRequest::setDedicatedHostClusterId(const std::string &dedicatedHostClusterId) {
  dedicatedHostClusterId_ = dedicatedHostClusterId;
  setParameter(std::string("DedicatedHostClusterId"), dedicatedHostClusterId);
}

std::string CreateScalingConfigurationRequest::getInstanceType() const {
  return instanceType_;
}

void CreateScalingConfigurationRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::map<std::string, std::string> CreateScalingConfigurationRequest::getSchedulerOptions() const {
  return schedulerOptions_;
}

void CreateScalingConfigurationRequest::setSchedulerOptions(std::map<std::string, std::string> schedulerOptions) {
  schedulerOptions_ = schedulerOptions;
  setParameter(std::string("SchedulerOptions"), schedulerOptions);
}

std::string CreateScalingConfigurationRequest::getDeploymentSetId() const {
  return deploymentSetId_;
}

void CreateScalingConfigurationRequest::setDeploymentSetId(const std::string &deploymentSetId) {
  deploymentSetId_ = deploymentSetId;
  setParameter(std::string("DeploymentSetId"), deploymentSetId);
}

std::string CreateScalingConfigurationRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateScalingConfigurationRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateScalingConfigurationRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateScalingConfigurationRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string CreateScalingConfigurationRequest::getTenancy() const {
  return tenancy_;
}

void CreateScalingConfigurationRequest::setTenancy(const std::string &tenancy) {
  tenancy_ = tenancy;
  setParameter(std::string("Tenancy"), tenancy);
}

std::string CreateScalingConfigurationRequest::getSystemDiskDiskName() const {
  return systemDiskDiskName_;
}

void CreateScalingConfigurationRequest::setSystemDiskDiskName(const std::string &systemDiskDiskName) {
  systemDiskDiskName_ = systemDiskDiskName;
  setParameter(std::string("SystemDisk.DiskName"), systemDiskDiskName);
}

std::string CreateScalingConfigurationRequest::getRamRoleName() const {
  return ramRoleName_;
}

void CreateScalingConfigurationRequest::setRamRoleName(const std::string &ramRoleName) {
  ramRoleName_ = ramRoleName;
  setParameter(std::string("RamRoleName"), ramRoleName);
}

std::string CreateScalingConfigurationRequest::getSystemDiskEncryptAlgorithm() const {
  return systemDiskEncryptAlgorithm_;
}

void CreateScalingConfigurationRequest::setSystemDiskEncryptAlgorithm(const std::string &systemDiskEncryptAlgorithm) {
  systemDiskEncryptAlgorithm_ = systemDiskEncryptAlgorithm;
  setParameter(std::string("SystemDisk.EncryptAlgorithm"), systemDiskEncryptAlgorithm);
}

std::string CreateScalingConfigurationRequest::getDedicatedHostId() const {
  return dedicatedHostId_;
}

void CreateScalingConfigurationRequest::setDedicatedHostId(const std::string &dedicatedHostId) {
  dedicatedHostId_ = dedicatedHostId;
  setParameter(std::string("DedicatedHostId"), dedicatedHostId);
}

std::string CreateScalingConfigurationRequest::getCreditSpecification() const {
  return creditSpecification_;
}

void CreateScalingConfigurationRequest::setCreditSpecification(const std::string &creditSpecification) {
  creditSpecification_ = creditSpecification;
  setParameter(std::string("CreditSpecification"), creditSpecification);
}

int CreateScalingConfigurationRequest::getSpotDuration() const {
  return spotDuration_;
}

void CreateScalingConfigurationRequest::setSpotDuration(int spotDuration) {
  spotDuration_ = spotDuration;
  setParameter(std::string("SpotDuration"), std::to_string(spotDuration));
}

std::vector<std::string> CreateScalingConfigurationRequest::getSecurityGroupIds() const {
  return securityGroupIds_;
}

void CreateScalingConfigurationRequest::setSecurityGroupIds(const std::vector<std::string> &securityGroupIds) {
  securityGroupIds_ = securityGroupIds;
}

std::vector<CreateScalingConfigurationRequest::DataDisk> CreateScalingConfigurationRequest::getDataDisk() const {
  return dataDisk_;
}

void CreateScalingConfigurationRequest::setDataDisk(const std::vector<CreateScalingConfigurationRequest::DataDisk> &dataDisk) {
  dataDisk_ = dataDisk;
  for(int dep1 = 0; dep1 != dataDisk.size(); dep1++) {
  auto dataDiskObj = dataDisk.at(dep1);
  std::string dataDiskObjStr = std::string("DataDisk") + "." + std::to_string(dep1 + 1);
    setParameter(dataDiskObjStr + ".SnapshotId", dataDiskObj.snapshotId);
    setParameter(dataDiskObjStr + ".PerformanceLevel", dataDiskObj.performanceLevel);
    setParameter(dataDiskObjStr + ".AutoSnapshotPolicyId", dataDiskObj.autoSnapshotPolicyId);
    setParameter(dataDiskObjStr + ".Description", dataDiskObj.description);
    setParameter(dataDiskObjStr + ".BurstingEnabled", dataDiskObj.burstingEnabled ? "true" : "false");
    setParameter(dataDiskObjStr + ".DiskName", dataDiskObj.diskName);
    setParameter(dataDiskObjStr + ".ProvisionedIops", std::to_string(dataDiskObj.provisionedIops));
    setParameter(dataDiskObjStr + ".Encrypted", dataDiskObj.encrypted);
    setParameter(dataDiskObjStr + ".Size", std::to_string(dataDiskObj.size));
    setParameter(dataDiskObjStr + ".Category", dataDiskObj.category);
    setParameter(dataDiskObjStr + ".KMSKeyId", dataDiskObj.kMSKeyId);
    setParameter(dataDiskObjStr + ".Device", dataDiskObj.device);
    setParameter(dataDiskObjStr + ".DeleteWithInstance", dataDiskObj.deleteWithInstance ? "true" : "false");
  }
}

std::vector<CreateScalingConfigurationRequest::InstanceTypeOverride> CreateScalingConfigurationRequest::getInstanceTypeOverride() const {
  return instanceTypeOverride_;
}

void CreateScalingConfigurationRequest::setInstanceTypeOverride(const std::vector<CreateScalingConfigurationRequest::InstanceTypeOverride> &instanceTypeOverride) {
  instanceTypeOverride_ = instanceTypeOverride;
  for(int dep1 = 0; dep1 != instanceTypeOverride.size(); dep1++) {
  auto instanceTypeOverrideObj = instanceTypeOverride.at(dep1);
  std::string instanceTypeOverrideObjStr = std::string("InstanceTypeOverride") + "." + std::to_string(dep1 + 1);
    setParameter(instanceTypeOverrideObjStr + ".WeightedCapacity", std::to_string(instanceTypeOverrideObj.weightedCapacity));
    setParameter(instanceTypeOverrideObjStr + ".InstanceType", instanceTypeOverrideObj.instanceType);
  }
}

long CreateScalingConfigurationRequest::getSystemDiskProvisionedIops() const {
  return systemDiskProvisionedIops_;
}

void CreateScalingConfigurationRequest::setSystemDiskProvisionedIops(long systemDiskProvisionedIops) {
  systemDiskProvisionedIops_ = systemDiskProvisionedIops;
  setParameter(std::string("SystemDisk.ProvisionedIops"), std::to_string(systemDiskProvisionedIops));
}

int CreateScalingConfigurationRequest::getLoadBalancerWeight() const {
  return loadBalancerWeight_;
}

void CreateScalingConfigurationRequest::setLoadBalancerWeight(int loadBalancerWeight) {
  loadBalancerWeight_ = loadBalancerWeight;
  setParameter(std::string("LoadBalancerWeight"), std::to_string(loadBalancerWeight));
}

std::string CreateScalingConfigurationRequest::getStorageSetId() const {
  return storageSetId_;
}

void CreateScalingConfigurationRequest::setStorageSetId(const std::string &storageSetId) {
  storageSetId_ = storageSetId;
  setParameter(std::string("StorageSetId"), storageSetId);
}

int CreateScalingConfigurationRequest::getSystemDiskSize() const {
  return systemDiskSize_;
}

void CreateScalingConfigurationRequest::setSystemDiskSize(int systemDiskSize) {
  systemDiskSize_ = systemDiskSize;
  setParameter(std::string("SystemDisk.Size"), std::to_string(systemDiskSize));
}

std::string CreateScalingConfigurationRequest::getImageFamily() const {
  return imageFamily_;
}

void CreateScalingConfigurationRequest::setImageFamily(const std::string &imageFamily) {
  imageFamily_ = imageFamily;
  setParameter(std::string("ImageFamily"), imageFamily);
}

std::string CreateScalingConfigurationRequest::getHttpTokens() const {
  return httpTokens_;
}

void CreateScalingConfigurationRequest::setHttpTokens(const std::string &httpTokens) {
  httpTokens_ = httpTokens;
  setParameter(std::string("HttpTokens"), httpTokens);
}

std::string CreateScalingConfigurationRequest::getSystemDiskDescription() const {
  return systemDiskDescription_;
}

void CreateScalingConfigurationRequest::setSystemDiskDescription(const std::string &systemDiskDescription) {
  systemDiskDescription_ = systemDiskDescription;
  setParameter(std::string("SystemDisk.Description"), systemDiskDescription);
}

bool CreateScalingConfigurationRequest::getSystemDiskEncrypted() const {
  return systemDiskEncrypted_;
}

void CreateScalingConfigurationRequest::setSystemDiskEncrypted(bool systemDiskEncrypted) {
  systemDiskEncrypted_ = systemDiskEncrypted;
  setParameter(std::string("SystemDisk.Encrypted"), systemDiskEncrypted ? "true" : "false");
}

