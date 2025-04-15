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

#include <alibabacloud/ecs/model/CreateAutoProvisioningGroupRequest.h>

using AlibabaCloud::Ecs::Model::CreateAutoProvisioningGroupRequest;

CreateAutoProvisioningGroupRequest::CreateAutoProvisioningGroupRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "CreateAutoProvisioningGroup") {
  setMethod(HttpRequest::Method::Post);
}

CreateAutoProvisioningGroupRequest::~CreateAutoProvisioningGroupRequest() {}

std::vector<CreateAutoProvisioningGroupRequest::LaunchConfigurationDataDisk> CreateAutoProvisioningGroupRequest::getLaunchConfigurationDataDisk() const {
  return launchConfigurationDataDisk_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationDataDisk(const std::vector<CreateAutoProvisioningGroupRequest::LaunchConfigurationDataDisk> &launchConfigurationDataDisk) {
  launchConfigurationDataDisk_ = launchConfigurationDataDisk;
  for(int dep1 = 0; dep1 != launchConfigurationDataDisk.size(); dep1++) {
  auto launchConfigurationDataDiskObj = launchConfigurationDataDisk.at(dep1);
  std::string launchConfigurationDataDiskObjStr = std::string("LaunchConfiguration.DataDisk") + "." + std::to_string(dep1 + 1);
    setParameter(launchConfigurationDataDiskObjStr + ".PerformanceLevel", launchConfigurationDataDiskObj.performanceLevel);
    setParameter(launchConfigurationDataDiskObjStr + ".KmsKeyId", launchConfigurationDataDiskObj.kmsKeyId);
    setParameter(launchConfigurationDataDiskObjStr + ".Description", launchConfigurationDataDiskObj.description);
    setParameter(launchConfigurationDataDiskObjStr + ".SnapshotId", launchConfigurationDataDiskObj.snapshotId);
    setParameter(launchConfigurationDataDiskObjStr + ".Size", std::to_string(launchConfigurationDataDiskObj.size));
    setParameter(launchConfigurationDataDiskObjStr + ".Device", launchConfigurationDataDiskObj.device);
    setParameter(launchConfigurationDataDiskObjStr + ".DiskName", launchConfigurationDataDiskObj.diskName);
    setParameter(launchConfigurationDataDiskObjStr + ".Category", launchConfigurationDataDiskObj.category);
    setParameter(launchConfigurationDataDiskObjStr + ".DeleteWithInstance", launchConfigurationDataDiskObj.deleteWithInstance ? "true" : "false");
    setParameter(launchConfigurationDataDiskObjStr + ".Encrypted", launchConfigurationDataDiskObj.encrypted ? "true" : "false");
    setParameter(launchConfigurationDataDiskObjStr + ".EncryptAlgorithm", launchConfigurationDataDiskObj.encryptAlgorithm);
    setParameter(launchConfigurationDataDiskObjStr + ".ProvisionedIops", std::to_string(launchConfigurationDataDiskObj.provisionedIops));
    setParameter(launchConfigurationDataDiskObjStr + ".BurstingEnabled", launchConfigurationDataDiskObj.burstingEnabled ? "true" : "false");
    setParameter(launchConfigurationDataDiskObjStr + ".AutoSnapshotPolicyId", launchConfigurationDataDiskObj.autoSnapshotPolicyId);
  }
}

long CreateAutoProvisioningGroupRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateAutoProvisioningGroupRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateAutoProvisioningGroupRequest::getLaunchConfigurationSystemDiskCategory() const {
  return launchConfigurationSystemDiskCategory_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationSystemDiskCategory(const std::string &launchConfigurationSystemDiskCategory) {
  launchConfigurationSystemDiskCategory_ = launchConfigurationSystemDiskCategory;
  setParameter(std::string("LaunchConfiguration.SystemDiskCategory"), launchConfigurationSystemDiskCategory);
}

std::string CreateAutoProvisioningGroupRequest::getAutoProvisioningGroupType() const {
  return autoProvisioningGroupType_;
}

void CreateAutoProvisioningGroupRequest::setAutoProvisioningGroupType(const std::string &autoProvisioningGroupType) {
  autoProvisioningGroupType_ = autoProvisioningGroupType;
  setParameter(std::string("AutoProvisioningGroupType"), autoProvisioningGroupType);
}

std::string CreateAutoProvisioningGroupRequest::getLaunchConfigurationSystemDiskPerformanceLevel() const {
  return launchConfigurationSystemDiskPerformanceLevel_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationSystemDiskPerformanceLevel(const std::string &launchConfigurationSystemDiskPerformanceLevel) {
  launchConfigurationSystemDiskPerformanceLevel_ = launchConfigurationSystemDiskPerformanceLevel;
  setParameter(std::string("LaunchConfiguration.SystemDiskPerformanceLevel"), launchConfigurationSystemDiskPerformanceLevel);
}

std::vector<std::string> CreateAutoProvisioningGroupRequest::getLaunchConfigurationHostNames() const {
  return launchConfigurationHostNames_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationHostNames(const std::vector<std::string> &launchConfigurationHostNames) {
  launchConfigurationHostNames_ = launchConfigurationHostNames;
}

std::vector<std::string> CreateAutoProvisioningGroupRequest::getLaunchConfigurationSecurityGroupIds() const {
  return launchConfigurationSecurityGroupIds_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationSecurityGroupIds(const std::vector<std::string> &launchConfigurationSecurityGroupIds) {
  launchConfigurationSecurityGroupIds_ = launchConfigurationSecurityGroupIds;
}

std::string CreateAutoProvisioningGroupRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateAutoProvisioningGroupRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateAutoProvisioningGroupRequest::getLaunchConfigurationImageId() const {
  return launchConfigurationImageId_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationImageId(const std::string &launchConfigurationImageId) {
  launchConfigurationImageId_ = launchConfigurationImageId;
  setParameter(std::string("LaunchConfiguration.ImageId"), launchConfigurationImageId);
}

std::string CreateAutoProvisioningGroupRequest::getLaunchConfigurationResourceGroupId() const {
  return launchConfigurationResourceGroupId_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationResourceGroupId(const std::string &launchConfigurationResourceGroupId) {
  launchConfigurationResourceGroupId_ = launchConfigurationResourceGroupId;
  setParameter(std::string("LaunchConfiguration.ResourceGroupId"), launchConfigurationResourceGroupId);
}

bool CreateAutoProvisioningGroupRequest::getResourcePlanningOnly() const {
  return resourcePlanningOnly_;
}

void CreateAutoProvisioningGroupRequest::setResourcePlanningOnly(bool resourcePlanningOnly) {
  resourcePlanningOnly_ = resourcePlanningOnly;
  setParameter(std::string("ResourcePlanningOnly"), resourcePlanningOnly ? "true" : "false");
}

std::string CreateAutoProvisioningGroupRequest::getLaunchConfigurationPassword() const {
  return launchConfigurationPassword_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationPassword(const std::string &launchConfigurationPassword) {
  launchConfigurationPassword_ = launchConfigurationPassword;
  setParameter(std::string("LaunchConfiguration.Password"), launchConfigurationPassword);
}

std::string CreateAutoProvisioningGroupRequest::getLaunchConfigurationAutoReleaseTime() const {
  return launchConfigurationAutoReleaseTime_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationAutoReleaseTime(const std::string &launchConfigurationAutoReleaseTime) {
  launchConfigurationAutoReleaseTime_ = launchConfigurationAutoReleaseTime;
  setParameter(std::string("LaunchConfiguration.AutoReleaseTime"), launchConfigurationAutoReleaseTime);
}

std::string CreateAutoProvisioningGroupRequest::getPayAsYouGoAllocationStrategy() const {
  return payAsYouGoAllocationStrategy_;
}

void CreateAutoProvisioningGroupRequest::setPayAsYouGoAllocationStrategy(const std::string &payAsYouGoAllocationStrategy) {
  payAsYouGoAllocationStrategy_ = payAsYouGoAllocationStrategy;
  setParameter(std::string("PayAsYouGoAllocationStrategy"), payAsYouGoAllocationStrategy);
}

std::string CreateAutoProvisioningGroupRequest::getDefaultTargetCapacityType() const {
  return defaultTargetCapacityType_;
}

void CreateAutoProvisioningGroupRequest::setDefaultTargetCapacityType(const std::string &defaultTargetCapacityType) {
  defaultTargetCapacityType_ = defaultTargetCapacityType;
  setParameter(std::string("DefaultTargetCapacityType"), defaultTargetCapacityType);
}

std::vector<CreateAutoProvisioningGroupRequest::Tag> CreateAutoProvisioningGroupRequest::getTag() const {
  return tag_;
}

void CreateAutoProvisioningGroupRequest::setTag(const std::vector<CreateAutoProvisioningGroupRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

std::string CreateAutoProvisioningGroupRequest::getLaunchConfigurationKeyPairName() const {
  return launchConfigurationKeyPairName_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationKeyPairName(const std::string &launchConfigurationKeyPairName) {
  launchConfigurationKeyPairName_ = launchConfigurationKeyPairName;
  setParameter(std::string("LaunchConfiguration.KeyPairName"), launchConfigurationKeyPairName);
}

std::vector<CreateAutoProvisioningGroupRequest::SystemDiskConfig> CreateAutoProvisioningGroupRequest::getSystemDiskConfig() const {
  return systemDiskConfig_;
}

void CreateAutoProvisioningGroupRequest::setSystemDiskConfig(const std::vector<CreateAutoProvisioningGroupRequest::SystemDiskConfig> &systemDiskConfig) {
  systemDiskConfig_ = systemDiskConfig;
  for(int dep1 = 0; dep1 != systemDiskConfig.size(); dep1++) {
  auto systemDiskConfigObj = systemDiskConfig.at(dep1);
  std::string systemDiskConfigObjStr = std::string("SystemDiskConfig") + "." + std::to_string(dep1 + 1);
    setParameter(systemDiskConfigObjStr + ".DiskCategory", systemDiskConfigObj.diskCategory);
  }
}

std::vector<CreateAutoProvisioningGroupRequest::DataDiskConfig> CreateAutoProvisioningGroupRequest::getDataDiskConfig() const {
  return dataDiskConfig_;
}

void CreateAutoProvisioningGroupRequest::setDataDiskConfig(const std::vector<CreateAutoProvisioningGroupRequest::DataDiskConfig> &dataDiskConfig) {
  dataDiskConfig_ = dataDiskConfig;
  for(int dep1 = 0; dep1 != dataDiskConfig.size(); dep1++) {
  auto dataDiskConfigObj = dataDiskConfig.at(dep1);
  std::string dataDiskConfigObjStr = std::string("DataDiskConfig") + "." + std::to_string(dep1 + 1);
    setParameter(dataDiskConfigObjStr + ".DiskCategory", dataDiskConfigObj.diskCategory);
  }
}

std::string CreateAutoProvisioningGroupRequest::getValidUntil() const {
  return validUntil_;
}

void CreateAutoProvisioningGroupRequest::setValidUntil(const std::string &validUntil) {
  validUntil_ = validUntil;
  setParameter(std::string("ValidUntil"), validUntil);
}

std::string CreateAutoProvisioningGroupRequest::getLaunchTemplateId() const {
  return launchTemplateId_;
}

void CreateAutoProvisioningGroupRequest::setLaunchTemplateId(const std::string &launchTemplateId) {
  launchTemplateId_ = launchTemplateId;
  setParameter(std::string("LaunchTemplateId"), launchTemplateId);
}

CreateAutoProvisioningGroupRequest::PrePaidOptions CreateAutoProvisioningGroupRequest::getPrePaidOptions() const {
  return prePaidOptions_;
}

void CreateAutoProvisioningGroupRequest::setPrePaidOptions(const CreateAutoProvisioningGroupRequest::PrePaidOptions &prePaidOptions) {
  prePaidOptions_ = prePaidOptions;
  for(int dep1 = 0; dep1 != prePaidOptions.specifyCapacityDistribution.size(); dep1++) {
    for(int dep2 = 0; dep2 != prePaidOptions.specifyCapacityDistribution[dep1].instanceTypes.size(); dep2++) {
      setParameter(std::string("PrePaidOptions") + ".SpecifyCapacityDistribution." + std::to_string(dep1 + 1) + ".InstanceTypes." + std::to_string(dep2 + 1), prePaidOptions.specifyCapacityDistribution[dep1].instanceTypes[dep2]);
    }
    setParameter(std::string("PrePaidOptions") + ".SpecifyCapacityDistribution." + std::to_string(dep1 + 1) + ".MinTargetCapacity", std::to_string(prePaidOptions.specifyCapacityDistribution[dep1].minTargetCapacity));
  }
}

long CreateAutoProvisioningGroupRequest::getOwnerId() const {
  return ownerId_;
}

void CreateAutoProvisioningGroupRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateAutoProvisioningGroupRequest::getLaunchConfigurationImageFamily() const {
  return launchConfigurationImageFamily_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationImageFamily(const std::string &launchConfigurationImageFamily) {
  launchConfigurationImageFamily_ = launchConfigurationImageFamily;
  setParameter(std::string("LaunchConfiguration.ImageFamily"), launchConfigurationImageFamily);
}

int CreateAutoProvisioningGroupRequest::getLaunchConfigurationSystemDiskSize() const {
  return launchConfigurationSystemDiskSize_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationSystemDiskSize(int launchConfigurationSystemDiskSize) {
  launchConfigurationSystemDiskSize_ = launchConfigurationSystemDiskSize;
  setParameter(std::string("LaunchConfiguration.SystemDiskSize"), std::to_string(launchConfigurationSystemDiskSize));
}

int CreateAutoProvisioningGroupRequest::getLaunchConfigurationInternetMaxBandwidthOut() const {
  return launchConfigurationInternetMaxBandwidthOut_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationInternetMaxBandwidthOut(int launchConfigurationInternetMaxBandwidthOut) {
  launchConfigurationInternetMaxBandwidthOut_ = launchConfigurationInternetMaxBandwidthOut;
  setParameter(std::string("LaunchConfiguration.InternetMaxBandwidthOut"), std::to_string(launchConfigurationInternetMaxBandwidthOut));
}

std::string CreateAutoProvisioningGroupRequest::getLaunchConfigurationHostName() const {
  return launchConfigurationHostName_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationHostName(const std::string &launchConfigurationHostName) {
  launchConfigurationHostName_ = launchConfigurationHostName;
  setParameter(std::string("LaunchConfiguration.HostName"), launchConfigurationHostName);
}

std::string CreateAutoProvisioningGroupRequest::getMinTargetCapacity() const {
  return minTargetCapacity_;
}

void CreateAutoProvisioningGroupRequest::setMinTargetCapacity(const std::string &minTargetCapacity) {
  minTargetCapacity_ = minTargetCapacity;
  setParameter(std::string("MinTargetCapacity"), minTargetCapacity);
}

float CreateAutoProvisioningGroupRequest::getMaxSpotPrice() const {
  return maxSpotPrice_;
}

void CreateAutoProvisioningGroupRequest::setMaxSpotPrice(float maxSpotPrice) {
  maxSpotPrice_ = maxSpotPrice;
  setParameter(std::string("MaxSpotPrice"), std::to_string(maxSpotPrice));
}

CreateAutoProvisioningGroupRequest::LaunchConfiguration CreateAutoProvisioningGroupRequest::getLaunchConfiguration() const {
  return launchConfiguration_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfiguration(const CreateAutoProvisioningGroupRequest::LaunchConfiguration &launchConfiguration) {
  launchConfiguration_ = launchConfiguration;
  setParameter(std::string("LaunchConfiguration") + ".Period", std::to_string(launchConfiguration.period));
  setParameter(std::string("LaunchConfiguration") + ".PeriodUnit", launchConfiguration.periodUnit);
  setParameter(std::string("LaunchConfiguration") + ".AutoRenew", launchConfiguration.autoRenew ? "true" : "false");
  setParameter(std::string("LaunchConfiguration") + ".AutoRenewPeriod", std::to_string(launchConfiguration.autoRenewPeriod));
  setParameter(std::string("LaunchConfiguration") + ".SpotDuration", std::to_string(launchConfiguration.spotDuration));
  setParameter(std::string("LaunchConfiguration") + ".SpotInterruptionBehavior", launchConfiguration.spotInterruptionBehavior);
  setParameter(std::string("LaunchConfiguration") + ".ImageOptions.LoginAsNonRoot", launchConfiguration.imageOptions.loginAsNonRoot ? "true" : "false");
}

std::vector<CreateAutoProvisioningGroupRequest::LaunchConfigurationArn> CreateAutoProvisioningGroupRequest::getLaunchConfigurationArn() const {
  return launchConfigurationArn_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationArn(const std::vector<CreateAutoProvisioningGroupRequest::LaunchConfigurationArn> &launchConfigurationArn) {
  launchConfigurationArn_ = launchConfigurationArn;
  for(int dep1 = 0; dep1 != launchConfigurationArn.size(); dep1++) {
  auto launchConfigurationArnObj = launchConfigurationArn.at(dep1);
  std::string launchConfigurationArnObjStr = std::string("LaunchConfiguration.Arn") + "." + std::to_string(dep1 + 1);
    setParameter(launchConfigurationArnObjStr + ".Rolearn", launchConfigurationArnObj.rolearn);
    setParameter(launchConfigurationArnObjStr + ".RoleType", launchConfigurationArnObj.roleType);
    setParameter(launchConfigurationArnObjStr + ".AssumeRoleFor", std::to_string(launchConfigurationArnObj.assumeRoleFor));
  }
}

bool CreateAutoProvisioningGroupRequest::getLaunchConfigurationPasswordInherit() const {
  return launchConfigurationPasswordInherit_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationPasswordInherit(bool launchConfigurationPasswordInherit) {
  launchConfigurationPasswordInherit_ = launchConfigurationPasswordInherit;
  setParameter(std::string("LaunchConfiguration.PasswordInherit"), launchConfigurationPasswordInherit ? "true" : "false");
}

std::string CreateAutoProvisioningGroupRequest::getClientToken() const {
  return clientToken_;
}

void CreateAutoProvisioningGroupRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateAutoProvisioningGroupRequest::getLaunchConfigurationSecurityGroupId() const {
  return launchConfigurationSecurityGroupId_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationSecurityGroupId(const std::string &launchConfigurationSecurityGroupId) {
  launchConfigurationSecurityGroupId_ = launchConfigurationSecurityGroupId;
  setParameter(std::string("LaunchConfiguration.SecurityGroupId"), launchConfigurationSecurityGroupId);
}

std::string CreateAutoProvisioningGroupRequest::getDescription() const {
  return description_;
}

void CreateAutoProvisioningGroupRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

bool CreateAutoProvisioningGroupRequest::getTerminateInstancesWithExpiration() const {
  return terminateInstancesWithExpiration_;
}

void CreateAutoProvisioningGroupRequest::setTerminateInstancesWithExpiration(bool terminateInstancesWithExpiration) {
  terminateInstancesWithExpiration_ = terminateInstancesWithExpiration;
  setParameter(std::string("TerminateInstancesWithExpiration"), terminateInstancesWithExpiration ? "true" : "false");
}

std::string CreateAutoProvisioningGroupRequest::getLaunchConfigurationUserData() const {
  return launchConfigurationUserData_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationUserData(const std::string &launchConfigurationUserData) {
  launchConfigurationUserData_ = launchConfigurationUserData;
  setParameter(std::string("LaunchConfiguration.UserData"), launchConfigurationUserData);
}

std::string CreateAutoProvisioningGroupRequest::getLaunchConfigurationCreditSpecification() const {
  return launchConfigurationCreditSpecification_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationCreditSpecification(const std::string &launchConfigurationCreditSpecification) {
  launchConfigurationCreditSpecification_ = launchConfigurationCreditSpecification;
  setParameter(std::string("LaunchConfiguration.CreditSpecification"), launchConfigurationCreditSpecification);
}

CreateAutoProvisioningGroupRequest::LaunchConfigurationSystemDisk CreateAutoProvisioningGroupRequest::getLaunchConfigurationSystemDisk() const {
  return launchConfigurationSystemDisk_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationSystemDisk(const CreateAutoProvisioningGroupRequest::LaunchConfigurationSystemDisk &launchConfigurationSystemDisk) {
  launchConfigurationSystemDisk_ = launchConfigurationSystemDisk;
  setParameter(std::string("LaunchConfiguration.SystemDisk") + ".Encrypted", launchConfigurationSystemDisk.encrypted);
  setParameter(std::string("LaunchConfiguration.SystemDisk") + ".KMSKeyId", launchConfigurationSystemDisk.kMSKeyId);
  setParameter(std::string("LaunchConfiguration.SystemDisk") + ".EncryptAlgorithm", launchConfigurationSystemDisk.encryptAlgorithm);
  setParameter(std::string("LaunchConfiguration.SystemDisk") + ".ProvisionedIops", std::to_string(launchConfigurationSystemDisk.provisionedIops));
  setParameter(std::string("LaunchConfiguration.SystemDisk") + ".BurstingEnabled", launchConfigurationSystemDisk.burstingEnabled ? "true" : "false");
  setParameter(std::string("LaunchConfiguration.SystemDisk") + ".AutoSnapshotPolicyId", launchConfigurationSystemDisk.autoSnapshotPolicyId);
}

std::string CreateAutoProvisioningGroupRequest::getLaunchConfigurationInstanceName() const {
  return launchConfigurationInstanceName_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationInstanceName(const std::string &launchConfigurationInstanceName) {
  launchConfigurationInstanceName_ = launchConfigurationInstanceName;
  setParameter(std::string("LaunchConfiguration.InstanceName"), launchConfigurationInstanceName);
}

std::string CreateAutoProvisioningGroupRequest::getLaunchConfigurationInstanceDescription() const {
  return launchConfigurationInstanceDescription_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationInstanceDescription(const std::string &launchConfigurationInstanceDescription) {
  launchConfigurationInstanceDescription_ = launchConfigurationInstanceDescription;
  setParameter(std::string("LaunchConfiguration.InstanceDescription"), launchConfigurationInstanceDescription);
}

std::string CreateAutoProvisioningGroupRequest::getSpotAllocationStrategy() const {
  return spotAllocationStrategy_;
}

void CreateAutoProvisioningGroupRequest::setSpotAllocationStrategy(const std::string &spotAllocationStrategy) {
  spotAllocationStrategy_ = spotAllocationStrategy;
  setParameter(std::string("SpotAllocationStrategy"), spotAllocationStrategy);
}

CreateAutoProvisioningGroupRequest::ResourcePoolOptions CreateAutoProvisioningGroupRequest::getResourcePoolOptions() const {
  return resourcePoolOptions_;
}

void CreateAutoProvisioningGroupRequest::setResourcePoolOptions(const CreateAutoProvisioningGroupRequest::ResourcePoolOptions &resourcePoolOptions) {
  resourcePoolOptions_ = resourcePoolOptions;
  setParameter(std::string("ResourcePoolOptions") + ".Strategy", resourcePoolOptions.strategy);
  for(int dep1 = 0; dep1 != resourcePoolOptions.privatePoolIds.size(); dep1++) {
    setParameter(std::string("ResourcePoolOptions") + ".PrivatePoolIds." + std::to_string(dep1 + 1), resourcePoolOptions.privatePoolIds[dep1]);
  }
}

std::string CreateAutoProvisioningGroupRequest::getRegionId() const {
  return regionId_;
}

void CreateAutoProvisioningGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool CreateAutoProvisioningGroupRequest::getTerminateInstances() const {
  return terminateInstances_;
}

void CreateAutoProvisioningGroupRequest::setTerminateInstances(bool terminateInstances) {
  terminateInstances_ = terminateInstances;
  setParameter(std::string("TerminateInstances"), terminateInstances ? "true" : "false");
}

std::string CreateAutoProvisioningGroupRequest::getLaunchConfigurationSystemDiskName() const {
  return launchConfigurationSystemDiskName_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationSystemDiskName(const std::string &launchConfigurationSystemDiskName) {
  launchConfigurationSystemDiskName_ = launchConfigurationSystemDiskName;
  setParameter(std::string("LaunchConfiguration.SystemDiskName"), launchConfigurationSystemDiskName);
}

std::string CreateAutoProvisioningGroupRequest::getLaunchConfigurationSystemDiskDescription() const {
  return launchConfigurationSystemDiskDescription_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationSystemDiskDescription(const std::string &launchConfigurationSystemDiskDescription) {
  launchConfigurationSystemDiskDescription_ = launchConfigurationSystemDiskDescription;
  setParameter(std::string("LaunchConfiguration.SystemDiskDescription"), launchConfigurationSystemDiskDescription);
}

std::string CreateAutoProvisioningGroupRequest::getExcessCapacityTerminationPolicy() const {
  return excessCapacityTerminationPolicy_;
}

void CreateAutoProvisioningGroupRequest::setExcessCapacityTerminationPolicy(const std::string &excessCapacityTerminationPolicy) {
  excessCapacityTerminationPolicy_ = excessCapacityTerminationPolicy;
  setParameter(std::string("ExcessCapacityTerminationPolicy"), excessCapacityTerminationPolicy);
}

std::vector<CreateAutoProvisioningGroupRequest::LaunchTemplateConfig> CreateAutoProvisioningGroupRequest::getLaunchTemplateConfig() const {
  return launchTemplateConfig_;
}

void CreateAutoProvisioningGroupRequest::setLaunchTemplateConfig(const std::vector<CreateAutoProvisioningGroupRequest::LaunchTemplateConfig> &launchTemplateConfig) {
  launchTemplateConfig_ = launchTemplateConfig;
  for(int dep1 = 0; dep1 != launchTemplateConfig.size(); dep1++) {
  auto launchTemplateConfigObj = launchTemplateConfig.at(dep1);
  std::string launchTemplateConfigObjStr = std::string("LaunchTemplateConfig") + "." + std::to_string(dep1 + 1);
    setParameter(launchTemplateConfigObjStr + ".VSwitchId", launchTemplateConfigObj.vSwitchId);
    setParameter(launchTemplateConfigObjStr + ".MaxPrice", std::to_string(launchTemplateConfigObj.maxPrice));
    setParameter(launchTemplateConfigObjStr + ".Priority", std::to_string(launchTemplateConfigObj.priority));
    setParameter(launchTemplateConfigObjStr + ".InstanceType", launchTemplateConfigObj.instanceType);
    setParameter(launchTemplateConfigObjStr + ".WeightedCapacity", std::to_string(launchTemplateConfigObj.weightedCapacity));
    setParameter(launchTemplateConfigObjStr + ".MaxQuantity", std::to_string(launchTemplateConfigObj.maxQuantity));
    setParameter(launchTemplateConfigObjStr + ".InstanceFamilyLevel", launchTemplateConfigObj.instanceFamilyLevel);
    setParameter(launchTemplateConfigObjStr + ".BurstablePerformance", launchTemplateConfigObj.burstablePerformance);
    for(int dep2 = 0; dep2 != launchTemplateConfigObj.secondaryNetworkInterface.size(); dep2++) {
    auto secondaryNetworkInterfaceObj = launchTemplateConfigObj.secondaryNetworkInterface.at(dep2);
    std::string secondaryNetworkInterfaceObjStr = launchTemplateConfigObjStr + ".SecondaryNetworkInterface" + "." + std::to_string(dep2 + 1);
      setParameter(secondaryNetworkInterfaceObjStr + ".VSwitchId", secondaryNetworkInterfaceObj.vSwitchId);
    }
    setParameter(launchTemplateConfigObjStr + ".ImageId", launchTemplateConfigObj.imageId);
  }
}

std::string CreateAutoProvisioningGroupRequest::getLaunchConfigurationRamRoleName() const {
  return launchConfigurationRamRoleName_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationRamRoleName(const std::string &launchConfigurationRamRoleName) {
  launchConfigurationRamRoleName_ = launchConfigurationRamRoleName;
  setParameter(std::string("LaunchConfiguration.RamRoleName"), launchConfigurationRamRoleName);
}

int CreateAutoProvisioningGroupRequest::getLaunchConfigurationInternetMaxBandwidthIn() const {
  return launchConfigurationInternetMaxBandwidthIn_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationInternetMaxBandwidthIn(int launchConfigurationInternetMaxBandwidthIn) {
  launchConfigurationInternetMaxBandwidthIn_ = launchConfigurationInternetMaxBandwidthIn;
  setParameter(std::string("LaunchConfiguration.InternetMaxBandwidthIn"), std::to_string(launchConfigurationInternetMaxBandwidthIn));
}

std::string CreateAutoProvisioningGroupRequest::getSpotInstanceInterruptionBehavior() const {
  return spotInstanceInterruptionBehavior_;
}

void CreateAutoProvisioningGroupRequest::setSpotInstanceInterruptionBehavior(const std::string &spotInstanceInterruptionBehavior) {
  spotInstanceInterruptionBehavior_ = spotInstanceInterruptionBehavior;
  setParameter(std::string("SpotInstanceInterruptionBehavior"), spotInstanceInterruptionBehavior);
}

std::string CreateAutoProvisioningGroupRequest::getLaunchConfigurationSecurityEnhancementStrategy() const {
  return launchConfigurationSecurityEnhancementStrategy_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationSecurityEnhancementStrategy(const std::string &launchConfigurationSecurityEnhancementStrategy) {
  launchConfigurationSecurityEnhancementStrategy_ = launchConfigurationSecurityEnhancementStrategy;
  setParameter(std::string("LaunchConfiguration.SecurityEnhancementStrategy"), launchConfigurationSecurityEnhancementStrategy);
}

std::vector<CreateAutoProvisioningGroupRequest::LaunchConfigurationTag> CreateAutoProvisioningGroupRequest::getLaunchConfigurationTag() const {
  return launchConfigurationTag_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationTag(const std::vector<CreateAutoProvisioningGroupRequest::LaunchConfigurationTag> &launchConfigurationTag) {
  launchConfigurationTag_ = launchConfigurationTag;
  for(int dep1 = 0; dep1 != launchConfigurationTag.size(); dep1++) {
  auto launchConfigurationTagObj = launchConfigurationTag.at(dep1);
  std::string launchConfigurationTagObjStr = std::string("LaunchConfiguration.Tag") + "." + std::to_string(dep1 + 1);
    setParameter(launchConfigurationTagObjStr + ".Key", launchConfigurationTagObj.key);
    setParameter(launchConfigurationTagObjStr + ".Value", launchConfigurationTagObj.value);
  }
}

std::string CreateAutoProvisioningGroupRequest::getLaunchConfigurationDeploymentSetId() const {
  return launchConfigurationDeploymentSetId_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationDeploymentSetId(const std::string &launchConfigurationDeploymentSetId) {
  launchConfigurationDeploymentSetId_ = launchConfigurationDeploymentSetId;
  setParameter(std::string("LaunchConfiguration.DeploymentSetId"), launchConfigurationDeploymentSetId);
}

std::string CreateAutoProvisioningGroupRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateAutoProvisioningGroupRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateAutoProvisioningGroupRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateAutoProvisioningGroupRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

int CreateAutoProvisioningGroupRequest::getSpotInstancePoolsToUseCount() const {
  return spotInstancePoolsToUseCount_;
}

void CreateAutoProvisioningGroupRequest::setSpotInstancePoolsToUseCount(int spotInstancePoolsToUseCount) {
  spotInstancePoolsToUseCount_ = spotInstancePoolsToUseCount;
  setParameter(std::string("SpotInstancePoolsToUseCount"), std::to_string(spotInstancePoolsToUseCount));
}

std::string CreateAutoProvisioningGroupRequest::getLaunchConfigurationInternetChargeType() const {
  return launchConfigurationInternetChargeType_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationInternetChargeType(const std::string &launchConfigurationInternetChargeType) {
  launchConfigurationInternetChargeType_ = launchConfigurationInternetChargeType;
  setParameter(std::string("LaunchConfiguration.InternetChargeType"), launchConfigurationInternetChargeType);
}

std::string CreateAutoProvisioningGroupRequest::getLaunchTemplateVersion() const {
  return launchTemplateVersion_;
}

void CreateAutoProvisioningGroupRequest::setLaunchTemplateVersion(const std::string &launchTemplateVersion) {
  launchTemplateVersion_ = launchTemplateVersion;
  setParameter(std::string("LaunchTemplateVersion"), launchTemplateVersion);
}

std::string CreateAutoProvisioningGroupRequest::getLaunchConfigurationIoOptimized() const {
  return launchConfigurationIoOptimized_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationIoOptimized(const std::string &launchConfigurationIoOptimized) {
  launchConfigurationIoOptimized_ = launchConfigurationIoOptimized;
  setParameter(std::string("LaunchConfiguration.IoOptimized"), launchConfigurationIoOptimized);
}

std::string CreateAutoProvisioningGroupRequest::getPayAsYouGoTargetCapacity() const {
  return payAsYouGoTargetCapacity_;
}

void CreateAutoProvisioningGroupRequest::setPayAsYouGoTargetCapacity(const std::string &payAsYouGoTargetCapacity) {
  payAsYouGoTargetCapacity_ = payAsYouGoTargetCapacity;
  setParameter(std::string("PayAsYouGoTargetCapacity"), payAsYouGoTargetCapacity);
}

bool CreateAutoProvisioningGroupRequest::getHibernationOptionsConfigured() const {
  return hibernationOptionsConfigured_;
}

void CreateAutoProvisioningGroupRequest::setHibernationOptionsConfigured(bool hibernationOptionsConfigured) {
  hibernationOptionsConfigured_ = hibernationOptionsConfigured;
  setParameter(std::string("HibernationOptionsConfigured"), hibernationOptionsConfigured ? "true" : "false");
}

std::string CreateAutoProvisioningGroupRequest::getTotalTargetCapacity() const {
  return totalTargetCapacity_;
}

void CreateAutoProvisioningGroupRequest::setTotalTargetCapacity(const std::string &totalTargetCapacity) {
  totalTargetCapacity_ = totalTargetCapacity;
  setParameter(std::string("TotalTargetCapacity"), totalTargetCapacity);
}

std::string CreateAutoProvisioningGroupRequest::getSpotTargetCapacity() const {
  return spotTargetCapacity_;
}

void CreateAutoProvisioningGroupRequest::setSpotTargetCapacity(const std::string &spotTargetCapacity) {
  spotTargetCapacity_ = spotTargetCapacity;
  setParameter(std::string("SpotTargetCapacity"), spotTargetCapacity);
}

std::vector<CreateAutoProvisioningGroupRequest::LaunchConfigurationNetworkInterface> CreateAutoProvisioningGroupRequest::getLaunchConfigurationNetworkInterface() const {
  return launchConfigurationNetworkInterface_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationNetworkInterface(const std::vector<CreateAutoProvisioningGroupRequest::LaunchConfigurationNetworkInterface> &launchConfigurationNetworkInterface) {
  launchConfigurationNetworkInterface_ = launchConfigurationNetworkInterface;
  for(int dep1 = 0; dep1 != launchConfigurationNetworkInterface.size(); dep1++) {
  auto launchConfigurationNetworkInterfaceObj = launchConfigurationNetworkInterface.at(dep1);
  std::string launchConfigurationNetworkInterfaceObjStr = std::string("LaunchConfiguration.NetworkInterface") + "." + std::to_string(dep1 + 1);
    setParameter(launchConfigurationNetworkInterfaceObjStr + ".SecurityGroupId", launchConfigurationNetworkInterfaceObj.securityGroupId);
    setParameter(launchConfigurationNetworkInterfaceObjStr + ".InstanceType", launchConfigurationNetworkInterfaceObj.instanceType);
  }
}

std::string CreateAutoProvisioningGroupRequest::getValidFrom() const {
  return validFrom_;
}

void CreateAutoProvisioningGroupRequest::setValidFrom(const std::string &validFrom) {
  validFrom_ = validFrom;
  setParameter(std::string("ValidFrom"), validFrom);
}

std::string CreateAutoProvisioningGroupRequest::getAutoProvisioningGroupName() const {
  return autoProvisioningGroupName_;
}

void CreateAutoProvisioningGroupRequest::setAutoProvisioningGroupName(const std::string &autoProvisioningGroupName) {
  autoProvisioningGroupName_ = autoProvisioningGroupName;
  setParameter(std::string("AutoProvisioningGroupName"), autoProvisioningGroupName);
}

CreateAutoProvisioningGroupRequest::LaunchConfigurationAdditionalInfo CreateAutoProvisioningGroupRequest::getLaunchConfigurationAdditionalInfo() const {
  return launchConfigurationAdditionalInfo_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationAdditionalInfo(const CreateAutoProvisioningGroupRequest::LaunchConfigurationAdditionalInfo &launchConfigurationAdditionalInfo) {
  launchConfigurationAdditionalInfo_ = launchConfigurationAdditionalInfo;
  setParameter(std::string("LaunchConfiguration.AdditionalInfo") + ".PvdConfig", launchConfigurationAdditionalInfo.pvdConfig);
}

