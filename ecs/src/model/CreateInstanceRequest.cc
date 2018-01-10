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

#include <alibabacloud/ecs/model/CreateInstanceRequest.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

CreateInstanceRequest::CreateInstanceRequest() :
	EcsRequest("CreateInstance")
{}

CreateInstanceRequest::~CreateInstanceRequest()
{}

std::string CreateInstanceRequest::getTag4Value()const
{
	return tag4Value_;
}

void CreateInstanceRequest::setTag4Value(const std::string& tag4Value)
{
	tag4Value_ = tag4Value;
	setParameter("Tag4Value", tag4Value);
}

long CreateInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateInstanceRequest::getTag2Key()const
{
	return tag2Key_;
}

void CreateInstanceRequest::setTag2Key(const std::string& tag2Key)
{
	tag2Key_ = tag2Key;
	setParameter("Tag2Key", tag2Key);
}

std::string CreateInstanceRequest::getHpcClusterId()const
{
	return hpcClusterId_;
}

void CreateInstanceRequest::setHpcClusterId(const std::string& hpcClusterId)
{
	hpcClusterId_ = hpcClusterId;
	setParameter("HpcClusterId", hpcClusterId);
}

std::string CreateInstanceRequest::getTag3Key()const
{
	return tag3Key_;
}

void CreateInstanceRequest::setTag3Key(const std::string& tag3Key)
{
	tag3Key_ = tag3Key;
	setParameter("Tag3Key", tag3Key);
}

std::string CreateInstanceRequest::getSecurityEnhancementStrategy()const
{
	return securityEnhancementStrategy_;
}

void CreateInstanceRequest::setSecurityEnhancementStrategy(const std::string& securityEnhancementStrategy)
{
	securityEnhancementStrategy_ = securityEnhancementStrategy;
	setParameter("SecurityEnhancementStrategy", securityEnhancementStrategy);
}

std::string CreateInstanceRequest::getKeyPairName()const
{
	return keyPairName_;
}

void CreateInstanceRequest::setKeyPairName(const std::string& keyPairName)
{
	keyPairName_ = keyPairName;
	setParameter("KeyPairName", keyPairName);
}

float CreateInstanceRequest::getSpotPriceLimit()const
{
	return spotPriceLimit_;
}

void CreateInstanceRequest::setSpotPriceLimit(float spotPriceLimit)
{
	spotPriceLimit_ = spotPriceLimit;
	setParameter("SpotPriceLimit", std::to_string(spotPriceLimit));
}

std::string CreateInstanceRequest::getTag1Value()const
{
	return tag1Value_;
}

void CreateInstanceRequest::setTag1Value(const std::string& tag1Value)
{
	tag1Value_ = tag1Value;
	setParameter("Tag1Value", tag1Value);
}

std::string CreateInstanceRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateInstanceRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateInstanceRequest::getHostName()const
{
	return hostName_;
}

void CreateInstanceRequest::setHostName(const std::string& hostName)
{
	hostName_ = hostName;
	setParameter("HostName", hostName);
}

std::string CreateInstanceRequest::getPassword()const
{
	return password_;
}

void CreateInstanceRequest::setPassword(const std::string& password)
{
	password_ = password;
	setParameter("Password", password);
}

int CreateInstanceRequest::getAutoRenewPeriod()const
{
	return autoRenewPeriod_;
}

void CreateInstanceRequest::setAutoRenewPeriod(int autoRenewPeriod)
{
	autoRenewPeriod_ = autoRenewPeriod;
	setParameter("AutoRenewPeriod", std::to_string(autoRenewPeriod));
}

std::string CreateInstanceRequest::getNodeControllerId()const
{
	return nodeControllerId_;
}

void CreateInstanceRequest::setNodeControllerId(const std::string& nodeControllerId)
{
	nodeControllerId_ = nodeControllerId;
	setParameter("NodeControllerId", nodeControllerId);
}

int CreateInstanceRequest::getPeriod()const
{
	return period_;
}

void CreateInstanceRequest::setPeriod(int period)
{
	period_ = period;
	setParameter("Period", std::to_string(period));
}

std::string CreateInstanceRequest::getTag5Key()const
{
	return tag5Key_;
}

void CreateInstanceRequest::setTag5Key(const std::string& tag5Key)
{
	tag5Key_ = tag5Key;
	setParameter("Tag5Key", tag5Key);
}

long CreateInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateInstanceRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateInstanceRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setParameter("VSwitchId", vSwitchId);
}

std::string CreateInstanceRequest::getPrivateIpAddress()const
{
	return privateIpAddress_;
}

void CreateInstanceRequest::setPrivateIpAddress(const std::string& privateIpAddress)
{
	privateIpAddress_ = privateIpAddress;
	setParameter("PrivateIpAddress", privateIpAddress);
}

std::string CreateInstanceRequest::getSpotStrategy()const
{
	return spotStrategy_;
}

void CreateInstanceRequest::setSpotStrategy(const std::string& spotStrategy)
{
	spotStrategy_ = spotStrategy;
	setParameter("SpotStrategy", spotStrategy);
}

std::string CreateInstanceRequest::getPeriodUnit()const
{
	return periodUnit_;
}

void CreateInstanceRequest::setPeriodUnit(const std::string& periodUnit)
{
	periodUnit_ = periodUnit;
	setParameter("PeriodUnit", periodUnit);
}

std::string CreateInstanceRequest::getInstanceName()const
{
	return instanceName_;
}

void CreateInstanceRequest::setInstanceName(const std::string& instanceName)
{
	instanceName_ = instanceName;
	setParameter("InstanceName", instanceName);
}

bool CreateInstanceRequest::getAutoRenew()const
{
	return autoRenew_;
}

void CreateInstanceRequest::setAutoRenew(bool autoRenew)
{
	autoRenew_ = autoRenew;
	setParameter("AutoRenew", std::to_string(autoRenew));
}

std::string CreateInstanceRequest::getInternetChargeType()const
{
	return internetChargeType_;
}

void CreateInstanceRequest::setInternetChargeType(const std::string& internetChargeType)
{
	internetChargeType_ = internetChargeType;
	setParameter("InternetChargeType", internetChargeType);
}

std::string CreateInstanceRequest::getZoneId()const
{
	return zoneId_;
}

void CreateInstanceRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

std::string CreateInstanceRequest::getTag4Key()const
{
	return tag4Key_;
}

void CreateInstanceRequest::setTag4Key(const std::string& tag4Key)
{
	tag4Key_ = tag4Key;
	setParameter("Tag4Key", tag4Key);
}

int CreateInstanceRequest::getInternetMaxBandwidthIn()const
{
	return internetMaxBandwidthIn_;
}

void CreateInstanceRequest::setInternetMaxBandwidthIn(int internetMaxBandwidthIn)
{
	internetMaxBandwidthIn_ = internetMaxBandwidthIn;
	setParameter("InternetMaxBandwidthIn", std::to_string(internetMaxBandwidthIn));
}

bool CreateInstanceRequest::getUseAdditionalService()const
{
	return useAdditionalService_;
}

void CreateInstanceRequest::setUseAdditionalService(bool useAdditionalService)
{
	useAdditionalService_ = useAdditionalService;
	setParameter("UseAdditionalService", std::to_string(useAdditionalService));
}

std::string CreateInstanceRequest::getImageId()const
{
	return imageId_;
}

void CreateInstanceRequest::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
	setParameter("ImageId", imageId);
}

std::string CreateInstanceRequest::getClientToken()const
{
	return clientToken_;
}

void CreateInstanceRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateInstanceRequest::getVlanId()const
{
	return vlanId_;
}

void CreateInstanceRequest::setVlanId(const std::string& vlanId)
{
	vlanId_ = vlanId;
	setParameter("VlanId", vlanId);
}

std::string CreateInstanceRequest::getIoOptimized()const
{
	return ioOptimized_;
}

void CreateInstanceRequest::setIoOptimized(const std::string& ioOptimized)
{
	ioOptimized_ = ioOptimized;
	setParameter("IoOptimized", ioOptimized);
}

std::string CreateInstanceRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void CreateInstanceRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setParameter("SecurityGroupId", securityGroupId);
}

int CreateInstanceRequest::getInternetMaxBandwidthOut()const
{
	return internetMaxBandwidthOut_;
}

void CreateInstanceRequest::setInternetMaxBandwidthOut(int internetMaxBandwidthOut)
{
	internetMaxBandwidthOut_ = internetMaxBandwidthOut;
	setParameter("InternetMaxBandwidthOut", std::to_string(internetMaxBandwidthOut));
}

std::string CreateInstanceRequest::getDescription()const
{
	return description_;
}

void CreateInstanceRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateInstanceRequest::getSystemDiskCategory()const
{
	return systemDiskCategory_;
}

void CreateInstanceRequest::setSystemDiskCategory(const std::string& systemDiskCategory)
{
	systemDiskCategory_ = systemDiskCategory;
	setParameter("SystemDiskCategory", systemDiskCategory);
}

std::string CreateInstanceRequest::getUserData()const
{
	return userData_;
}

void CreateInstanceRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setParameter("UserData", userData);
}

std::string CreateInstanceRequest::getRegionId()const
{
	return regionId_;
}

void CreateInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateInstanceRequest::getInstanceType()const
{
	return instanceType_;
}

void CreateInstanceRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setParameter("InstanceType", instanceType);
}

std::string CreateInstanceRequest::getInstanceChargeType()const
{
	return instanceChargeType_;
}

void CreateInstanceRequest::setInstanceChargeType(const std::string& instanceChargeType)
{
	instanceChargeType_ = instanceChargeType;
	setParameter("InstanceChargeType", instanceChargeType);
}

std::string CreateInstanceRequest::getTag3Value()const
{
	return tag3Value_;
}

void CreateInstanceRequest::setTag3Value(const std::string& tag3Value)
{
	tag3Value_ = tag3Value;
	setParameter("Tag3Value", tag3Value);
}

std::string CreateInstanceRequest::getDeploymentSetId()const
{
	return deploymentSetId_;
}

void CreateInstanceRequest::setDeploymentSetId(const std::string& deploymentSetId)
{
	deploymentSetId_ = deploymentSetId;
	setParameter("DeploymentSetId", deploymentSetId);
}

std::string CreateInstanceRequest::getInnerIpAddress()const
{
	return innerIpAddress_;
}

void CreateInstanceRequest::setInnerIpAddress(const std::string& innerIpAddress)
{
	innerIpAddress_ = innerIpAddress;
	setParameter("InnerIpAddress", innerIpAddress);
}

std::string CreateInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateInstanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateInstanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string CreateInstanceRequest::getSystemDiskDiskName()const
{
	return systemDiskDiskName_;
}

void CreateInstanceRequest::setSystemDiskDiskName(const std::string& systemDiskDiskName)
{
	systemDiskDiskName_ = systemDiskDiskName;
	setParameter("SystemDiskDiskName", systemDiskDiskName);
}

std::string CreateInstanceRequest::getRamRoleName()const
{
	return ramRoleName_;
}

void CreateInstanceRequest::setRamRoleName(const std::string& ramRoleName)
{
	ramRoleName_ = ramRoleName;
	setParameter("RamRoleName", ramRoleName);
}

std::string CreateInstanceRequest::getClusterId()const
{
	return clusterId_;
}

void CreateInstanceRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::vector<CreateInstanceRequest::DataDisk> CreateInstanceRequest::getDataDisk()const
{
	return dataDisk_;
}

void CreateInstanceRequest::setDataDisk(const std::vector<DataDisk>& dataDisk)
{
	dataDisk_ = dataDisk;
	int i = 0;
	for(int i = 0; i!= dataDisk.size(); i++)	{
		auto obj = dataDisk.at(i);
		std::string str ="DataDisk."+ std::to_string(i);
		setParameter(str + ".Size", std::to_string(obj.size));
		setParameter(str + ".SnapshotId", obj.snapshotId);
		setParameter(str + ".Category", obj.category);
		setParameter(str + ".DiskName", obj.diskName);
		setParameter(str + ".Description", obj.description);
		setParameter(str + ".Device", obj.device);
		setParameter(str + ".DeleteWithInstance", std::to_string(obj.deleteWithInstance));
		setParameter(str + ".Encrypted", std::to_string(obj.encrypted));
	}
}

std::string CreateInstanceRequest::getTag5Value()const
{
	return tag5Value_;
}

void CreateInstanceRequest::setTag5Value(const std::string& tag5Value)
{
	tag5Value_ = tag5Value;
	setParameter("Tag5Value", tag5Value);
}

std::string CreateInstanceRequest::getTag1Key()const
{
	return tag1Key_;
}

void CreateInstanceRequest::setTag1Key(const std::string& tag1Key)
{
	tag1Key_ = tag1Key;
	setParameter("Tag1Key", tag1Key);
}

int CreateInstanceRequest::getSystemDiskSize()const
{
	return systemDiskSize_;
}

void CreateInstanceRequest::setSystemDiskSize(int systemDiskSize)
{
	systemDiskSize_ = systemDiskSize;
	setParameter("SystemDiskSize", std::to_string(systemDiskSize));
}

std::string CreateInstanceRequest::getTag2Value()const
{
	return tag2Value_;
}

void CreateInstanceRequest::setTag2Value(const std::string& tag2Value)
{
	tag2Value_ = tag2Value;
	setParameter("Tag2Value", tag2Value);
}

std::string CreateInstanceRequest::getSystemDiskDescription()const
{
	return systemDiskDescription_;
}

void CreateInstanceRequest::setSystemDiskDescription(const std::string& systemDiskDescription)
{
	systemDiskDescription_ = systemDiskDescription;
	setParameter("SystemDiskDescription", systemDiskDescription);
}

