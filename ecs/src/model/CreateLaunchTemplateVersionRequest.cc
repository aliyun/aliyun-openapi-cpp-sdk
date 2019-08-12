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
{}

CreateLaunchTemplateVersionRequest::~CreateLaunchTemplateVersionRequest()
{}

std::string CreateLaunchTemplateVersionRequest::getLaunchTemplateName()const
{
	return launchTemplateName_;
}

void CreateLaunchTemplateVersionRequest::setLaunchTemplateName(const std::string& launchTemplateName)
{
	launchTemplateName_ = launchTemplateName;
	setCoreParameter("LaunchTemplateName", std::to_string(launchTemplateName));
}

long CreateLaunchTemplateVersionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateLaunchTemplateVersionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long CreateLaunchTemplateVersionRequest::getCallerParentId()const
{
	return callerParentId_;
}

void CreateLaunchTemplateVersionRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

std::string CreateLaunchTemplateVersionRequest::getSecurityEnhancementStrategy()const
{
	return securityEnhancementStrategy_;
}

void CreateLaunchTemplateVersionRequest::setSecurityEnhancementStrategy(const std::string& securityEnhancementStrategy)
{
	securityEnhancementStrategy_ = securityEnhancementStrategy;
	setCoreParameter("SecurityEnhancementStrategy", std::to_string(securityEnhancementStrategy));
}

std::string CreateLaunchTemplateVersionRequest::getNetworkType()const
{
	return networkType_;
}

void CreateLaunchTemplateVersionRequest::setNetworkType(const std::string& networkType)
{
	networkType_ = networkType;
	setCoreParameter("NetworkType", std::to_string(networkType));
}

std::string CreateLaunchTemplateVersionRequest::getKeyPairName()const
{
	return keyPairName_;
}

void CreateLaunchTemplateVersionRequest::setKeyPairName(const std::string& keyPairName)
{
	keyPairName_ = keyPairName;
	setCoreParameter("KeyPairName", std::to_string(keyPairName));
}

std::string CreateLaunchTemplateVersionRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void CreateLaunchTemplateVersionRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

float CreateLaunchTemplateVersionRequest::getSpotPriceLimit()const
{
	return spotPriceLimit_;
}

void CreateLaunchTemplateVersionRequest::setSpotPriceLimit(float spotPriceLimit)
{
	spotPriceLimit_ = spotPriceLimit;
	setCoreParameter("SpotPriceLimit", spotPriceLimit);
}

std::string CreateLaunchTemplateVersionRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void CreateLaunchTemplateVersionRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string CreateLaunchTemplateVersionRequest::getCallerType()const
{
	return callerType_;
}

void CreateLaunchTemplateVersionRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string CreateLaunchTemplateVersionRequest::getImageOwnerAlias()const
{
	return imageOwnerAlias_;
}

void CreateLaunchTemplateVersionRequest::setImageOwnerAlias(const std::string& imageOwnerAlias)
{
	imageOwnerAlias_ = imageOwnerAlias;
	setCoreParameter("ImageOwnerAlias", std::to_string(imageOwnerAlias));
}

std::string CreateLaunchTemplateVersionRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void CreateLaunchTemplateVersionRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", std::to_string(sourceRegionId));
}

std::string CreateLaunchTemplateVersionRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateLaunchTemplateVersionRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", std::to_string(resourceGroupId));
}

std::string CreateLaunchTemplateVersionRequest::getHostName()const
{
	return hostName_;
}

void CreateLaunchTemplateVersionRequest::setHostName(const std::string& hostName)
{
	hostName_ = hostName;
	setCoreParameter("HostName", std::to_string(hostName));
}

std::string CreateLaunchTemplateVersionRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateLaunchTemplateVersionRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

bool CreateLaunchTemplateVersionRequest::getEnable()const
{
	return enable_;
}

void CreateLaunchTemplateVersionRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

int CreateLaunchTemplateVersionRequest::getSystemDiskIops()const
{
	return systemDiskIops_;
}

void CreateLaunchTemplateVersionRequest::setSystemDiskIops(int systemDiskIops)
{
	systemDiskIops_ = systemDiskIops;
	setCoreParameter("SystemDiskIops", systemDiskIops);
}

std::string CreateLaunchTemplateVersionRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void CreateLaunchTemplateVersionRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::vector<CreateLaunchTemplateVersionRequest::Tag> CreateLaunchTemplateVersionRequest::getTag()const
{
	return tag_;
}

void CreateLaunchTemplateVersionRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	int i = 0;
	for(int i = 0; i!= tag.size(); i++)	{
		auto obj = tag.at(i);
		std::string str ="Tag."+ std::to_string(i);
		setCoreParameter(str + ".Key", std::to_string(obj.key));
		setCoreParameter(str + ".Value", std::to_string(obj.value));
	}
}

long CreateLaunchTemplateVersionRequest::getCallerUid()const
{
	return callerUid_;
}

void CreateLaunchTemplateVersionRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

int CreateLaunchTemplateVersionRequest::getPeriod()const
{
	return period_;
}

void CreateLaunchTemplateVersionRequest::setPeriod(int period)
{
	period_ = period;
	setCoreParameter("Period", period);
}

std::string CreateLaunchTemplateVersionRequest::getLaunchTemplateId()const
{
	return launchTemplateId_;
}

void CreateLaunchTemplateVersionRequest::setLaunchTemplateId(const std::string& launchTemplateId)
{
	launchTemplateId_ = launchTemplateId;
	setCoreParameter("LaunchTemplateId", std::to_string(launchTemplateId));
}

long CreateLaunchTemplateVersionRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateLaunchTemplateVersionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

bool CreateLaunchTemplateVersionRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void CreateLaunchTemplateVersionRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool CreateLaunchTemplateVersionRequest::getSecurity_transport()const
{
	return security_transport_;
}

void CreateLaunchTemplateVersionRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string CreateLaunchTemplateVersionRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateLaunchTemplateVersionRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setCoreParameter("VSwitchId", std::to_string(vSwitchId));
}

std::string CreateLaunchTemplateVersionRequest::getSpotStrategy()const
{
	return spotStrategy_;
}

void CreateLaunchTemplateVersionRequest::setSpotStrategy(const std::string& spotStrategy)
{
	spotStrategy_ = spotStrategy;
	setCoreParameter("SpotStrategy", std::to_string(spotStrategy));
}

std::string CreateLaunchTemplateVersionRequest::getInstanceName()const
{
	return instanceName_;
}

void CreateLaunchTemplateVersionRequest::setInstanceName(const std::string& instanceName)
{
	instanceName_ = instanceName;
	setCoreParameter("InstanceName", std::to_string(instanceName));
}

std::string CreateLaunchTemplateVersionRequest::getRequestId()const
{
	return requestId_;
}

void CreateLaunchTemplateVersionRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string CreateLaunchTemplateVersionRequest::getAkProxy()const
{
	return akProxy_;
}

void CreateLaunchTemplateVersionRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", std::to_string(akProxy));
}

std::string CreateLaunchTemplateVersionRequest::getInternetChargeType()const
{
	return internetChargeType_;
}

void CreateLaunchTemplateVersionRequest::setInternetChargeType(const std::string& internetChargeType)
{
	internetChargeType_ = internetChargeType;
	setCoreParameter("InternetChargeType", std::to_string(internetChargeType));
}

std::string CreateLaunchTemplateVersionRequest::getZoneId()const
{
	return zoneId_;
}

void CreateLaunchTemplateVersionRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", std::to_string(zoneId));
}

int CreateLaunchTemplateVersionRequest::getInternetMaxBandwidthIn()const
{
	return internetMaxBandwidthIn_;
}

void CreateLaunchTemplateVersionRequest::setInternetMaxBandwidthIn(int internetMaxBandwidthIn)
{
	internetMaxBandwidthIn_ = internetMaxBandwidthIn;
	setCoreParameter("InternetMaxBandwidthIn", internetMaxBandwidthIn);
}

std::string CreateLaunchTemplateVersionRequest::getVersionDescription()const
{
	return versionDescription_;
}

void CreateLaunchTemplateVersionRequest::setVersionDescription(const std::string& versionDescription)
{
	versionDescription_ = versionDescription;
	setCoreParameter("VersionDescription", std::to_string(versionDescription));
}

std::string CreateLaunchTemplateVersionRequest::getImageId()const
{
	return imageId_;
}

void CreateLaunchTemplateVersionRequest::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
	setCoreParameter("ImageId", std::to_string(imageId));
}

std::string CreateLaunchTemplateVersionRequest::getIoOptimized()const
{
	return ioOptimized_;
}

void CreateLaunchTemplateVersionRequest::setIoOptimized(const std::string& ioOptimized)
{
	ioOptimized_ = ioOptimized;
	setCoreParameter("IoOptimized", std::to_string(ioOptimized));
}

std::string CreateLaunchTemplateVersionRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void CreateLaunchTemplateVersionRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setCoreParameter("SecurityGroupId", std::to_string(securityGroupId));
}

int CreateLaunchTemplateVersionRequest::getInternetMaxBandwidthOut()const
{
	return internetMaxBandwidthOut_;
}

void CreateLaunchTemplateVersionRequest::setInternetMaxBandwidthOut(int internetMaxBandwidthOut)
{
	internetMaxBandwidthOut_ = internetMaxBandwidthOut;
	setCoreParameter("InternetMaxBandwidthOut", internetMaxBandwidthOut);
}

bool CreateLaunchTemplateVersionRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void CreateLaunchTemplateVersionRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string CreateLaunchTemplateVersionRequest::getDescription()const
{
	return description_;
}

void CreateLaunchTemplateVersionRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

std::string CreateLaunchTemplateVersionRequest::getSystemDiskCategory()const
{
	return systemDiskCategory_;
}

void CreateLaunchTemplateVersionRequest::setSystemDiskCategory(const std::string& systemDiskCategory)
{
	systemDiskCategory_ = systemDiskCategory;
	setCoreParameter("SystemDiskCategory", std::to_string(systemDiskCategory));
}

std::string CreateLaunchTemplateVersionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateLaunchTemplateVersionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string CreateLaunchTemplateVersionRequest::getUserData()const
{
	return userData_;
}

void CreateLaunchTemplateVersionRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setCoreParameter("UserData", std::to_string(userData));
}

bool CreateLaunchTemplateVersionRequest::getPasswordInherit()const
{
	return passwordInherit_;
}

void CreateLaunchTemplateVersionRequest::setPasswordInherit(bool passwordInherit)
{
	passwordInherit_ = passwordInherit;
	setCoreParameter("PasswordInherit", passwordInherit ? "true" : "false");
}

std::string CreateLaunchTemplateVersionRequest::getRegionId()const
{
	return regionId_;
}

void CreateLaunchTemplateVersionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string CreateLaunchTemplateVersionRequest::getRequestContent()const
{
	return requestContent_;
}

void CreateLaunchTemplateVersionRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string CreateLaunchTemplateVersionRequest::getInstanceType()const
{
	return instanceType_;
}

void CreateLaunchTemplateVersionRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setCoreParameter("InstanceType", std::to_string(instanceType));
}

std::string CreateLaunchTemplateVersionRequest::getInstanceChargeType()const
{
	return instanceChargeType_;
}

void CreateLaunchTemplateVersionRequest::setInstanceChargeType(const std::string& instanceChargeType)
{
	instanceChargeType_ = instanceChargeType;
	setCoreParameter("InstanceChargeType", std::to_string(instanceChargeType));
}

std::string CreateLaunchTemplateVersionRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void CreateLaunchTemplateVersionRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

bool CreateLaunchTemplateVersionRequest::getEnableVmOsConfig()const
{
	return enableVmOsConfig_;
}

void CreateLaunchTemplateVersionRequest::setEnableVmOsConfig(bool enableVmOsConfig)
{
	enableVmOsConfig_ = enableVmOsConfig;
	setCoreParameter("EnableVmOsConfig", enableVmOsConfig ? "true" : "false");
}

std::vector<CreateLaunchTemplateVersionRequest::NetworkInterface> CreateLaunchTemplateVersionRequest::getNetworkInterface()const
{
	return networkInterface_;
}

void CreateLaunchTemplateVersionRequest::setNetworkInterface(const std::vector<NetworkInterface>& networkInterface)
{
	networkInterface_ = networkInterface;
	int i = 0;
	for(int i = 0; i!= networkInterface.size(); i++)	{
		auto obj = networkInterface.at(i);
		std::string str ="NetworkInterface."+ std::to_string(i);
		setCoreParameter(str + ".PrimaryIpAddress", std::to_string(obj.primaryIpAddress));
		setCoreParameter(str + ".VSwitchId", std::to_string(obj.vSwitchId));
		setCoreParameter(str + ".SecurityGroupId", std::to_string(obj.securityGroupId));
		setCoreParameter(str + ".NetworkInterfaceName", std::to_string(obj.networkInterfaceName));
		setCoreParameter(str + ".Description", std::to_string(obj.description));
	}
}

std::string CreateLaunchTemplateVersionRequest::getApp_ip()const
{
	return app_ip_;
}

void CreateLaunchTemplateVersionRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string CreateLaunchTemplateVersionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateLaunchTemplateVersionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string CreateLaunchTemplateVersionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateLaunchTemplateVersionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string CreateLaunchTemplateVersionRequest::getSystemDiskDiskName()const
{
	return systemDiskDiskName_;
}

void CreateLaunchTemplateVersionRequest::setSystemDiskDiskName(const std::string& systemDiskDiskName)
{
	systemDiskDiskName_ = systemDiskDiskName;
	setCoreParameter("SystemDiskDiskName", std::to_string(systemDiskDiskName));
}

std::string CreateLaunchTemplateVersionRequest::getRamRoleName()const
{
	return ramRoleName_;
}

void CreateLaunchTemplateVersionRequest::setRamRoleName(const std::string& ramRoleName)
{
	ramRoleName_ = ramRoleName;
	setCoreParameter("RamRoleName", std::to_string(ramRoleName));
}

std::string CreateLaunchTemplateVersionRequest::getAutoReleaseTime()const
{
	return autoReleaseTime_;
}

void CreateLaunchTemplateVersionRequest::setAutoReleaseTime(const std::string& autoReleaseTime)
{
	autoReleaseTime_ = autoReleaseTime;
	setCoreParameter("AutoReleaseTime", std::to_string(autoReleaseTime));
}

std::string CreateLaunchTemplateVersionRequest::getCallerBid()const
{
	return callerBid_;
}

void CreateLaunchTemplateVersionRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

int CreateLaunchTemplateVersionRequest::getSpotDuration()const
{
	return spotDuration_;
}

void CreateLaunchTemplateVersionRequest::setSpotDuration(int spotDuration)
{
	spotDuration_ = spotDuration;
	setCoreParameter("SpotDuration", spotDuration);
}

std::vector<CreateLaunchTemplateVersionRequest::DataDisk> CreateLaunchTemplateVersionRequest::getDataDisk()const
{
	return dataDisk_;
}

void CreateLaunchTemplateVersionRequest::setDataDisk(const std::vector<DataDisk>& dataDisk)
{
	dataDisk_ = dataDisk;
	int i = 0;
	for(int i = 0; i!= dataDisk.size(); i++)	{
		auto obj = dataDisk.at(i);
		std::string str ="DataDisk."+ std::to_string(i);
		setCoreParameter(str + ".Size", obj.size);
		setCoreParameter(str + ".SnapshotId", std::to_string(obj.snapshotId));
		setCoreParameter(str + ".Category", std::to_string(obj.category));
		setCoreParameter(str + ".Encrypted", std::to_string(obj.encrypted));
		setCoreParameter(str + ".DiskName", std::to_string(obj.diskName));
		setCoreParameter(str + ".Description", std::to_string(obj.description));
		setCoreParameter(str + ".DeleteWithInstance", obj.deleteWithInstance ? "true" : "false");
		setCoreParameter(str + ".Device", std::to_string(obj.device));
	}
}

bool CreateLaunchTemplateVersionRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void CreateLaunchTemplateVersionRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

int CreateLaunchTemplateVersionRequest::getSystemDiskSize()const
{
	return systemDiskSize_;
}

void CreateLaunchTemplateVersionRequest::setSystemDiskSize(int systemDiskSize)
{
	systemDiskSize_ = systemDiskSize;
	setCoreParameter("SystemDiskSize", systemDiskSize);
}

std::string CreateLaunchTemplateVersionRequest::getVpcId()const
{
	return vpcId_;
}

void CreateLaunchTemplateVersionRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setCoreParameter("VpcId", std::to_string(vpcId));
}

std::string CreateLaunchTemplateVersionRequest::getSystemDiskDescription()const
{
	return systemDiskDescription_;
}

void CreateLaunchTemplateVersionRequest::setSystemDiskDescription(const std::string& systemDiskDescription)
{
	systemDiskDescription_ = systemDiskDescription;
	setCoreParameter("SystemDiskDescription", std::to_string(systemDiskDescription));
}

