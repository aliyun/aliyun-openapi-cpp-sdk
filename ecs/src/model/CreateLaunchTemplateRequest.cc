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
{}

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

long CreateLaunchTemplateRequest::getCallerParentId()const
{
	return callerParentId_;
}

void CreateLaunchTemplateRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
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

std::string CreateLaunchTemplateRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void CreateLaunchTemplateRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
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

std::string CreateLaunchTemplateRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void CreateLaunchTemplateRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string CreateLaunchTemplateRequest::getCallerType()const
{
	return callerType_;
}

void CreateLaunchTemplateRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
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

std::string CreateLaunchTemplateRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void CreateLaunchTemplateRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
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

std::string CreateLaunchTemplateRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateLaunchTemplateRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

bool CreateLaunchTemplateRequest::getEnable()const
{
	return enable_;
}

void CreateLaunchTemplateRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
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

std::string CreateLaunchTemplateRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void CreateLaunchTemplateRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::vector<CreateLaunchTemplateRequest::TemplateTag> CreateLaunchTemplateRequest::getTemplateTag()const
{
	return templateTag_;
}

void CreateLaunchTemplateRequest::setTemplateTag(const std::vector<TemplateTag>& templateTag)
{
	templateTag_ = templateTag;
	int i = 0;
	for(int i = 0; i!= templateTag.size(); i++)	{
		auto obj = templateTag.at(i);
		std::string str ="TemplateTag."+ std::to_string(i);
		setCoreParameter(str + ".Key", obj.key);
		setCoreParameter(str + ".Value", obj.value);
	}
}

std::vector<CreateLaunchTemplateRequest::Tag> CreateLaunchTemplateRequest::getTag()const
{
	return tag_;
}

void CreateLaunchTemplateRequest::setTag(const std::vector<Tag>& tag)
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

long CreateLaunchTemplateRequest::getCallerUid()const
{
	return callerUid_;
}

void CreateLaunchTemplateRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
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

bool CreateLaunchTemplateRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void CreateLaunchTemplateRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool CreateLaunchTemplateRequest::getSecurity_transport()const
{
	return security_transport_;
}

void CreateLaunchTemplateRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
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

std::string CreateLaunchTemplateRequest::getRequestId()const
{
	return requestId_;
}

void CreateLaunchTemplateRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string CreateLaunchTemplateRequest::getAkProxy()const
{
	return akProxy_;
}

void CreateLaunchTemplateRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", akProxy);
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

bool CreateLaunchTemplateRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void CreateLaunchTemplateRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
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

std::string CreateLaunchTemplateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateLaunchTemplateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
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

std::string CreateLaunchTemplateRequest::getRequestContent()const
{
	return requestContent_;
}

void CreateLaunchTemplateRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
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

std::string CreateLaunchTemplateRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void CreateLaunchTemplateRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
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

std::string CreateLaunchTemplateRequest::getApp_ip()const
{
	return app_ip_;
}

void CreateLaunchTemplateRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
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

std::string CreateLaunchTemplateRequest::getCallerBid()const
{
	return callerBid_;
}

void CreateLaunchTemplateRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
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
	int i = 0;
	for(int i = 0; i!= dataDisk.size(); i++)	{
		auto obj = dataDisk.at(i);
		std::string str ="DataDisk."+ std::to_string(i);
		setCoreParameter(str + ".Size", std::to_string(obj.size));
		setCoreParameter(str + ".SnapshotId", obj.snapshotId);
		setCoreParameter(str + ".Category", obj.category);
		setCoreParameter(str + ".Encrypted", obj.encrypted);
		setCoreParameter(str + ".DiskName", obj.diskName);
		setCoreParameter(str + ".Description", obj.description);
		setCoreParameter(str + ".DeleteWithInstance", obj.deleteWithInstance ? "true" : "false");
		setCoreParameter(str + ".Device", obj.device);
	}
}

bool CreateLaunchTemplateRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void CreateLaunchTemplateRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
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

