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

#include <alibabacloud/ecs/model/RunInstancesRequest.h>

using AlibabaCloud::Ecs::Model::RunInstancesRequest;

RunInstancesRequest::RunInstancesRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "RunInstances")
{
	setMethod(HttpRequest::Method::Post);
}

RunInstancesRequest::~RunInstancesRequest()
{}

std::string RunInstancesRequest::getLaunchTemplateName()const
{
	return launchTemplateName_;
}

void RunInstancesRequest::setLaunchTemplateName(const std::string& launchTemplateName)
{
	launchTemplateName_ = launchTemplateName;
	setParameter("LaunchTemplateName", launchTemplateName);
}

long RunInstancesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RunInstancesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

bool RunInstancesRequest::getUniqueSuffix()const
{
	return uniqueSuffix_;
}

void RunInstancesRequest::setUniqueSuffix(bool uniqueSuffix)
{
	uniqueSuffix_ = uniqueSuffix;
	setParameter("UniqueSuffix", uniqueSuffix ? "true" : "false");
}

std::string RunInstancesRequest::getHpcClusterId()const
{
	return hpcClusterId_;
}

void RunInstancesRequest::setHpcClusterId(const std::string& hpcClusterId)
{
	hpcClusterId_ = hpcClusterId;
	setParameter("HpcClusterId", hpcClusterId);
}

std::string RunInstancesRequest::getSecurityEnhancementStrategy()const
{
	return securityEnhancementStrategy_;
}

void RunInstancesRequest::setSecurityEnhancementStrategy(const std::string& securityEnhancementStrategy)
{
	securityEnhancementStrategy_ = securityEnhancementStrategy;
	setParameter("SecurityEnhancementStrategy", securityEnhancementStrategy);
}

std::string RunInstancesRequest::getKeyPairName()const
{
	return keyPairName_;
}

void RunInstancesRequest::setKeyPairName(const std::string& keyPairName)
{
	keyPairName_ = keyPairName;
	setParameter("KeyPairName", keyPairName);
}

int RunInstancesRequest::getMinAmount()const
{
	return minAmount_;
}

void RunInstancesRequest::setMinAmount(int minAmount)
{
	minAmount_ = minAmount;
	setParameter("MinAmount", std::to_string(minAmount));
}

float RunInstancesRequest::getSpotPriceLimit()const
{
	return spotPriceLimit_;
}

void RunInstancesRequest::setSpotPriceLimit(float spotPriceLimit)
{
	spotPriceLimit_ = spotPriceLimit;
	setParameter("SpotPriceLimit", std::to_string(spotPriceLimit));
}

bool RunInstancesRequest::getDeletionProtection()const
{
	return deletionProtection_;
}

void RunInstancesRequest::setDeletionProtection(bool deletionProtection)
{
	deletionProtection_ = deletionProtection;
	setParameter("DeletionProtection", deletionProtection ? "true" : "false");
}

std::string RunInstancesRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void RunInstancesRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string RunInstancesRequest::getHostName()const
{
	return hostName_;
}

void RunInstancesRequest::setHostName(const std::string& hostName)
{
	hostName_ = hostName;
	setParameter("HostName", hostName);
}

std::string RunInstancesRequest::getPassword()const
{
	return password_;
}

void RunInstancesRequest::setPassword(const std::string& password)
{
	password_ = password;
	setParameter("Password", password);
}

int RunInstancesRequest::getStorageSetPartitionNumber()const
{
	return storageSetPartitionNumber_;
}

void RunInstancesRequest::setStorageSetPartitionNumber(int storageSetPartitionNumber)
{
	storageSetPartitionNumber_ = storageSetPartitionNumber;
	setParameter("StorageSetPartitionNumber", std::to_string(storageSetPartitionNumber));
}

std::vector<RunInstancesRequest::Tag> RunInstancesRequest::getTag()const
{
	return tag_;
}

void RunInstancesRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1 + 1);
		setParameter(tagObjStr + ".Key", tagObj.key);
		setParameter(tagObjStr + ".Value", tagObj.value);
	}
}

std::string RunInstancesRequest::getSystemDiskAutoSnapshotPolicyId()const
{
	return systemDiskAutoSnapshotPolicyId_;
}

void RunInstancesRequest::setSystemDiskAutoSnapshotPolicyId(const std::string& systemDiskAutoSnapshotPolicyId)
{
	systemDiskAutoSnapshotPolicyId_ = systemDiskAutoSnapshotPolicyId;
	setParameter("SystemDiskAutoSnapshotPolicyId", systemDiskAutoSnapshotPolicyId);
}

int RunInstancesRequest::getAutoRenewPeriod()const
{
	return autoRenewPeriod_;
}

void RunInstancesRequest::setAutoRenewPeriod(int autoRenewPeriod)
{
	autoRenewPeriod_ = autoRenewPeriod;
	setParameter("AutoRenewPeriod", std::to_string(autoRenewPeriod));
}

int RunInstancesRequest::getCpuOptionsCore()const
{
	return cpuOptionsCore_;
}

void RunInstancesRequest::setCpuOptionsCore(int cpuOptionsCore)
{
	cpuOptionsCore_ = cpuOptionsCore;
	setParameter("CpuOptionsCore", std::to_string(cpuOptionsCore));
}

int RunInstancesRequest::getPeriod()const
{
	return period_;
}

void RunInstancesRequest::setPeriod(int period)
{
	period_ = period;
	setParameter("Period", std::to_string(period));
}

bool RunInstancesRequest::getDryRun()const
{
	return dryRun_;
}

void RunInstancesRequest::setDryRun(bool dryRun)
{
	dryRun_ = dryRun;
	setParameter("DryRun", dryRun ? "true" : "false");
}

std::string RunInstancesRequest::getLaunchTemplateId()const
{
	return launchTemplateId_;
}

void RunInstancesRequest::setLaunchTemplateId(const std::string& launchTemplateId)
{
	launchTemplateId_ = launchTemplateId;
	setParameter("LaunchTemplateId", launchTemplateId);
}

int RunInstancesRequest::getIpv6AddressCount()const
{
	return ipv6AddressCount_;
}

void RunInstancesRequest::setIpv6AddressCount(int ipv6AddressCount)
{
	ipv6AddressCount_ = ipv6AddressCount;
	setParameter("Ipv6AddressCount", std::to_string(ipv6AddressCount));
}

std::string RunInstancesRequest::getCpuOptionsNuma()const
{
	return cpuOptionsNuma_;
}

void RunInstancesRequest::setCpuOptionsNuma(const std::string& cpuOptionsNuma)
{
	cpuOptionsNuma_ = cpuOptionsNuma;
	setParameter("CpuOptionsNuma", cpuOptionsNuma);
}

long RunInstancesRequest::getOwnerId()const
{
	return ownerId_;
}

void RunInstancesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string RunInstancesRequest::getCapacityReservationPreference()const
{
	return capacityReservationPreference_;
}

void RunInstancesRequest::setCapacityReservationPreference(const std::string& capacityReservationPreference)
{
	capacityReservationPreference_ = capacityReservationPreference;
	setParameter("CapacityReservationPreference", capacityReservationPreference);
}

std::string RunInstancesRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void RunInstancesRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setParameter("VSwitchId", vSwitchId);
}

std::string RunInstancesRequest::getSpotStrategy()const
{
	return spotStrategy_;
}

void RunInstancesRequest::setSpotStrategy(const std::string& spotStrategy)
{
	spotStrategy_ = spotStrategy;
	setParameter("SpotStrategy", spotStrategy);
}

std::string RunInstancesRequest::getPrivateIpAddress()const
{
	return privateIpAddress_;
}

void RunInstancesRequest::setPrivateIpAddress(const std::string& privateIpAddress)
{
	privateIpAddress_ = privateIpAddress;
	setParameter("PrivateIpAddress", privateIpAddress);
}

std::string RunInstancesRequest::getPeriodUnit()const
{
	return periodUnit_;
}

void RunInstancesRequest::setPeriodUnit(const std::string& periodUnit)
{
	periodUnit_ = periodUnit;
	setParameter("PeriodUnit", periodUnit);
}

std::string RunInstancesRequest::getInstanceName()const
{
	return instanceName_;
}

void RunInstancesRequest::setInstanceName(const std::string& instanceName)
{
	instanceName_ = instanceName;
	setParameter("InstanceName", instanceName);
}

bool RunInstancesRequest::getAutoRenew()const
{
	return autoRenew_;
}

void RunInstancesRequest::setAutoRenew(bool autoRenew)
{
	autoRenew_ = autoRenew;
	setParameter("AutoRenew", autoRenew ? "true" : "false");
}

std::string RunInstancesRequest::getInternetChargeType()const
{
	return internetChargeType_;
}

void RunInstancesRequest::setInternetChargeType(const std::string& internetChargeType)
{
	internetChargeType_ = internetChargeType;
	setParameter("InternetChargeType", internetChargeType);
}

std::string RunInstancesRequest::getZoneId()const
{
	return zoneId_;
}

void RunInstancesRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

std::vector<std::string> RunInstancesRequest::getIpv6Address()const
{
	return ipv6Address_;
}

void RunInstancesRequest::setIpv6Address(const std::vector<std::string>& ipv6Address)
{
	ipv6Address_ = ipv6Address;
	for(int dep1 = 0; dep1!= ipv6Address.size(); dep1++) {
		setParameter("Ipv6Address."+ std::to_string(dep1), ipv6Address.at(dep1));
	}
}

int RunInstancesRequest::getInternetMaxBandwidthIn()const
{
	return internetMaxBandwidthIn_;
}

void RunInstancesRequest::setInternetMaxBandwidthIn(int internetMaxBandwidthIn)
{
	internetMaxBandwidthIn_ = internetMaxBandwidthIn;
	setParameter("InternetMaxBandwidthIn", std::to_string(internetMaxBandwidthIn));
}

std::string RunInstancesRequest::getAffinity()const
{
	return affinity_;
}

void RunInstancesRequest::setAffinity(const std::string& affinity)
{
	affinity_ = affinity;
	setParameter("Affinity", affinity);
}

std::string RunInstancesRequest::getImageId()const
{
	return imageId_;
}

void RunInstancesRequest::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
	setParameter("ImageId", imageId);
}

std::string RunInstancesRequest::getSpotInterruptionBehavior()const
{
	return spotInterruptionBehavior_;
}

void RunInstancesRequest::setSpotInterruptionBehavior(const std::string& spotInterruptionBehavior)
{
	spotInterruptionBehavior_ = spotInterruptionBehavior;
	setParameter("SpotInterruptionBehavior", spotInterruptionBehavior);
}

std::string RunInstancesRequest::getClientToken()const
{
	return clientToken_;
}

void RunInstancesRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string RunInstancesRequest::getIoOptimized()const
{
	return ioOptimized_;
}

void RunInstancesRequest::setIoOptimized(const std::string& ioOptimized)
{
	ioOptimized_ = ioOptimized;
	setParameter("IoOptimized", ioOptimized);
}

std::string RunInstancesRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void RunInstancesRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setParameter("SecurityGroupId", securityGroupId);
}

int RunInstancesRequest::getInternetMaxBandwidthOut()const
{
	return internetMaxBandwidthOut_;
}

void RunInstancesRequest::setInternetMaxBandwidthOut(int internetMaxBandwidthOut)
{
	internetMaxBandwidthOut_ = internetMaxBandwidthOut;
	setParameter("InternetMaxBandwidthOut", std::to_string(internetMaxBandwidthOut));
}

std::string RunInstancesRequest::getDescription()const
{
	return description_;
}

void RunInstancesRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

int RunInstancesRequest::getCpuOptionsThreadsPerCore()const
{
	return cpuOptionsThreadsPerCore_;
}

void RunInstancesRequest::setCpuOptionsThreadsPerCore(int cpuOptionsThreadsPerCore)
{
	cpuOptionsThreadsPerCore_ = cpuOptionsThreadsPerCore;
	setParameter("CpuOptionsThreadsPerCore", std::to_string(cpuOptionsThreadsPerCore));
}

std::string RunInstancesRequest::getSystemDiskCategory()const
{
	return systemDiskCategory_;
}

void RunInstancesRequest::setSystemDiskCategory(const std::string& systemDiskCategory)
{
	systemDiskCategory_ = systemDiskCategory;
	setParameter("SystemDiskCategory", systemDiskCategory);
}

std::string RunInstancesRequest::getCapacityReservationId()const
{
	return capacityReservationId_;
}

void RunInstancesRequest::setCapacityReservationId(const std::string& capacityReservationId)
{
	capacityReservationId_ = capacityReservationId;
	setParameter("CapacityReservationId", capacityReservationId);
}

std::string RunInstancesRequest::getSystemDiskPerformanceLevel()const
{
	return systemDiskPerformanceLevel_;
}

void RunInstancesRequest::setSystemDiskPerformanceLevel(const std::string& systemDiskPerformanceLevel)
{
	systemDiskPerformanceLevel_ = systemDiskPerformanceLevel;
	setParameter("SystemDiskPerformanceLevel", systemDiskPerformanceLevel);
}

std::string RunInstancesRequest::getUserData()const
{
	return userData_;
}

void RunInstancesRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setParameter("UserData", userData);
}

bool RunInstancesRequest::getPasswordInherit()const
{
	return passwordInherit_;
}

void RunInstancesRequest::setPasswordInherit(bool passwordInherit)
{
	passwordInherit_ = passwordInherit;
	setParameter("PasswordInherit", passwordInherit ? "true" : "false");
}

std::string RunInstancesRequest::getRegionId()const
{
	return regionId_;
}

void RunInstancesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string RunInstancesRequest::getInstanceType()const
{
	return instanceType_;
}

void RunInstancesRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setParameter("InstanceType", instanceType);
}

bool RunInstancesRequest::getHibernationConfigured()const
{
	return hibernationConfigured_;
}

void RunInstancesRequest::setHibernationConfigured(bool hibernationConfigured)
{
	hibernationConfigured_ = hibernationConfigured;
	setParameter("HibernationConfigured", hibernationConfigured ? "true" : "false");
}

std::string RunInstancesRequest::getInstanceChargeType()const
{
	return instanceChargeType_;
}

void RunInstancesRequest::setInstanceChargeType(const std::string& instanceChargeType)
{
	instanceChargeType_ = instanceChargeType;
	setParameter("InstanceChargeType", instanceChargeType);
}

std::vector<RunInstancesRequest::NetworkInterface> RunInstancesRequest::getNetworkInterface()const
{
	return networkInterface_;
}

void RunInstancesRequest::setNetworkInterface(const std::vector<NetworkInterface>& networkInterface)
{
	networkInterface_ = networkInterface;
	for(int dep1 = 0; dep1!= networkInterface.size(); dep1++) {
		auto networkInterfaceObj = networkInterface.at(dep1);
		std::string networkInterfaceObjStr = "NetworkInterface." + std::to_string(dep1 + 1);
		setParameter(networkInterfaceObjStr + ".PrimaryIpAddress", networkInterfaceObj.primaryIpAddress);
		setParameter(networkInterfaceObjStr + ".VSwitchId", networkInterfaceObj.vSwitchId);
		setParameter(networkInterfaceObjStr + ".SecurityGroupId", networkInterfaceObj.securityGroupId);
		for(int dep2 = 0; dep2!= networkInterfaceObj.securityGroupIds.size(); dep2++) {
			setParameter(networkInterfaceObjStr + ".SecurityGroupIds."+ std::to_string(dep2), networkInterfaceObj.securityGroupIds.at(dep2));
		}
		setParameter(networkInterfaceObjStr + ".NetworkInterfaceName", networkInterfaceObj.networkInterfaceName);
		setParameter(networkInterfaceObjStr + ".Description", networkInterfaceObj.description);
	}
}

std::string RunInstancesRequest::getDeploymentSetId()const
{
	return deploymentSetId_;
}

void RunInstancesRequest::setDeploymentSetId(const std::string& deploymentSetId)
{
	deploymentSetId_ = deploymentSetId;
	setParameter("DeploymentSetId", deploymentSetId);
}

int RunInstancesRequest::getAmount()const
{
	return amount_;
}

void RunInstancesRequest::setAmount(int amount)
{
	amount_ = amount;
	setParameter("Amount", std::to_string(amount));
}

std::string RunInstancesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RunInstancesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string RunInstancesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void RunInstancesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string RunInstancesRequest::getTenancy()const
{
	return tenancy_;
}

void RunInstancesRequest::setTenancy(const std::string& tenancy)
{
	tenancy_ = tenancy;
	setParameter("Tenancy", tenancy);
}

std::string RunInstancesRequest::getSystemDiskDiskName()const
{
	return systemDiskDiskName_;
}

void RunInstancesRequest::setSystemDiskDiskName(const std::string& systemDiskDiskName)
{
	systemDiskDiskName_ = systemDiskDiskName;
	setParameter("SystemDiskDiskName", systemDiskDiskName);
}

std::string RunInstancesRequest::getRamRoleName()const
{
	return ramRoleName_;
}

void RunInstancesRequest::setRamRoleName(const std::string& ramRoleName)
{
	ramRoleName_ = ramRoleName;
	setParameter("RamRoleName", ramRoleName);
}

std::string RunInstancesRequest::getAutoReleaseTime()const
{
	return autoReleaseTime_;
}

void RunInstancesRequest::setAutoReleaseTime(const std::string& autoReleaseTime)
{
	autoReleaseTime_ = autoReleaseTime;
	setParameter("AutoReleaseTime", autoReleaseTime);
}

std::string RunInstancesRequest::getDedicatedHostId()const
{
	return dedicatedHostId_;
}

void RunInstancesRequest::setDedicatedHostId(const std::string& dedicatedHostId)
{
	dedicatedHostId_ = dedicatedHostId;
	setParameter("DedicatedHostId", dedicatedHostId);
}

std::string RunInstancesRequest::getCreditSpecification()const
{
	return creditSpecification_;
}

void RunInstancesRequest::setCreditSpecification(const std::string& creditSpecification)
{
	creditSpecification_ = creditSpecification;
	setParameter("CreditSpecification", creditSpecification);
}

std::vector<std::string> RunInstancesRequest::getSecurityGroupIds()const
{
	return securityGroupIds_;
}

void RunInstancesRequest::setSecurityGroupIds(const std::vector<std::string>& securityGroupIds)
{
	securityGroupIds_ = securityGroupIds;
	for(int dep1 = 0; dep1!= securityGroupIds.size(); dep1++) {
		setParameter("SecurityGroupIds."+ std::to_string(dep1), securityGroupIds.at(dep1));
	}
}

int RunInstancesRequest::getSpotDuration()const
{
	return spotDuration_;
}

void RunInstancesRequest::setSpotDuration(int spotDuration)
{
	spotDuration_ = spotDuration;
	setParameter("SpotDuration", std::to_string(spotDuration));
}

std::vector<RunInstancesRequest::DataDisk> RunInstancesRequest::getDataDisk()const
{
	return dataDisk_;
}

void RunInstancesRequest::setDataDisk(const std::vector<DataDisk>& dataDisk)
{
	dataDisk_ = dataDisk;
	for(int dep1 = 0; dep1!= dataDisk.size(); dep1++) {
		auto dataDiskObj = dataDisk.at(dep1);
		std::string dataDiskObjStr = "DataDisk." + std::to_string(dep1 + 1);
		setParameter(dataDiskObjStr + ".Size", std::to_string(dataDiskObj.size));
		setParameter(dataDiskObjStr + ".SnapshotId", dataDiskObj.snapshotId);
		setParameter(dataDiskObjStr + ".Category", dataDiskObj.category);
		setParameter(dataDiskObjStr + ".Encrypted", dataDiskObj.encrypted);
		setParameter(dataDiskObjStr + ".KMSKeyId", dataDiskObj.kMSKeyId);
		setParameter(dataDiskObjStr + ".DiskName", dataDiskObj.diskName);
		setParameter(dataDiskObjStr + ".Description", dataDiskObj.description);
		setParameter(dataDiskObjStr + ".Device", dataDiskObj.device);
		setParameter(dataDiskObjStr + ".DeleteWithInstance", dataDiskObj.deleteWithInstance ? "true" : "false");
		setParameter(dataDiskObjStr + ".PerformanceLevel", dataDiskObj.performanceLevel);
		setParameter(dataDiskObjStr + ".AutoSnapshotPolicyId", dataDiskObj.autoSnapshotPolicyId);
	}
}

long RunInstancesRequest::getLaunchTemplateVersion()const
{
	return launchTemplateVersion_;
}

void RunInstancesRequest::setLaunchTemplateVersion(long launchTemplateVersion)
{
	launchTemplateVersion_ = launchTemplateVersion;
	setParameter("LaunchTemplateVersion", std::to_string(launchTemplateVersion));
}

std::string RunInstancesRequest::getStorageSetId()const
{
	return storageSetId_;
}

void RunInstancesRequest::setStorageSetId(const std::string& storageSetId)
{
	storageSetId_ = storageSetId;
	setParameter("StorageSetId", storageSetId);
}

std::string RunInstancesRequest::getSystemDiskSize()const
{
	return systemDiskSize_;
}

void RunInstancesRequest::setSystemDiskSize(const std::string& systemDiskSize)
{
	systemDiskSize_ = systemDiskSize;
	setParameter("SystemDiskSize", systemDiskSize);
}

std::string RunInstancesRequest::getSystemDiskDescription()const
{
	return systemDiskDescription_;
}

void RunInstancesRequest::setSystemDiskDescription(const std::string& systemDiskDescription)
{
	systemDiskDescription_ = systemDiskDescription;
	setParameter("SystemDiskDescription", systemDiskDescription);
}

