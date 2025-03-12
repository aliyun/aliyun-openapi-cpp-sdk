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

#include <alibabacloud/ecs/model/CreateLaunchTemplateRequest.h>

using AlibabaCloud::Ecs::Model::CreateLaunchTemplateRequest;

CreateLaunchTemplateRequest::CreateLaunchTemplateRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "CreateLaunchTemplate") {
  setMethod(HttpRequest::Method::Post);
}

CreateLaunchTemplateRequest::~CreateLaunchTemplateRequest() {}

std::string CreateLaunchTemplateRequest::getLaunchTemplateName() const {
  return launchTemplateName_;
}

void CreateLaunchTemplateRequest::setLaunchTemplateName(const std::string &launchTemplateName) {
  launchTemplateName_ = launchTemplateName;
  setParameter(std::string("LaunchTemplateName"), launchTemplateName);
}

long CreateLaunchTemplateRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateLaunchTemplateRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int CreateLaunchTemplateRequest::getHttpPutResponseHopLimit() const {
  return httpPutResponseHopLimit_;
}

void CreateLaunchTemplateRequest::setHttpPutResponseHopLimit(int httpPutResponseHopLimit) {
  httpPutResponseHopLimit_ = httpPutResponseHopLimit;
  setParameter(std::string("HttpPutResponseHopLimit"), std::to_string(httpPutResponseHopLimit));
}

std::string CreateLaunchTemplateRequest::getSecurityEnhancementStrategy() const {
  return securityEnhancementStrategy_;
}

void CreateLaunchTemplateRequest::setSecurityEnhancementStrategy(const std::string &securityEnhancementStrategy) {
  securityEnhancementStrategy_ = securityEnhancementStrategy;
  setParameter(std::string("SecurityEnhancementStrategy"), securityEnhancementStrategy);
}

std::string CreateLaunchTemplateRequest::getNetworkType() const {
  return networkType_;
}

void CreateLaunchTemplateRequest::setNetworkType(const std::string &networkType) {
  networkType_ = networkType;
  setParameter(std::string("NetworkType"), networkType);
}

std::string CreateLaunchTemplateRequest::getKeyPairName() const {
  return keyPairName_;
}

void CreateLaunchTemplateRequest::setKeyPairName(const std::string &keyPairName) {
  keyPairName_ = keyPairName;
  setParameter(std::string("KeyPairName"), keyPairName);
}

float CreateLaunchTemplateRequest::getSpotPriceLimit() const {
  return spotPriceLimit_;
}

void CreateLaunchTemplateRequest::setSpotPriceLimit(float spotPriceLimit) {
  spotPriceLimit_ = spotPriceLimit;
  setParameter(std::string("SpotPriceLimit"), std::to_string(spotPriceLimit));
}

std::string CreateLaunchTemplateRequest::getImageOwnerAlias() const {
  return imageOwnerAlias_;
}

void CreateLaunchTemplateRequest::setImageOwnerAlias(const std::string &imageOwnerAlias) {
  imageOwnerAlias_ = imageOwnerAlias;
  setParameter(std::string("ImageOwnerAlias"), imageOwnerAlias);
}

bool CreateLaunchTemplateRequest::getDeletionProtection() const {
  return deletionProtection_;
}

void CreateLaunchTemplateRequest::setDeletionProtection(bool deletionProtection) {
  deletionProtection_ = deletionProtection;
  setParameter(std::string("DeletionProtection"), deletionProtection ? "true" : "false");
}

std::string CreateLaunchTemplateRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateLaunchTemplateRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateLaunchTemplateRequest::getHostName() const {
  return hostName_;
}

void CreateLaunchTemplateRequest::setHostName(const std::string &hostName) {
  hostName_ = hostName;
  setParameter(std::string("HostName"), hostName);
}

int CreateLaunchTemplateRequest::getSystemDiskIops() const {
  return systemDiskIops_;
}

void CreateLaunchTemplateRequest::setSystemDiskIops(int systemDiskIops) {
  systemDiskIops_ = systemDiskIops;
  setParameter(std::string("SystemDisk.Iops"), std::to_string(systemDiskIops));
}

std::vector<CreateLaunchTemplateRequest::TemplateTag> CreateLaunchTemplateRequest::getTemplateTag() const {
  return templateTag_;
}

void CreateLaunchTemplateRequest::setTemplateTag(const std::vector<CreateLaunchTemplateRequest::TemplateTag> &templateTag) {
  templateTag_ = templateTag;
  for(int dep1 = 0; dep1 != templateTag.size(); dep1++) {
  auto templateTagObj = templateTag.at(dep1);
  std::string templateTagObjStr = std::string("TemplateTag") + "." + std::to_string(dep1 + 1);
    setParameter(templateTagObjStr + ".Key", templateTagObj.key);
    setParameter(templateTagObjStr + ".Value", templateTagObj.value);
  }
}

std::vector<CreateLaunchTemplateRequest::Tag> CreateLaunchTemplateRequest::getTag() const {
  return tag_;
}

void CreateLaunchTemplateRequest::setTag(const std::vector<CreateLaunchTemplateRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

std::string CreateLaunchTemplateRequest::getSystemDiskAutoSnapshotPolicyId() const {
  return systemDiskAutoSnapshotPolicyId_;
}

void CreateLaunchTemplateRequest::setSystemDiskAutoSnapshotPolicyId(const std::string &systemDiskAutoSnapshotPolicyId) {
  systemDiskAutoSnapshotPolicyId_ = systemDiskAutoSnapshotPolicyId;
  setParameter(std::string("SystemDisk.AutoSnapshotPolicyId"), systemDiskAutoSnapshotPolicyId);
}

int CreateLaunchTemplateRequest::getAutoRenewPeriod() const {
  return autoRenewPeriod_;
}

void CreateLaunchTemplateRequest::setAutoRenewPeriod(int autoRenewPeriod) {
  autoRenewPeriod_ = autoRenewPeriod;
  setParameter(std::string("AutoRenewPeriod"), std::to_string(autoRenewPeriod));
}

int CreateLaunchTemplateRequest::getPeriod() const {
  return period_;
}

void CreateLaunchTemplateRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

int CreateLaunchTemplateRequest::getIpv6AddressCount() const {
  return ipv6AddressCount_;
}

void CreateLaunchTemplateRequest::setIpv6AddressCount(int ipv6AddressCount) {
  ipv6AddressCount_ = ipv6AddressCount;
  setParameter(std::string("Ipv6AddressCount"), std::to_string(ipv6AddressCount));
}

std::string CreateLaunchTemplateRequest::getTemplateResourceGroupId() const {
  return templateResourceGroupId_;
}

void CreateLaunchTemplateRequest::setTemplateResourceGroupId(const std::string &templateResourceGroupId) {
  templateResourceGroupId_ = templateResourceGroupId;
  setParameter(std::string("TemplateResourceGroupId"), templateResourceGroupId);
}

long CreateLaunchTemplateRequest::getOwnerId() const {
  return ownerId_;
}

void CreateLaunchTemplateRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateLaunchTemplateRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateLaunchTemplateRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string CreateLaunchTemplateRequest::getSpotStrategy() const {
  return spotStrategy_;
}

void CreateLaunchTemplateRequest::setSpotStrategy(const std::string &spotStrategy) {
  spotStrategy_ = spotStrategy;
  setParameter(std::string("SpotStrategy"), spotStrategy);
}

std::string CreateLaunchTemplateRequest::getPrivateIpAddress() const {
  return privateIpAddress_;
}

void CreateLaunchTemplateRequest::setPrivateIpAddress(const std::string &privateIpAddress) {
  privateIpAddress_ = privateIpAddress;
  setParameter(std::string("PrivateIpAddress"), privateIpAddress);
}

bool CreateLaunchTemplateRequest::getSystemDiskBurstingEnabled() const {
  return systemDiskBurstingEnabled_;
}

void CreateLaunchTemplateRequest::setSystemDiskBurstingEnabled(bool systemDiskBurstingEnabled) {
  systemDiskBurstingEnabled_ = systemDiskBurstingEnabled;
  setParameter(std::string("SystemDisk.BurstingEnabled"), systemDiskBurstingEnabled ? "true" : "false");
}

std::string CreateLaunchTemplateRequest::getPeriodUnit() const {
  return periodUnit_;
}

void CreateLaunchTemplateRequest::setPeriodUnit(const std::string &periodUnit) {
  periodUnit_ = periodUnit;
  setParameter(std::string("PeriodUnit"), periodUnit);
}

std::string CreateLaunchTemplateRequest::getInstanceName() const {
  return instanceName_;
}

void CreateLaunchTemplateRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setParameter(std::string("InstanceName"), instanceName);
}

bool CreateLaunchTemplateRequest::getAutoRenew() const {
  return autoRenew_;
}

void CreateLaunchTemplateRequest::setAutoRenew(bool autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew ? "true" : "false");
}

std::string CreateLaunchTemplateRequest::getInternetChargeType() const {
  return internetChargeType_;
}

void CreateLaunchTemplateRequest::setInternetChargeType(const std::string &internetChargeType) {
  internetChargeType_ = internetChargeType;
  setParameter(std::string("InternetChargeType"), internetChargeType);
}

std::string CreateLaunchTemplateRequest::getZoneId() const {
  return zoneId_;
}

void CreateLaunchTemplateRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

int CreateLaunchTemplateRequest::getInternetMaxBandwidthIn() const {
  return internetMaxBandwidthIn_;
}

void CreateLaunchTemplateRequest::setInternetMaxBandwidthIn(int internetMaxBandwidthIn) {
  internetMaxBandwidthIn_ = internetMaxBandwidthIn;
  setParameter(std::string("InternetMaxBandwidthIn"), std::to_string(internetMaxBandwidthIn));
}

std::string CreateLaunchTemplateRequest::getVersionDescription() const {
  return versionDescription_;
}

void CreateLaunchTemplateRequest::setVersionDescription(const std::string &versionDescription) {
  versionDescription_ = versionDescription;
  setParameter(std::string("VersionDescription"), versionDescription);
}

bool CreateLaunchTemplateRequest::getSystemDiskDeleteWithInstance() const {
  return systemDiskDeleteWithInstance_;
}

void CreateLaunchTemplateRequest::setSystemDiskDeleteWithInstance(bool systemDiskDeleteWithInstance) {
  systemDiskDeleteWithInstance_ = systemDiskDeleteWithInstance;
  setParameter(std::string("SystemDisk.DeleteWithInstance"), systemDiskDeleteWithInstance ? "true" : "false");
}

std::string CreateLaunchTemplateRequest::getImageId() const {
  return imageId_;
}

void CreateLaunchTemplateRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

std::string CreateLaunchTemplateRequest::getIoOptimized() const {
  return ioOptimized_;
}

void CreateLaunchTemplateRequest::setIoOptimized(const std::string &ioOptimized) {
  ioOptimized_ = ioOptimized;
  setParameter(std::string("IoOptimized"), ioOptimized);
}

std::string CreateLaunchTemplateRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void CreateLaunchTemplateRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setParameter(std::string("SecurityGroupId"), securityGroupId);
}

int CreateLaunchTemplateRequest::getInternetMaxBandwidthOut() const {
  return internetMaxBandwidthOut_;
}

void CreateLaunchTemplateRequest::setInternetMaxBandwidthOut(int internetMaxBandwidthOut) {
  internetMaxBandwidthOut_ = internetMaxBandwidthOut;
  setParameter(std::string("InternetMaxBandwidthOut"), std::to_string(internetMaxBandwidthOut));
}

std::string CreateLaunchTemplateRequest::getDescription() const {
  return description_;
}

void CreateLaunchTemplateRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateLaunchTemplateRequest::getSystemDiskCategory() const {
  return systemDiskCategory_;
}

void CreateLaunchTemplateRequest::setSystemDiskCategory(const std::string &systemDiskCategory) {
  systemDiskCategory_ = systemDiskCategory;
  setParameter(std::string("SystemDisk.Category"), systemDiskCategory);
}

std::string CreateLaunchTemplateRequest::getSystemDiskPerformanceLevel() const {
  return systemDiskPerformanceLevel_;
}

void CreateLaunchTemplateRequest::setSystemDiskPerformanceLevel(const std::string &systemDiskPerformanceLevel) {
  systemDiskPerformanceLevel_ = systemDiskPerformanceLevel;
  setParameter(std::string("SystemDisk.PerformanceLevel"), systemDiskPerformanceLevel);
}

std::string CreateLaunchTemplateRequest::getUserData() const {
  return userData_;
}

void CreateLaunchTemplateRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

bool CreateLaunchTemplateRequest::getPasswordInherit() const {
  return passwordInherit_;
}

void CreateLaunchTemplateRequest::setPasswordInherit(bool passwordInherit) {
  passwordInherit_ = passwordInherit;
  setParameter(std::string("PasswordInherit"), passwordInherit ? "true" : "false");
}

std::string CreateLaunchTemplateRequest::getRegionId() const {
  return regionId_;
}

void CreateLaunchTemplateRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateLaunchTemplateRequest::getHttpEndpoint() const {
  return httpEndpoint_;
}

void CreateLaunchTemplateRequest::setHttpEndpoint(const std::string &httpEndpoint) {
  httpEndpoint_ = httpEndpoint;
  setParameter(std::string("HttpEndpoint"), httpEndpoint);
}

std::string CreateLaunchTemplateRequest::getInstanceType() const {
  return instanceType_;
}

void CreateLaunchTemplateRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string CreateLaunchTemplateRequest::getInstanceChargeType() const {
  return instanceChargeType_;
}

void CreateLaunchTemplateRequest::setInstanceChargeType(const std::string &instanceChargeType) {
  instanceChargeType_ = instanceChargeType;
  setParameter(std::string("InstanceChargeType"), instanceChargeType);
}

bool CreateLaunchTemplateRequest::getEnableVmOsConfig() const {
  return enableVmOsConfig_;
}

void CreateLaunchTemplateRequest::setEnableVmOsConfig(bool enableVmOsConfig) {
  enableVmOsConfig_ = enableVmOsConfig;
  setParameter(std::string("EnableVmOsConfig"), enableVmOsConfig ? "true" : "false");
}

std::string CreateLaunchTemplateRequest::getDeploymentSetId() const {
  return deploymentSetId_;
}

void CreateLaunchTemplateRequest::setDeploymentSetId(const std::string &deploymentSetId) {
  deploymentSetId_ = deploymentSetId;
  setParameter(std::string("DeploymentSetId"), deploymentSetId);
}

std::vector<CreateLaunchTemplateRequest::NetworkInterface> CreateLaunchTemplateRequest::getNetworkInterface() const {
  return networkInterface_;
}

void CreateLaunchTemplateRequest::setNetworkInterface(const std::vector<CreateLaunchTemplateRequest::NetworkInterface> &networkInterface) {
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

std::string CreateLaunchTemplateRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateLaunchTemplateRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateLaunchTemplateRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateLaunchTemplateRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string CreateLaunchTemplateRequest::getSystemDiskDiskName() const {
  return systemDiskDiskName_;
}

void CreateLaunchTemplateRequest::setSystemDiskDiskName(const std::string &systemDiskDiskName) {
  systemDiskDiskName_ = systemDiskDiskName;
  setParameter(std::string("SystemDisk.DiskName"), systemDiskDiskName);
}

std::string CreateLaunchTemplateRequest::getRamRoleName() const {
  return ramRoleName_;
}

void CreateLaunchTemplateRequest::setRamRoleName(const std::string &ramRoleName) {
  ramRoleName_ = ramRoleName;
  setParameter(std::string("RamRoleName"), ramRoleName);
}

std::string CreateLaunchTemplateRequest::getAutoReleaseTime() const {
  return autoReleaseTime_;
}

void CreateLaunchTemplateRequest::setAutoReleaseTime(const std::string &autoReleaseTime) {
  autoReleaseTime_ = autoReleaseTime;
  setParameter(std::string("AutoReleaseTime"), autoReleaseTime);
}

std::string CreateLaunchTemplateRequest::getCreditSpecification() const {
  return creditSpecification_;
}

void CreateLaunchTemplateRequest::setCreditSpecification(const std::string &creditSpecification) {
  creditSpecification_ = creditSpecification;
  setParameter(std::string("CreditSpecification"), creditSpecification);
}

int CreateLaunchTemplateRequest::getSpotDuration() const {
  return spotDuration_;
}

void CreateLaunchTemplateRequest::setSpotDuration(int spotDuration) {
  spotDuration_ = spotDuration;
  setParameter(std::string("SpotDuration"), std::to_string(spotDuration));
}

std::vector<std::string> CreateLaunchTemplateRequest::getSecurityGroupIds() const {
  return securityGroupIds_;
}

void CreateLaunchTemplateRequest::setSecurityGroupIds(const std::vector<std::string> &securityGroupIds) {
  securityGroupIds_ = securityGroupIds;
}

std::vector<CreateLaunchTemplateRequest::DataDisk> CreateLaunchTemplateRequest::getDataDisk() const {
  return dataDisk_;
}

void CreateLaunchTemplateRequest::setDataDisk(const std::vector<CreateLaunchTemplateRequest::DataDisk> &dataDisk) {
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
    setParameter(dataDiskObjStr + ".AutoSnapshotPolicyId", dataDiskObj.autoSnapshotPolicyId);
    setParameter(dataDiskObjStr + ".ProvisionedIops", std::to_string(dataDiskObj.provisionedIops));
    setParameter(dataDiskObjStr + ".BurstingEnabled", dataDiskObj.burstingEnabled ? "true" : "false");
  }
}

long CreateLaunchTemplateRequest::getSystemDiskProvisionedIops() const {
  return systemDiskProvisionedIops_;
}

void CreateLaunchTemplateRequest::setSystemDiskProvisionedIops(long systemDiskProvisionedIops) {
  systemDiskProvisionedIops_ = systemDiskProvisionedIops;
  setParameter(std::string("SystemDisk.ProvisionedIops"), std::to_string(systemDiskProvisionedIops));
}

int CreateLaunchTemplateRequest::getSystemDiskSize() const {
  return systemDiskSize_;
}

void CreateLaunchTemplateRequest::setSystemDiskSize(int systemDiskSize) {
  systemDiskSize_ = systemDiskSize;
  setParameter(std::string("SystemDisk.Size"), std::to_string(systemDiskSize));
}

std::string CreateLaunchTemplateRequest::getVpcId() const {
  return vpcId_;
}

void CreateLaunchTemplateRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string CreateLaunchTemplateRequest::getHttpTokens() const {
  return httpTokens_;
}

void CreateLaunchTemplateRequest::setHttpTokens(const std::string &httpTokens) {
  httpTokens_ = httpTokens;
  setParameter(std::string("HttpTokens"), httpTokens);
}

std::string CreateLaunchTemplateRequest::getSystemDiskDescription() const {
  return systemDiskDescription_;
}

void CreateLaunchTemplateRequest::setSystemDiskDescription(const std::string &systemDiskDescription) {
  systemDiskDescription_ = systemDiskDescription;
  setParameter(std::string("SystemDisk.Description"), systemDiskDescription);
}

std::string CreateLaunchTemplateRequest::getSystemDiskEncrypted() const {
  return systemDiskEncrypted_;
}

void CreateLaunchTemplateRequest::setSystemDiskEncrypted(const std::string &systemDiskEncrypted) {
  systemDiskEncrypted_ = systemDiskEncrypted;
  setParameter(std::string("SystemDisk.Encrypted"), systemDiskEncrypted);
}

