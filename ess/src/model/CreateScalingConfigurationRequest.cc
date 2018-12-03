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

CreateScalingConfigurationRequest::CreateScalingConfigurationRequest() :
	RpcServiceRequest("ess", "2014-08-28", "CreateScalingConfiguration")
{}

CreateScalingConfigurationRequest::~CreateScalingConfigurationRequest()
{}

std::string CreateScalingConfigurationRequest::getImageId()const
{
	return imageId_;
}

void CreateScalingConfigurationRequest::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
	setParameter("ImageId", imageId);
}

int CreateScalingConfigurationRequest::getMemory()const
{
	return memory_;
}

void CreateScalingConfigurationRequest::setMemory(int memory)
{
	memory_ = memory;
	setParameter("Memory", std::to_string(memory));
}

std::string CreateScalingConfigurationRequest::getScalingGroupId()const
{
	return scalingGroupId_;
}

void CreateScalingConfigurationRequest::setScalingGroupId(const std::string& scalingGroupId)
{
	scalingGroupId_ = scalingGroupId;
	setParameter("ScalingGroupId", scalingGroupId);
}

std::vector<std::string> CreateScalingConfigurationRequest::getInstanceTypes()const
{
	return instanceTypes_;
}

void CreateScalingConfigurationRequest::setInstanceTypes(const std::vector<std::string>& instanceTypes)
{
	instanceTypes_ = instanceTypes;
	for(int i = 0; i!= instanceTypes.size(); i++)
		setParameter("InstanceTypes."+ std::to_string(i), instanceTypes.at(i));
}

std::string CreateScalingConfigurationRequest::getIoOptimized()const
{
	return ioOptimized_;
}

void CreateScalingConfigurationRequest::setIoOptimized(const std::string& ioOptimized)
{
	ioOptimized_ = ioOptimized;
	setParameter("IoOptimized", ioOptimized);
}

std::string CreateScalingConfigurationRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void CreateScalingConfigurationRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setParameter("SecurityGroupId", securityGroupId);
}

int CreateScalingConfigurationRequest::getInternetMaxBandwidthOut()const
{
	return internetMaxBandwidthOut_;
}

void CreateScalingConfigurationRequest::setInternetMaxBandwidthOut(int internetMaxBandwidthOut)
{
	internetMaxBandwidthOut_ = internetMaxBandwidthOut;
	setParameter("InternetMaxBandwidthOut", std::to_string(internetMaxBandwidthOut));
}

std::string CreateScalingConfigurationRequest::getSecurityEnhancementStrategy()const
{
	return securityEnhancementStrategy_;
}

void CreateScalingConfigurationRequest::setSecurityEnhancementStrategy(const std::string& securityEnhancementStrategy)
{
	securityEnhancementStrategy_ = securityEnhancementStrategy;
	setParameter("SecurityEnhancementStrategy", securityEnhancementStrategy);
}

std::string CreateScalingConfigurationRequest::getKeyPairName()const
{
	return keyPairName_;
}

void CreateScalingConfigurationRequest::setKeyPairName(const std::string& keyPairName)
{
	keyPairName_ = keyPairName;
	setParameter("KeyPairName", keyPairName);
}

std::vector<CreateScalingConfigurationRequest::SpotPriceLimit> CreateScalingConfigurationRequest::getSpotPriceLimit()const
{
	return spotPriceLimit_;
}

void CreateScalingConfigurationRequest::setSpotPriceLimit(const std::vector<SpotPriceLimit>& spotPriceLimit)
{
	spotPriceLimit_ = spotPriceLimit;
	int i = 0;
	for(int i = 0; i!= spotPriceLimit.size(); i++)	{
		auto obj = spotPriceLimit.at(i);
		std::string str ="SpotPriceLimit."+ std::to_string(i);
		setParameter(str + ".InstanceType", obj.instanceType);
		setParameter(str + ".PriceLimit", std::to_string(obj.priceLimit));
	}
}

std::string CreateScalingConfigurationRequest::getSystemDiskCategory()const
{
	return systemDiskCategory_;
}

void CreateScalingConfigurationRequest::setSystemDiskCategory(const std::string& systemDiskCategory)
{
	systemDiskCategory_ = systemDiskCategory;
	setParameter("SystemDiskCategory", systemDiskCategory);
}

std::string CreateScalingConfigurationRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateScalingConfigurationRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateScalingConfigurationRequest::getUserData()const
{
	return userData_;
}

void CreateScalingConfigurationRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setParameter("UserData", userData);
}

std::string CreateScalingConfigurationRequest::getHostName()const
{
	return hostName_;
}

void CreateScalingConfigurationRequest::setHostName(const std::string& hostName)
{
	hostName_ = hostName;
	setParameter("HostName", hostName);
}

std::string CreateScalingConfigurationRequest::getPassword()const
{
	return password_;
}

void CreateScalingConfigurationRequest::setPassword(const std::string& password)
{
	password_ = password;
	setParameter("Password", password);
}

bool CreateScalingConfigurationRequest::getPasswordInherit()const
{
	return passwordInherit_;
}

void CreateScalingConfigurationRequest::setPasswordInherit(bool passwordInherit)
{
	passwordInherit_ = passwordInherit;
	setParameter("PasswordInherit", std::to_string(passwordInherit));
}

std::string CreateScalingConfigurationRequest::getImageName()const
{
	return imageName_;
}

void CreateScalingConfigurationRequest::setImageName(const std::string& imageName)
{
	imageName_ = imageName;
	setParameter("ImageName", imageName);
}

std::string CreateScalingConfigurationRequest::getInstanceType()const
{
	return instanceType_;
}

void CreateScalingConfigurationRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setParameter("InstanceType", instanceType);
}

std::string CreateScalingConfigurationRequest::getDeploymentSetId()const
{
	return deploymentSetId_;
}

void CreateScalingConfigurationRequest::setDeploymentSetId(const std::string& deploymentSetId)
{
	deploymentSetId_ = deploymentSetId;
	setParameter("DeploymentSetId", deploymentSetId);
}

std::string CreateScalingConfigurationRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateScalingConfigurationRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateScalingConfigurationRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateScalingConfigurationRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

int CreateScalingConfigurationRequest::getCpu()const
{
	return cpu_;
}

void CreateScalingConfigurationRequest::setCpu(int cpu)
{
	cpu_ = cpu;
	setParameter("Cpu", std::to_string(cpu));
}

std::string CreateScalingConfigurationRequest::getRamRoleName()const
{
	return ramRoleName_;
}

void CreateScalingConfigurationRequest::setRamRoleName(const std::string& ramRoleName)
{
	ramRoleName_ = ramRoleName;
	setParameter("RamRoleName", ramRoleName);
}

long CreateScalingConfigurationRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateScalingConfigurationRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::vector<CreateScalingConfigurationRequest::DataDisk> CreateScalingConfigurationRequest::getDataDisk()const
{
	return dataDisk_;
}

void CreateScalingConfigurationRequest::setDataDisk(const std::vector<DataDisk>& dataDisk)
{
	dataDisk_ = dataDisk;
	int i = 0;
	for(int i = 0; i!= dataDisk.size(); i++)	{
		auto obj = dataDisk.at(i);
		std::string str ="DataDisk."+ std::to_string(i);
		setParameter(str + ".SnapshotId", obj.snapshotId);
		setParameter(str + ".Size", std::to_string(obj.size));
		setParameter(str + ".Category", obj.category);
		setParameter(str + ".Device", obj.device);
		setParameter(str + ".DeleteWithInstance", std::to_string(obj.deleteWithInstance));
	}
}

std::string CreateScalingConfigurationRequest::getScalingConfigurationName()const
{
	return scalingConfigurationName_;
}

void CreateScalingConfigurationRequest::setScalingConfigurationName(const std::string& scalingConfigurationName)
{
	scalingConfigurationName_ = scalingConfigurationName;
	setParameter("ScalingConfigurationName", scalingConfigurationName);
}

std::string CreateScalingConfigurationRequest::getTags()const
{
	return tags_;
}

void CreateScalingConfigurationRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

std::string CreateScalingConfigurationRequest::getSpotStrategy()const
{
	return spotStrategy_;
}

void CreateScalingConfigurationRequest::setSpotStrategy(const std::string& spotStrategy)
{
	spotStrategy_ = spotStrategy;
	setParameter("SpotStrategy", spotStrategy);
}

int CreateScalingConfigurationRequest::getLoadBalancerWeight()const
{
	return loadBalancerWeight_;
}

void CreateScalingConfigurationRequest::setLoadBalancerWeight(int loadBalancerWeight)
{
	loadBalancerWeight_ = loadBalancerWeight;
	setParameter("LoadBalancerWeight", std::to_string(loadBalancerWeight));
}

std::string CreateScalingConfigurationRequest::getInstanceName()const
{
	return instanceName_;
}

void CreateScalingConfigurationRequest::setInstanceName(const std::string& instanceName)
{
	instanceName_ = instanceName;
	setParameter("InstanceName", instanceName);
}

int CreateScalingConfigurationRequest::getSystemDiskSize()const
{
	return systemDiskSize_;
}

void CreateScalingConfigurationRequest::setSystemDiskSize(int systemDiskSize)
{
	systemDiskSize_ = systemDiskSize;
	setParameter("SystemDiskSize", std::to_string(systemDiskSize));
}

std::string CreateScalingConfigurationRequest::getInternetChargeType()const
{
	return internetChargeType_;
}

void CreateScalingConfigurationRequest::setInternetChargeType(const std::string& internetChargeType)
{
	internetChargeType_ = internetChargeType;
	setParameter("InternetChargeType", internetChargeType);
}

int CreateScalingConfigurationRequest::getInternetMaxBandwidthIn()const
{
	return internetMaxBandwidthIn_;
}

void CreateScalingConfigurationRequest::setInternetMaxBandwidthIn(int internetMaxBandwidthIn)
{
	internetMaxBandwidthIn_ = internetMaxBandwidthIn;
	setParameter("InternetMaxBandwidthIn", std::to_string(internetMaxBandwidthIn));
}

