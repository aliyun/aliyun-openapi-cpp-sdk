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

std::string CreateLaunchTemplateRequest::getTemplateTag4Key()const
{
	return templateTag4Key_;
}

void CreateLaunchTemplateRequest::setTemplateTag4Key(const std::string& templateTag4Key)
{
	templateTag4Key_ = templateTag4Key;
	setParameter("TemplateTag4Key", templateTag4Key);
}

long CreateLaunchTemplateRequest::getCallerParentId()const
{
	return callerParentId_;
}

void CreateLaunchTemplateRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
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

std::string CreateLaunchTemplateRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void CreateLaunchTemplateRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
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

std::string CreateLaunchTemplateRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void CreateLaunchTemplateRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string CreateLaunchTemplateRequest::getCallerType()const
{
	return callerType_;
}

void CreateLaunchTemplateRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
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

std::string CreateLaunchTemplateRequest::getTemplateTag3Key()const
{
	return templateTag3Key_;
}

void CreateLaunchTemplateRequest::setTemplateTag3Key(const std::string& templateTag3Key)
{
	templateTag3Key_ = templateTag3Key;
	setParameter("TemplateTag3Key", templateTag3Key);
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

std::string CreateLaunchTemplateRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateLaunchTemplateRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

bool CreateLaunchTemplateRequest::getEnable()const
{
	return enable_;
}

void CreateLaunchTemplateRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
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

std::string CreateLaunchTemplateRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void CreateLaunchTemplateRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string CreateLaunchTemplateRequest::getTemplateTag3Value()const
{
	return templateTag3Value_;
}

void CreateLaunchTemplateRequest::setTemplateTag3Value(const std::string& templateTag3Value)
{
	templateTag3Value_ = templateTag3Value;
	setParameter("TemplateTag3Value", templateTag3Value);
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
		setParameter(str + ".Key", obj.key);
		setParameter(str + ".Value", obj.value);
	}
}

long CreateLaunchTemplateRequest::getCallerUid()const
{
	return callerUid_;
}

void CreateLaunchTemplateRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
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

std::string CreateLaunchTemplateRequest::getTemplateTag2Value()const
{
	return templateTag2Value_;
}

void CreateLaunchTemplateRequest::setTemplateTag2Value(const std::string& templateTag2Value)
{
	templateTag2Value_ = templateTag2Value;
	setParameter("TemplateTag2Value", templateTag2Value);
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

bool CreateLaunchTemplateRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void CreateLaunchTemplateRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool CreateLaunchTemplateRequest::getSecurity_transport()const
{
	return security_transport_;
}

void CreateLaunchTemplateRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
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

std::string CreateLaunchTemplateRequest::getRequestId()const
{
	return requestId_;
}

void CreateLaunchTemplateRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
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

std::string CreateLaunchTemplateRequest::getTemplateTag5Key()const
{
	return templateTag5Key_;
}

void CreateLaunchTemplateRequest::setTemplateTag5Key(const std::string& templateTag5Key)
{
	templateTag5Key_ = templateTag5Key;
	setParameter("TemplateTag5Key", templateTag5Key);
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

std::string CreateLaunchTemplateRequest::getTemplateTag1Value()const
{
	return templateTag1Value_;
}

void CreateLaunchTemplateRequest::setTemplateTag1Value(const std::string& templateTag1Value)
{
	templateTag1Value_ = templateTag1Value;
	setParameter("TemplateTag1Value", templateTag1Value);
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

bool CreateLaunchTemplateRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void CreateLaunchTemplateRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
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

std::string CreateLaunchTemplateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateLaunchTemplateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
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

std::string CreateLaunchTemplateRequest::getRegionId()const
{
	return regionId_;
}

void CreateLaunchTemplateRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateLaunchTemplateRequest::getTemplateTag5Value()const
{
	return templateTag5Value_;
}

void CreateLaunchTemplateRequest::setTemplateTag5Value(const std::string& templateTag5Value)
{
	templateTag5Value_ = templateTag5Value;
	setParameter("TemplateTag5Value", templateTag5Value);
}

std::string CreateLaunchTemplateRequest::getRequestContent()const
{
	return requestContent_;
}

void CreateLaunchTemplateRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
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

std::string CreateLaunchTemplateRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void CreateLaunchTemplateRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

bool CreateLaunchTemplateRequest::getEnableVmOsConfig()const
{
	return enableVmOsConfig_;
}

void CreateLaunchTemplateRequest::setEnableVmOsConfig(bool enableVmOsConfig)
{
	enableVmOsConfig_ = enableVmOsConfig;
	setParameter("EnableVmOsConfig", std::to_string(enableVmOsConfig));
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
		setParameter(str + ".PrimaryIpAddress", obj.primaryIpAddress);
		setParameter(str + ".VSwitchId", obj.vSwitchId);
		setParameter(str + ".SecurityGroupId", obj.securityGroupId);
		setParameter(str + ".NetworkInterfaceName", obj.networkInterfaceName);
		setParameter(str + ".Description", obj.description);
	}
}

std::string CreateLaunchTemplateRequest::getApp_ip()const
{
	return app_ip_;
}

void CreateLaunchTemplateRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string CreateLaunchTemplateRequest::getTemplateTag2Key()const
{
	return templateTag2Key_;
}

void CreateLaunchTemplateRequest::setTemplateTag2Key(const std::string& templateTag2Key)
{
	templateTag2Key_ = templateTag2Key;
	setParameter("TemplateTag2Key", templateTag2Key);
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

std::string CreateLaunchTemplateRequest::getCallerBid()const
{
	return callerBid_;
}

void CreateLaunchTemplateRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
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

bool CreateLaunchTemplateRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void CreateLaunchTemplateRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

std::string CreateLaunchTemplateRequest::getTemplateTag4Value()const
{
	return templateTag4Value_;
}

void CreateLaunchTemplateRequest::setTemplateTag4Value(const std::string& templateTag4Value)
{
	templateTag4Value_ = templateTag4Value;
	setParameter("TemplateTag4Value", templateTag4Value);
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

std::string CreateLaunchTemplateRequest::getTemplateTag1Key()const
{
	return templateTag1Key_;
}

void CreateLaunchTemplateRequest::setTemplateTag1Key(const std::string& templateTag1Key)
{
	templateTag1Key_ = templateTag1Key;
	setParameter("TemplateTag1Key", templateTag1Key);
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

