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
	setParameter("ImageId", imageId);
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

std::vector<std::string> ModifyScalingConfigurationRequest::getInstanceTypes()const
{
	return instanceTypes_;
}

void ModifyScalingConfigurationRequest::setInstanceTypes(const std::vector<std::string>& instanceTypes)
{
	instanceTypes_ = instanceTypes;
	for(int i = 0; i!= instanceTypes.size(); i++)
		setParameter("InstanceTypes."+ std::to_string(i), instanceTypes.at(i));
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

std::string ModifyScalingConfigurationRequest::getRamRoleName()const
{
	return ramRoleName_;
}

void ModifyScalingConfigurationRequest::setRamRoleName(const std::string& ramRoleName)
{
	ramRoleName_ = ramRoleName;
	setParameter("RamRoleName", ramRoleName);
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

long ModifyScalingConfigurationRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyScalingConfigurationRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
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

std::string ModifyScalingConfigurationRequest::getUserData()const
{
	return userData_;
}

void ModifyScalingConfigurationRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setParameter("UserData", userData);
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

std::string ModifyScalingConfigurationRequest::getInstanceName()const
{
	return instanceName_;
}

void ModifyScalingConfigurationRequest::setInstanceName(const std::string& instanceName)
{
	instanceName_ = instanceName;
	setParameter("InstanceName", instanceName);
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

bool ModifyScalingConfigurationRequest::getPasswordInherit()const
{
	return passwordInherit_;
}

void ModifyScalingConfigurationRequest::setPasswordInherit(bool passwordInherit)
{
	passwordInherit_ = passwordInherit;
	setParameter("PasswordInherit", std::to_string(passwordInherit));
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

std::string ModifyScalingConfigurationRequest::getInternetChargeType()const
{
	return internetChargeType_;
}

void ModifyScalingConfigurationRequest::setInternetChargeType(const std::string& internetChargeType)
{
	internetChargeType_ = internetChargeType;
	setParameter("InternetChargeType", internetChargeType);
}

