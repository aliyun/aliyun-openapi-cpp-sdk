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
	setParameter("LaunchTemplateName", launchTemplateName);
}

long CreateLaunchTemplateRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateLaunchTemplateRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateLaunchTemplateRequest::getSecurityEnhancementStrategy()const
{
	return securityEnhancementStrategy_;
}

void CreateLaunchTemplateRequest::setSecurityEnhancementStrategy(const std::string& securityEnhancementStrategy)
{
	securityEnhancementStrategy_ = securityEnhancementStrategy;
	setParameter("SecurityEnhancementStrategy", securityEnhancementStrategy);
}

std::string CreateLaunchTemplateRequest::getNetworkType()const
{
	return networkType_;
}

void CreateLaunchTemplateRequest::setNetworkType(const std::string& networkType)
{
	networkType_ = networkType;
	setParameter("NetworkType", networkType);
}

std::string CreateLaunchTemplateRequest::getKeyPairName()const
{
	return keyPairName_;
}

void CreateLaunchTemplateRequest::setKeyPairName(const std::string& keyPairName)
{
	keyPairName_ = keyPairName;
	setParameter("KeyPairName", keyPairName);
}

float CreateLaunchTemplateRequest::getSpotPriceLimit()const
{
	return spotPriceLimit_;
}

void CreateLaunchTemplateRequest::setSpotPriceLimit(float spotPriceLimit)
{
	spotPriceLimit_ = spotPriceLimit;
	setParameter("SpotPriceLimit", std::to_string(spotPriceLimit));
}

std::string CreateLaunchTemplateRequest::getImageOwnerAlias()const
{
	return imageOwnerAlias_;
}

void CreateLaunchTemplateRequest::setImageOwnerAlias(const std::string& imageOwnerAlias)
{
	imageOwnerAlias_ = imageOwnerAlias;
	setParameter("ImageOwnerAlias", imageOwnerAlias);
}

std::string CreateLaunchTemplateRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateLaunchTemplateRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateLaunchTemplateRequest::getHostName()const
{
	return hostName_;
}

void CreateLaunchTemplateRequest::setHostName(const std::string& hostName)
{
	hostName_ = hostName;
	setParameter("HostName", hostName);
}

int CreateLaunchTemplateRequest::getSystemDiskIops()const
{
	return systemDiskIops_;
}

void CreateLaunchTemplateRequest::setSystemDiskIops(int systemDiskIops)
{
	systemDiskIops_ = systemDiskIops;
	setParameter("SystemDiskIops", std::to_string(systemDiskIops));
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
		std::string templateTagObjStr = "TemplateTag." + std::to_string(dep1 + 1);
		setParameter(templateTagObjStr + ".Key", templateTagObj.key);
		setParameter(templateTagObjStr + ".Value", templateTagObj.value);
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
		std::string tagObjStr = "Tag." + std::to_string(dep1 + 1);
		setParameter(tagObjStr + ".Key", tagObj.key);
		setParameter(tagObjStr + ".Value", tagObj.value);
	}
}

int CreateLaunchTemplateRequest::getPeriod()const
{
	return period_;
}

void CreateLaunchTemplateRequest::setPeriod(int period)
{
	period_ = period;
	setParameter("Period", std::to_string(period));
}

std::string CreateLaunchTemplateRequest::getTemplateResourceGroupId()const
{
	return templateResourceGroupId_;
}

void CreateLaunchTemplateRequest::setTemplateResourceGroupId(const std::string& templateResourceGroupId)
{
	templateResourceGroupId_ = templateResourceGroupId;
	setParameter("TemplateResourceGroupId", templateResourceGroupId);
}

long CreateLaunchTemplateRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateLaunchTemplateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateLaunchTemplateRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateLaunchTemplateRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setParameter("VSwitchId", vSwitchId);
}

std::string CreateLaunchTemplateRequest::getSpotStrategy()const
{
	return spotStrategy_;
}

void CreateLaunchTemplateRequest::setSpotStrategy(const std::string& spotStrategy)
{
	spotStrategy_ = spotStrategy;
	setParameter("SpotStrategy", spotStrategy);
}

std::string CreateLaunchTemplateRequest::getInstanceName()const
{
	return instanceName_;
}

void CreateLaunchTemplateRequest::setInstanceName(const std::string& instanceName)
{
	instanceName_ = instanceName;
	setParameter("InstanceName", instanceName);
}

std::string CreateLaunchTemplateRequest::getInternetChargeType()const
{
	return internetChargeType_;
}

void CreateLaunchTemplateRequest::setInternetChargeType(const std::string& internetChargeType)
{
	internetChargeType_ = internetChargeType;
	setParameter("InternetChargeType", internetChargeType);
}

std::string CreateLaunchTemplateRequest::getZoneId()const
{
	return zoneId_;
}

void CreateLaunchTemplateRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

int CreateLaunchTemplateRequest::getInternetMaxBandwidthIn()const
{
	return internetMaxBandwidthIn_;
}

void CreateLaunchTemplateRequest::setInternetMaxBandwidthIn(int internetMaxBandwidthIn)
{
	internetMaxBandwidthIn_ = internetMaxBandwidthIn;
	setParameter("InternetMaxBandwidthIn", std::to_string(internetMaxBandwidthIn));
}

std::string CreateLaunchTemplateRequest::getVersionDescription()const
{
	return versionDescription_;
}

void CreateLaunchTemplateRequest::setVersionDescription(const std::string& versionDescription)
{
	versionDescription_ = versionDescription;
	setParameter("VersionDescription", versionDescription);
}

std::string CreateLaunchTemplateRequest::getImageId()const
{
	return imageId_;
}

void CreateLaunchTemplateRequest::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
	setParameter("ImageId", imageId);
}

std::string CreateLaunchTemplateRequest::getIoOptimized()const
{
	return ioOptimized_;
}

void CreateLaunchTemplateRequest::setIoOptimized(const std::string& ioOptimized)
{
	ioOptimized_ = ioOptimized;
	setParameter("IoOptimized", ioOptimized);
}

std::string CreateLaunchTemplateRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void CreateLaunchTemplateRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setParameter("SecurityGroupId", securityGroupId);
}

int CreateLaunchTemplateRequest::getInternetMaxBandwidthOut()const
{
	return internetMaxBandwidthOut_;
}

void CreateLaunchTemplateRequest::setInternetMaxBandwidthOut(int internetMaxBandwidthOut)
{
	internetMaxBandwidthOut_ = internetMaxBandwidthOut;
	setParameter("InternetMaxBandwidthOut", std::to_string(internetMaxBandwidthOut));
}

std::string CreateLaunchTemplateRequest::getDescription()const
{
	return description_;
}

void CreateLaunchTemplateRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateLaunchTemplateRequest::getSystemDiskCategory()const
{
	return systemDiskCategory_;
}

void CreateLaunchTemplateRequest::setSystemDiskCategory(const std::string& systemDiskCategory)
{
	systemDiskCategory_ = systemDiskCategory;
	setParameter("SystemDiskCategory", systemDiskCategory);
}

std::string CreateLaunchTemplateRequest::getUserData()const
{
	return userData_;
}

void CreateLaunchTemplateRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setParameter("UserData", userData);
}

bool CreateLaunchTemplateRequest::getPasswordInherit()const
{
	return passwordInherit_;
}

void CreateLaunchTemplateRequest::setPasswordInherit(bool passwordInherit)
{
	passwordInherit_ = passwordInherit;
	setParameter("PasswordInherit", passwordInherit ? "true" : "false");
}

std::string CreateLaunchTemplateRequest::getRegionId()const
{
	return regionId_;
}

void CreateLaunchTemplateRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateLaunchTemplateRequest::getInstanceType()const
{
	return instanceType_;
}

void CreateLaunchTemplateRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setParameter("InstanceType", instanceType);
}

std::string CreateLaunchTemplateRequest::getInstanceChargeType()const
{
	return instanceChargeType_;
}

void CreateLaunchTemplateRequest::setInstanceChargeType(const std::string& instanceChargeType)
{
	instanceChargeType_ = instanceChargeType;
	setParameter("InstanceChargeType", instanceChargeType);
}

bool CreateLaunchTemplateRequest::getEnableVmOsConfig()const
{
	return enableVmOsConfig_;
}

void CreateLaunchTemplateRequest::setEnableVmOsConfig(bool enableVmOsConfig)
{
	enableVmOsConfig_ = enableVmOsConfig;
	setParameter("EnableVmOsConfig", enableVmOsConfig ? "true" : "false");
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
		std::string networkInterfaceObjStr = "NetworkInterface." + std::to_string(dep1 + 1);
		setParameter(networkInterfaceObjStr + ".PrimaryIpAddress", networkInterfaceObj.primaryIpAddress);
		setParameter(networkInterfaceObjStr + ".VSwitchId", networkInterfaceObj.vSwitchId);
		setParameter(networkInterfaceObjStr + ".SecurityGroupId", networkInterfaceObj.securityGroupId);
		setParameter(networkInterfaceObjStr + ".NetworkInterfaceName", networkInterfaceObj.networkInterfaceName);
		setParameter(networkInterfaceObjStr + ".Description", networkInterfaceObj.description);
	}
}

std::string CreateLaunchTemplateRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateLaunchTemplateRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateLaunchTemplateRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateLaunchTemplateRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string CreateLaunchTemplateRequest::getSystemDiskDiskName()const
{
	return systemDiskDiskName_;
}

void CreateLaunchTemplateRequest::setSystemDiskDiskName(const std::string& systemDiskDiskName)
{
	systemDiskDiskName_ = systemDiskDiskName;
	setParameter("SystemDiskDiskName", systemDiskDiskName);
}

std::string CreateLaunchTemplateRequest::getRamRoleName()const
{
	return ramRoleName_;
}

void CreateLaunchTemplateRequest::setRamRoleName(const std::string& ramRoleName)
{
	ramRoleName_ = ramRoleName;
	setParameter("RamRoleName", ramRoleName);
}

std::string CreateLaunchTemplateRequest::getAutoReleaseTime()const
{
	return autoReleaseTime_;
}

void CreateLaunchTemplateRequest::setAutoReleaseTime(const std::string& autoReleaseTime)
{
	autoReleaseTime_ = autoReleaseTime;
	setParameter("AutoReleaseTime", autoReleaseTime);
}

int CreateLaunchTemplateRequest::getSpotDuration()const
{
	return spotDuration_;
}

void CreateLaunchTemplateRequest::setSpotDuration(int spotDuration)
{
	spotDuration_ = spotDuration;
	setParameter("SpotDuration", std::to_string(spotDuration));
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
		std::string dataDiskObjStr = "DataDisk." + std::to_string(dep1 + 1);
		setParameter(dataDiskObjStr + ".Size", std::to_string(dataDiskObj.size));
		setParameter(dataDiskObjStr + ".SnapshotId", dataDiskObj.snapshotId);
		setParameter(dataDiskObjStr + ".Category", dataDiskObj.category);
		setParameter(dataDiskObjStr + ".Encrypted", dataDiskObj.encrypted);
		setParameter(dataDiskObjStr + ".DiskName", dataDiskObj.diskName);
		setParameter(dataDiskObjStr + ".Description", dataDiskObj.description);
		setParameter(dataDiskObjStr + ".DeleteWithInstance", dataDiskObj.deleteWithInstance ? "true" : "false");
		setParameter(dataDiskObjStr + ".Device", dataDiskObj.device);
	}
}

int CreateLaunchTemplateRequest::getSystemDiskSize()const
{
	return systemDiskSize_;
}

void CreateLaunchTemplateRequest::setSystemDiskSize(int systemDiskSize)
{
	systemDiskSize_ = systemDiskSize;
	setParameter("SystemDiskSize", std::to_string(systemDiskSize));
}

std::string CreateLaunchTemplateRequest::getVpcId()const
{
	return vpcId_;
}

void CreateLaunchTemplateRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

std::string CreateLaunchTemplateRequest::getSystemDiskDescription()const
{
	return systemDiskDescription_;
}

void CreateLaunchTemplateRequest::setSystemDiskDescription(const std::string& systemDiskDescription)
{
	systemDiskDescription_ = systemDiskDescription;
	setParameter("SystemDiskDescription", systemDiskDescription);
}

