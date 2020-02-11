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

CreateLaunchTemplateVersionRequest::CreateLaunchTemplateVersionRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "CreateLaunchTemplateVersion")
{
	setMethod(HttpRequest::Method::Post);
}

CreateLaunchTemplateVersionRequest::~CreateLaunchTemplateVersionRequest()
{}

std::string CreateLaunchTemplateVersionRequest::getLaunchTemplateName()const
{
	return launchTemplateName_;
}

void CreateLaunchTemplateVersionRequest::setLaunchTemplateName(const std::string& launchTemplateName)
{
	launchTemplateName_ = launchTemplateName;
	setParameter("LaunchTemplateName", launchTemplateName);
}

long CreateLaunchTemplateVersionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateLaunchTemplateVersionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateLaunchTemplateVersionRequest::getSecurityEnhancementStrategy()const
{
	return securityEnhancementStrategy_;
}

void CreateLaunchTemplateVersionRequest::setSecurityEnhancementStrategy(const std::string& securityEnhancementStrategy)
{
	securityEnhancementStrategy_ = securityEnhancementStrategy;
	setParameter("SecurityEnhancementStrategy", securityEnhancementStrategy);
}

std::string CreateLaunchTemplateVersionRequest::getNetworkType()const
{
	return networkType_;
}

void CreateLaunchTemplateVersionRequest::setNetworkType(const std::string& networkType)
{
	networkType_ = networkType;
	setParameter("NetworkType", networkType);
}

std::string CreateLaunchTemplateVersionRequest::getKeyPairName()const
{
	return keyPairName_;
}

void CreateLaunchTemplateVersionRequest::setKeyPairName(const std::string& keyPairName)
{
	keyPairName_ = keyPairName;
	setParameter("KeyPairName", keyPairName);
}

float CreateLaunchTemplateVersionRequest::getSpotPriceLimit()const
{
	return spotPriceLimit_;
}

void CreateLaunchTemplateVersionRequest::setSpotPriceLimit(float spotPriceLimit)
{
	spotPriceLimit_ = spotPriceLimit;
	setParameter("SpotPriceLimit", std::to_string(spotPriceLimit));
}

std::string CreateLaunchTemplateVersionRequest::getImageOwnerAlias()const
{
	return imageOwnerAlias_;
}

void CreateLaunchTemplateVersionRequest::setImageOwnerAlias(const std::string& imageOwnerAlias)
{
	imageOwnerAlias_ = imageOwnerAlias;
	setParameter("ImageOwnerAlias", imageOwnerAlias);
}

std::string CreateLaunchTemplateVersionRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateLaunchTemplateVersionRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateLaunchTemplateVersionRequest::getHostName()const
{
	return hostName_;
}

void CreateLaunchTemplateVersionRequest::setHostName(const std::string& hostName)
{
	hostName_ = hostName;
	setParameter("HostName", hostName);
}

int CreateLaunchTemplateVersionRequest::getSystemDiskIops()const
{
	return systemDiskIops_;
}

void CreateLaunchTemplateVersionRequest::setSystemDiskIops(int systemDiskIops)
{
	systemDiskIops_ = systemDiskIops;
	setParameter("SystemDiskIops", std::to_string(systemDiskIops));
}

std::vector<CreateLaunchTemplateVersionRequest::Tag> CreateLaunchTemplateVersionRequest::getTag()const
{
	return tag_;
}

void CreateLaunchTemplateVersionRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1 + 1);
		setParameter(tagObjStr + ".Key", tagObj.key);
		setParameter(tagObjStr + ".Value", tagObj.value);
	}
}

int CreateLaunchTemplateVersionRequest::getPeriod()const
{
	return period_;
}

void CreateLaunchTemplateVersionRequest::setPeriod(int period)
{
	period_ = period;
	setParameter("Period", std::to_string(period));
}

std::string CreateLaunchTemplateVersionRequest::getLaunchTemplateId()const
{
	return launchTemplateId_;
}

void CreateLaunchTemplateVersionRequest::setLaunchTemplateId(const std::string& launchTemplateId)
{
	launchTemplateId_ = launchTemplateId;
	setParameter("LaunchTemplateId", launchTemplateId);
}

long CreateLaunchTemplateVersionRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateLaunchTemplateVersionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateLaunchTemplateVersionRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateLaunchTemplateVersionRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setParameter("VSwitchId", vSwitchId);
}

std::string CreateLaunchTemplateVersionRequest::getSpotStrategy()const
{
	return spotStrategy_;
}

void CreateLaunchTemplateVersionRequest::setSpotStrategy(const std::string& spotStrategy)
{
	spotStrategy_ = spotStrategy;
	setParameter("SpotStrategy", spotStrategy);
}

std::string CreateLaunchTemplateVersionRequest::getInstanceName()const
{
	return instanceName_;
}

void CreateLaunchTemplateVersionRequest::setInstanceName(const std::string& instanceName)
{
	instanceName_ = instanceName;
	setParameter("InstanceName", instanceName);
}

std::string CreateLaunchTemplateVersionRequest::getInternetChargeType()const
{
	return internetChargeType_;
}

void CreateLaunchTemplateVersionRequest::setInternetChargeType(const std::string& internetChargeType)
{
	internetChargeType_ = internetChargeType;
	setParameter("InternetChargeType", internetChargeType);
}

std::string CreateLaunchTemplateVersionRequest::getZoneId()const
{
	return zoneId_;
}

void CreateLaunchTemplateVersionRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

int CreateLaunchTemplateVersionRequest::getInternetMaxBandwidthIn()const
{
	return internetMaxBandwidthIn_;
}

void CreateLaunchTemplateVersionRequest::setInternetMaxBandwidthIn(int internetMaxBandwidthIn)
{
	internetMaxBandwidthIn_ = internetMaxBandwidthIn;
	setParameter("InternetMaxBandwidthIn", std::to_string(internetMaxBandwidthIn));
}

std::string CreateLaunchTemplateVersionRequest::getVersionDescription()const
{
	return versionDescription_;
}

void CreateLaunchTemplateVersionRequest::setVersionDescription(const std::string& versionDescription)
{
	versionDescription_ = versionDescription;
	setParameter("VersionDescription", versionDescription);
}

std::string CreateLaunchTemplateVersionRequest::getImageId()const
{
	return imageId_;
}

void CreateLaunchTemplateVersionRequest::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
	setParameter("ImageId", imageId);
}

std::string CreateLaunchTemplateVersionRequest::getIoOptimized()const
{
	return ioOptimized_;
}

void CreateLaunchTemplateVersionRequest::setIoOptimized(const std::string& ioOptimized)
{
	ioOptimized_ = ioOptimized;
	setParameter("IoOptimized", ioOptimized);
}

std::string CreateLaunchTemplateVersionRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void CreateLaunchTemplateVersionRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setParameter("SecurityGroupId", securityGroupId);
}

int CreateLaunchTemplateVersionRequest::getInternetMaxBandwidthOut()const
{
	return internetMaxBandwidthOut_;
}

void CreateLaunchTemplateVersionRequest::setInternetMaxBandwidthOut(int internetMaxBandwidthOut)
{
	internetMaxBandwidthOut_ = internetMaxBandwidthOut;
	setParameter("InternetMaxBandwidthOut", std::to_string(internetMaxBandwidthOut));
}

std::string CreateLaunchTemplateVersionRequest::getDescription()const
{
	return description_;
}

void CreateLaunchTemplateVersionRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateLaunchTemplateVersionRequest::getSystemDiskCategory()const
{
	return systemDiskCategory_;
}

void CreateLaunchTemplateVersionRequest::setSystemDiskCategory(const std::string& systemDiskCategory)
{
	systemDiskCategory_ = systemDiskCategory;
	setParameter("SystemDiskCategory", systemDiskCategory);
}

std::string CreateLaunchTemplateVersionRequest::getUserData()const
{
	return userData_;
}

void CreateLaunchTemplateVersionRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setParameter("UserData", userData);
}

bool CreateLaunchTemplateVersionRequest::getPasswordInherit()const
{
	return passwordInherit_;
}

void CreateLaunchTemplateVersionRequest::setPasswordInherit(bool passwordInherit)
{
	passwordInherit_ = passwordInherit;
	setParameter("PasswordInherit", passwordInherit ? "true" : "false");
}

std::string CreateLaunchTemplateVersionRequest::getRegionId()const
{
	return regionId_;
}

void CreateLaunchTemplateVersionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateLaunchTemplateVersionRequest::getInstanceType()const
{
	return instanceType_;
}

void CreateLaunchTemplateVersionRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setParameter("InstanceType", instanceType);
}

std::string CreateLaunchTemplateVersionRequest::getInstanceChargeType()const
{
	return instanceChargeType_;
}

void CreateLaunchTemplateVersionRequest::setInstanceChargeType(const std::string& instanceChargeType)
{
	instanceChargeType_ = instanceChargeType;
	setParameter("InstanceChargeType", instanceChargeType);
}

bool CreateLaunchTemplateVersionRequest::getEnableVmOsConfig()const
{
	return enableVmOsConfig_;
}

void CreateLaunchTemplateVersionRequest::setEnableVmOsConfig(bool enableVmOsConfig)
{
	enableVmOsConfig_ = enableVmOsConfig;
	setParameter("EnableVmOsConfig", enableVmOsConfig ? "true" : "false");
}

std::vector<CreateLaunchTemplateVersionRequest::NetworkInterface> CreateLaunchTemplateVersionRequest::getNetworkInterface()const
{
	return networkInterface_;
}

void CreateLaunchTemplateVersionRequest::setNetworkInterface(const std::vector<NetworkInterface>& networkInterface)
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

std::string CreateLaunchTemplateVersionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateLaunchTemplateVersionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateLaunchTemplateVersionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateLaunchTemplateVersionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string CreateLaunchTemplateVersionRequest::getSystemDiskDiskName()const
{
	return systemDiskDiskName_;
}

void CreateLaunchTemplateVersionRequest::setSystemDiskDiskName(const std::string& systemDiskDiskName)
{
	systemDiskDiskName_ = systemDiskDiskName;
	setParameter("SystemDiskDiskName", systemDiskDiskName);
}

std::string CreateLaunchTemplateVersionRequest::getRamRoleName()const
{
	return ramRoleName_;
}

void CreateLaunchTemplateVersionRequest::setRamRoleName(const std::string& ramRoleName)
{
	ramRoleName_ = ramRoleName;
	setParameter("RamRoleName", ramRoleName);
}

std::string CreateLaunchTemplateVersionRequest::getAutoReleaseTime()const
{
	return autoReleaseTime_;
}

void CreateLaunchTemplateVersionRequest::setAutoReleaseTime(const std::string& autoReleaseTime)
{
	autoReleaseTime_ = autoReleaseTime;
	setParameter("AutoReleaseTime", autoReleaseTime);
}

int CreateLaunchTemplateVersionRequest::getSpotDuration()const
{
	return spotDuration_;
}

void CreateLaunchTemplateVersionRequest::setSpotDuration(int spotDuration)
{
	spotDuration_ = spotDuration;
	setParameter("SpotDuration", std::to_string(spotDuration));
}

std::vector<CreateLaunchTemplateVersionRequest::DataDisk> CreateLaunchTemplateVersionRequest::getDataDisk()const
{
	return dataDisk_;
}

void CreateLaunchTemplateVersionRequest::setDataDisk(const std::vector<DataDisk>& dataDisk)
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

int CreateLaunchTemplateVersionRequest::getSystemDiskSize()const
{
	return systemDiskSize_;
}

void CreateLaunchTemplateVersionRequest::setSystemDiskSize(int systemDiskSize)
{
	systemDiskSize_ = systemDiskSize;
	setParameter("SystemDiskSize", std::to_string(systemDiskSize));
}

std::string CreateLaunchTemplateVersionRequest::getVpcId()const
{
	return vpcId_;
}

void CreateLaunchTemplateVersionRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

std::string CreateLaunchTemplateVersionRequest::getSystemDiskDescription()const
{
	return systemDiskDescription_;
}

void CreateLaunchTemplateVersionRequest::setSystemDiskDescription(const std::string& systemDiskDescription)
{
	systemDiskDescription_ = systemDiskDescription;
	setParameter("SystemDiskDescription", systemDiskDescription);
}

