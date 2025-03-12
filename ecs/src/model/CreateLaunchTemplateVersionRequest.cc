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

#include <alibabacloud/ecs/model/CreateLaunchTemplateVersionRequest.h>

using AlibabaCloud::Ecs::Model::CreateLaunchTemplateVersionRequest;

CreateLaunchTemplateVersionRequest::CreateLaunchTemplateVersionRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "CreateLaunchTemplateVersion") {
  setMethod(HttpRequest::Method::Post);
}

CreateLaunchTemplateVersionRequest::~CreateLaunchTemplateVersionRequest() {}

std::string CreateLaunchTemplateVersionRequest::getLaunchTemplateName() const {
  return launchTemplateName_;
}

void CreateLaunchTemplateVersionRequest::setLaunchTemplateName(const std::string &launchTemplateName) {
  launchTemplateName_ = launchTemplateName;
  setParameter(std::string("LaunchTemplateName"), launchTemplateName);
}

long CreateLaunchTemplateVersionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateLaunchTemplateVersionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int CreateLaunchTemplateVersionRequest::getHttpPutResponseHopLimit() const {
  return httpPutResponseHopLimit_;
}

void CreateLaunchTemplateVersionRequest::setHttpPutResponseHopLimit(int httpPutResponseHopLimit) {
  httpPutResponseHopLimit_ = httpPutResponseHopLimit;
  setParameter(std::string("HttpPutResponseHopLimit"), std::to_string(httpPutResponseHopLimit));
}

std::string CreateLaunchTemplateVersionRequest::getSecurityEnhancementStrategy() const {
  return securityEnhancementStrategy_;
}

void CreateLaunchTemplateVersionRequest::setSecurityEnhancementStrategy(const std::string &securityEnhancementStrategy) {
  securityEnhancementStrategy_ = securityEnhancementStrategy;
  setParameter(std::string("SecurityEnhancementStrategy"), securityEnhancementStrategy);
}

std::string CreateLaunchTemplateVersionRequest::getNetworkType() const {
  return networkType_;
}

void CreateLaunchTemplateVersionRequest::setNetworkType(const std::string &networkType) {
  networkType_ = networkType;
  setParameter(std::string("NetworkType"), networkType);
}

std::string CreateLaunchTemplateVersionRequest::getKeyPairName() const {
  return keyPairName_;
}

void CreateLaunchTemplateVersionRequest::setKeyPairName(const std::string &keyPairName) {
  keyPairName_ = keyPairName;
  setParameter(std::string("KeyPairName"), keyPairName);
}

float CreateLaunchTemplateVersionRequest::getSpotPriceLimit() const {
  return spotPriceLimit_;
}

void CreateLaunchTemplateVersionRequest::setSpotPriceLimit(float spotPriceLimit) {
  spotPriceLimit_ = spotPriceLimit;
  setParameter(std::string("SpotPriceLimit"), std::to_string(spotPriceLimit));
}

std::string CreateLaunchTemplateVersionRequest::getImageOwnerAlias() const {
  return imageOwnerAlias_;
}

void CreateLaunchTemplateVersionRequest::setImageOwnerAlias(const std::string &imageOwnerAlias) {
  imageOwnerAlias_ = imageOwnerAlias;
  setParameter(std::string("ImageOwnerAlias"), imageOwnerAlias);
}

bool CreateLaunchTemplateVersionRequest::getDeletionProtection() const {
  return deletionProtection_;
}

void CreateLaunchTemplateVersionRequest::setDeletionProtection(bool deletionProtection) {
  deletionProtection_ = deletionProtection;
  setParameter(std::string("DeletionProtection"), deletionProtection ? "true" : "false");
}

std::string CreateLaunchTemplateVersionRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateLaunchTemplateVersionRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateLaunchTemplateVersionRequest::getHostName() const {
  return hostName_;
}

void CreateLaunchTemplateVersionRequest::setHostName(const std::string &hostName) {
  hostName_ = hostName;
  setParameter(std::string("HostName"), hostName);
}

int CreateLaunchTemplateVersionRequest::getSystemDiskIops() const {
  return systemDiskIops_;
}

void CreateLaunchTemplateVersionRequest::setSystemDiskIops(int systemDiskIops) {
  systemDiskIops_ = systemDiskIops;
  setParameter(std::string("SystemDisk.Iops"), std::to_string(systemDiskIops));
}

std::vector<CreateLaunchTemplateVersionRequest::Tag> CreateLaunchTemplateVersionRequest::getTag() const {
  return tag_;
}

void CreateLaunchTemplateVersionRequest::setTag(const std::vector<CreateLaunchTemplateVersionRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

std::string CreateLaunchTemplateVersionRequest::getSystemDiskAutoSnapshotPolicyId() const {
  return systemDiskAutoSnapshotPolicyId_;
}

void CreateLaunchTemplateVersionRequest::setSystemDiskAutoSnapshotPolicyId(const std::string &systemDiskAutoSnapshotPolicyId) {
  systemDiskAutoSnapshotPolicyId_ = systemDiskAutoSnapshotPolicyId;
  setParameter(std::string("SystemDisk.AutoSnapshotPolicyId"), systemDiskAutoSnapshotPolicyId);
}

int CreateLaunchTemplateVersionRequest::getAutoRenewPeriod() const {
  return autoRenewPeriod_;
}

void CreateLaunchTemplateVersionRequest::setAutoRenewPeriod(int autoRenewPeriod) {
  autoRenewPeriod_ = autoRenewPeriod;
  setParameter(std::string("AutoRenewPeriod"), std::to_string(autoRenewPeriod));
}

int CreateLaunchTemplateVersionRequest::getPeriod() const {
  return period_;
}

void CreateLaunchTemplateVersionRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

std::string CreateLaunchTemplateVersionRequest::getLaunchTemplateId() const {
  return launchTemplateId_;
}

void CreateLaunchTemplateVersionRequest::setLaunchTemplateId(const std::string &launchTemplateId) {
  launchTemplateId_ = launchTemplateId;
  setParameter(std::string("LaunchTemplateId"), launchTemplateId);
}

int CreateLaunchTemplateVersionRequest::getIpv6AddressCount() const {
  return ipv6AddressCount_;
}

void CreateLaunchTemplateVersionRequest::setIpv6AddressCount(int ipv6AddressCount) {
  ipv6AddressCount_ = ipv6AddressCount;
  setParameter(std::string("Ipv6AddressCount"), std::to_string(ipv6AddressCount));
}

long CreateLaunchTemplateVersionRequest::getOwnerId() const {
  return ownerId_;
}

void CreateLaunchTemplateVersionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateLaunchTemplateVersionRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateLaunchTemplateVersionRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string CreateLaunchTemplateVersionRequest::getSpotStrategy() const {
  return spotStrategy_;
}

void CreateLaunchTemplateVersionRequest::setSpotStrategy(const std::string &spotStrategy) {
  spotStrategy_ = spotStrategy;
  setParameter(std::string("SpotStrategy"), spotStrategy);
}

std::string CreateLaunchTemplateVersionRequest::getPrivateIpAddress() const {
  return privateIpAddress_;
}

void CreateLaunchTemplateVersionRequest::setPrivateIpAddress(const std::string &privateIpAddress) {
  privateIpAddress_ = privateIpAddress;
  setParameter(std::string("PrivateIpAddress"), privateIpAddress);
}

bool CreateLaunchTemplateVersionRequest::getSystemDiskBurstingEnabled() const {
  return systemDiskBurstingEnabled_;
}

void CreateLaunchTemplateVersionRequest::setSystemDiskBurstingEnabled(bool systemDiskBurstingEnabled) {
  systemDiskBurstingEnabled_ = systemDiskBurstingEnabled;
  setParameter(std::string("SystemDisk.BurstingEnabled"), systemDiskBurstingEnabled ? "true" : "false");
}

std::string CreateLaunchTemplateVersionRequest::getPeriodUnit() const {
  return periodUnit_;
}

void CreateLaunchTemplateVersionRequest::setPeriodUnit(const std::string &periodUnit) {
  periodUnit_ = periodUnit;
  setParameter(std::string("PeriodUnit"), periodUnit);
}

std::string CreateLaunchTemplateVersionRequest::getInstanceName() const {
  return instanceName_;
}

void CreateLaunchTemplateVersionRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setParameter(std::string("InstanceName"), instanceName);
}

bool CreateLaunchTemplateVersionRequest::getAutoRenew() const {
  return autoRenew_;
}

void CreateLaunchTemplateVersionRequest::setAutoRenew(bool autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew ? "true" : "false");
}

std::string CreateLaunchTemplateVersionRequest::getInternetChargeType() const {
  return internetChargeType_;
}

void CreateLaunchTemplateVersionRequest::setInternetChargeType(const std::string &internetChargeType) {
  internetChargeType_ = internetChargeType;
  setParameter(std::string("InternetChargeType"), internetChargeType);
}

std::string CreateLaunchTemplateVersionRequest::getZoneId() const {
  return zoneId_;
}

void CreateLaunchTemplateVersionRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

int CreateLaunchTemplateVersionRequest::getInternetMaxBandwidthIn() const {
  return internetMaxBandwidthIn_;
}

void CreateLaunchTemplateVersionRequest::setInternetMaxBandwidthIn(int internetMaxBandwidthIn) {
  internetMaxBandwidthIn_ = internetMaxBandwidthIn;
  setParameter(std::string("InternetMaxBandwidthIn"), std::to_string(internetMaxBandwidthIn));
}

std::string CreateLaunchTemplateVersionRequest::getVersionDescription() const {
  return versionDescription_;
}

void CreateLaunchTemplateVersionRequest::setVersionDescription(const std::string &versionDescription) {
  versionDescription_ = versionDescription;
  setParameter(std::string("VersionDescription"), versionDescription);
}

bool CreateLaunchTemplateVersionRequest::getSystemDiskDeleteWithInstance() const {
  return systemDiskDeleteWithInstance_;
}

void CreateLaunchTemplateVersionRequest::setSystemDiskDeleteWithInstance(bool systemDiskDeleteWithInstance) {
  systemDiskDeleteWithInstance_ = systemDiskDeleteWithInstance;
  setParameter(std::string("SystemDisk.DeleteWithInstance"), systemDiskDeleteWithInstance ? "true" : "false");
}

std::string CreateLaunchTemplateVersionRequest::getImageId() const {
  return imageId_;
}

void CreateLaunchTemplateVersionRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

std::string CreateLaunchTemplateVersionRequest::getIoOptimized() const {
  return ioOptimized_;
}

void CreateLaunchTemplateVersionRequest::setIoOptimized(const std::string &ioOptimized) {
  ioOptimized_ = ioOptimized;
  setParameter(std::string("IoOptimized"), ioOptimized);
}

std::string CreateLaunchTemplateVersionRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void CreateLaunchTemplateVersionRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setParameter(std::string("SecurityGroupId"), securityGroupId);
}

int CreateLaunchTemplateVersionRequest::getInternetMaxBandwidthOut() const {
  return internetMaxBandwidthOut_;
}

void CreateLaunchTemplateVersionRequest::setInternetMaxBandwidthOut(int internetMaxBandwidthOut) {
  internetMaxBandwidthOut_ = internetMaxBandwidthOut;
  setParameter(std::string("InternetMaxBandwidthOut"), std::to_string(internetMaxBandwidthOut));
}

std::string CreateLaunchTemplateVersionRequest::getDescription() const {
  return description_;
}

void CreateLaunchTemplateVersionRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateLaunchTemplateVersionRequest::getSystemDiskCategory() const {
  return systemDiskCategory_;
}

void CreateLaunchTemplateVersionRequest::setSystemDiskCategory(const std::string &systemDiskCategory) {
  systemDiskCategory_ = systemDiskCategory;
  setParameter(std::string("SystemDisk.Category"), systemDiskCategory);
}

std::string CreateLaunchTemplateVersionRequest::getSystemDiskPerformanceLevel() const {
  return systemDiskPerformanceLevel_;
}

void CreateLaunchTemplateVersionRequest::setSystemDiskPerformanceLevel(const std::string &systemDiskPerformanceLevel) {
  systemDiskPerformanceLevel_ = systemDiskPerformanceLevel;
  setParameter(std::string("SystemDisk.PerformanceLevel"), systemDiskPerformanceLevel);
}

std::string CreateLaunchTemplateVersionRequest::getUserData() const {
  return userData_;
}

void CreateLaunchTemplateVersionRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

bool CreateLaunchTemplateVersionRequest::getPasswordInherit() const {
  return passwordInherit_;
}

void CreateLaunchTemplateVersionRequest::setPasswordInherit(bool passwordInherit) {
  passwordInherit_ = passwordInherit;
  setParameter(std::string("PasswordInherit"), passwordInherit ? "true" : "false");
}

std::string CreateLaunchTemplateVersionRequest::getRegionId() const {
  return regionId_;
}

void CreateLaunchTemplateVersionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateLaunchTemplateVersionRequest::getHttpEndpoint() const {
  return httpEndpoint_;
}

void CreateLaunchTemplateVersionRequest::setHttpEndpoint(const std::string &httpEndpoint) {
  httpEndpoint_ = httpEndpoint;
  setParameter(std::string("HttpEndpoint"), httpEndpoint);
}

std::string CreateLaunchTemplateVersionRequest::getInstanceType() const {
  return instanceType_;
}

void CreateLaunchTemplateVersionRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string CreateLaunchTemplateVersionRequest::getInstanceChargeType() const {
  return instanceChargeType_;
}

void CreateLaunchTemplateVersionRequest::setInstanceChargeType(const std::string &instanceChargeType) {
  instanceChargeType_ = instanceChargeType;
  setParameter(std::string("InstanceChargeType"), instanceChargeType);
}

bool CreateLaunchTemplateVersionRequest::getEnableVmOsConfig() const {
  return enableVmOsConfig_;
}

void CreateLaunchTemplateVersionRequest::setEnableVmOsConfig(bool enableVmOsConfig) {
  enableVmOsConfig_ = enableVmOsConfig;
  setParameter(std::string("EnableVmOsConfig"), enableVmOsConfig ? "true" : "false");
}

std::string CreateLaunchTemplateVersionRequest::getDeploymentSetId() const {
  return deploymentSetId_;
}

void CreateLaunchTemplateVersionRequest::setDeploymentSetId(const std::string &deploymentSetId) {
  deploymentSetId_ = deploymentSetId;
  setParameter(std::string("DeploymentSetId"), deploymentSetId);
}

std::vector<CreateLaunchTemplateVersionRequest::NetworkInterface> CreateLaunchTemplateVersionRequest::getNetworkInterface() const {
  return networkInterface_;
}

void CreateLaunchTemplateVersionRequest::setNetworkInterface(const std::vector<CreateLaunchTemplateVersionRequest::NetworkInterface> &networkInterface) {
  networkInterface_ = networkInterface;
  for(int dep1 = 0; dep1 != networkInterface.size(); dep1++) {
  auto networkInterfaceObj = networkInterface.at(dep1);
  std::string networkInterfaceObjStr = std::string("NetworkInterface") + "." + std::to_string(dep1 + 1);
    setParameter(networkInterfaceObjStr + ".VSwitchId", networkInterfaceObj.vSwitchId);
    setParameter(networkInterfaceObjStr + ".NetworkInterfaceName", networkInterfaceObj.networkInterfaceName);
    setParameter(networkInterfaceObjStr + ".Description", networkInterfaceObj.description);
    setParameter(networkInterfaceObjStr + ".SecurityGroupId", networkInterfaceObj.securityGroupId);
    setParameter(networkInterfaceObjStr + ".PrimaryIpAddress", networkInterfaceObj.primaryIpAddress);
    setParameter(networkInterfaceObjStr + ".InstanceType", networkInterfaceObj.instanceType);
    setParameter(networkInterfaceObjStr + ".NetworkInterfaceTrafficMode", networkInterfaceObj.networkInterfaceTrafficMode);
    setParameter(networkInterfaceObjStr + ".DeleteOnRelease", networkInterfaceObj.deleteOnRelease ? "true" : "false");
  }
}

std::string CreateLaunchTemplateVersionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateLaunchTemplateVersionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateLaunchTemplateVersionRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateLaunchTemplateVersionRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string CreateLaunchTemplateVersionRequest::getSystemDiskDiskName() const {
  return systemDiskDiskName_;
}

void CreateLaunchTemplateVersionRequest::setSystemDiskDiskName(const std::string &systemDiskDiskName) {
  systemDiskDiskName_ = systemDiskDiskName;
  setParameter(std::string("SystemDisk.DiskName"), systemDiskDiskName);
}

std::string CreateLaunchTemplateVersionRequest::getRamRoleName() const {
  return ramRoleName_;
}

void CreateLaunchTemplateVersionRequest::setRamRoleName(const std::string &ramRoleName) {
  ramRoleName_ = ramRoleName;
  setParameter(std::string("RamRoleName"), ramRoleName);
}

std::string CreateLaunchTemplateVersionRequest::getAutoReleaseTime() const {
  return autoReleaseTime_;
}

void CreateLaunchTemplateVersionRequest::setAutoReleaseTime(const std::string &autoReleaseTime) {
  autoReleaseTime_ = autoReleaseTime;
  setParameter(std::string("AutoReleaseTime"), autoReleaseTime);
}

std::string CreateLaunchTemplateVersionRequest::getCreditSpecification() const {
  return creditSpecification_;
}

void CreateLaunchTemplateVersionRequest::setCreditSpecification(const std::string &creditSpecification) {
  creditSpecification_ = creditSpecification;
  setParameter(std::string("CreditSpecification"), creditSpecification);
}

int CreateLaunchTemplateVersionRequest::getSpotDuration() const {
  return spotDuration_;
}

void CreateLaunchTemplateVersionRequest::setSpotDuration(int spotDuration) {
  spotDuration_ = spotDuration;
  setParameter(std::string("SpotDuration"), std::to_string(spotDuration));
}

std::vector<std::string> CreateLaunchTemplateVersionRequest::getSecurityGroupIds() const {
  return securityGroupIds_;
}

void CreateLaunchTemplateVersionRequest::setSecurityGroupIds(const std::vector<std::string> &securityGroupIds) {
  securityGroupIds_ = securityGroupIds;
}

std::vector<CreateLaunchTemplateVersionRequest::DataDisk> CreateLaunchTemplateVersionRequest::getDataDisk() const {
  return dataDisk_;
}

void CreateLaunchTemplateVersionRequest::setDataDisk(const std::vector<CreateLaunchTemplateVersionRequest::DataDisk> &dataDisk) {
  dataDisk_ = dataDisk;
  for(int dep1 = 0; dep1 != dataDisk.size(); dep1++) {
  auto dataDiskObj = dataDisk.at(dep1);
  std::string dataDiskObjStr = std::string("DataDisk") + "." + std::to_string(dep1 + 1);
    setParameter(dataDiskObjStr + ".PerformanceLevel", dataDiskObj.performanceLevel);
    setParameter(dataDiskObjStr + ".Description", dataDiskObj.description);
    setParameter(dataDiskObjStr + ".SnapshotId", dataDiskObj.snapshotId);
    setParameter(dataDiskObjStr + ".Size", std::to_string(dataDiskObj.size));
    setParameter(dataDiskObjStr + ".Device", dataDiskObj.device);
    setParameter(dataDiskObjStr + ".DiskName", dataDiskObj.diskName);
    setParameter(dataDiskObjStr + ".Category", dataDiskObj.category);
    setParameter(dataDiskObjStr + ".DeleteWithInstance", dataDiskObj.deleteWithInstance ? "true" : "false");
    setParameter(dataDiskObjStr + ".Encrypted", dataDiskObj.encrypted);
    setParameter(dataDiskObjStr + ".ProvisionedIops", std::to_string(dataDiskObj.provisionedIops));
    setParameter(dataDiskObjStr + ".BurstingEnabled", dataDiskObj.burstingEnabled ? "true" : "false");
    setParameter(dataDiskObjStr + ".AutoSnapshotPolicyId", dataDiskObj.autoSnapshotPolicyId);
  }
}

long CreateLaunchTemplateVersionRequest::getSystemDiskProvisionedIops() const {
  return systemDiskProvisionedIops_;
}

void CreateLaunchTemplateVersionRequest::setSystemDiskProvisionedIops(long systemDiskProvisionedIops) {
  systemDiskProvisionedIops_ = systemDiskProvisionedIops;
  setParameter(std::string("SystemDisk.ProvisionedIops"), std::to_string(systemDiskProvisionedIops));
}

int CreateLaunchTemplateVersionRequest::getSystemDiskSize() const {
  return systemDiskSize_;
}

void CreateLaunchTemplateVersionRequest::setSystemDiskSize(int systemDiskSize) {
  systemDiskSize_ = systemDiskSize;
  setParameter(std::string("SystemDisk.Size"), std::to_string(systemDiskSize));
}

std::string CreateLaunchTemplateVersionRequest::getVpcId() const {
  return vpcId_;
}

void CreateLaunchTemplateVersionRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string CreateLaunchTemplateVersionRequest::getHttpTokens() const {
  return httpTokens_;
}

void CreateLaunchTemplateVersionRequest::setHttpTokens(const std::string &httpTokens) {
  httpTokens_ = httpTokens;
  setParameter(std::string("HttpTokens"), httpTokens);
}

std::string CreateLaunchTemplateVersionRequest::getSystemDiskDescription() const {
  return systemDiskDescription_;
}

void CreateLaunchTemplateVersionRequest::setSystemDiskDescription(const std::string &systemDiskDescription) {
  systemDiskDescription_ = systemDiskDescription;
  setParameter(std::string("SystemDisk.Description"), systemDiskDescription);
}

std::string CreateLaunchTemplateVersionRequest::getSystemDiskEncrypted() const {
  return systemDiskEncrypted_;
}

void CreateLaunchTemplateVersionRequest::setSystemDiskEncrypted(const std::string &systemDiskEncrypted) {
  systemDiskEncrypted_ = systemDiskEncrypted;
  setParameter(std::string("SystemDisk.Encrypted"), systemDiskEncrypted);
}

