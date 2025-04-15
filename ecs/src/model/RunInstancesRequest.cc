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

#include <alibabacloud/ecs/model/RunInstancesRequest.h>

using AlibabaCloud::Ecs::Model::RunInstancesRequest;

RunInstancesRequest::RunInstancesRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "RunInstances") {
  setMethod(HttpRequest::Method::Post);
}

RunInstancesRequest::~RunInstancesRequest() {}

bool RunInstancesRequest::getUniqueSuffix() const {
  return uniqueSuffix_;
}

void RunInstancesRequest::setUniqueSuffix(bool uniqueSuffix) {
  uniqueSuffix_ = uniqueSuffix;
  setParameter(std::string("UniqueSuffix"), uniqueSuffix ? "true" : "false");
}

std::string RunInstancesRequest::getSecurityEnhancementStrategy() const {
  return securityEnhancementStrategy_;
}

void RunInstancesRequest::setSecurityEnhancementStrategy(const std::string &securityEnhancementStrategy) {
  securityEnhancementStrategy_ = securityEnhancementStrategy;
  setParameter(std::string("SecurityEnhancementStrategy"), securityEnhancementStrategy);
}

int RunInstancesRequest::getMinAmount() const {
  return minAmount_;
}

void RunInstancesRequest::setMinAmount(int minAmount) {
  minAmount_ = minAmount;
  setParameter(std::string("MinAmount"), std::to_string(minAmount));
}

bool RunInstancesRequest::getDeletionProtection() const {
  return deletionProtection_;
}

void RunInstancesRequest::setDeletionProtection(bool deletionProtection) {
  deletionProtection_ = deletionProtection;
  setParameter(std::string("DeletionProtection"), deletionProtection ? "true" : "false");
}

std::string RunInstancesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void RunInstancesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string RunInstancesRequest::getPrivatePoolOptionsMatchCriteria() const {
  return privatePoolOptionsMatchCriteria_;
}

void RunInstancesRequest::setPrivatePoolOptionsMatchCriteria(const std::string &privatePoolOptionsMatchCriteria) {
  privatePoolOptionsMatchCriteria_ = privatePoolOptionsMatchCriteria;
  setParameter(std::string("PrivatePoolOptions.MatchCriteria"), privatePoolOptionsMatchCriteria);
}

bool RunInstancesRequest::getEnableNVS() const {
  return enableNVS_;
}

void RunInstancesRequest::setEnableNVS(bool enableNVS) {
  enableNVS_ = enableNVS;
  setParameter(std::string("EnableNVS"), enableNVS ? "true" : "false");
}

std::string RunInstancesRequest::getHostName() const {
  return hostName_;
}

void RunInstancesRequest::setHostName(const std::string &hostName) {
  hostName_ = hostName;
  setParameter(std::string("HostName"), hostName);
}

std::string RunInstancesRequest::getPassword() const {
  return password_;
}

void RunInstancesRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

RunInstancesRequest::SystemDisk RunInstancesRequest::getSystemDisk() const {
  return systemDisk_;
}

void RunInstancesRequest::setSystemDisk(const RunInstancesRequest::SystemDisk &systemDisk) {
  systemDisk_ = systemDisk;
  setParameter(std::string("SystemDisk") + ".StorageClusterId", systemDisk.storageClusterId);
  setParameter(std::string("SystemDisk") + ".ProvisionedIops", std::to_string(systemDisk.provisionedIops));
  setParameter(std::string("SystemDisk") + ".BurstingEnabled", systemDisk.burstingEnabled ? "true" : "false");
  setParameter(std::string("SystemDisk") + ".Encrypted", systemDisk.encrypted);
  setParameter(std::string("SystemDisk") + ".KMSKeyId", systemDisk.kMSKeyId);
  setParameter(std::string("SystemDisk") + ".EncryptAlgorithm", systemDisk.encryptAlgorithm);
}

RunInstancesRequest::ImageOptions RunInstancesRequest::getImageOptions() const {
  return imageOptions_;
}

void RunInstancesRequest::setImageOptions(const RunInstancesRequest::ImageOptions &imageOptions) {
  imageOptions_ = imageOptions;
  setParameter(std::string("ImageOptions") + ".LoginAsNonRoot", imageOptions.loginAsNonRoot ? "true" : "false");
}

int RunInstancesRequest::getDeploymentSetGroupNo() const {
  return deploymentSetGroupNo_;
}

void RunInstancesRequest::setDeploymentSetGroupNo(int deploymentSetGroupNo) {
  deploymentSetGroupNo_ = deploymentSetGroupNo;
  setParameter(std::string("DeploymentSetGroupNo"), std::to_string(deploymentSetGroupNo));
}

std::string RunInstancesRequest::getSystemDiskAutoSnapshotPolicyId() const {
  return systemDiskAutoSnapshotPolicyId_;
}

void RunInstancesRequest::setSystemDiskAutoSnapshotPolicyId(const std::string &systemDiskAutoSnapshotPolicyId) {
  systemDiskAutoSnapshotPolicyId_ = systemDiskAutoSnapshotPolicyId;
  setParameter(std::string("SystemDisk.AutoSnapshotPolicyId"), systemDiskAutoSnapshotPolicyId);
}

int RunInstancesRequest::getCpuOptionsCore() const {
  return cpuOptionsCore_;
}

void RunInstancesRequest::setCpuOptionsCore(int cpuOptionsCore) {
  cpuOptionsCore_ = cpuOptionsCore;
  setParameter(std::string("CpuOptions.Core"), std::to_string(cpuOptionsCore));
}

int RunInstancesRequest::getPeriod() const {
  return period_;
}

void RunInstancesRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

bool RunInstancesRequest::getDryRun() const {
  return dryRun_;
}

void RunInstancesRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string RunInstancesRequest::getCpuOptionsNuma() const {
  return cpuOptionsNuma_;
}

void RunInstancesRequest::setCpuOptionsNuma(const std::string &cpuOptionsNuma) {
  cpuOptionsNuma_ = cpuOptionsNuma;
  setParameter(std::string("CpuOptions.Numa"), cpuOptionsNuma);
}

long RunInstancesRequest::getOwnerId() const {
  return ownerId_;
}

void RunInstancesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string RunInstancesRequest::getSpotStrategy() const {
  return spotStrategy_;
}

void RunInstancesRequest::setSpotStrategy(const std::string &spotStrategy) {
  spotStrategy_ = spotStrategy;
  setParameter(std::string("SpotStrategy"), spotStrategy);
}

std::string RunInstancesRequest::getPrivateIpAddress() const {
  return privateIpAddress_;
}

void RunInstancesRequest::setPrivateIpAddress(const std::string &privateIpAddress) {
  privateIpAddress_ = privateIpAddress;
  setParameter(std::string("PrivateIpAddress"), privateIpAddress);
}

RunInstancesRequest::CpuOptions RunInstancesRequest::getCpuOptions() const {
  return cpuOptions_;
}

void RunInstancesRequest::setCpuOptions(const RunInstancesRequest::CpuOptions &cpuOptions) {
  cpuOptions_ = cpuOptions;
  setParameter(std::string("CpuOptions") + ".TurboMode", cpuOptions.turboMode);
  setParameter(std::string("CpuOptions") + ".EnableVISST", cpuOptions.enableVISST ? "true" : "false");
  setParameter(std::string("CpuOptions") + ".EnableVRDT", cpuOptions.enableVRDT ? "true" : "false");
}

std::string RunInstancesRequest::getPeriodUnit() const {
  return periodUnit_;
}

void RunInstancesRequest::setPeriodUnit(const std::string &periodUnit) {
  periodUnit_ = periodUnit;
  setParameter(std::string("PeriodUnit"), periodUnit);
}

bool RunInstancesRequest::getAutoRenew() const {
  return autoRenew_;
}

void RunInstancesRequest::setAutoRenew(bool autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew ? "true" : "false");
}

std::string RunInstancesRequest::getInternetChargeType() const {
  return internetChargeType_;
}

void RunInstancesRequest::setInternetChargeType(const std::string &internetChargeType) {
  internetChargeType_ = internetChargeType;
  setParameter(std::string("InternetChargeType"), internetChargeType);
}

int RunInstancesRequest::getInternetMaxBandwidthIn() const {
  return internetMaxBandwidthIn_;
}

void RunInstancesRequest::setInternetMaxBandwidthIn(int internetMaxBandwidthIn) {
  internetMaxBandwidthIn_ = internetMaxBandwidthIn;
  setParameter(std::string("InternetMaxBandwidthIn"), std::to_string(internetMaxBandwidthIn));
}

std::string RunInstancesRequest::getAffinity() const {
  return affinity_;
}

void RunInstancesRequest::setAffinity(const std::string &affinity) {
  affinity_ = affinity;
  setParameter(std::string("Affinity"), affinity);
}

std::string RunInstancesRequest::getImageId() const {
  return imageId_;
}

void RunInstancesRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

std::string RunInstancesRequest::getSpotInterruptionBehavior() const {
  return spotInterruptionBehavior_;
}

void RunInstancesRequest::setSpotInterruptionBehavior(const std::string &spotInterruptionBehavior) {
  spotInterruptionBehavior_ = spotInterruptionBehavior;
  setParameter(std::string("SpotInterruptionBehavior"), spotInterruptionBehavior);
}

int RunInstancesRequest::getNetworkInterfaceQueueNumber() const {
  return networkInterfaceQueueNumber_;
}

void RunInstancesRequest::setNetworkInterfaceQueueNumber(int networkInterfaceQueueNumber) {
  networkInterfaceQueueNumber_ = networkInterfaceQueueNumber;
  setParameter(std::string("NetworkInterfaceQueueNumber"), std::to_string(networkInterfaceQueueNumber));
}

std::vector<RunInstancesRequest::SystemTag> RunInstancesRequest::getSystemTag() const {
  return systemTag_;
}

void RunInstancesRequest::setSystemTag(const std::vector<RunInstancesRequest::SystemTag> &systemTag) {
  systemTag_ = systemTag;
  for(int dep1 = 0; dep1 != systemTag.size(); dep1++) {
  auto systemTagObj = systemTag.at(dep1);
  std::string systemTagObjStr = std::string("SystemTag") + "." + std::to_string(dep1 + 1);
    setParameter(systemTagObjStr + ".Key", systemTagObj.key);
    setParameter(systemTagObjStr + ".Value", systemTagObj.value);
    setParameter(systemTagObjStr + ".Scope", systemTagObj.scope);
  }
}

std::string RunInstancesRequest::getIoOptimized() const {
  return ioOptimized_;
}

void RunInstancesRequest::setIoOptimized(const std::string &ioOptimized) {
  ioOptimized_ = ioOptimized;
  setParameter(std::string("IoOptimized"), ioOptimized);
}

std::string RunInstancesRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void RunInstancesRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setParameter(std::string("SecurityGroupId"), securityGroupId);
}

bool RunInstancesRequest::getHibernationOptionsConfigured() const {
  return hibernationOptionsConfigured_;
}

void RunInstancesRequest::setHibernationOptionsConfigured(bool hibernationOptionsConfigured) {
  hibernationOptionsConfigured_ = hibernationOptionsConfigured;
  setParameter(std::string("HibernationOptions.Configured"), hibernationOptionsConfigured ? "true" : "false");
}

std::string RunInstancesRequest::getSystemDiskPerformanceLevel() const {
  return systemDiskPerformanceLevel_;
}

void RunInstancesRequest::setSystemDiskPerformanceLevel(const std::string &systemDiskPerformanceLevel) {
  systemDiskPerformanceLevel_ = systemDiskPerformanceLevel;
  setParameter(std::string("SystemDisk.PerformanceLevel"), systemDiskPerformanceLevel);
}

bool RunInstancesRequest::getPasswordInherit() const {
  return passwordInherit_;
}

void RunInstancesRequest::setPasswordInherit(bool passwordInherit) {
  passwordInherit_ = passwordInherit;
  setParameter(std::string("PasswordInherit"), passwordInherit ? "true" : "false");
}

RunInstancesRequest::PrivateDnsNameOptions RunInstancesRequest::getPrivateDnsNameOptions() const {
  return privateDnsNameOptions_;
}

void RunInstancesRequest::setPrivateDnsNameOptions(const RunInstancesRequest::PrivateDnsNameOptions &privateDnsNameOptions) {
  privateDnsNameOptions_ = privateDnsNameOptions;
  setParameter(std::string("PrivateDnsNameOptions") + ".EnableInstanceIdDnsARecord", privateDnsNameOptions.enableInstanceIdDnsARecord ? "true" : "false");
  setParameter(std::string("PrivateDnsNameOptions") + ".EnableInstanceIdDnsAAAARecord", privateDnsNameOptions.enableInstanceIdDnsAAAARecord ? "true" : "false");
  setParameter(std::string("PrivateDnsNameOptions") + ".EnableIpDnsARecord", privateDnsNameOptions.enableIpDnsARecord ? "true" : "false");
  setParameter(std::string("PrivateDnsNameOptions") + ".EnableIpDnsPtrRecord", privateDnsNameOptions.enableIpDnsPtrRecord ? "true" : "false");
  setParameter(std::string("PrivateDnsNameOptions") + ".HostnameType", privateDnsNameOptions.hostnameType);
}

std::string RunInstancesRequest::getInstanceType() const {
  return instanceType_;
}

void RunInstancesRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::vector<RunInstancesRequest::Arn> RunInstancesRequest::getArn() const {
  return arn_;
}

void RunInstancesRequest::setArn(const std::vector<RunInstancesRequest::Arn> &arn) {
  arn_ = arn;
  for(int dep1 = 0; dep1 != arn.size(); dep1++) {
  auto arnObj = arn.at(dep1);
  std::string arnObjStr = std::string("Arn") + "." + std::to_string(dep1 + 1);
    setParameter(arnObjStr + ".RoleType", arnObj.roleType);
    setParameter(arnObjStr + ".Rolearn", arnObj.rolearn);
    setParameter(arnObjStr + ".AssumeRoleFor", std::to_string(arnObj.assumeRoleFor));
  }
}

std::string RunInstancesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RunInstancesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string RunInstancesRequest::getSchedulerOptionsDedicatedHostClusterId() const {
  return schedulerOptionsDedicatedHostClusterId_;
}

void RunInstancesRequest::setSchedulerOptionsDedicatedHostClusterId(const std::string &schedulerOptionsDedicatedHostClusterId) {
  schedulerOptionsDedicatedHostClusterId_ = schedulerOptionsDedicatedHostClusterId;
  setParameter(std::string("SchedulerOptions.DedicatedHostClusterId"), schedulerOptionsDedicatedHostClusterId);
}

std::string RunInstancesRequest::getSystemDiskDiskName() const {
  return systemDiskDiskName_;
}

void RunInstancesRequest::setSystemDiskDiskName(const std::string &systemDiskDiskName) {
  systemDiskDiskName_ = systemDiskDiskName;
  setParameter(std::string("SystemDisk.DiskName"), systemDiskDiskName);
}

std::string RunInstancesRequest::getDedicatedHostId() const {
  return dedicatedHostId_;
}

void RunInstancesRequest::setDedicatedHostId(const std::string &dedicatedHostId) {
  dedicatedHostId_ = dedicatedHostId;
  setParameter(std::string("DedicatedHostId"), dedicatedHostId);
}

int RunInstancesRequest::getSpotDuration() const {
  return spotDuration_;
}

void RunInstancesRequest::setSpotDuration(int spotDuration) {
  spotDuration_ = spotDuration;
  setParameter(std::string("SpotDuration"), std::to_string(spotDuration));
}

std::vector<std::string> RunInstancesRequest::getSecurityGroupIds() const {
  return securityGroupIds_;
}

void RunInstancesRequest::setSecurityGroupIds(const std::vector<std::string> &securityGroupIds) {
  securityGroupIds_ = securityGroupIds;
}

RunInstancesRequest::NetworkOptions RunInstancesRequest::getNetworkOptions() const {
  return networkOptions_;
}

void RunInstancesRequest::setNetworkOptions(const RunInstancesRequest::NetworkOptions &networkOptions) {
  networkOptions_ = networkOptions;
  setParameter(std::string("NetworkOptions") + ".EnableJumboFrame", networkOptions.enableJumboFrame ? "true" : "false");
  setParameter(std::string("NetworkOptions") + ".EnableNetworkEncryption", networkOptions.enableNetworkEncryption ? "true" : "false");
}

std::string RunInstancesRequest::getSystemDiskSize() const {
  return systemDiskSize_;
}

void RunInstancesRequest::setSystemDiskSize(const std::string &systemDiskSize) {
  systemDiskSize_ = systemDiskSize;
  setParameter(std::string("SystemDisk.Size"), systemDiskSize);
}

std::string RunInstancesRequest::getImageFamily() const {
  return imageFamily_;
}

void RunInstancesRequest::setImageFamily(const std::string &imageFamily) {
  imageFamily_ = imageFamily;
  setParameter(std::string("ImageFamily"), imageFamily);
}

std::string RunInstancesRequest::getLaunchTemplateName() const {
  return launchTemplateName_;
}

void RunInstancesRequest::setLaunchTemplateName(const std::string &launchTemplateName) {
  launchTemplateName_ = launchTemplateName;
  setParameter(std::string("LaunchTemplateName"), launchTemplateName);
}

long RunInstancesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RunInstancesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string RunInstancesRequest::getHpcClusterId() const {
  return hpcClusterId_;
}

void RunInstancesRequest::setHpcClusterId(const std::string &hpcClusterId) {
  hpcClusterId_ = hpcClusterId;
  setParameter(std::string("HpcClusterId"), hpcClusterId);
}

int RunInstancesRequest::getHttpPutResponseHopLimit() const {
  return httpPutResponseHopLimit_;
}

void RunInstancesRequest::setHttpPutResponseHopLimit(int httpPutResponseHopLimit) {
  httpPutResponseHopLimit_ = httpPutResponseHopLimit;
  setParameter(std::string("HttpPutResponseHopLimit"), std::to_string(httpPutResponseHopLimit));
}

std::string RunInstancesRequest::getIsp() const {
  return isp_;
}

void RunInstancesRequest::setIsp(const std::string &isp) {
  isp_ = isp;
  setParameter(std::string("Isp"), isp);
}

std::string RunInstancesRequest::getKeyPairName() const {
  return keyPairName_;
}

void RunInstancesRequest::setKeyPairName(const std::string &keyPairName) {
  keyPairName_ = keyPairName;
  setParameter(std::string("KeyPairName"), keyPairName);
}

float RunInstancesRequest::getSpotPriceLimit() const {
  return spotPriceLimit_;
}

void RunInstancesRequest::setSpotPriceLimit(float spotPriceLimit) {
  spotPriceLimit_ = spotPriceLimit;
  setParameter(std::string("SpotPriceLimit"), std::to_string(spotPriceLimit));
}

std::string RunInstancesRequest::getCpuOptionsTopologyType() const {
  return cpuOptionsTopologyType_;
}

void RunInstancesRequest::setCpuOptionsTopologyType(const std::string &cpuOptionsTopologyType) {
  cpuOptionsTopologyType_ = cpuOptionsTopologyType;
  setParameter(std::string("CpuOptions.TopologyType"), cpuOptionsTopologyType);
}

int RunInstancesRequest::getStorageSetPartitionNumber() const {
  return storageSetPartitionNumber_;
}

void RunInstancesRequest::setStorageSetPartitionNumber(int storageSetPartitionNumber) {
  storageSetPartitionNumber_ = storageSetPartitionNumber;
  setParameter(std::string("StorageSetPartitionNumber"), std::to_string(storageSetPartitionNumber));
}

std::vector<RunInstancesRequest::Tag> RunInstancesRequest::getTag() const {
  return tag_;
}

void RunInstancesRequest::setTag(const std::vector<RunInstancesRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

std::string RunInstancesRequest::getPrivatePoolOptionsId() const {
  return privatePoolOptionsId_;
}

void RunInstancesRequest::setPrivatePoolOptionsId(const std::string &privatePoolOptionsId) {
  privatePoolOptionsId_ = privatePoolOptionsId;
  setParameter(std::string("PrivatePoolOptions.Id"), privatePoolOptionsId);
}

int RunInstancesRequest::getAutoRenewPeriod() const {
  return autoRenewPeriod_;
}

void RunInstancesRequest::setAutoRenewPeriod(int autoRenewPeriod) {
  autoRenewPeriod_ = autoRenewPeriod;
  setParameter(std::string("AutoRenewPeriod"), std::to_string(autoRenewPeriod));
}

std::string RunInstancesRequest::getLaunchTemplateId() const {
  return launchTemplateId_;
}

void RunInstancesRequest::setLaunchTemplateId(const std::string &launchTemplateId) {
  launchTemplateId_ = launchTemplateId;
  setParameter(std::string("LaunchTemplateId"), launchTemplateId);
}

int RunInstancesRequest::getIpv6AddressCount() const {
  return ipv6AddressCount_;
}

void RunInstancesRequest::setIpv6AddressCount(int ipv6AddressCount) {
  ipv6AddressCount_ = ipv6AddressCount;
  setParameter(std::string("Ipv6AddressCount"), std::to_string(ipv6AddressCount));
}

std::vector<std::string> RunInstancesRequest::getHostNames() const {
  return hostNames_;
}

void RunInstancesRequest::setHostNames(const std::vector<std::string> &hostNames) {
  hostNames_ = hostNames;
}

std::string RunInstancesRequest::getCapacityReservationPreference() const {
  return capacityReservationPreference_;
}

void RunInstancesRequest::setCapacityReservationPreference(const std::string &capacityReservationPreference) {
  capacityReservationPreference_ = capacityReservationPreference;
  setParameter(std::string("CapacityReservationPreference"), capacityReservationPreference);
}

RunInstancesRequest::AdditionalInfo RunInstancesRequest::getAdditionalInfo() const {
  return additionalInfo_;
}

void RunInstancesRequest::setAdditionalInfo(const RunInstancesRequest::AdditionalInfo &additionalInfo) {
  additionalInfo_ = additionalInfo;
  setParameter(std::string("AdditionalInfo") + ".PvdConfig", additionalInfo.pvdConfig);
  setParameter(std::string("AdditionalInfo") + ".EnableHighDensityMode", additionalInfo.enableHighDensityMode ? "true" : "false");
}

std::string RunInstancesRequest::getVSwitchId() const {
  return vSwitchId_;
}

void RunInstancesRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string RunInstancesRequest::getInstanceName() const {
  return instanceName_;
}

void RunInstancesRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setParameter(std::string("InstanceName"), instanceName);
}

std::string RunInstancesRequest::getZoneId() const {
  return zoneId_;
}

void RunInstancesRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::vector<std::string> RunInstancesRequest::getCpuOptionsAccelerators() const {
  return cpuOptionsAccelerators_;
}

void RunInstancesRequest::setCpuOptionsAccelerators(const std::vector<std::string> &cpuOptionsAccelerators) {
  cpuOptionsAccelerators_ = cpuOptionsAccelerators;
}

std::vector<std::string> RunInstancesRequest::getIpv6Address() const {
  return ipv6Address_;
}

void RunInstancesRequest::setIpv6Address(const std::vector<std::string> &ipv6Address) {
  ipv6Address_ = ipv6Address;
}

std::string RunInstancesRequest::getSecurityOptionsConfidentialComputingMode() const {
  return securityOptionsConfidentialComputingMode_;
}

void RunInstancesRequest::setSecurityOptionsConfidentialComputingMode(const std::string &securityOptionsConfidentialComputingMode) {
  securityOptionsConfidentialComputingMode_ = securityOptionsConfidentialComputingMode;
  setParameter(std::string("SecurityOptions.ConfidentialComputingMode"), securityOptionsConfidentialComputingMode);
}

std::string RunInstancesRequest::getClientToken() const {
  return clientToken_;
}

void RunInstancesRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

int RunInstancesRequest::getInternetMaxBandwidthOut() const {
  return internetMaxBandwidthOut_;
}

void RunInstancesRequest::setInternetMaxBandwidthOut(int internetMaxBandwidthOut) {
  internetMaxBandwidthOut_ = internetMaxBandwidthOut;
  setParameter(std::string("InternetMaxBandwidthOut"), std::to_string(internetMaxBandwidthOut));
}

std::string RunInstancesRequest::getDescription() const {
  return description_;
}

void RunInstancesRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

int RunInstancesRequest::getCpuOptionsThreadsPerCore() const {
  return cpuOptionsThreadsPerCore_;
}

void RunInstancesRequest::setCpuOptionsThreadsPerCore(int cpuOptionsThreadsPerCore) {
  cpuOptionsThreadsPerCore_ = cpuOptionsThreadsPerCore;
  setParameter(std::string("CpuOptions.ThreadsPerCore"), std::to_string(cpuOptionsThreadsPerCore));
}

std::string RunInstancesRequest::getSystemDiskCategory() const {
  return systemDiskCategory_;
}

void RunInstancesRequest::setSystemDiskCategory(const std::string &systemDiskCategory) {
  systemDiskCategory_ = systemDiskCategory;
  setParameter(std::string("SystemDisk.Category"), systemDiskCategory);
}

std::string RunInstancesRequest::getSecurityOptionsTrustedSystemMode() const {
  return securityOptionsTrustedSystemMode_;
}

void RunInstancesRequest::setSecurityOptionsTrustedSystemMode(const std::string &securityOptionsTrustedSystemMode) {
  securityOptionsTrustedSystemMode_ = securityOptionsTrustedSystemMode;
  setParameter(std::string("SecurityOptions.TrustedSystemMode"), securityOptionsTrustedSystemMode);
}

std::string RunInstancesRequest::getCapacityReservationId() const {
  return capacityReservationId_;
}

void RunInstancesRequest::setCapacityReservationId(const std::string &capacityReservationId) {
  capacityReservationId_ = capacityReservationId;
  setParameter(std::string("CapacityReservationId"), capacityReservationId);
}

std::string RunInstancesRequest::getUserData() const {
  return userData_;
}

void RunInstancesRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::string RunInstancesRequest::getRegionId() const {
  return regionId_;
}

void RunInstancesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string RunInstancesRequest::getHttpEndpoint() const {
  return httpEndpoint_;
}

void RunInstancesRequest::setHttpEndpoint(const std::string &httpEndpoint) {
  httpEndpoint_ = httpEndpoint;
  setParameter(std::string("HttpEndpoint"), httpEndpoint);
}

std::string RunInstancesRequest::getInstanceChargeType() const {
  return instanceChargeType_;
}

void RunInstancesRequest::setInstanceChargeType(const std::string &instanceChargeType) {
  instanceChargeType_ = instanceChargeType;
  setParameter(std::string("InstanceChargeType"), instanceChargeType);
}

std::string RunInstancesRequest::getDeploymentSetId() const {
  return deploymentSetId_;
}

void RunInstancesRequest::setDeploymentSetId(const std::string &deploymentSetId) {
  deploymentSetId_ = deploymentSetId;
  setParameter(std::string("DeploymentSetId"), deploymentSetId);
}

std::vector<RunInstancesRequest::NetworkInterface> RunInstancesRequest::getNetworkInterface() const {
  return networkInterface_;
}

void RunInstancesRequest::setNetworkInterface(const std::vector<RunInstancesRequest::NetworkInterface> &networkInterface) {
  networkInterface_ = networkInterface;
  for(int dep1 = 0; dep1 != networkInterface.size(); dep1++) {
  auto networkInterfaceObj = networkInterface.at(dep1);
  std::string networkInterfaceObjStr = std::string("NetworkInterface") + "." + std::to_string(dep1 + 1);
    setParameter(networkInterfaceObjStr + ".VSwitchId", networkInterfaceObj.vSwitchId);
    setParameter(networkInterfaceObjStr + ".NetworkInterfaceName", networkInterfaceObj.networkInterfaceName);
    setParameter(networkInterfaceObjStr + ".Description", networkInterfaceObj.description);
    setParameter(networkInterfaceObjStr + ".SecurityGroupId", networkInterfaceObj.securityGroupId);
    setParameter(networkInterfaceObjStr + ".PrimaryIpAddress", networkInterfaceObj.primaryIpAddress);
    setParameter(networkInterfaceObjStr + ".QueueNumber", std::to_string(networkInterfaceObj.queueNumber));
    setParameter(networkInterfaceObjStr + ".NetworkInterfaceTrafficMode", networkInterfaceObj.networkInterfaceTrafficMode);
    setParameter(networkInterfaceObjStr + ".QueuePairNumber", std::to_string(networkInterfaceObj.queuePairNumber));
    setParameter(networkInterfaceObjStr + ".InstanceType", networkInterfaceObj.instanceType);
    setParameter(networkInterfaceObjStr + ".Ipv6AddressCount", std::to_string(networkInterfaceObj.ipv6AddressCount));
    setParameter(networkInterfaceObjStr + ".NetworkCardIndex", std::to_string(networkInterfaceObj.networkCardIndex));
    setParameter(networkInterfaceObjStr + ".DeleteOnRelease", networkInterfaceObj.deleteOnRelease ? "true" : "false");
    setParameter(networkInterfaceObjStr + ".NetworkInterfaceId", networkInterfaceObj.networkInterfaceId);
    setParameter(networkInterfaceObjStr + ".RxQueueSize", std::to_string(networkInterfaceObj.rxQueueSize));
    setParameter(networkInterfaceObjStr + ".TxQueueSize", std::to_string(networkInterfaceObj.txQueueSize));
    setParameter(networkInterfaceObjStr + ".SourceDestCheck", networkInterfaceObj.sourceDestCheck ? "true" : "false");
  }
}

int RunInstancesRequest::getAmount() const {
  return amount_;
}

void RunInstancesRequest::setAmount(int amount) {
  amount_ = amount;
  setParameter(std::string("Amount"), std::to_string(amount));
}

bool RunInstancesRequest::getAutoPay() const {
  return autoPay_;
}

void RunInstancesRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string RunInstancesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void RunInstancesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string RunInstancesRequest::getTenancy() const {
  return tenancy_;
}

void RunInstancesRequest::setTenancy(const std::string &tenancy) {
  tenancy_ = tenancy;
  setParameter(std::string("Tenancy"), tenancy);
}

std::string RunInstancesRequest::getRamRoleName() const {
  return ramRoleName_;
}

void RunInstancesRequest::setRamRoleName(const std::string &ramRoleName) {
  ramRoleName_ = ramRoleName;
  setParameter(std::string("RamRoleName"), ramRoleName);
}

std::string RunInstancesRequest::getAutoReleaseTime() const {
  return autoReleaseTime_;
}

void RunInstancesRequest::setAutoReleaseTime(const std::string &autoReleaseTime) {
  autoReleaseTime_ = autoReleaseTime;
  setParameter(std::string("AutoReleaseTime"), autoReleaseTime);
}

std::string RunInstancesRequest::getCreditSpecification() const {
  return creditSpecification_;
}

void RunInstancesRequest::setCreditSpecification(const std::string &creditSpecification) {
  creditSpecification_ = creditSpecification;
  setParameter(std::string("CreditSpecification"), creditSpecification);
}

long RunInstancesRequest::getLaunchTemplateVersion() const {
  return launchTemplateVersion_;
}

void RunInstancesRequest::setLaunchTemplateVersion(long launchTemplateVersion) {
  launchTemplateVersion_ = launchTemplateVersion;
  setParameter(std::string("LaunchTemplateVersion"), std::to_string(launchTemplateVersion));
}

std::string RunInstancesRequest::getSchedulerOptionsManagedPrivateSpaceId() const {
  return schedulerOptionsManagedPrivateSpaceId_;
}

void RunInstancesRequest::setSchedulerOptionsManagedPrivateSpaceId(const std::string &schedulerOptionsManagedPrivateSpaceId) {
  schedulerOptionsManagedPrivateSpaceId_ = schedulerOptionsManagedPrivateSpaceId;
  setParameter(std::string("SchedulerOptions.ManagedPrivateSpaceId"), schedulerOptionsManagedPrivateSpaceId);
}

std::vector<RunInstancesRequest::DataDisk> RunInstancesRequest::getDataDisk() const {
  return dataDisk_;
}

void RunInstancesRequest::setDataDisk(const std::vector<RunInstancesRequest::DataDisk> &dataDisk) {
  dataDisk_ = dataDisk;
  for(int dep1 = 0; dep1 != dataDisk.size(); dep1++) {
  auto dataDiskObj = dataDisk.at(dep1);
  std::string dataDiskObjStr = std::string("DataDisk") + "." + std::to_string(dep1 + 1);
    setParameter(dataDiskObjStr + ".PerformanceLevel", dataDiskObj.performanceLevel);
    setParameter(dataDiskObjStr + ".AutoSnapshotPolicyId", dataDiskObj.autoSnapshotPolicyId);
    setParameter(dataDiskObjStr + ".Encrypted", dataDiskObj.encrypted);
    setParameter(dataDiskObjStr + ".Description", dataDiskObj.description);
    setParameter(dataDiskObjStr + ".SnapshotId", dataDiskObj.snapshotId);
    setParameter(dataDiskObjStr + ".Device", dataDiskObj.device);
    setParameter(dataDiskObjStr + ".Size", std::to_string(dataDiskObj.size));
    setParameter(dataDiskObjStr + ".DiskName", dataDiskObj.diskName);
    setParameter(dataDiskObjStr + ".Category", dataDiskObj.category);
    setParameter(dataDiskObjStr + ".EncryptAlgorithm", dataDiskObj.encryptAlgorithm);
    setParameter(dataDiskObjStr + ".DeleteWithInstance", dataDiskObj.deleteWithInstance ? "true" : "false");
    setParameter(dataDiskObjStr + ".KMSKeyId", dataDiskObj.kMSKeyId);
    setParameter(dataDiskObjStr + ".StorageClusterId", dataDiskObj.storageClusterId);
    setParameter(dataDiskObjStr + ".ProvisionedIops", std::to_string(dataDiskObj.provisionedIops));
    setParameter(dataDiskObjStr + ".BurstingEnabled", dataDiskObj.burstingEnabled ? "true" : "false");
  }
}

std::string RunInstancesRequest::getStorageSetId() const {
  return storageSetId_;
}

void RunInstancesRequest::setStorageSetId(const std::string &storageSetId) {
  storageSetId_ = storageSetId;
  setParameter(std::string("StorageSetId"), storageSetId);
}

std::string RunInstancesRequest::getHttpTokens() const {
  return httpTokens_;
}

void RunInstancesRequest::setHttpTokens(const std::string &httpTokens) {
  httpTokens_ = httpTokens;
  setParameter(std::string("HttpTokens"), httpTokens);
}

std::string RunInstancesRequest::getSystemDiskDescription() const {
  return systemDiskDescription_;
}

void RunInstancesRequest::setSystemDiskDescription(const std::string &systemDiskDescription) {
  systemDiskDescription_ = systemDiskDescription;
  setParameter(std::string("SystemDisk.Description"), systemDiskDescription);
}

