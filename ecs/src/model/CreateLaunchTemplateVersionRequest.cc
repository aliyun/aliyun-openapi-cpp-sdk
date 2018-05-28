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

long CreateLaunchTemplateVersionRequest::getCallerParentId()const
{
	return callerParentId_;
}

void CreateLaunchTemplateVersionRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
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

std::string CreateLaunchTemplateVersionRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void CreateLaunchTemplateVersionRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
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

std::string CreateLaunchTemplateVersionRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void CreateLaunchTemplateVersionRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string CreateLaunchTemplateVersionRequest::getCallerType()const
{
	return callerType_;
}

void CreateLaunchTemplateVersionRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
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

std::string CreateLaunchTemplateVersionRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateLaunchTemplateVersionRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

bool CreateLaunchTemplateVersionRequest::getEnable()const
{
	return enable_;
}

void CreateLaunchTemplateVersionRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
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

std::string CreateLaunchTemplateVersionRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void CreateLaunchTemplateVersionRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
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
		setParameter(str + ".Key", obj.key);
		setParameter(str + ".Value", obj.value);
	}
}

long CreateLaunchTemplateVersionRequest::getCallerUid()const
{
	return callerUid_;
}

void CreateLaunchTemplateVersionRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
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

bool CreateLaunchTemplateVersionRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void CreateLaunchTemplateVersionRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool CreateLaunchTemplateVersionRequest::getSecurity_transport()const
{
	return security_transport_;
}

void CreateLaunchTemplateVersionRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
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

std::string CreateLaunchTemplateVersionRequest::getRequestId()const
{
	return requestId_;
}

void CreateLaunchTemplateVersionRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
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

bool CreateLaunchTemplateVersionRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void CreateLaunchTemplateVersionRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
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

std::string CreateLaunchTemplateVersionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateLaunchTemplateVersionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
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

std::string CreateLaunchTemplateVersionRequest::getRegionId()const
{
	return regionId_;
}

void CreateLaunchTemplateVersionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateLaunchTemplateVersionRequest::getRequestContent()const
{
	return requestContent_;
}

void CreateLaunchTemplateVersionRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
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

std::string CreateLaunchTemplateVersionRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void CreateLaunchTemplateVersionRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

bool CreateLaunchTemplateVersionRequest::getEnableVmOsConfig()const
{
	return enableVmOsConfig_;
}

void CreateLaunchTemplateVersionRequest::setEnableVmOsConfig(bool enableVmOsConfig)
{
	enableVmOsConfig_ = enableVmOsConfig;
	setParameter("EnableVmOsConfig", std::to_string(enableVmOsConfig));
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
		setParameter(str + ".PrimaryIpAddress", obj.primaryIpAddress);
		setParameter(str + ".VSwitchId", obj.vSwitchId);
		setParameter(str + ".SecurityGroupId", obj.securityGroupId);
		setParameter(str + ".NetworkInterfaceName", obj.networkInterfaceName);
		setParameter(str + ".Description", obj.description);
	}
}

std::string CreateLaunchTemplateVersionRequest::getApp_ip()const
{
	return app_ip_;
}

void CreateLaunchTemplateVersionRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
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

std::string CreateLaunchTemplateVersionRequest::getCallerBid()const
{
	return callerBid_;
}

void CreateLaunchTemplateVersionRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
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
		setParameter(str + ".DeleteWithInstance", std::to_string(obj.deleteWithInstance));
	}
}

bool CreateLaunchTemplateVersionRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void CreateLaunchTemplateVersionRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
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

