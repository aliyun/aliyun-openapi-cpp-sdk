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

using AlibabaCloud::Ecs::Model::CreateInstanceRequest;

CreateInstanceRequest::CreateInstanceRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "CreateInstance")
{}

CreateInstanceRequest::~CreateInstanceRequest()
{}

long CreateInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateInstanceRequest::getHpcClusterId()const
{
	return hpcClusterId_;
}

void CreateInstanceRequest::setHpcClusterId(const std::string& hpcClusterId)
{
	hpcClusterId_ = hpcClusterId;
	setCoreParameter("HpcClusterId", hpcClusterId);
}

std::string CreateInstanceRequest::getSecurityEnhancementStrategy()const
{
	return securityEnhancementStrategy_;
}

void CreateInstanceRequest::setSecurityEnhancementStrategy(const std::string& securityEnhancementStrategy)
{
	securityEnhancementStrategy_ = securityEnhancementStrategy;
	setCoreParameter("SecurityEnhancementStrategy", securityEnhancementStrategy);
}

std::string CreateInstanceRequest::getKeyPairName()const
{
	return keyPairName_;
}

void CreateInstanceRequest::setKeyPairName(const std::string& keyPairName)
{
	keyPairName_ = keyPairName;
	setCoreParameter("KeyPairName", keyPairName);
}

float CreateInstanceRequest::getSpotPriceLimit()const
{
	return spotPriceLimit_;
}

void CreateInstanceRequest::setSpotPriceLimit(float spotPriceLimit)
{
	spotPriceLimit_ = spotPriceLimit;
	setCoreParameter("SpotPriceLimit", std::to_string(spotPriceLimit));
}

bool CreateInstanceRequest::getDeletionProtection()const
{
	return deletionProtection_;
}

void CreateInstanceRequest::setDeletionProtection(bool deletionProtection)
{
	deletionProtection_ = deletionProtection;
	setCoreParameter("DeletionProtection", deletionProtection ? "true" : "false");
}

std::string CreateInstanceRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateInstanceRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateInstanceRequest::getHostName()const
{
	return hostName_;
}

void CreateInstanceRequest::setHostName(const std::string& hostName)
{
	hostName_ = hostName;
	setCoreParameter("HostName", hostName);
}

std::string CreateInstanceRequest::getPassword()const
{
	return password_;
}

void CreateInstanceRequest::setPassword(const std::string& password)
{
	password_ = password;
	setCoreParameter("Password", password);
}

int CreateInstanceRequest::getStorageSetPartitionNumber()const
{
	return storageSetPartitionNumber_;
}

void CreateInstanceRequest::setStorageSetPartitionNumber(int storageSetPartitionNumber)
{
	storageSetPartitionNumber_ = storageSetPartitionNumber;
	setCoreParameter("StorageSetPartitionNumber", std::to_string(storageSetPartitionNumber));
}

std::vector<CreateInstanceRequest::Tag> CreateInstanceRequest::getTag()const
{
	return tag_;
}

void CreateInstanceRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	int i = 0;
	for(int i = 0; i!= tag.size(); i++)	{
		auto obj = tag.at(i);
		std::string str ="Tag."+ std::to_string(i);
		setCoreParameter(str + ".Value", obj.value);
		setCoreParameter(str + ".Key", obj.key);
	}
}

int CreateInstanceRequest::getAutoRenewPeriod()const
{
	return autoRenewPeriod_;
}

void CreateInstanceRequest::setAutoRenewPeriod(int autoRenewPeriod)
{
	autoRenewPeriod_ = autoRenewPeriod;
	setCoreParameter("AutoRenewPeriod", std::to_string(autoRenewPeriod));
}

std::string CreateInstanceRequest::getNodeControllerId()const
{
	return nodeControllerId_;
}

void CreateInstanceRequest::setNodeControllerId(const std::string& nodeControllerId)
{
	nodeControllerId_ = nodeControllerId;
	setCoreParameter("NodeControllerId", nodeControllerId);
}

int CreateInstanceRequest::getPeriod()const
{
	return period_;
}

void CreateInstanceRequest::setPeriod(int period)
{
	period_ = period;
	setCoreParameter("Period", std::to_string(period));
}

bool CreateInstanceRequest::getDryRun()const
{
	return dryRun_;
}

void CreateInstanceRequest::setDryRun(bool dryRun)
{
	dryRun_ = dryRun;
	setCoreParameter("DryRun", dryRun ? "true" : "false");
}

long CreateInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateInstanceRequest::getCapacityReservationPreference()const
{
	return capacityReservationPreference_;
}

void CreateInstanceRequest::setCapacityReservationPreference(const std::string& capacityReservationPreference)
{
	capacityReservationPreference_ = capacityReservationPreference;
	setCoreParameter("CapacityReservationPreference", capacityReservationPreference);
}

std::string CreateInstanceRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateInstanceRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setCoreParameter("VSwitchId", vSwitchId);
}

std::string CreateInstanceRequest::getPrivateIpAddress()const
{
	return privateIpAddress_;
}

void CreateInstanceRequest::setPrivateIpAddress(const std::string& privateIpAddress)
{
	privateIpAddress_ = privateIpAddress;
	setCoreParameter("PrivateIpAddress", privateIpAddress);
}

std::string CreateInstanceRequest::getSpotStrategy()const
{
	return spotStrategy_;
}

void CreateInstanceRequest::setSpotStrategy(const std::string& spotStrategy)
{
	spotStrategy_ = spotStrategy;
	setCoreParameter("SpotStrategy", spotStrategy);
}

std::string CreateInstanceRequest::getPeriodUnit()const
{
	return periodUnit_;
}

void CreateInstanceRequest::setPeriodUnit(const std::string& periodUnit)
{
	periodUnit_ = periodUnit;
	setCoreParameter("PeriodUnit", periodUnit);
}

std::string CreateInstanceRequest::getInstanceName()const
{
	return instanceName_;
}

void CreateInstanceRequest::setInstanceName(const std::string& instanceName)
{
	instanceName_ = instanceName;
	setCoreParameter("InstanceName", instanceName);
}

bool CreateInstanceRequest::getAutoRenew()const
{
	return autoRenew_;
}

void CreateInstanceRequest::setAutoRenew(bool autoRenew)
{
	autoRenew_ = autoRenew;
	setCoreParameter("AutoRenew", autoRenew ? "true" : "false");
}

std::string CreateInstanceRequest::getInternetChargeType()const
{
	return internetChargeType_;
}

void CreateInstanceRequest::setInternetChargeType(const std::string& internetChargeType)
{
	internetChargeType_ = internetChargeType;
	setCoreParameter("InternetChargeType", internetChargeType);
}

std::string CreateInstanceRequest::getZoneId()const
{
	return zoneId_;
}

void CreateInstanceRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
}

int CreateInstanceRequest::getInternetMaxBandwidthIn()const
{
	return internetMaxBandwidthIn_;
}

void CreateInstanceRequest::setInternetMaxBandwidthIn(int internetMaxBandwidthIn)
{
	internetMaxBandwidthIn_ = internetMaxBandwidthIn;
	setCoreParameter("InternetMaxBandwidthIn", std::to_string(internetMaxBandwidthIn));
}

bool CreateInstanceRequest::getUseAdditionalService()const
{
	return useAdditionalService_;
}

void CreateInstanceRequest::setUseAdditionalService(bool useAdditionalService)
{
	useAdditionalService_ = useAdditionalService;
	setCoreParameter("UseAdditionalService", useAdditionalService ? "true" : "false");
}

std::string CreateInstanceRequest::getAffinity()const
{
	return affinity_;
}

void CreateInstanceRequest::setAffinity(const std::string& affinity)
{
	affinity_ = affinity;
	setCoreParameter("Affinity", affinity);
}

std::string CreateInstanceRequest::getImageId()const
{
	return imageId_;
}

void CreateInstanceRequest::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
	setCoreParameter("ImageId", imageId);
}

std::string CreateInstanceRequest::getClientToken()const
{
	return clientToken_;
}

void CreateInstanceRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string CreateInstanceRequest::getVlanId()const
{
	return vlanId_;
}

void CreateInstanceRequest::setVlanId(const std::string& vlanId)
{
	vlanId_ = vlanId;
	setCoreParameter("VlanId", vlanId);
}

std::string CreateInstanceRequest::getSpotInterruptionBehavior()const
{
	return spotInterruptionBehavior_;
}

void CreateInstanceRequest::setSpotInterruptionBehavior(const std::string& spotInterruptionBehavior)
{
	spotInterruptionBehavior_ = spotInterruptionBehavior;
	setCoreParameter("SpotInterruptionBehavior", spotInterruptionBehavior);
}

std::string CreateInstanceRequest::getIoOptimized()const
{
	return ioOptimized_;
}

void CreateInstanceRequest::setIoOptimized(const std::string& ioOptimized)
{
	ioOptimized_ = ioOptimized;
	setCoreParameter("IoOptimized", ioOptimized);
}

std::string CreateInstanceRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void CreateInstanceRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setCoreParameter("SecurityGroupId", securityGroupId);
}

int CreateInstanceRequest::getInternetMaxBandwidthOut()const
{
	return internetMaxBandwidthOut_;
}

void CreateInstanceRequest::setInternetMaxBandwidthOut(int internetMaxBandwidthOut)
{
	internetMaxBandwidthOut_ = internetMaxBandwidthOut;
	setCoreParameter("InternetMaxBandwidthOut", std::to_string(internetMaxBandwidthOut));
}

std::string CreateInstanceRequest::getDescription()const
{
	return description_;
}

void CreateInstanceRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreateInstanceRequest::getSystemDiskCategory()const
{
	return systemDiskCategory_;
}

void CreateInstanceRequest::setSystemDiskCategory(const std::string& systemDiskCategory)
{
	systemDiskCategory_ = systemDiskCategory;
	setCoreParameter("SystemDiskCategory", systemDiskCategory);
}

std::string CreateInstanceRequest::getCapacityReservationId()const
{
	return capacityReservationId_;
}

void CreateInstanceRequest::setCapacityReservationId(const std::string& capacityReservationId)
{
	capacityReservationId_ = capacityReservationId;
	setCoreParameter("CapacityReservationId", capacityReservationId);
}

std::string CreateInstanceRequest::getSystemDiskPerformanceLevel()const
{
	return systemDiskPerformanceLevel_;
}

void CreateInstanceRequest::setSystemDiskPerformanceLevel(const std::string& systemDiskPerformanceLevel)
{
	systemDiskPerformanceLevel_ = systemDiskPerformanceLevel;
	setCoreParameter("SystemDiskPerformanceLevel", systemDiskPerformanceLevel);
}

std::string CreateInstanceRequest::getUserData()const
{
	return userData_;
}

void CreateInstanceRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setCoreParameter("UserData", userData);
}

bool CreateInstanceRequest::getPasswordInherit()const
{
	return passwordInherit_;
}

void CreateInstanceRequest::setPasswordInherit(bool passwordInherit)
{
	passwordInherit_ = passwordInherit;
	setCoreParameter("PasswordInherit", passwordInherit ? "true" : "false");
}

std::string CreateInstanceRequest::getRegionId()const
{
	return regionId_;
}

void CreateInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateInstanceRequest::getInstanceType()const
{
	return instanceType_;
}

void CreateInstanceRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setCoreParameter("InstanceType", instanceType);
}

std::vector<CreateInstanceRequest::Arn> CreateInstanceRequest::getArn()const
{
	return arn_;
}

void CreateInstanceRequest::setArn(const std::vector<Arn>& arn)
{
	arn_ = arn;
	int i = 0;
	for(int i = 0; i!= arn.size(); i++)	{
		auto obj = arn.at(i);
		std::string str ="Arn."+ std::to_string(i);
		setCoreParameter(str + ".Rolearn", obj.rolearn);
		setCoreParameter(str + ".RoleType", obj.roleType);
		setCoreParameter(str + ".AssumeRoleFor", std::to_string(obj.assumeRoleFor));
	}
}

std::string CreateInstanceRequest::getInstanceChargeType()const
{
	return instanceChargeType_;
}

void CreateInstanceRequest::setInstanceChargeType(const std::string& instanceChargeType)
{
	instanceChargeType_ = instanceChargeType;
	setCoreParameter("InstanceChargeType", instanceChargeType);
}

std::string CreateInstanceRequest::getDeploymentSetId()const
{
	return deploymentSetId_;
}

void CreateInstanceRequest::setDeploymentSetId(const std::string& deploymentSetId)
{
	deploymentSetId_ = deploymentSetId;
	setCoreParameter("DeploymentSetId", deploymentSetId);
}

std::string CreateInstanceRequest::getInnerIpAddress()const
{
	return innerIpAddress_;
}

void CreateInstanceRequest::setInnerIpAddress(const std::string& innerIpAddress)
{
	innerIpAddress_ = innerIpAddress;
	setCoreParameter("InnerIpAddress", innerIpAddress);
}

std::string CreateInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateInstanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateInstanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string CreateInstanceRequest::getTenancy()const
{
	return tenancy_;
}

void CreateInstanceRequest::setTenancy(const std::string& tenancy)
{
	tenancy_ = tenancy;
	setCoreParameter("Tenancy", tenancy);
}

std::string CreateInstanceRequest::getSystemDiskDiskName()const
{
	return systemDiskDiskName_;
}

void CreateInstanceRequest::setSystemDiskDiskName(const std::string& systemDiskDiskName)
{
	systemDiskDiskName_ = systemDiskDiskName;
	setCoreParameter("SystemDiskDiskName", systemDiskDiskName);
}

std::string CreateInstanceRequest::getRamRoleName()const
{
	return ramRoleName_;
}

void CreateInstanceRequest::setRamRoleName(const std::string& ramRoleName)
{
	ramRoleName_ = ramRoleName;
	setCoreParameter("RamRoleName", ramRoleName);
}

std::string CreateInstanceRequest::getDedicatedHostId()const
{
	return dedicatedHostId_;
}

void CreateInstanceRequest::setDedicatedHostId(const std::string& dedicatedHostId)
{
	dedicatedHostId_ = dedicatedHostId;
	setCoreParameter("DedicatedHostId", dedicatedHostId);
}

std::string CreateInstanceRequest::getClusterId()const
{
	return clusterId_;
}

void CreateInstanceRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string CreateInstanceRequest::getCreditSpecification()const
{
	return creditSpecification_;
}

void CreateInstanceRequest::setCreditSpecification(const std::string& creditSpecification)
{
	creditSpecification_ = creditSpecification;
	setCoreParameter("CreditSpecification", creditSpecification);
}

int CreateInstanceRequest::getSpotDuration()const
{
	return spotDuration_;
}

void CreateInstanceRequest::setSpotDuration(int spotDuration)
{
	spotDuration_ = spotDuration;
	setCoreParameter("SpotDuration", std::to_string(spotDuration));
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
		setCoreParameter(str + ".DiskName", obj.diskName);
		setCoreParameter(str + ".SnapshotId", obj.snapshotId);
		setCoreParameter(str + ".Size", std::to_string(obj.size));
		setCoreParameter(str + ".Encrypted", obj.encrypted ? "true" : "false");
		setCoreParameter(str + ".PerformanceLevel", obj.performanceLevel);
		setCoreParameter(str + ".Description", obj.description);
		setCoreParameter(str + ".Category", obj.category);
		setCoreParameter(str + ".KMSKeyId", obj.kMSKeyId);
		setCoreParameter(str + ".Device", obj.device);
		setCoreParameter(str + ".DeleteWithInstance", obj.deleteWithInstance ? "true" : "false");
	}
}

std::string CreateInstanceRequest::getStorageSetId()const
{
	return storageSetId_;
}

void CreateInstanceRequest::setStorageSetId(const std::string& storageSetId)
{
	storageSetId_ = storageSetId;
	setCoreParameter("StorageSetId", storageSetId);
}

int CreateInstanceRequest::getSystemDiskSize()const
{
	return systemDiskSize_;
}

void CreateInstanceRequest::setSystemDiskSize(int systemDiskSize)
{
	systemDiskSize_ = systemDiskSize;
	setCoreParameter("SystemDiskSize", std::to_string(systemDiskSize));
}

std::string CreateInstanceRequest::getSystemDiskDescription()const
{
	return systemDiskDescription_;
}

void CreateInstanceRequest::setSystemDiskDescription(const std::string& systemDiskDescription)
{
	systemDiskDescription_ = systemDiskDescription;
	setCoreParameter("SystemDiskDescription", systemDiskDescription);
}

