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

ModifyScalingConfigurationRequest::ModifyScalingConfigurationRequest() :
	RpcServiceRequest("ess", "2014-08-28", "ModifyScalingConfiguration")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyScalingConfigurationRequest::~ModifyScalingConfigurationRequest()
{}

std::string ModifyScalingConfigurationRequest::getHpcClusterId()const
{
	return hpcClusterId_;
}

void ModifyScalingConfigurationRequest::setHpcClusterId(const std::string& hpcClusterId)
{
	hpcClusterId_ = hpcClusterId;
	setParameter("HpcClusterId", hpcClusterId);
}

std::string ModifyScalingConfigurationRequest::getKeyPairName()const
{
	return keyPairName_;
}

void ModifyScalingConfigurationRequest::setKeyPairName(const std::string& keyPairName)
{
	keyPairName_ = keyPairName;
	setParameter("KeyPairName", keyPairName);
}

std::vector<ModifyScalingConfigurationRequest::SpotPriceLimit> ModifyScalingConfigurationRequest::getSpotPriceLimit()const
{
	return spotPriceLimit_;
}

void ModifyScalingConfigurationRequest::setSpotPriceLimit(const std::vector<SpotPriceLimit>& spotPriceLimit)
{
	spotPriceLimit_ = spotPriceLimit;
	for(int dep1 = 0; dep1!= spotPriceLimit.size(); dep1++) {
		auto spotPriceLimitObj = spotPriceLimit.at(dep1);
		std::string spotPriceLimitObjStr = "SpotPriceLimit." + std::to_string(dep1 + 1);
		setParameter(spotPriceLimitObjStr + ".InstanceType", spotPriceLimitObj.instanceType);
		setParameter(spotPriceLimitObjStr + ".PriceLimit", std::to_string(spotPriceLimitObj.priceLimit));
	}
}

std::string ModifyScalingConfigurationRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void ModifyScalingConfigurationRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string ModifyScalingConfigurationRequest::getPrivatePoolOptionsMatchCriteria()const
{
	return privatePoolOptionsMatchCriteria_;
}

void ModifyScalingConfigurationRequest::setPrivatePoolOptionsMatchCriteria(const std::string& privatePoolOptionsMatchCriteria)
{
	privatePoolOptionsMatchCriteria_ = privatePoolOptionsMatchCriteria;
	setParameter("PrivatePoolOptionsMatchCriteria", privatePoolOptionsMatchCriteria);
}

std::string ModifyScalingConfigurationRequest::getHostName()const
{
	return hostName_;
}

void ModifyScalingConfigurationRequest::setHostName(const std::string& hostName)
{
	hostName_ = hostName;
	setParameter("HostName", hostName);
}

std::string ModifyScalingConfigurationRequest::getInstanceDescription()const
{
	return instanceDescription_;
}

void ModifyScalingConfigurationRequest::setInstanceDescription(const std::string& instanceDescription)
{
	instanceDescription_ = instanceDescription;
	setParameter("InstanceDescription", instanceDescription);
}

std::string ModifyScalingConfigurationRequest::getSystemDiskAutoSnapshotPolicyId()const
{
	return systemDiskAutoSnapshotPolicyId_;
}

void ModifyScalingConfigurationRequest::setSystemDiskAutoSnapshotPolicyId(const std::string& systemDiskAutoSnapshotPolicyId)
{
	systemDiskAutoSnapshotPolicyId_ = systemDiskAutoSnapshotPolicyId;
	setParameter("SystemDiskAutoSnapshotPolicyId", systemDiskAutoSnapshotPolicyId);
}

std::string ModifyScalingConfigurationRequest::getPrivatePoolOptionsId()const
{
	return privatePoolOptionsId_;
}

void ModifyScalingConfigurationRequest::setPrivatePoolOptionsId(const std::string& privatePoolOptionsId)
{
	privatePoolOptionsId_ = privatePoolOptionsId;
	setParameter("PrivatePoolOptionsId", privatePoolOptionsId);
}

int ModifyScalingConfigurationRequest::getIpv6AddressCount()const
{
	return ipv6AddressCount_;
}

void ModifyScalingConfigurationRequest::setIpv6AddressCount(int ipv6AddressCount)
{
	ipv6AddressCount_ = ipv6AddressCount;
	setParameter("Ipv6AddressCount", std::to_string(ipv6AddressCount));
}

int ModifyScalingConfigurationRequest::getCpu()const
{
	return cpu_;
}

void ModifyScalingConfigurationRequest::setCpu(int cpu)
{
	cpu_ = cpu;
	setParameter("Cpu", std::to_string(cpu));
}

long ModifyScalingConfigurationRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyScalingConfigurationRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyScalingConfigurationRequest::getScalingConfigurationName()const
{
	return scalingConfigurationName_;
}

void ModifyScalingConfigurationRequest::setScalingConfigurationName(const std::string& scalingConfigurationName)
{
	scalingConfigurationName_ = scalingConfigurationName;
	setParameter("ScalingConfigurationName", scalingConfigurationName);
}

std::string ModifyScalingConfigurationRequest::getTags()const
{
	return tags_;
}

void ModifyScalingConfigurationRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

std::string ModifyScalingConfigurationRequest::getScalingConfigurationId()const
{
	return scalingConfigurationId_;
}

void ModifyScalingConfigurationRequest::setScalingConfigurationId(const std::string& scalingConfigurationId)
{
	scalingConfigurationId_ = scalingConfigurationId;
	setParameter("ScalingConfigurationId", scalingConfigurationId);
}

std::string ModifyScalingConfigurationRequest::getSpotStrategy()const
{
	return spotStrategy_;
}

void ModifyScalingConfigurationRequest::setSpotStrategy(const std::string& spotStrategy)
{
	spotStrategy_ = spotStrategy;
	setParameter("SpotStrategy", spotStrategy);
}

std::string ModifyScalingConfigurationRequest::getInstanceName()const
{
	return instanceName_;
}

void ModifyScalingConfigurationRequest::setInstanceName(const std::string& instanceName)
{
	instanceName_ = instanceName;
	setParameter("InstanceName", instanceName);
}

std::string ModifyScalingConfigurationRequest::getInternetChargeType()const
{
	return internetChargeType_;
}

void ModifyScalingConfigurationRequest::setInternetChargeType(const std::string& internetChargeType)
{
	internetChargeType_ = internetChargeType;
	setParameter("InternetChargeType", internetChargeType);
}

std::string ModifyScalingConfigurationRequest::getZoneId()const
{
	return zoneId_;
}

void ModifyScalingConfigurationRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

std::string ModifyScalingConfigurationRequest::getAffinity()const
{
	return affinity_;
}

void ModifyScalingConfigurationRequest::setAffinity(const std::string& affinity)
{
	affinity_ = affinity;
	setParameter("Affinity", affinity);
}

std::string ModifyScalingConfigurationRequest::getImageId()const
{
	return imageId_;
}

void ModifyScalingConfigurationRequest::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
	setParameter("ImageId", imageId);
}

int ModifyScalingConfigurationRequest::getMemory()const
{
	return memory_;
}

void ModifyScalingConfigurationRequest::setMemory(int memory)
{
	memory_ = memory;
	setParameter("Memory", std::to_string(memory));
}

std::string ModifyScalingConfigurationRequest::getIoOptimized()const
{
	return ioOptimized_;
}

void ModifyScalingConfigurationRequest::setIoOptimized(const std::string& ioOptimized)
{
	ioOptimized_ = ioOptimized;
	setParameter("IoOptimized", ioOptimized);
}

std::vector<std::string> ModifyScalingConfigurationRequest::getInstanceTypes()const
{
	return instanceTypes_;
}

void ModifyScalingConfigurationRequest::setInstanceTypes(const std::vector<std::string>& instanceTypes)
{
	instanceTypes_ = instanceTypes;
	for(int dep1 = 0; dep1!= instanceTypes.size(); dep1++) {
		setParameter("InstanceTypes."+ std::to_string(dep1), instanceTypes.at(dep1));
	}
}

int ModifyScalingConfigurationRequest::getInternetMaxBandwidthOut()const
{
	return internetMaxBandwidthOut_;
}

void ModifyScalingConfigurationRequest::setInternetMaxBandwidthOut(int internetMaxBandwidthOut)
{
	internetMaxBandwidthOut_ = internetMaxBandwidthOut;
	setParameter("InternetMaxBandwidthOut", std::to_string(internetMaxBandwidthOut));
}

std::string ModifyScalingConfigurationRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void ModifyScalingConfigurationRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setParameter("SecurityGroupId", securityGroupId);
}

std::string ModifyScalingConfigurationRequest::getSystemDiskCategory()const
{
	return systemDiskCategory_;
}

void ModifyScalingConfigurationRequest::setSystemDiskCategory(const std::string& systemDiskCategory)
{
	systemDiskCategory_ = systemDiskCategory;
	setParameter("SystemDiskCategory", systemDiskCategory);
}

std::string ModifyScalingConfigurationRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyScalingConfigurationRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyScalingConfigurationRequest::getUserData()const
{
	return userData_;
}

void ModifyScalingConfigurationRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setParameter("UserData", userData);
}

bool ModifyScalingConfigurationRequest::getPasswordInherit()const
{
	return passwordInherit_;
}

void ModifyScalingConfigurationRequest::setPasswordInherit(bool passwordInherit)
{
	passwordInherit_ = passwordInherit;
	setParameter("PasswordInherit", passwordInherit ? "true" : "false");
}

std::string ModifyScalingConfigurationRequest::getImageName()const
{
	return imageName_;
}

void ModifyScalingConfigurationRequest::setImageName(const std::string& imageName)
{
	imageName_ = imageName;
	setParameter("ImageName", imageName);
}

bool ModifyScalingConfigurationRequest::getOverride()const
{
	return override_;
}

void ModifyScalingConfigurationRequest::setOverride(bool override)
{
	override_ = override;
	setParameter("Override", override ? "true" : "false");
}

std::map<std::string, std::string> ModifyScalingConfigurationRequest::getSchedulerOptions()const
{
	return schedulerOptions_;
}

void ModifyScalingConfigurationRequest::setSchedulerOptions(const std::map<std::string, std::string>& schedulerOptions)
{
	schedulerOptions_ = schedulerOptions;
	setJsonParameters("SchedulerOptions", schedulerOptions);
}

std::string ModifyScalingConfigurationRequest::getDeploymentSetId()const
{
	return deploymentSetId_;
}

void ModifyScalingConfigurationRequest::setDeploymentSetId(const std::string& deploymentSetId)
{
	deploymentSetId_ = deploymentSetId;
	setParameter("DeploymentSetId", deploymentSetId);
}

std::string ModifyScalingConfigurationRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyScalingConfigurationRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyScalingConfigurationRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyScalingConfigurationRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ModifyScalingConfigurationRequest::getTenancy()const
{
	return tenancy_;
}

void ModifyScalingConfigurationRequest::setTenancy(const std::string& tenancy)
{
	tenancy_ = tenancy;
	setParameter("Tenancy", tenancy);
}

std::string ModifyScalingConfigurationRequest::getSystemDiskDiskName()const
{
	return systemDiskDiskName_;
}

void ModifyScalingConfigurationRequest::setSystemDiskDiskName(const std::string& systemDiskDiskName)
{
	systemDiskDiskName_ = systemDiskDiskName;
	setParameter("SystemDiskDiskName", systemDiskDiskName);
}

std::string ModifyScalingConfigurationRequest::getRamRoleName()const
{
	return ramRoleName_;
}

void ModifyScalingConfigurationRequest::setRamRoleName(const std::string& ramRoleName)
{
	ramRoleName_ = ramRoleName;
	setParameter("RamRoleName", ramRoleName);
}

std::string ModifyScalingConfigurationRequest::getDedicatedHostId()const
{
	return dedicatedHostId_;
}

void ModifyScalingConfigurationRequest::setDedicatedHostId(const std::string& dedicatedHostId)
{
	dedicatedHostId_ = dedicatedHostId;
	setParameter("DedicatedHostId", dedicatedHostId);
}

std::string ModifyScalingConfigurationRequest::getCreditSpecification()const
{
	return creditSpecification_;
}

void ModifyScalingConfigurationRequest::setCreditSpecification(const std::string& creditSpecification)
{
	creditSpecification_ = creditSpecification;
	setParameter("CreditSpecification", creditSpecification);
}

std::vector<std::string> ModifyScalingConfigurationRequest::getSecurityGroupIds()const
{
	return securityGroupIds_;
}

void ModifyScalingConfigurationRequest::setSecurityGroupIds(const std::vector<std::string>& securityGroupIds)
{
	securityGroupIds_ = securityGroupIds;
	for(int dep1 = 0; dep1!= securityGroupIds.size(); dep1++) {
		setParameter("SecurityGroupIds."+ std::to_string(dep1), securityGroupIds.at(dep1));
	}
}

std::vector<ModifyScalingConfigurationRequest::DataDisk> ModifyScalingConfigurationRequest::getDataDisk()const
{
	return dataDisk_;
}

void ModifyScalingConfigurationRequest::setDataDisk(const std::vector<DataDisk>& dataDisk)
{
	dataDisk_ = dataDisk;
	for(int dep1 = 0; dep1!= dataDisk.size(); dep1++) {
		auto dataDiskObj = dataDisk.at(dep1);
		std::string dataDiskObjStr = "DataDisk." + std::to_string(dep1 + 1);
		setParameter(dataDiskObjStr + ".DiskName", dataDiskObj.diskName);
		setParameter(dataDiskObjStr + ".SnapshotId", dataDiskObj.snapshotId);
		setParameter(dataDiskObjStr + ".Size", std::to_string(dataDiskObj.size));
		setParameter(dataDiskObjStr + ".Encrypted", dataDiskObj.encrypted);
		setParameter(dataDiskObjStr + ".AutoSnapshotPolicyId", dataDiskObj.autoSnapshotPolicyId);
		setParameter(dataDiskObjStr + ".Description", dataDiskObj.description);
		setParameter(dataDiskObjStr + ".Category", dataDiskObj.category);
		setParameter(dataDiskObjStr + ".KMSKeyId", dataDiskObj.kMSKeyId);
		setParameter(dataDiskObjStr + ".Device", dataDiskObj.device);
		setParameter(dataDiskObjStr + ".DeleteWithInstance", dataDiskObj.deleteWithInstance ? "true" : "false");
	}
}

int ModifyScalingConfigurationRequest::getLoadBalancerWeight()const
{
	return loadBalancerWeight_;
}

void ModifyScalingConfigurationRequest::setLoadBalancerWeight(int loadBalancerWeight)
{
	loadBalancerWeight_ = loadBalancerWeight;
	setParameter("LoadBalancerWeight", std::to_string(loadBalancerWeight));
}

int ModifyScalingConfigurationRequest::getSystemDiskSize()const
{
	return systemDiskSize_;
}

void ModifyScalingConfigurationRequest::setSystemDiskSize(int systemDiskSize)
{
	systemDiskSize_ = systemDiskSize;
	setParameter("SystemDiskSize", std::to_string(systemDiskSize));
}

std::string ModifyScalingConfigurationRequest::getImageFamily()const
{
	return imageFamily_;
}

void ModifyScalingConfigurationRequest::setImageFamily(const std::string& imageFamily)
{
	imageFamily_ = imageFamily;
	setParameter("ImageFamily", imageFamily);
}

std::string ModifyScalingConfigurationRequest::getSystemDiskDescription()const
{
	return systemDiskDescription_;
}

void ModifyScalingConfigurationRequest::setSystemDiskDescription(const std::string& systemDiskDescription)
{
	systemDiskDescription_ = systemDiskDescription;
	setParameter("SystemDiskDescription", systemDiskDescription);
}

