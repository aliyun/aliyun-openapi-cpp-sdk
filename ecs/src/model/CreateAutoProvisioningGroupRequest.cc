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

#include <alibabacloud/ecs/model/CreateAutoProvisioningGroupRequest.h>

using AlibabaCloud::Ecs::Model::CreateAutoProvisioningGroupRequest;

CreateAutoProvisioningGroupRequest::CreateAutoProvisioningGroupRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "CreateAutoProvisioningGroup")
{}

CreateAutoProvisioningGroupRequest::~CreateAutoProvisioningGroupRequest()
{}

long CreateAutoProvisioningGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateAutoProvisioningGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long CreateAutoProvisioningGroupRequest::getCallerParentId()const
{
	return callerParentId_;
}

void CreateAutoProvisioningGroupRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

std::string CreateAutoProvisioningGroupRequest::getAutoProvisioningGroupType()const
{
	return autoProvisioningGroupType_;
}

void CreateAutoProvisioningGroupRequest::setAutoProvisioningGroupType(const std::string& autoProvisioningGroupType)
{
	autoProvisioningGroupType_ = autoProvisioningGroupType;
	setCoreParameter("AutoProvisioningGroupType", std::to_string(autoProvisioningGroupType));
}

bool CreateAutoProvisioningGroupRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void CreateAutoProvisioningGroupRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string CreateAutoProvisioningGroupRequest::getDescription()const
{
	return description_;
}

void CreateAutoProvisioningGroupRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

std::string CreateAutoProvisioningGroupRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void CreateAutoProvisioningGroupRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

bool CreateAutoProvisioningGroupRequest::getTerminateInstancesWithExpiration()const
{
	return terminateInstancesWithExpiration_;
}

void CreateAutoProvisioningGroupRequest::setTerminateInstancesWithExpiration(bool terminateInstancesWithExpiration)
{
	terminateInstancesWithExpiration_ = terminateInstancesWithExpiration;
	setCoreParameter("TerminateInstancesWithExpiration", terminateInstancesWithExpiration ? "true" : "false");
}

std::string CreateAutoProvisioningGroupRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void CreateAutoProvisioningGroupRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string CreateAutoProvisioningGroupRequest::getCallerType()const
{
	return callerType_;
}

void CreateAutoProvisioningGroupRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string CreateAutoProvisioningGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateAutoProvisioningGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string CreateAutoProvisioningGroupRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateAutoProvisioningGroupRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", std::to_string(resourceGroupId));
}

std::string CreateAutoProvisioningGroupRequest::getSpotAllocationStrategy()const
{
	return spotAllocationStrategy_;
}

void CreateAutoProvisioningGroupRequest::setSpotAllocationStrategy(const std::string& spotAllocationStrategy)
{
	spotAllocationStrategy_ = spotAllocationStrategy;
	setCoreParameter("SpotAllocationStrategy", std::to_string(spotAllocationStrategy));
}

std::string CreateAutoProvisioningGroupRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateAutoProvisioningGroupRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string CreateAutoProvisioningGroupRequest::getRegionId()const
{
	return regionId_;
}

void CreateAutoProvisioningGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

bool CreateAutoProvisioningGroupRequest::getEnable()const
{
	return enable_;
}

void CreateAutoProvisioningGroupRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string CreateAutoProvisioningGroupRequest::getRequestContent()const
{
	return requestContent_;
}

void CreateAutoProvisioningGroupRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

bool CreateAutoProvisioningGroupRequest::getTerminateInstances()const
{
	return terminateInstances_;
}

void CreateAutoProvisioningGroupRequest::setTerminateInstances(bool terminateInstances)
{
	terminateInstances_ = terminateInstances;
	setCoreParameter("TerminateInstances", terminateInstances ? "true" : "false");
}

std::string CreateAutoProvisioningGroupRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void CreateAutoProvisioningGroupRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string CreateAutoProvisioningGroupRequest::getPayAsYouGoAllocationStrategy()const
{
	return payAsYouGoAllocationStrategy_;
}

void CreateAutoProvisioningGroupRequest::setPayAsYouGoAllocationStrategy(const std::string& payAsYouGoAllocationStrategy)
{
	payAsYouGoAllocationStrategy_ = payAsYouGoAllocationStrategy;
	setCoreParameter("PayAsYouGoAllocationStrategy", std::to_string(payAsYouGoAllocationStrategy));
}

std::string CreateAutoProvisioningGroupRequest::getDefaultTargetCapacityType()const
{
	return defaultTargetCapacityType_;
}

void CreateAutoProvisioningGroupRequest::setDefaultTargetCapacityType(const std::string& defaultTargetCapacityType)
{
	defaultTargetCapacityType_ = defaultTargetCapacityType;
	setCoreParameter("DefaultTargetCapacityType", std::to_string(defaultTargetCapacityType));
}

std::string CreateAutoProvisioningGroupRequest::getExcessCapacityTerminationPolicy()const
{
	return excessCapacityTerminationPolicy_;
}

void CreateAutoProvisioningGroupRequest::setExcessCapacityTerminationPolicy(const std::string& excessCapacityTerminationPolicy)
{
	excessCapacityTerminationPolicy_ = excessCapacityTerminationPolicy;
	setCoreParameter("ExcessCapacityTerminationPolicy", std::to_string(excessCapacityTerminationPolicy));
}

std::vector<CreateAutoProvisioningGroupRequest::LaunchTemplateConfig> CreateAutoProvisioningGroupRequest::getLaunchTemplateConfig()const
{
	return launchTemplateConfig_;
}

void CreateAutoProvisioningGroupRequest::setLaunchTemplateConfig(const std::vector<LaunchTemplateConfig>& launchTemplateConfig)
{
	launchTemplateConfig_ = launchTemplateConfig;
	int i = 0;
	for(int i = 0; i!= launchTemplateConfig.size(); i++)	{
		auto obj = launchTemplateConfig.at(i);
		std::string str ="LaunchTemplateConfig."+ std::to_string(i);
		setCoreParameter(str + ".InstanceType", std::to_string(obj.instanceType));
		setCoreParameter(str + ".MaxPrice", obj.maxPrice);
		setCoreParameter(str + ".VSwitchId", std::to_string(obj.vSwitchId));
		setCoreParameter(str + ".WeightedCapacity", obj.weightedCapacity);
		setCoreParameter(str + ".Priority", obj.priority);
	}
}

std::string CreateAutoProvisioningGroupRequest::getValidUntil()const
{
	return validUntil_;
}

void CreateAutoProvisioningGroupRequest::setValidUntil(const std::string& validUntil)
{
	validUntil_ = validUntil;
	setCoreParameter("ValidUntil", std::to_string(validUntil));
}

std::string CreateAutoProvisioningGroupRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void CreateAutoProvisioningGroupRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long CreateAutoProvisioningGroupRequest::getCallerUid()const
{
	return callerUid_;
}

void CreateAutoProvisioningGroupRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string CreateAutoProvisioningGroupRequest::getApp_ip()const
{
	return app_ip_;
}

void CreateAutoProvisioningGroupRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string CreateAutoProvisioningGroupRequest::getSpotInstanceInterruptionBehavior()const
{
	return spotInstanceInterruptionBehavior_;
}

void CreateAutoProvisioningGroupRequest::setSpotInstanceInterruptionBehavior(const std::string& spotInstanceInterruptionBehavior)
{
	spotInstanceInterruptionBehavior_ = spotInstanceInterruptionBehavior;
	setCoreParameter("SpotInstanceInterruptionBehavior", std::to_string(spotInstanceInterruptionBehavior));
}

std::string CreateAutoProvisioningGroupRequest::getLaunchTemplateId()const
{
	return launchTemplateId_;
}

void CreateAutoProvisioningGroupRequest::setLaunchTemplateId(const std::string& launchTemplateId)
{
	launchTemplateId_ = launchTemplateId;
	setCoreParameter("LaunchTemplateId", std::to_string(launchTemplateId));
}

std::string CreateAutoProvisioningGroupRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateAutoProvisioningGroupRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string CreateAutoProvisioningGroupRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateAutoProvisioningGroupRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

int CreateAutoProvisioningGroupRequest::getSpotInstancePoolsToUseCount()const
{
	return spotInstancePoolsToUseCount_;
}

void CreateAutoProvisioningGroupRequest::setSpotInstancePoolsToUseCount(int spotInstancePoolsToUseCount)
{
	spotInstancePoolsToUseCount_ = spotInstancePoolsToUseCount;
	setCoreParameter("SpotInstancePoolsToUseCount", spotInstancePoolsToUseCount);
}

std::string CreateAutoProvisioningGroupRequest::getCallerBid()const
{
	return callerBid_;
}

void CreateAutoProvisioningGroupRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long CreateAutoProvisioningGroupRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateAutoProvisioningGroupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string CreateAutoProvisioningGroupRequest::getLaunchTemplateVersion()const
{
	return launchTemplateVersion_;
}

void CreateAutoProvisioningGroupRequest::setLaunchTemplateVersion(const std::string& launchTemplateVersion)
{
	launchTemplateVersion_ = launchTemplateVersion;
	setCoreParameter("LaunchTemplateVersion", std::to_string(launchTemplateVersion));
}

bool CreateAutoProvisioningGroupRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void CreateAutoProvisioningGroupRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool CreateAutoProvisioningGroupRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void CreateAutoProvisioningGroupRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool CreateAutoProvisioningGroupRequest::getSecurity_transport()const
{
	return security_transport_;
}

void CreateAutoProvisioningGroupRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string CreateAutoProvisioningGroupRequest::getPayAsYouGoTargetCapacity()const
{
	return payAsYouGoTargetCapacity_;
}

void CreateAutoProvisioningGroupRequest::setPayAsYouGoTargetCapacity(const std::string& payAsYouGoTargetCapacity)
{
	payAsYouGoTargetCapacity_ = payAsYouGoTargetCapacity;
	setCoreParameter("PayAsYouGoTargetCapacity", std::to_string(payAsYouGoTargetCapacity));
}

std::string CreateAutoProvisioningGroupRequest::getRequestId()const
{
	return requestId_;
}

void CreateAutoProvisioningGroupRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string CreateAutoProvisioningGroupRequest::getAkProxy()const
{
	return akProxy_;
}

void CreateAutoProvisioningGroupRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", std::to_string(akProxy));
}

std::string CreateAutoProvisioningGroupRequest::getTotalTargetCapacity()const
{
	return totalTargetCapacity_;
}

void CreateAutoProvisioningGroupRequest::setTotalTargetCapacity(const std::string& totalTargetCapacity)
{
	totalTargetCapacity_ = totalTargetCapacity;
	setCoreParameter("TotalTargetCapacity", std::to_string(totalTargetCapacity));
}

std::string CreateAutoProvisioningGroupRequest::getSpotTargetCapacity()const
{
	return spotTargetCapacity_;
}

void CreateAutoProvisioningGroupRequest::setSpotTargetCapacity(const std::string& spotTargetCapacity)
{
	spotTargetCapacity_ = spotTargetCapacity;
	setCoreParameter("SpotTargetCapacity", std::to_string(spotTargetCapacity));
}

std::string CreateAutoProvisioningGroupRequest::getValidFrom()const
{
	return validFrom_;
}

void CreateAutoProvisioningGroupRequest::setValidFrom(const std::string& validFrom)
{
	validFrom_ = validFrom;
	setCoreParameter("ValidFrom", std::to_string(validFrom));
}

std::string CreateAutoProvisioningGroupRequest::getAutoProvisioningGroupName()const
{
	return autoProvisioningGroupName_;
}

void CreateAutoProvisioningGroupRequest::setAutoProvisioningGroupName(const std::string& autoProvisioningGroupName)
{
	autoProvisioningGroupName_ = autoProvisioningGroupName;
	setCoreParameter("AutoProvisioningGroupName", std::to_string(autoProvisioningGroupName));
}

float CreateAutoProvisioningGroupRequest::getMaxSpotPrice()const
{
	return maxSpotPrice_;
}

void CreateAutoProvisioningGroupRequest::setMaxSpotPrice(float maxSpotPrice)
{
	maxSpotPrice_ = maxSpotPrice;
	setCoreParameter("MaxSpotPrice", maxSpotPrice);
}

