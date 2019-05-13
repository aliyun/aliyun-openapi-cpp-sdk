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
{}

RunInstancesRequest::~RunInstancesRequest()
{}

std::string RunInstancesRequest::getLaunchTemplateName()const
{
	return launchTemplateName_;
}

void RunInstancesRequest::setLaunchTemplateName(const std::string& launchTemplateName)
{
	launchTemplateName_ = launchTemplateName;
	setCoreParameter("LaunchTemplateName", launchTemplateName);
}

long RunInstancesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RunInstancesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

bool RunInstancesRequest::getUniqueSuffix()const
{
	return uniqueSuffix_;
}

void RunInstancesRequest::setUniqueSuffix(bool uniqueSuffix)
{
	uniqueSuffix_ = uniqueSuffix;
	setCoreParameter("UniqueSuffix", uniqueSuffix ? "true" : "false");
}

std::string RunInstancesRequest::getHpcClusterId()const
{
	return hpcClusterId_;
}

void RunInstancesRequest::setHpcClusterId(const std::string& hpcClusterId)
{
	hpcClusterId_ = hpcClusterId;
	setCoreParameter("HpcClusterId", hpcClusterId);
}

long RunInstancesRequest::getCallerParentId()const
{
	return callerParentId_;
}

void RunInstancesRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

std::string RunInstancesRequest::getSecurityEnhancementStrategy()const
{
	return securityEnhancementStrategy_;
}

void RunInstancesRequest::setSecurityEnhancementStrategy(const std::string& securityEnhancementStrategy)
{
	securityEnhancementStrategy_ = securityEnhancementStrategy;
	setCoreParameter("SecurityEnhancementStrategy", securityEnhancementStrategy);
}

std::string RunInstancesRequest::getKeyPairName()const
{
	return keyPairName_;
}

void RunInstancesRequest::setKeyPairName(const std::string& keyPairName)
{
	keyPairName_ = keyPairName;
	setCoreParameter("KeyPairName", keyPairName);
}

std::string RunInstancesRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void RunInstancesRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

int RunInstancesRequest::getMinAmount()const
{
	return minAmount_;
}

void RunInstancesRequest::setMinAmount(int minAmount)
{
	minAmount_ = minAmount;
	setCoreParameter("MinAmount", std::to_string(minAmount));
}

float RunInstancesRequest::getSpotPriceLimit()const
{
	return spotPriceLimit_;
}

void RunInstancesRequest::setSpotPriceLimit(float spotPriceLimit)
{
	spotPriceLimit_ = spotPriceLimit;
	setCoreParameter("SpotPriceLimit", std::to_string(spotPriceLimit));
}

std::string RunInstancesRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void RunInstancesRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string RunInstancesRequest::getCallerType()const
{
	return callerType_;
}

void RunInstancesRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string RunInstancesRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void RunInstancesRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

bool RunInstancesRequest::getDeletionProtection()const
{
	return deletionProtection_;
}

void RunInstancesRequest::setDeletionProtection(bool deletionProtection)
{
	deletionProtection_ = deletionProtection;
	setCoreParameter("DeletionProtection", deletionProtection ? "true" : "false");
}

std::string RunInstancesRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void RunInstancesRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string RunInstancesRequest::getHostName()const
{
	return hostName_;
}

void RunInstancesRequest::setHostName(const std::string& hostName)
{
	hostName_ = hostName;
	setCoreParameter("HostName", hostName);
}

std::string RunInstancesRequest::getPassword()const
{
	return password_;
}

void RunInstancesRequest::setPassword(const std::string& password)
{
	password_ = password;
	setCoreParameter("Password", password);
}

std::string RunInstancesRequest::getSecurityToken()const
{
	return securityToken_;
}

void RunInstancesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

bool RunInstancesRequest::getEnable()const
{
	return enable_;
}

void RunInstancesRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string RunInstancesRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void RunInstancesRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::vector<RunInstancesRequest::Tag> RunInstancesRequest::getTag()const
{
	return tag_;
}

void RunInstancesRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	int i = 0;
	for(int i = 0; i!= tag.size(); i++)	{
		auto obj = tag.at(i);
		std::string str ="Tag."+ std::to_string(i);
		setCoreParameter(str + ".Key", obj.key);
		setCoreParameter(str + ".Value", obj.value);
	}
}

long RunInstancesRequest::getCallerUid()const
{
	return callerUid_;
}

void RunInstancesRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

int RunInstancesRequest::getAutoRenewPeriod()const
{
	return autoRenewPeriod_;
}

void RunInstancesRequest::setAutoRenewPeriod(int autoRenewPeriod)
{
	autoRenewPeriod_ = autoRenewPeriod;
	setCoreParameter("AutoRenewPeriod", std::to_string(autoRenewPeriod));
}

int RunInstancesRequest::getPeriod()const
{
	return period_;
}

void RunInstancesRequest::setPeriod(int period)
{
	period_ = period;
	setCoreParameter("Period", std::to_string(period));
}

bool RunInstancesRequest::getDryRun()const
{
	return dryRun_;
}

void RunInstancesRequest::setDryRun(bool dryRun)
{
	dryRun_ = dryRun;
	setCoreParameter("DryRun", dryRun ? "true" : "false");
}

std::string RunInstancesRequest::getLaunchTemplateId()const
{
	return launchTemplateId_;
}

void RunInstancesRequest::setLaunchTemplateId(const std::string& launchTemplateId)
{
	launchTemplateId_ = launchTemplateId;
	setCoreParameter("LaunchTemplateId", launchTemplateId);
}

int RunInstancesRequest::getIpv6AddressCount()const
{
	return ipv6AddressCount_;
}

void RunInstancesRequest::setIpv6AddressCount(int ipv6AddressCount)
{
	ipv6AddressCount_ = ipv6AddressCount;
	setCoreParameter("Ipv6AddressCount", std::to_string(ipv6AddressCount));
}

long RunInstancesRequest::getOwnerId()const
{
	return ownerId_;
}

void RunInstancesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string RunInstancesRequest::getCapacityReservationPreference()const
{
	return capacityReservationPreference_;
}

void RunInstancesRequest::setCapacityReservationPreference(const std::string& capacityReservationPreference)
{
	capacityReservationPreference_ = capacityReservationPreference;
	setCoreParameter("CapacityReservationPreference", capacityReservationPreference);
}

bool RunInstancesRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void RunInstancesRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool RunInstancesRequest::getSecurity_transport()const
{
	return security_transport_;
}

void RunInstancesRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string RunInstancesRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void RunInstancesRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setCoreParameter("VSwitchId", vSwitchId);
}

std::string RunInstancesRequest::getSpotStrategy()const
{
	return spotStrategy_;
}

void RunInstancesRequest::setSpotStrategy(const std::string& spotStrategy)
{
	spotStrategy_ = spotStrategy;
	setCoreParameter("SpotStrategy", spotStrategy);
}

std::string RunInstancesRequest::getPrivateIpAddress()const
{
	return privateIpAddress_;
}

void RunInstancesRequest::setPrivateIpAddress(const std::string& privateIpAddress)
{
	privateIpAddress_ = privateIpAddress;
	setCoreParameter("PrivateIpAddress", privateIpAddress);
}

std::string RunInstancesRequest::getPeriodUnit()const
{
	return periodUnit_;
}

void RunInstancesRequest::setPeriodUnit(const std::string& periodUnit)
{
	periodUnit_ = periodUnit;
	setCoreParameter("PeriodUnit", periodUnit);
}

std::string RunInstancesRequest::getInstanceName()const
{
	return instanceName_;
}

void RunInstancesRequest::setInstanceName(const std::string& instanceName)
{
	instanceName_ = instanceName;
	setCoreParameter("InstanceName", instanceName);
}

bool RunInstancesRequest::getAutoRenew()const
{
	return autoRenew_;
}

void RunInstancesRequest::setAutoRenew(bool autoRenew)
{
	autoRenew_ = autoRenew;
	setCoreParameter("AutoRenew", autoRenew ? "true" : "false");
}

std::string RunInstancesRequest::getRequestId()const
{
	return requestId_;
}

void RunInstancesRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string RunInstancesRequest::getInternetChargeType()const
{
	return internetChargeType_;
}

void RunInstancesRequest::setInternetChargeType(const std::string& internetChargeType)
{
	internetChargeType_ = internetChargeType;
	setCoreParameter("InternetChargeType", internetChargeType);
}

std::string RunInstancesRequest::getZoneId()const
{
	return zoneId_;
}

void RunInstancesRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
}

std::vector<std::string> RunInstancesRequest::getIpv6Address()const
{
	return ipv6Address_;
}

void RunInstancesRequest::setIpv6Address(const std::vector<std::string>& ipv6Address)
{
	ipv6Address_ = ipv6Address;
	for(int i = 0; i!= ipv6Address.size(); i++)
		setCoreParameter("Ipv6Address."+ std::to_string(i), ipv6Address.at(i));
}

int RunInstancesRequest::getInternetMaxBandwidthIn()const
{
	return internetMaxBandwidthIn_;
}

void RunInstancesRequest::setInternetMaxBandwidthIn(int internetMaxBandwidthIn)
{
	internetMaxBandwidthIn_ = internetMaxBandwidthIn;
	setCoreParameter("InternetMaxBandwidthIn", std::to_string(internetMaxBandwidthIn));
}

std::string RunInstancesRequest::getImageId()const
{
	return imageId_;
}

void RunInstancesRequest::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
	setCoreParameter("ImageId", imageId);
}

std::string RunInstancesRequest::getSpotInterruptionBehavior()const
{
	return spotInterruptionBehavior_;
}

void RunInstancesRequest::setSpotInterruptionBehavior(const std::string& spotInterruptionBehavior)
{
	spotInterruptionBehavior_ = spotInterruptionBehavior;
	setCoreParameter("SpotInterruptionBehavior", spotInterruptionBehavior);
}

std::string RunInstancesRequest::getClientToken()const
{
	return clientToken_;
}

void RunInstancesRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string RunInstancesRequest::getIoOptimized()const
{
	return ioOptimized_;
}

void RunInstancesRequest::setIoOptimized(const std::string& ioOptimized)
{
	ioOptimized_ = ioOptimized;
	setCoreParameter("IoOptimized", ioOptimized);
}

std::string RunInstancesRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void RunInstancesRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setCoreParameter("SecurityGroupId", securityGroupId);
}

int RunInstancesRequest::getInternetMaxBandwidthOut()const
{
	return internetMaxBandwidthOut_;
}

void RunInstancesRequest::setInternetMaxBandwidthOut(int internetMaxBandwidthOut)
{
	internetMaxBandwidthOut_ = internetMaxBandwidthOut;
	setCoreParameter("InternetMaxBandwidthOut", std::to_string(internetMaxBandwidthOut));
}

bool RunInstancesRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void RunInstancesRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string RunInstancesRequest::getDescription()const
{
	return description_;
}

void RunInstancesRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string RunInstancesRequest::getSystemDiskCategory()const
{
	return systemDiskCategory_;
}

void RunInstancesRequest::setSystemDiskCategory(const std::string& systemDiskCategory)
{
	systemDiskCategory_ = systemDiskCategory;
	setCoreParameter("SystemDiskCategory", systemDiskCategory);
}

std::string RunInstancesRequest::getCapacityReservationId()const
{
	return capacityReservationId_;
}

void RunInstancesRequest::setCapacityReservationId(const std::string& capacityReservationId)
{
	capacityReservationId_ = capacityReservationId;
	setCoreParameter("CapacityReservationId", capacityReservationId);
}

std::string RunInstancesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RunInstancesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string RunInstancesRequest::getUserData()const
{
	return userData_;
}

void RunInstancesRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setCoreParameter("UserData", userData);
}

bool RunInstancesRequest::getPasswordInherit()const
{
	return passwordInherit_;
}

void RunInstancesRequest::setPasswordInherit(bool passwordInherit)
{
	passwordInherit_ = passwordInherit;
	setCoreParameter("PasswordInherit", passwordInherit ? "true" : "false");
}

std::string RunInstancesRequest::getRegionId()const
{
	return regionId_;
}

void RunInstancesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string RunInstancesRequest::getRequestContent()const
{
	return requestContent_;
}

void RunInstancesRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string RunInstancesRequest::getInstanceType()const
{
	return instanceType_;
}

void RunInstancesRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setCoreParameter("InstanceType", instanceType);
}

bool RunInstancesRequest::getHibernationConfigured()const
{
	return hibernationConfigured_;
}

void RunInstancesRequest::setHibernationConfigured(bool hibernationConfigured)
{
	hibernationConfigured_ = hibernationConfigured;
	setCoreParameter("HibernationConfigured", hibernationConfigured ? "true" : "false");
}

std::string RunInstancesRequest::getInstanceChargeType()const
{
	return instanceChargeType_;
}

void RunInstancesRequest::setInstanceChargeType(const std::string& instanceChargeType)
{
	instanceChargeType_ = instanceChargeType;
	setCoreParameter("InstanceChargeType", instanceChargeType);
}

std::string RunInstancesRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void RunInstancesRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

std::vector<RunInstancesRequest::NetworkInterface> RunInstancesRequest::getNetworkInterface()const
{
	return networkInterface_;
}

void RunInstancesRequest::setNetworkInterface(const std::vector<NetworkInterface>& networkInterface)
{
	networkInterface_ = networkInterface;
	int i = 0;
	for(int i = 0; i!= networkInterface.size(); i++)	{
		auto obj = networkInterface.at(i);
		std::string str ="NetworkInterface."+ std::to_string(i);
		setCoreParameter(str + ".PrimaryIpAddress", obj.primaryIpAddress);
		setCoreParameter(str + ".VSwitchId", obj.vSwitchId);
		setCoreParameter(str + ".SecurityGroupId", obj.securityGroupId);
		setCoreParameter(str + ".NetworkInterfaceName", obj.networkInterfaceName);
		setCoreParameter(str + ".Description", obj.description);
	}
}

std::string RunInstancesRequest::getDeploymentSetId()const
{
	return deploymentSetId_;
}

void RunInstancesRequest::setDeploymentSetId(const std::string& deploymentSetId)
{
	deploymentSetId_ = deploymentSetId;
	setCoreParameter("DeploymentSetId", deploymentSetId);
}

std::string RunInstancesRequest::getApp_ip()const
{
	return app_ip_;
}

void RunInstancesRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

int RunInstancesRequest::getAmount()const
{
	return amount_;
}

void RunInstancesRequest::setAmount(int amount)
{
	amount_ = amount;
	setCoreParameter("Amount", std::to_string(amount));
}

std::string RunInstancesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RunInstancesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string RunInstancesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void RunInstancesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string RunInstancesRequest::getSystemDiskDiskName()const
{
	return systemDiskDiskName_;
}

void RunInstancesRequest::setSystemDiskDiskName(const std::string& systemDiskDiskName)
{
	systemDiskDiskName_ = systemDiskDiskName;
	setCoreParameter("SystemDiskDiskName", systemDiskDiskName);
}

std::string RunInstancesRequest::getRamRoleName()const
{
	return ramRoleName_;
}

void RunInstancesRequest::setRamRoleName(const std::string& ramRoleName)
{
	ramRoleName_ = ramRoleName;
	setCoreParameter("RamRoleName", ramRoleName);
}

std::string RunInstancesRequest::getAutoReleaseTime()const
{
	return autoReleaseTime_;
}

void RunInstancesRequest::setAutoReleaseTime(const std::string& autoReleaseTime)
{
	autoReleaseTime_ = autoReleaseTime;
	setCoreParameter("AutoReleaseTime", autoReleaseTime);
}

std::string RunInstancesRequest::getDedicatedHostId()const
{
	return dedicatedHostId_;
}

void RunInstancesRequest::setDedicatedHostId(const std::string& dedicatedHostId)
{
	dedicatedHostId_ = dedicatedHostId;
	setCoreParameter("DedicatedHostId", dedicatedHostId);
}

std::string RunInstancesRequest::getCallerBid()const
{
	return callerBid_;
}

void RunInstancesRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

std::string RunInstancesRequest::getCreditSpecification()const
{
	return creditSpecification_;
}

void RunInstancesRequest::setCreditSpecification(const std::string& creditSpecification)
{
	creditSpecification_ = creditSpecification;
	setCoreParameter("CreditSpecification", creditSpecification);
}

std::vector<std::string> RunInstancesRequest::getSecurityGroupIds()const
{
	return securityGroupIds_;
}

void RunInstancesRequest::setSecurityGroupIds(const std::vector<std::string>& securityGroupIds)
{
	securityGroupIds_ = securityGroupIds;
	for(int i = 0; i!= securityGroupIds.size(); i++)
		setCoreParameter("SecurityGroupIds."+ std::to_string(i), securityGroupIds.at(i));
}

std::vector<RunInstancesRequest::DataDisk> RunInstancesRequest::getDataDisk()const
{
	return dataDisk_;
}

void RunInstancesRequest::setDataDisk(const std::vector<DataDisk>& dataDisk)
{
	dataDisk_ = dataDisk;
	int i = 0;
	for(int i = 0; i!= dataDisk.size(); i++)	{
		auto obj = dataDisk.at(i);
		std::string str ="DataDisk."+ std::to_string(i);
		setCoreParameter(str + ".Size", std::to_string(obj.size));
		setCoreParameter(str + ".SnapshotId", obj.snapshotId);
		setCoreParameter(str + ".Category", obj.category);
		setCoreParameter(str + ".Encrypted", obj.encrypted);
		setCoreParameter(str + ".KMSKeyId", obj.kMSKeyId);
		setCoreParameter(str + ".DiskName", obj.diskName);
		setCoreParameter(str + ".Description", obj.description);
		setCoreParameter(str + ".Device", obj.device);
		setCoreParameter(str + ".DeleteWithInstance", obj.deleteWithInstance ? "true" : "false");
	}
}

long RunInstancesRequest::getLaunchTemplateVersion()const
{
	return launchTemplateVersion_;
}

void RunInstancesRequest::setLaunchTemplateVersion(long launchTemplateVersion)
{
	launchTemplateVersion_ = launchTemplateVersion;
	setCoreParameter("LaunchTemplateVersion", std::to_string(launchTemplateVersion));
}

bool RunInstancesRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void RunInstancesRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

std::string RunInstancesRequest::getSystemDiskSize()const
{
	return systemDiskSize_;
}

void RunInstancesRequest::setSystemDiskSize(const std::string& systemDiskSize)
{
	systemDiskSize_ = systemDiskSize;
	setCoreParameter("SystemDiskSize", systemDiskSize);
}

std::string RunInstancesRequest::getSystemDiskDescription()const
{
	return systemDiskDescription_;
}

void RunInstancesRequest::setSystemDiskDescription(const std::string& systemDiskDescription)
{
	systemDiskDescription_ = systemDiskDescription;
	setCoreParameter("SystemDiskDescription", systemDiskDescription);
}

