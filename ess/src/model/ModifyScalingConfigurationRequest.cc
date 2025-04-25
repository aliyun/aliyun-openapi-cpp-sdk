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

#include <alibabacloud/ess/model/ModifyScalingConfigurationRequest.h>

using AlibabaCloud::Ess::Model::ModifyScalingConfigurationRequest;

ModifyScalingConfigurationRequest::ModifyScalingConfigurationRequest()
    : RpcServiceRequest("ess", "2014-08-28", "ModifyScalingConfiguration") {
  setMethod(HttpRequest::Method::Post);
}

ModifyScalingConfigurationRequest::~ModifyScalingConfigurationRequest() {}

std::string ModifyScalingConfigurationRequest::getHpcClusterId() const {
  return hpcClusterId_;
}

void ModifyScalingConfigurationRequest::setHpcClusterId(const std::string &hpcClusterId) {
  hpcClusterId_ = hpcClusterId;
  setParameter(std::string("HpcClusterId"), hpcClusterId);
}

ModifyScalingConfigurationRequest::SecurityOptions ModifyScalingConfigurationRequest::getSecurityOptions() const {
  return securityOptions_;
}

void ModifyScalingConfigurationRequest::setSecurityOptions(const ModifyScalingConfigurationRequest::SecurityOptions &securityOptions) {
  securityOptions_ = securityOptions;
  setParameter(std::string("SecurityOptions") + ".ConfidentialComputingMode", securityOptions.confidentialComputingMode);
}

std::string ModifyScalingConfigurationRequest::getKeyPairName() const {
  return keyPairName_;
}

void ModifyScalingConfigurationRequest::setKeyPairName(const std::string &keyPairName) {
  keyPairName_ = keyPairName;
  setParameter(std::string("KeyPairName"), keyPairName);
}

std::vector<ModifyScalingConfigurationRequest::SpotPriceLimit> ModifyScalingConfigurationRequest::getSpotPriceLimit() const {
  return spotPriceLimit_;
}

void ModifyScalingConfigurationRequest::setSpotPriceLimit(const std::vector<ModifyScalingConfigurationRequest::SpotPriceLimit> &spotPriceLimit) {
  spotPriceLimit_ = spotPriceLimit;
  for(int dep1 = 0; dep1 != spotPriceLimit.size(); dep1++) {
  auto spotPriceLimitObj = spotPriceLimit.at(dep1);
  std::string spotPriceLimitObjStr = std::string("SpotPriceLimit") + "." + std::to_string(dep1 + 1);
    setParameter(spotPriceLimitObjStr + ".InstanceType", spotPriceLimitObj.instanceType);
    setParameter(spotPriceLimitObjStr + ".PriceLimit", std::to_string(spotPriceLimitObj.priceLimit));
  }
}

bool ModifyScalingConfigurationRequest::getDeletionProtection() const {
  return deletionProtection_;
}

void ModifyScalingConfigurationRequest::setDeletionProtection(bool deletionProtection) {
  deletionProtection_ = deletionProtection;
  setParameter(std::string("DeletionProtection"), deletionProtection ? "true" : "false");
}

std::string ModifyScalingConfigurationRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ModifyScalingConfigurationRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ModifyScalingConfigurationRequest::getPrivatePoolOptionsMatchCriteria() const {
  return privatePoolOptionsMatchCriteria_;
}

void ModifyScalingConfigurationRequest::setPrivatePoolOptionsMatchCriteria(const std::string &privatePoolOptionsMatchCriteria) {
  privatePoolOptionsMatchCriteria_ = privatePoolOptionsMatchCriteria;
  setParameter(std::string("PrivatePoolOptions.MatchCriteria"), privatePoolOptionsMatchCriteria);
}

std::string ModifyScalingConfigurationRequest::getHostName() const {
  return hostName_;
}

void ModifyScalingConfigurationRequest::setHostName(const std::string &hostName) {
  hostName_ = hostName;
  setParameter(std::string("HostName"), hostName);
}

std::string ModifyScalingConfigurationRequest::getPassword() const {
  return password_;
}

void ModifyScalingConfigurationRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

std::string ModifyScalingConfigurationRequest::getInstanceDescription() const {
  return instanceDescription_;
}

void ModifyScalingConfigurationRequest::setInstanceDescription(const std::string &instanceDescription) {
  instanceDescription_ = instanceDescription;
  setParameter(std::string("InstanceDescription"), instanceDescription);
}

int ModifyScalingConfigurationRequest::getStorageSetPartitionNumber() const {
  return storageSetPartitionNumber_;
}

void ModifyScalingConfigurationRequest::setStorageSetPartitionNumber(int storageSetPartitionNumber) {
  storageSetPartitionNumber_ = storageSetPartitionNumber;
  setParameter(std::string("StorageSetPartitionNumber"), std::to_string(storageSetPartitionNumber));
}

std::vector<ModifyScalingConfigurationRequest::CustomPriorities> ModifyScalingConfigurationRequest::getCustomPriorities() const {
  return customPriorities_;
}

void ModifyScalingConfigurationRequest::setCustomPriorities(const std::vector<ModifyScalingConfigurationRequest::CustomPriorities> &customPriorities) {
  customPriorities_ = customPriorities;
  for(int dep1 = 0; dep1 != customPriorities.size(); dep1++) {
  auto customPrioritiesObj = customPriorities.at(dep1);
  std::string customPrioritiesObjStr = std::string("CustomPriorities") + "." + std::to_string(dep1 + 1);
    setParameter(customPrioritiesObjStr + ".VswitchId", customPrioritiesObj.vswitchId);
    setParameter(customPrioritiesObjStr + ".InstanceType", customPrioritiesObj.instanceType);
  }
}

std::string ModifyScalingConfigurationRequest::getSystemDiskAutoSnapshotPolicyId() const {
  return systemDiskAutoSnapshotPolicyId_;
}

void ModifyScalingConfigurationRequest::setSystemDiskAutoSnapshotPolicyId(const std::string &systemDiskAutoSnapshotPolicyId) {
  systemDiskAutoSnapshotPolicyId_ = systemDiskAutoSnapshotPolicyId;
  setParameter(std::string("SystemDisk.AutoSnapshotPolicyId"), systemDiskAutoSnapshotPolicyId);
}

std::string ModifyScalingConfigurationRequest::getPrivatePoolOptionsId() const {
  return privatePoolOptionsId_;
}

void ModifyScalingConfigurationRequest::setPrivatePoolOptionsId(const std::string &privatePoolOptionsId) {
  privatePoolOptionsId_ = privatePoolOptionsId;
  setParameter(std::string("PrivatePoolOptions.Id"), privatePoolOptionsId);
}

bool ModifyScalingConfigurationRequest::getImageOptionsLoginAsNonRoot() const {
  return imageOptionsLoginAsNonRoot_;
}

void ModifyScalingConfigurationRequest::setImageOptionsLoginAsNonRoot(bool imageOptionsLoginAsNonRoot) {
  imageOptionsLoginAsNonRoot_ = imageOptionsLoginAsNonRoot;
  setParameter(std::string("ImageOptions.LoginAsNonRoot"), imageOptionsLoginAsNonRoot ? "true" : "false");
}

int ModifyScalingConfigurationRequest::getIpv6AddressCount() const {
  return ipv6AddressCount_;
}

void ModifyScalingConfigurationRequest::setIpv6AddressCount(int ipv6AddressCount) {
  ipv6AddressCount_ = ipv6AddressCount;
  setParameter(std::string("Ipv6AddressCount"), std::to_string(ipv6AddressCount));
}

int ModifyScalingConfigurationRequest::getCpu() const {
  return cpu_;
}

void ModifyScalingConfigurationRequest::setCpu(int cpu) {
  cpu_ = cpu;
  setParameter(std::string("Cpu"), std::to_string(cpu));
}

std::vector<std::string> ModifyScalingConfigurationRequest::getSystemDiskCategories() const {
  return systemDiskCategories_;
}

void ModifyScalingConfigurationRequest::setSystemDiskCategories(const std::vector<std::string> &systemDiskCategories) {
  systemDiskCategories_ = systemDiskCategories;
}

long ModifyScalingConfigurationRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyScalingConfigurationRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyScalingConfigurationRequest::getScalingConfigurationName() const {
  return scalingConfigurationName_;
}

void ModifyScalingConfigurationRequest::setScalingConfigurationName(const std::string &scalingConfigurationName) {
  scalingConfigurationName_ = scalingConfigurationName;
  setParameter(std::string("ScalingConfigurationName"), scalingConfigurationName);
}

std::string ModifyScalingConfigurationRequest::getTags() const {
  return tags_;
}

void ModifyScalingConfigurationRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string ModifyScalingConfigurationRequest::getScalingConfigurationId() const {
  return scalingConfigurationId_;
}

void ModifyScalingConfigurationRequest::setScalingConfigurationId(const std::string &scalingConfigurationId) {
  scalingConfigurationId_ = scalingConfigurationId;
  setParameter(std::string("ScalingConfigurationId"), scalingConfigurationId);
}

std::string ModifyScalingConfigurationRequest::getSpotStrategy() const {
  return spotStrategy_;
}

void ModifyScalingConfigurationRequest::setSpotStrategy(const std::string &spotStrategy) {
  spotStrategy_ = spotStrategy;
  setParameter(std::string("SpotStrategy"), spotStrategy);
}

ModifyScalingConfigurationRequest::CpuOptions ModifyScalingConfigurationRequest::getCpuOptions() const {
  return cpuOptions_;
}

void ModifyScalingConfigurationRequest::setCpuOptions(const ModifyScalingConfigurationRequest::CpuOptions &cpuOptions) {
  cpuOptions_ = cpuOptions;
  for(int dep1 = 0; dep1 != cpuOptions.accelerators.size(); dep1++) {
    setParameter(std::string("CpuOptions") + ".Accelerators." + std::to_string(dep1 + 1), cpuOptions.accelerators[dep1]);
  }
}

bool ModifyScalingConfigurationRequest::getSystemDiskBurstingEnabled() const {
  return systemDiskBurstingEnabled_;
}

void ModifyScalingConfigurationRequest::setSystemDiskBurstingEnabled(bool systemDiskBurstingEnabled) {
  systemDiskBurstingEnabled_ = systemDiskBurstingEnabled;
  setParameter(std::string("SystemDisk.BurstingEnabled"), systemDiskBurstingEnabled ? "true" : "false");
}

std::string ModifyScalingConfigurationRequest::getInstanceName() const {
  return instanceName_;
}

void ModifyScalingConfigurationRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setParameter(std::string("InstanceName"), instanceName);
}

std::string ModifyScalingConfigurationRequest::getInternetChargeType() const {
  return internetChargeType_;
}

void ModifyScalingConfigurationRequest::setInternetChargeType(const std::string &internetChargeType) {
  internetChargeType_ = internetChargeType;
  setParameter(std::string("InternetChargeType"), internetChargeType);
}

std::string ModifyScalingConfigurationRequest::getZoneId() const {
  return zoneId_;
}

void ModifyScalingConfigurationRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

int ModifyScalingConfigurationRequest::getInternetMaxBandwidthIn() const {
  return internetMaxBandwidthIn_;
}

void ModifyScalingConfigurationRequest::setInternetMaxBandwidthIn(int internetMaxBandwidthIn) {
  internetMaxBandwidthIn_ = internetMaxBandwidthIn;
  setParameter(std::string("InternetMaxBandwidthIn"), std::to_string(internetMaxBandwidthIn));
}

std::vector<ModifyScalingConfigurationRequest::InstancePatternInfo> ModifyScalingConfigurationRequest::getInstancePatternInfo() const {
  return instancePatternInfo_;
}

void ModifyScalingConfigurationRequest::setInstancePatternInfo(const std::vector<ModifyScalingConfigurationRequest::InstancePatternInfo> &instancePatternInfo) {
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

std::string ModifyScalingConfigurationRequest::getAffinity() const {
  return affinity_;
}

void ModifyScalingConfigurationRequest::setAffinity(const std::string &affinity) {
  affinity_ = affinity;
  setParameter(std::string("Affinity"), affinity);
}

std::vector<ModifyScalingConfigurationRequest::NetworkInterfaces> ModifyScalingConfigurationRequest::getNetworkInterfaces() const {
  return networkInterfaces_;
}

void ModifyScalingConfigurationRequest::setNetworkInterfaces(const std::vector<ModifyScalingConfigurationRequest::NetworkInterfaces> &networkInterfaces) {
  networkInterfaces_ = networkInterfaces;
  for(int dep1 = 0; dep1 != networkInterfaces.size(); dep1++) {
  auto networkInterfacesObj = networkInterfaces.at(dep1);
  std::string networkInterfacesObjStr = std::string("NetworkInterfaces") + "." + std::to_string(dep1 + 1);
    setParameter(networkInterfacesObjStr + ".Ipv6AddressCount", std::to_string(networkInterfacesObj.ipv6AddressCount));
    setParameter(networkInterfacesObjStr + ".InstanceType", networkInterfacesObj.instanceType);
    setParameter(networkInterfacesObjStr + ".NetworkInterfaceTrafficMode", networkInterfacesObj.networkInterfaceTrafficMode);
  }
}

std::string ModifyScalingConfigurationRequest::getImageId() const {
  return imageId_;
}

void ModifyScalingConfigurationRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

int ModifyScalingConfigurationRequest::getMemory() const {
  return memory_;
}

void ModifyScalingConfigurationRequest::setMemory(int memory) {
  memory_ = memory;
  setParameter(std::string("Memory"), std::to_string(memory));
}

std::string ModifyScalingConfigurationRequest::getSpotInterruptionBehavior() const {
  return spotInterruptionBehavior_;
}

void ModifyScalingConfigurationRequest::setSpotInterruptionBehavior(const std::string &spotInterruptionBehavior) {
  spotInterruptionBehavior_ = spotInterruptionBehavior;
  setParameter(std::string("SpotInterruptionBehavior"), spotInterruptionBehavior);
}

std::string ModifyScalingConfigurationRequest::getIoOptimized() const {
  return ioOptimized_;
}

void ModifyScalingConfigurationRequest::setIoOptimized(const std::string &ioOptimized) {
  ioOptimized_ = ioOptimized;
  setParameter(std::string("IoOptimized"), ioOptimized);
}

std::vector<std::string> ModifyScalingConfigurationRequest::getInstanceTypes() const {
  return instanceTypes_;
}

void ModifyScalingConfigurationRequest::setInstanceTypes(const std::vector<std::string> &instanceTypes) {
  instanceTypes_ = instanceTypes;
}

int ModifyScalingConfigurationRequest::getInternetMaxBandwidthOut() const {
  return internetMaxBandwidthOut_;
}

void ModifyScalingConfigurationRequest::setInternetMaxBandwidthOut(int internetMaxBandwidthOut) {
  internetMaxBandwidthOut_ = internetMaxBandwidthOut;
  setParameter(std::string("InternetMaxBandwidthOut"), std::to_string(internetMaxBandwidthOut));
}

std::string ModifyScalingConfigurationRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void ModifyScalingConfigurationRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setParameter(std::string("SecurityGroupId"), securityGroupId);
}

std::string ModifyScalingConfigurationRequest::getSystemDiskKMSKeyId() const {
  return systemDiskKMSKeyId_;
}

void ModifyScalingConfigurationRequest::setSystemDiskKMSKeyId(const std::string &systemDiskKMSKeyId) {
  systemDiskKMSKeyId_ = systemDiskKMSKeyId;
  setParameter(std::string("SystemDisk.KMSKeyId"), systemDiskKMSKeyId);
}

std::string ModifyScalingConfigurationRequest::getSystemDiskCategory() const {
  return systemDiskCategory_;
}

void ModifyScalingConfigurationRequest::setSystemDiskCategory(const std::string &systemDiskCategory) {
  systemDiskCategory_ = systemDiskCategory;
  setParameter(std::string("SystemDisk.Category"), systemDiskCategory);
}

std::string ModifyScalingConfigurationRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyScalingConfigurationRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyScalingConfigurationRequest::getSystemDiskPerformanceLevel() const {
  return systemDiskPerformanceLevel_;
}

void ModifyScalingConfigurationRequest::setSystemDiskPerformanceLevel(const std::string &systemDiskPerformanceLevel) {
  systemDiskPerformanceLevel_ = systemDiskPerformanceLevel;
  setParameter(std::string("SystemDisk.PerformanceLevel"), systemDiskPerformanceLevel);
}

std::string ModifyScalingConfigurationRequest::getUserData() const {
  return userData_;
}

void ModifyScalingConfigurationRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

bool ModifyScalingConfigurationRequest::getPasswordInherit() const {
  return passwordInherit_;
}

void ModifyScalingConfigurationRequest::setPasswordInherit(bool passwordInherit) {
  passwordInherit_ = passwordInherit;
  setParameter(std::string("PasswordInherit"), passwordInherit ? "true" : "false");
}

ModifyScalingConfigurationRequest::ResourcePoolOptions ModifyScalingConfigurationRequest::getResourcePoolOptions() const {
  return resourcePoolOptions_;
}

void ModifyScalingConfigurationRequest::setResourcePoolOptions(const ModifyScalingConfigurationRequest::ResourcePoolOptions &resourcePoolOptions) {
  resourcePoolOptions_ = resourcePoolOptions;
  setParameter(std::string("ResourcePoolOptions") + ".Strategy", resourcePoolOptions.strategy);
  for(int dep1 = 0; dep1 != resourcePoolOptions.privatePoolIds.size(); dep1++) {
    setParameter(std::string("ResourcePoolOptions") + ".PrivatePoolIds." + std::to_string(dep1 + 1), resourcePoolOptions.privatePoolIds[dep1]);
  }
}

std::string ModifyScalingConfigurationRequest::getImageName() const {
  return imageName_;
}

void ModifyScalingConfigurationRequest::setImageName(const std::string &imageName) {
  imageName_ = imageName;
  setParameter(std::string("ImageName"), imageName);
}

std::string ModifyScalingConfigurationRequest::getHttpEndpoint() const {
  return httpEndpoint_;
}

void ModifyScalingConfigurationRequest::setHttpEndpoint(const std::string &httpEndpoint) {
  httpEndpoint_ = httpEndpoint;
  setParameter(std::string("HttpEndpoint"), httpEndpoint);
}

std::string ModifyScalingConfigurationRequest::getDedicatedHostClusterId() const {
  return dedicatedHostClusterId_;
}

void ModifyScalingConfigurationRequest::setDedicatedHostClusterId(const std::string &dedicatedHostClusterId) {
  dedicatedHostClusterId_ = dedicatedHostClusterId;
  setParameter(std::string("DedicatedHostClusterId"), dedicatedHostClusterId);
}

bool ModifyScalingConfigurationRequest::getOverride() const {
  return override_;
}

void ModifyScalingConfigurationRequest::setOverride(bool override) {
  override_ = override;
  setParameter(std::string("Override"), override ? "true" : "false");
}

std::map<std::string, std::string> ModifyScalingConfigurationRequest::getSchedulerOptions() const {
  return schedulerOptions_;
}

void ModifyScalingConfigurationRequest::setSchedulerOptions(std::map<std::string, std::string> schedulerOptions) {
  schedulerOptions_ = schedulerOptions;
  setParameter(std::string("SchedulerOptions"), schedulerOptions);
}

std::string ModifyScalingConfigurationRequest::getDeploymentSetId() const {
  return deploymentSetId_;
}

void ModifyScalingConfigurationRequest::setDeploymentSetId(const std::string &deploymentSetId) {
  deploymentSetId_ = deploymentSetId;
  setParameter(std::string("DeploymentSetId"), deploymentSetId);
}

std::string ModifyScalingConfigurationRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyScalingConfigurationRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyScalingConfigurationRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyScalingConfigurationRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ModifyScalingConfigurationRequest::getTenancy() const {
  return tenancy_;
}

void ModifyScalingConfigurationRequest::setTenancy(const std::string &tenancy) {
  tenancy_ = tenancy;
  setParameter(std::string("Tenancy"), tenancy);
}

std::string ModifyScalingConfigurationRequest::getSystemDiskDiskName() const {
  return systemDiskDiskName_;
}

void ModifyScalingConfigurationRequest::setSystemDiskDiskName(const std::string &systemDiskDiskName) {
  systemDiskDiskName_ = systemDiskDiskName;
  setParameter(std::string("SystemDisk.DiskName"), systemDiskDiskName);
}

std::string ModifyScalingConfigurationRequest::getRamRoleName() const {
  return ramRoleName_;
}

void ModifyScalingConfigurationRequest::setRamRoleName(const std::string &ramRoleName) {
  ramRoleName_ = ramRoleName;
  setParameter(std::string("RamRoleName"), ramRoleName);
}

std::string ModifyScalingConfigurationRequest::getSystemDiskEncryptAlgorithm() const {
  return systemDiskEncryptAlgorithm_;
}

void ModifyScalingConfigurationRequest::setSystemDiskEncryptAlgorithm(const std::string &systemDiskEncryptAlgorithm) {
  systemDiskEncryptAlgorithm_ = systemDiskEncryptAlgorithm;
  setParameter(std::string("SystemDisk.EncryptAlgorithm"), systemDiskEncryptAlgorithm);
}

std::string ModifyScalingConfigurationRequest::getDedicatedHostId() const {
  return dedicatedHostId_;
}

void ModifyScalingConfigurationRequest::setDedicatedHostId(const std::string &dedicatedHostId) {
  dedicatedHostId_ = dedicatedHostId;
  setParameter(std::string("DedicatedHostId"), dedicatedHostId);
}

std::string ModifyScalingConfigurationRequest::getCreditSpecification() const {
  return creditSpecification_;
}

void ModifyScalingConfigurationRequest::setCreditSpecification(const std::string &creditSpecification) {
  creditSpecification_ = creditSpecification;
  setParameter(std::string("CreditSpecification"), creditSpecification);
}

int ModifyScalingConfigurationRequest::getSpotDuration() const {
  return spotDuration_;
}

void ModifyScalingConfigurationRequest::setSpotDuration(int spotDuration) {
  spotDuration_ = spotDuration;
  setParameter(std::string("SpotDuration"), std::to_string(spotDuration));
}

std::vector<std::string> ModifyScalingConfigurationRequest::getSecurityGroupIds() const {
  return securityGroupIds_;
}

void ModifyScalingConfigurationRequest::setSecurityGroupIds(const std::vector<std::string> &securityGroupIds) {
  securityGroupIds_ = securityGroupIds;
}

std::vector<ModifyScalingConfigurationRequest::DataDisk> ModifyScalingConfigurationRequest::getDataDisk() const {
  return dataDisk_;
}

void ModifyScalingConfigurationRequest::setDataDisk(const std::vector<ModifyScalingConfigurationRequest::DataDisk> &dataDisk) {
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

std::vector<ModifyScalingConfigurationRequest::InstanceTypeOverride> ModifyScalingConfigurationRequest::getInstanceTypeOverride() const {
  return instanceTypeOverride_;
}

void ModifyScalingConfigurationRequest::setInstanceTypeOverride(const std::vector<ModifyScalingConfigurationRequest::InstanceTypeOverride> &instanceTypeOverride) {
  instanceTypeOverride_ = instanceTypeOverride;
  for(int dep1 = 0; dep1 != instanceTypeOverride.size(); dep1++) {
  auto instanceTypeOverrideObj = instanceTypeOverride.at(dep1);
  std::string instanceTypeOverrideObjStr = std::string("InstanceTypeOverride") + "." + std::to_string(dep1 + 1);
    setParameter(instanceTypeOverrideObjStr + ".WeightedCapacity", std::to_string(instanceTypeOverrideObj.weightedCapacity));
    setParameter(instanceTypeOverrideObjStr + ".InstanceType", instanceTypeOverrideObj.instanceType);
  }
}

long ModifyScalingConfigurationRequest::getSystemDiskProvisionedIops() const {
  return systemDiskProvisionedIops_;
}

void ModifyScalingConfigurationRequest::setSystemDiskProvisionedIops(long systemDiskProvisionedIops) {
  systemDiskProvisionedIops_ = systemDiskProvisionedIops;
  setParameter(std::string("SystemDisk.ProvisionedIops"), std::to_string(systemDiskProvisionedIops));
}

int ModifyScalingConfigurationRequest::getLoadBalancerWeight() const {
  return loadBalancerWeight_;
}

void ModifyScalingConfigurationRequest::setLoadBalancerWeight(int loadBalancerWeight) {
  loadBalancerWeight_ = loadBalancerWeight;
  setParameter(std::string("LoadBalancerWeight"), std::to_string(loadBalancerWeight));
}

std::string ModifyScalingConfigurationRequest::getStorageSetId() const {
  return storageSetId_;
}

void ModifyScalingConfigurationRequest::setStorageSetId(const std::string &storageSetId) {
  storageSetId_ = storageSetId;
  setParameter(std::string("StorageSetId"), storageSetId);
}

int ModifyScalingConfigurationRequest::getSystemDiskSize() const {
  return systemDiskSize_;
}

void ModifyScalingConfigurationRequest::setSystemDiskSize(int systemDiskSize) {
  systemDiskSize_ = systemDiskSize;
  setParameter(std::string("SystemDisk.Size"), std::to_string(systemDiskSize));
}

std::string ModifyScalingConfigurationRequest::getImageFamily() const {
  return imageFamily_;
}

void ModifyScalingConfigurationRequest::setImageFamily(const std::string &imageFamily) {
  imageFamily_ = imageFamily;
  setParameter(std::string("ImageFamily"), imageFamily);
}

std::string ModifyScalingConfigurationRequest::getHttpTokens() const {
  return httpTokens_;
}

void ModifyScalingConfigurationRequest::setHttpTokens(const std::string &httpTokens) {
  httpTokens_ = httpTokens;
  setParameter(std::string("HttpTokens"), httpTokens);
}

std::string ModifyScalingConfigurationRequest::getSystemDiskDescription() const {
  return systemDiskDescription_;
}

void ModifyScalingConfigurationRequest::setSystemDiskDescription(const std::string &systemDiskDescription) {
  systemDiskDescription_ = systemDiskDescription;
  setParameter(std::string("SystemDisk.Description"), systemDiskDescription);
}

bool ModifyScalingConfigurationRequest::getSystemDiskEncrypted() const {
  return systemDiskEncrypted_;
}

void ModifyScalingConfigurationRequest::setSystemDiskEncrypted(bool systemDiskEncrypted) {
  systemDiskEncrypted_ = systemDiskEncrypted;
  setParameter(std::string("SystemDisk.Encrypted"), systemDiskEncrypted ? "true" : "false");
}

