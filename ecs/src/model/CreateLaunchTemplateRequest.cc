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

CreateLaunchTemplateRequest::CreateLaunchTemplateRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "CreateLaunchTemplate")
{
	setMethod(HttpRequest::Method::Post);
}

CreateLaunchTemplateRequest::~CreateLaunchTemplateRequest()
{}

std::string CreateLaunchTemplateRequest::getLaunchTemplateName()const
{
	return launchTemplateName_;
}

void CreateLaunchTemplateRequest::setLaunchTemplateName(const std::string& launchTemplateName)
{
	launchTemplateName_ = launchTemplateName;
	setCoreParameter("LaunchTemplateName", launchTemplateName);
}

long CreateLaunchTemplateRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateLaunchTemplateRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateLaunchTemplateRequest::getSecurityEnhancementStrategy()const
{
	return securityEnhancementStrategy_;
}

void CreateLaunchTemplateRequest::setSecurityEnhancementStrategy(const std::string& securityEnhancementStrategy)
{
	securityEnhancementStrategy_ = securityEnhancementStrategy;
	setCoreParameter("SecurityEnhancementStrategy", securityEnhancementStrategy);
}

std::string CreateLaunchTemplateRequest::getNetworkType()const
{
	return networkType_;
}

void CreateLaunchTemplateRequest::setNetworkType(const std::string& networkType)
{
	networkType_ = networkType;
	setCoreParameter("NetworkType", networkType);
}

std::string CreateLaunchTemplateRequest::getKeyPairName()const
{
	return keyPairName_;
}

void CreateLaunchTemplateRequest::setKeyPairName(const std::string& keyPairName)
{
	keyPairName_ = keyPairName;
	setCoreParameter("KeyPairName", keyPairName);
}

float CreateLaunchTemplateRequest::getSpotPriceLimit()const
{
	return spotPriceLimit_;
}

void CreateLaunchTemplateRequest::setSpotPriceLimit(float spotPriceLimit)
{
	spotPriceLimit_ = spotPriceLimit;
	setCoreParameter("SpotPriceLimit", std::to_string(spotPriceLimit));
}

std::string CreateLaunchTemplateRequest::getImageOwnerAlias()const
{
	return imageOwnerAlias_;
}

void CreateLaunchTemplateRequest::setImageOwnerAlias(const std::string& imageOwnerAlias)
{
	imageOwnerAlias_ = imageOwnerAlias;
	setCoreParameter("ImageOwnerAlias", imageOwnerAlias);
}

std::string CreateLaunchTemplateRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateLaunchTemplateRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateLaunchTemplateRequest::getHostName()const
{
	return hostName_;
}

void CreateLaunchTemplateRequest::setHostName(const std::string& hostName)
{
	hostName_ = hostName;
	setCoreParameter("HostName", hostName);
}

int CreateLaunchTemplateRequest::getSystemDiskIops()const
{
	return systemDiskIops_;
}

void CreateLaunchTemplateRequest::setSystemDiskIops(int systemDiskIops)
{
	systemDiskIops_ = systemDiskIops;
	setCoreParameter("SystemDiskIops", std::to_string(systemDiskIops));
}

std::vector<CreateLaunchTemplateRequest::TemplateTag> CreateLaunchTemplateRequest::getTemplateTag()const
{
	return templateTag_;
}

void CreateLaunchTemplateRequest::setTemplateTag(const std::vector<TemplateTag>& templateTag)
{
	templateTag_ = templateTag;
	for(int dep1 = 0; dep1!= templateTag.size(); dep1++) {
		auto templateTagObj = templateTag.at(dep1);
		std::string templateTagObjStr = "TemplateTag." + std::to_string(dep1);
		setCoreParameter(templateTagObjStr + ".Key", templateTagObj.key);
		setCoreParameter(templateTagObjStr + ".Value", templateTagObj.value);
	}
}

std::vector<CreateLaunchTemplateRequest::Tag> CreateLaunchTemplateRequest::getTag()const
{
	return tag_;
}

void CreateLaunchTemplateRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1);
		setCoreParameter(tagObjStr + ".Key", tagObj.key);
		setCoreParameter(tagObjStr + ".Value", tagObj.value);
	}
}

int CreateLaunchTemplateRequest::getPeriod()const
{
	return period_;
}

void CreateLaunchTemplateRequest::setPeriod(int period)
{
	period_ = period;
	setCoreParameter("Period", std::to_string(period));
}

std::string CreateLaunchTemplateRequest::getTemplateResourceGroupId()const
{
	return templateResourceGroupId_;
}

void CreateLaunchTemplateRequest::setTemplateResourceGroupId(const std::string& templateResourceGroupId)
{
	templateResourceGroupId_ = templateResourceGroupId;
	setCoreParameter("TemplateResourceGroupId", templateResourceGroupId);
}

long CreateLaunchTemplateRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateLaunchTemplateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateLaunchTemplateRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateLaunchTemplateRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setCoreParameter("VSwitchId", vSwitchId);
}

std::string CreateLaunchTemplateRequest::getSpotStrategy()const
{
	return spotStrategy_;
}

void CreateLaunchTemplateRequest::setSpotStrategy(const std::string& spotStrategy)
{
	spotStrategy_ = spotStrategy;
	setCoreParameter("SpotStrategy", spotStrategy);
}

std::string CreateLaunchTemplateRequest::getInstanceName()const
{
	return instanceName_;
}

void CreateLaunchTemplateRequest::setInstanceName(const std::string& instanceName)
{
	instanceName_ = instanceName;
	setCoreParameter("InstanceName", instanceName);
}

std::string CreateLaunchTemplateRequest::getInternetChargeType()const
{
	return internetChargeType_;
}

void CreateLaunchTemplateRequest::setInternetChargeType(const std::string& internetChargeType)
{
	internetChargeType_ = internetChargeType;
	setCoreParameter("InternetChargeType", internetChargeType);
}

std::string CreateLaunchTemplateRequest::getZoneId()const
{
	return zoneId_;
}

void CreateLaunchTemplateRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
}

int CreateLaunchTemplateRequest::getInternetMaxBandwidthIn()const
{
	return internetMaxBandwidthIn_;
}

void CreateLaunchTemplateRequest::setInternetMaxBandwidthIn(int internetMaxBandwidthIn)
{
	internetMaxBandwidthIn_ = internetMaxBandwidthIn;
	setCoreParameter("InternetMaxBandwidthIn", std::to_string(internetMaxBandwidthIn));
}

std::string CreateLaunchTemplateRequest::getVersionDescription()const
{
	return versionDescription_;
}

void CreateLaunchTemplateRequest::setVersionDescription(const std::string& versionDescription)
{
	versionDescription_ = versionDescription;
	setCoreParameter("VersionDescription", versionDescription);
}

std::string CreateLaunchTemplateRequest::getImageId()const
{
	return imageId_;
}

void CreateLaunchTemplateRequest::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
	setCoreParameter("ImageId", imageId);
}

std::string CreateLaunchTemplateRequest::getIoOptimized()const
{
	return ioOptimized_;
}

void CreateLaunchTemplateRequest::setIoOptimized(const std::string& ioOptimized)
{
	ioOptimized_ = ioOptimized;
	setCoreParameter("IoOptimized", ioOptimized);
}

std::string CreateLaunchTemplateRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void CreateLaunchTemplateRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setCoreParameter("SecurityGroupId", securityGroupId);
}

int CreateLaunchTemplateRequest::getInternetMaxBandwidthOut()const
{
	return internetMaxBandwidthOut_;
}

void CreateLaunchTemplateRequest::setInternetMaxBandwidthOut(int internetMaxBandwidthOut)
{
	internetMaxBandwidthOut_ = internetMaxBandwidthOut;
	setCoreParameter("InternetMaxBandwidthOut", std::to_string(internetMaxBandwidthOut));
}

std::string CreateLaunchTemplateRequest::getDescription()const
{
	return description_;
}

void CreateLaunchTemplateRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreateLaunchTemplateRequest::getSystemDiskCategory()const
{
	return systemDiskCategory_;
}

void CreateLaunchTemplateRequest::setSystemDiskCategory(const std::string& systemDiskCategory)
{
	systemDiskCategory_ = systemDiskCategory;
	setCoreParameter("SystemDiskCategory", systemDiskCategory);
}

std::string CreateLaunchTemplateRequest::getUserData()const
{
	return userData_;
}

void CreateLaunchTemplateRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setCoreParameter("UserData", userData);
}

bool CreateLaunchTemplateRequest::getPasswordInherit()const
{
	return passwordInherit_;
}

void CreateLaunchTemplateRequest::setPasswordInherit(bool passwordInherit)
{
	passwordInherit_ = passwordInherit;
	setCoreParameter("PasswordInherit", passwordInherit ? "true" : "false");
}

std::string CreateLaunchTemplateRequest::getRegionId()const
{
	return regionId_;
}

void CreateLaunchTemplateRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateLaunchTemplateRequest::getInstanceType()const
{
	return instanceType_;
}

void CreateLaunchTemplateRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setCoreParameter("InstanceType", instanceType);
}

std::string CreateLaunchTemplateRequest::getInstanceChargeType()const
{
	return instanceChargeType_;
}

void CreateLaunchTemplateRequest::setInstanceChargeType(const std::string& instanceChargeType)
{
	instanceChargeType_ = instanceChargeType;
	setCoreParameter("InstanceChargeType", instanceChargeType);
}

bool CreateLaunchTemplateRequest::getEnableVmOsConfig()const
{
	return enableVmOsConfig_;
}

void CreateLaunchTemplateRequest::setEnableVmOsConfig(bool enableVmOsConfig)
{
	enableVmOsConfig_ = enableVmOsConfig;
	setCoreParameter("EnableVmOsConfig", enableVmOsConfig ? "true" : "false");
}

std::vector<CreateLaunchTemplateRequest::NetworkInterface> CreateLaunchTemplateRequest::getNetworkInterface()const
{
	return networkInterface_;
}

void CreateLaunchTemplateRequest::setNetworkInterface(const std::vector<NetworkInterface>& networkInterface)
{
	networkInterface_ = networkInterface;
	for(int dep1 = 0; dep1!= networkInterface.size(); dep1++) {
		auto networkInterfaceObj = networkInterface.at(dep1);
		std::string networkInterfaceObjStr = "NetworkInterface." + std::to_string(dep1);
		setCoreParameter(networkInterfaceObjStr + ".PrimaryIpAddress", networkInterfaceObj.primaryIpAddress);
		setCoreParameter(networkInterfaceObjStr + ".VSwitchId", networkInterfaceObj.vSwitchId);
		setCoreParameter(networkInterfaceObjStr + ".SecurityGroupId", networkInterfaceObj.securityGroupId);
		setCoreParameter(networkInterfaceObjStr + ".NetworkInterfaceName", networkInterfaceObj.networkInterfaceName);
		setCoreParameter(networkInterfaceObjStr + ".Description", networkInterfaceObj.description);
	}
}

std::string CreateLaunchTemplateRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateLaunchTemplateRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateLaunchTemplateRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateLaunchTemplateRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string CreateLaunchTemplateRequest::getSystemDiskDiskName()const
{
	return systemDiskDiskName_;
}

void CreateLaunchTemplateRequest::setSystemDiskDiskName(const std::string& systemDiskDiskName)
{
	systemDiskDiskName_ = systemDiskDiskName;
	setCoreParameter("SystemDiskDiskName", systemDiskDiskName);
}

std::string CreateLaunchTemplateRequest::getRamRoleName()const
{
	return ramRoleName_;
}

void CreateLaunchTemplateRequest::setRamRoleName(const std::string& ramRoleName)
{
	ramRoleName_ = ramRoleName;
	setCoreParameter("RamRoleName", ramRoleName);
}

std::string CreateLaunchTemplateRequest::getAutoReleaseTime()const
{
	return autoReleaseTime_;
}

void CreateLaunchTemplateRequest::setAutoReleaseTime(const std::string& autoReleaseTime)
{
	autoReleaseTime_ = autoReleaseTime;
	setCoreParameter("AutoReleaseTime", autoReleaseTime);
}

int CreateLaunchTemplateRequest::getSpotDuration()const
{
	return spotDuration_;
}

void CreateLaunchTemplateRequest::setSpotDuration(int spotDuration)
{
	spotDuration_ = spotDuration;
	setCoreParameter("SpotDuration", std::to_string(spotDuration));
}

std::vector<CreateLaunchTemplateRequest::DataDisk> CreateLaunchTemplateRequest::getDataDisk()const
{
	return dataDisk_;
}

void CreateLaunchTemplateRequest::setDataDisk(const std::vector<DataDisk>& dataDisk)
{
	dataDisk_ = dataDisk;
	for(int dep1 = 0; dep1!= dataDisk.size(); dep1++) {
		auto dataDiskObj = dataDisk.at(dep1);
		std::string dataDiskObjStr = "DataDisk." + std::to_string(dep1);
		setCoreParameter(dataDiskObjStr + ".Size", std::to_string(dataDiskObj.size));
		setCoreParameter(dataDiskObjStr + ".SnapshotId", dataDiskObj.snapshotId);
		setCoreParameter(dataDiskObjStr + ".Category", dataDiskObj.category);
		setCoreParameter(dataDiskObjStr + ".Encrypted", dataDiskObj.encrypted);
		setCoreParameter(dataDiskObjStr + ".DiskName", dataDiskObj.diskName);
		setCoreParameter(dataDiskObjStr + ".Description", dataDiskObj.description);
		setCoreParameter(dataDiskObjStr + ".DeleteWithInstance", dataDiskObj.deleteWithInstance ? "true" : "false");
		setCoreParameter(dataDiskObjStr + ".Device", dataDiskObj.device);
	}
}

int CreateLaunchTemplateRequest::getSystemDiskSize()const
{
	return systemDiskSize_;
}

void CreateLaunchTemplateRequest::setSystemDiskSize(int systemDiskSize)
{
	systemDiskSize_ = systemDiskSize;
	setCoreParameter("SystemDiskSize", std::to_string(systemDiskSize));
}

std::string CreateLaunchTemplateRequest::getVpcId()const
{
	return vpcId_;
}

void CreateLaunchTemplateRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setCoreParameter("VpcId", vpcId);
}

std::string CreateLaunchTemplateRequest::getSystemDiskDescription()const
{
	return systemDiskDescription_;
}

void CreateLaunchTemplateRequest::setSystemDiskDescription(const std::string& systemDiskDescription)
{
	systemDiskDescription_ = systemDiskDescription;
	setCoreParameter("SystemDiskDescription", systemDiskDescription);
}

