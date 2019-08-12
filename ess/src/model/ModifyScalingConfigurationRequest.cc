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
{}

ModifyScalingConfigurationRequest::~ModifyScalingConfigurationRequest()
{}

std::string ModifyScalingConfigurationRequest::getImageId()const
{
	return imageId_;
}

void ModifyScalingConfigurationRequest::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
	setCoreParameter("ImageId", std::to_string(imageId));
}

int ModifyScalingConfigurationRequest::getMemory()const
{
	return memory_;
}

void ModifyScalingConfigurationRequest::setMemory(int memory)
{
	memory_ = memory;
	setCoreParameter("Memory", memory);
}

std::string ModifyScalingConfigurationRequest::getHpcClusterId()const
{
	return hpcClusterId_;
}

void ModifyScalingConfigurationRequest::setHpcClusterId(const std::string& hpcClusterId)
{
	hpcClusterId_ = hpcClusterId;
	setCoreParameter("HpcClusterId", std::to_string(hpcClusterId));
}

std::string ModifyScalingConfigurationRequest::getIoOptimized()const
{
	return ioOptimized_;
}

void ModifyScalingConfigurationRequest::setIoOptimized(const std::string& ioOptimized)
{
	ioOptimized_ = ioOptimized;
	setCoreParameter("IoOptimized", std::to_string(ioOptimized));
}

std::vector<std::string> ModifyScalingConfigurationRequest::getInstanceTypes()const
{
	return instanceTypes_;
}

void ModifyScalingConfigurationRequest::setInstanceTypes(const std::vector<std::string>& instanceTypes)
{
	instanceTypes_ = instanceTypes;
	for(int i = 0; i!= instanceTypes.size(); i++)
		setCoreParameter("InstanceTypes."+ std::to_string(i), std::to_string(instanceTypes.at(i)));
}

int ModifyScalingConfigurationRequest::getInternetMaxBandwidthOut()const
{
	return internetMaxBandwidthOut_;
}

void ModifyScalingConfigurationRequest::setInternetMaxBandwidthOut(int internetMaxBandwidthOut)
{
	internetMaxBandwidthOut_ = internetMaxBandwidthOut;
	setCoreParameter("InternetMaxBandwidthOut", internetMaxBandwidthOut);
}

std::string ModifyScalingConfigurationRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void ModifyScalingConfigurationRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setCoreParameter("SecurityGroupId", std::to_string(securityGroupId));
}

std::string ModifyScalingConfigurationRequest::getKeyPairName()const
{
	return keyPairName_;
}

void ModifyScalingConfigurationRequest::setKeyPairName(const std::string& keyPairName)
{
	keyPairName_ = keyPairName;
	setCoreParameter("KeyPairName", std::to_string(keyPairName));
}

std::vector<ModifyScalingConfigurationRequest::SpotPriceLimit> ModifyScalingConfigurationRequest::getSpotPriceLimit()const
{
	return spotPriceLimit_;
}

void ModifyScalingConfigurationRequest::setSpotPriceLimit(const std::vector<SpotPriceLimit>& spotPriceLimit)
{
	spotPriceLimit_ = spotPriceLimit;
	int i = 0;
	for(int i = 0; i!= spotPriceLimit.size(); i++)	{
		auto obj = spotPriceLimit.at(i);
		std::string str ="SpotPriceLimit."+ std::to_string(i);
		setCoreParameter(str + ".InstanceType", std::to_string(obj.instanceType));
		setCoreParameter(str + ".PriceLimit", obj.priceLimit);
	}
}

std::string ModifyScalingConfigurationRequest::getSystemDiskCategory()const
{
	return systemDiskCategory_;
}

void ModifyScalingConfigurationRequest::setSystemDiskCategory(const std::string& systemDiskCategory)
{
	systemDiskCategory_ = systemDiskCategory;
	setCoreParameter("SystemDiskCategory", std::to_string(systemDiskCategory));
}

std::string ModifyScalingConfigurationRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyScalingConfigurationRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string ModifyScalingConfigurationRequest::getUserData()const
{
	return userData_;
}

void ModifyScalingConfigurationRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setCoreParameter("UserData", std::to_string(userData));
}

std::string ModifyScalingConfigurationRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void ModifyScalingConfigurationRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", std::to_string(resourceGroupId));
}

std::string ModifyScalingConfigurationRequest::getHostName()const
{
	return hostName_;
}

void ModifyScalingConfigurationRequest::setHostName(const std::string& hostName)
{
	hostName_ = hostName;
	setCoreParameter("HostName", std::to_string(hostName));
}

bool ModifyScalingConfigurationRequest::getPasswordInherit()const
{
	return passwordInherit_;
}

void ModifyScalingConfigurationRequest::setPasswordInherit(bool passwordInherit)
{
	passwordInherit_ = passwordInherit;
	setCoreParameter("PasswordInherit", passwordInherit ? "true" : "false");
}

std::string ModifyScalingConfigurationRequest::getImageName()const
{
	return imageName_;
}

void ModifyScalingConfigurationRequest::setImageName(const std::string& imageName)
{
	imageName_ = imageName;
	setCoreParameter("ImageName", std::to_string(imageName));
}

std::string ModifyScalingConfigurationRequest::getInstanceDescription()const
{
	return instanceDescription_;
}

void ModifyScalingConfigurationRequest::setInstanceDescription(const std::string& instanceDescription)
{
	instanceDescription_ = instanceDescription;
	setCoreParameter("InstanceDescription", std::to_string(instanceDescription));
}

bool ModifyScalingConfigurationRequest::getOverride()const
{
	return override_;
}

void ModifyScalingConfigurationRequest::setOverride(bool override)
{
	override_ = override;
	setCoreParameter("Override", override ? "true" : "false");
}

std::string ModifyScalingConfigurationRequest::getDeploymentSetId()const
{
	return deploymentSetId_;
}

void ModifyScalingConfigurationRequest::setDeploymentSetId(const std::string& deploymentSetId)
{
	deploymentSetId_ = deploymentSetId;
	setCoreParameter("DeploymentSetId", std::to_string(deploymentSetId));
}

std::string ModifyScalingConfigurationRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyScalingConfigurationRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string ModifyScalingConfigurationRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyScalingConfigurationRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

int ModifyScalingConfigurationRequest::getCpu()const
{
	return cpu_;
}

void ModifyScalingConfigurationRequest::setCpu(int cpu)
{
	cpu_ = cpu;
	setCoreParameter("Cpu", cpu);
}

std::string ModifyScalingConfigurationRequest::getSystemDiskDiskName()const
{
	return systemDiskDiskName_;
}

void ModifyScalingConfigurationRequest::setSystemDiskDiskName(const std::string& systemDiskDiskName)
{
	systemDiskDiskName_ = systemDiskDiskName;
	setCoreParameter("SystemDiskDiskName", std::to_string(systemDiskDiskName));
}

std::string ModifyScalingConfigurationRequest::getRamRoleName()const
{
	return ramRoleName_;
}

void ModifyScalingConfigurationRequest::setRamRoleName(const std::string& ramRoleName)
{
	ramRoleName_ = ramRoleName;
	setCoreParameter("RamRoleName", std::to_string(ramRoleName));
}

long ModifyScalingConfigurationRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyScalingConfigurationRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::vector<std::string> ModifyScalingConfigurationRequest::getSecurityGroupIds()const
{
	return securityGroupIds_;
}

void ModifyScalingConfigurationRequest::setSecurityGroupIds(const std::vector<std::string>& securityGroupIds)
{
	securityGroupIds_ = securityGroupIds;
	for(int i = 0; i!= securityGroupIds.size(); i++)
		setCoreParameter("SecurityGroupIds."+ std::to_string(i), std::to_string(securityGroupIds.at(i)));
}

std::vector<ModifyScalingConfigurationRequest::DataDisk> ModifyScalingConfigurationRequest::getDataDisk()const
{
	return dataDisk_;
}

void ModifyScalingConfigurationRequest::setDataDisk(const std::vector<DataDisk>& dataDisk)
{
	dataDisk_ = dataDisk;
	int i = 0;
	for(int i = 0; i!= dataDisk.size(); i++)	{
		auto obj = dataDisk.at(i);
		std::string str ="DataDisk."+ std::to_string(i);
		setCoreParameter(str + ".DiskName", std::to_string(obj.diskName));
		setCoreParameter(str + ".SnapshotId", std::to_string(obj.snapshotId));
		setCoreParameter(str + ".Size", obj.size);
		setCoreParameter(str + ".Encrypted", std::to_string(obj.encrypted));
		setCoreParameter(str + ".Description", std::to_string(obj.description));
		setCoreParameter(str + ".Category", std::to_string(obj.category));
		setCoreParameter(str + ".KMSKeyId", std::to_string(obj.kMSKeyId));
		setCoreParameter(str + ".Device", std::to_string(obj.device));
		setCoreParameter(str + ".DeleteWithInstance", obj.deleteWithInstance ? "true" : "false");
	}
}

std::string ModifyScalingConfigurationRequest::getScalingConfigurationName()const
{
	return scalingConfigurationName_;
}

void ModifyScalingConfigurationRequest::setScalingConfigurationName(const std::string& scalingConfigurationName)
{
	scalingConfigurationName_ = scalingConfigurationName;
	setCoreParameter("ScalingConfigurationName", std::to_string(scalingConfigurationName));
}

std::string ModifyScalingConfigurationRequest::getTags()const
{
	return tags_;
}

void ModifyScalingConfigurationRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setCoreParameter("Tags", std::to_string(tags));
}

std::string ModifyScalingConfigurationRequest::getScalingConfigurationId()const
{
	return scalingConfigurationId_;
}

void ModifyScalingConfigurationRequest::setScalingConfigurationId(const std::string& scalingConfigurationId)
{
	scalingConfigurationId_ = scalingConfigurationId;
	setCoreParameter("ScalingConfigurationId", std::to_string(scalingConfigurationId));
}

std::string ModifyScalingConfigurationRequest::getSpotStrategy()const
{
	return spotStrategy_;
}

void ModifyScalingConfigurationRequest::setSpotStrategy(const std::string& spotStrategy)
{
	spotStrategy_ = spotStrategy;
	setCoreParameter("SpotStrategy", std::to_string(spotStrategy));
}

std::string ModifyScalingConfigurationRequest::getInstanceName()const
{
	return instanceName_;
}

void ModifyScalingConfigurationRequest::setInstanceName(const std::string& instanceName)
{
	instanceName_ = instanceName;
	setCoreParameter("InstanceName", std::to_string(instanceName));
}

int ModifyScalingConfigurationRequest::getLoadBalancerWeight()const
{
	return loadBalancerWeight_;
}

void ModifyScalingConfigurationRequest::setLoadBalancerWeight(int loadBalancerWeight)
{
	loadBalancerWeight_ = loadBalancerWeight;
	setCoreParameter("LoadBalancerWeight", loadBalancerWeight);
}

int ModifyScalingConfigurationRequest::getSystemDiskSize()const
{
	return systemDiskSize_;
}

void ModifyScalingConfigurationRequest::setSystemDiskSize(int systemDiskSize)
{
	systemDiskSize_ = systemDiskSize;
	setCoreParameter("SystemDiskSize", systemDiskSize);
}

std::string ModifyScalingConfigurationRequest::getInternetChargeType()const
{
	return internetChargeType_;
}

void ModifyScalingConfigurationRequest::setInternetChargeType(const std::string& internetChargeType)
{
	internetChargeType_ = internetChargeType;
	setCoreParameter("InternetChargeType", std::to_string(internetChargeType));
}

std::string ModifyScalingConfigurationRequest::getSystemDiskDescription()const
{
	return systemDiskDescription_;
}

void ModifyScalingConfigurationRequest::setSystemDiskDescription(const std::string& systemDiskDescription)
{
	systemDiskDescription_ = systemDiskDescription;
	setCoreParameter("SystemDiskDescription", std::to_string(systemDiskDescription));
}

