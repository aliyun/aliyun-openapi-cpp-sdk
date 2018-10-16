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
	setParameter("UniqueSuffix", std::to_string(uniqueSuffix));
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

long RunInstancesRequest::getCallerParentId()const
{
	return callerParentId_;
}

void RunInstancesRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
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

std::string RunInstancesRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void RunInstancesRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
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

std::string RunInstancesRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void RunInstancesRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string RunInstancesRequest::getCallerType()const
{
	return callerType_;
}

void RunInstancesRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
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

std::string RunInstancesRequest::getSecurityToken()const
{
	return securityToken_;
}

void RunInstancesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

bool RunInstancesRequest::getEnable()const
{
	return enable_;
}

void RunInstancesRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
}

std::string RunInstancesRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void RunInstancesRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
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
		setParameter(str + ".Key", obj.key);
		setParameter(str + ".Value", obj.value);
	}
}

long RunInstancesRequest::getCallerUid()const
{
	return callerUid_;
}

void RunInstancesRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
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
	setParameter("DryRun", std::to_string(dryRun));
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

long RunInstancesRequest::getOwnerId()const
{
	return ownerId_;
}

void RunInstancesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool RunInstancesRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void RunInstancesRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool RunInstancesRequest::getSecurity_transport()const
{
	return security_transport_;
}

void RunInstancesRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
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
	setParameter("AutoRenew", std::to_string(autoRenew));
}

std::string RunInstancesRequest::getRequestId()const
{
	return requestId_;
}

void RunInstancesRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
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

int RunInstancesRequest::getInternetMaxBandwidthIn()const
{
	return internetMaxBandwidthIn_;
}

void RunInstancesRequest::setInternetMaxBandwidthIn(int internetMaxBandwidthIn)
{
	internetMaxBandwidthIn_ = internetMaxBandwidthIn;
	setParameter("InternetMaxBandwidthIn", std::to_string(internetMaxBandwidthIn));
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

bool RunInstancesRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void RunInstancesRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
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

std::string RunInstancesRequest::getSystemDiskCategory()const
{
	return systemDiskCategory_;
}

void RunInstancesRequest::setSystemDiskCategory(const std::string& systemDiskCategory)
{
	systemDiskCategory_ = systemDiskCategory;
	setParameter("SystemDiskCategory", systemDiskCategory);
}

std::string RunInstancesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RunInstancesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
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
	setParameter("PasswordInherit", std::to_string(passwordInherit));
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

std::string RunInstancesRequest::getRequestContent()const
{
	return requestContent_;
}

void RunInstancesRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
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

std::string RunInstancesRequest::getInstanceChargeType()const
{
	return instanceChargeType_;
}

void RunInstancesRequest::setInstanceChargeType(const std::string& instanceChargeType)
{
	instanceChargeType_ = instanceChargeType;
	setParameter("InstanceChargeType", instanceChargeType);
}

std::string RunInstancesRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void RunInstancesRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
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
		setParameter(str + ".PrimaryIpAddress", obj.primaryIpAddress);
		setParameter(str + ".VSwitchId", obj.vSwitchId);
		setParameter(str + ".SecurityGroupId", obj.securityGroupId);
		setParameter(str + ".NetworkInterfaceName", obj.networkInterfaceName);
		setParameter(str + ".Description", obj.description);
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

std::string RunInstancesRequest::getApp_ip()const
{
	return app_ip_;
}

void RunInstancesRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
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

std::string RunInstancesRequest::getCallerBid()const
{
	return callerBid_;
}

void RunInstancesRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
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
		setParameter(str + ".Size", std::to_string(obj.size));
		setParameter(str + ".SnapshotId", obj.snapshotId);
		setParameter(str + ".Category", obj.category);
		setParameter(str + ".Encrypted", obj.encrypted);
		setParameter(str + ".DiskName", obj.diskName);
		setParameter(str + ".Description", obj.description);
		setParameter(str + ".Device", obj.device);
		setParameter(str + ".DeleteWithInstance", std::to_string(obj.deleteWithInstance));
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

bool RunInstancesRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void RunInstancesRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
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

