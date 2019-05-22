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

#include <alibabacloud/ecs/model/CreateFleetRequest.h>

using AlibabaCloud::Ecs::Model::CreateFleetRequest;

CreateFleetRequest::CreateFleetRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "CreateFleet")
{}

CreateFleetRequest::~CreateFleetRequest()
{}

long CreateFleetRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateFleetRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateFleetRequest::getFleetType()const
{
	return fleetType_;
}

void CreateFleetRequest::setFleetType(const std::string& fleetType)
{
	fleetType_ = fleetType;
	setCoreParameter("FleetType", fleetType);
}

long CreateFleetRequest::getCallerParentId()const
{
	return callerParentId_;
}

void CreateFleetRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool CreateFleetRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void CreateFleetRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string CreateFleetRequest::getDescription()const
{
	return description_;
}

void CreateFleetRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreateFleetRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void CreateFleetRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

bool CreateFleetRequest::getTerminateInstancesWithExpiration()const
{
	return terminateInstancesWithExpiration_;
}

void CreateFleetRequest::setTerminateInstancesWithExpiration(bool terminateInstancesWithExpiration)
{
	terminateInstancesWithExpiration_ = terminateInstancesWithExpiration;
	setCoreParameter("TerminateInstancesWithExpiration", terminateInstancesWithExpiration ? "true" : "false");
}

std::string CreateFleetRequest::getOnDemandTargetCapacity()const
{
	return onDemandTargetCapacity_;
}

void CreateFleetRequest::setOnDemandTargetCapacity(const std::string& onDemandTargetCapacity)
{
	onDemandTargetCapacity_ = onDemandTargetCapacity;
	setCoreParameter("OnDemandTargetCapacity", onDemandTargetCapacity);
}

std::string CreateFleetRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void CreateFleetRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string CreateFleetRequest::getCallerType()const
{
	return callerType_;
}

void CreateFleetRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string CreateFleetRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateFleetRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateFleetRequest::getFleetName()const
{
	return fleetName_;
}

void CreateFleetRequest::setFleetName(const std::string& fleetName)
{
	fleetName_ = fleetName;
	setCoreParameter("FleetName", fleetName);
}

std::string CreateFleetRequest::getSpotAllocationStrategy()const
{
	return spotAllocationStrategy_;
}

void CreateFleetRequest::setSpotAllocationStrategy(const std::string& spotAllocationStrategy)
{
	spotAllocationStrategy_ = spotAllocationStrategy;
	setCoreParameter("SpotAllocationStrategy", spotAllocationStrategy);
}

std::string CreateFleetRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateFleetRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string CreateFleetRequest::getRegionId()const
{
	return regionId_;
}

void CreateFleetRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool CreateFleetRequest::getEnable()const
{
	return enable_;
}

void CreateFleetRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string CreateFleetRequest::getRequestContent()const
{
	return requestContent_;
}

void CreateFleetRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

bool CreateFleetRequest::getTerminateInstances()const
{
	return terminateInstances_;
}

void CreateFleetRequest::setTerminateInstances(bool terminateInstances)
{
	terminateInstances_ = terminateInstances;
	setCoreParameter("TerminateInstances", terminateInstances ? "true" : "false");
}

std::string CreateFleetRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void CreateFleetRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string CreateFleetRequest::getDefaultTargetCapacityType()const
{
	return defaultTargetCapacityType_;
}

void CreateFleetRequest::setDefaultTargetCapacityType(const std::string& defaultTargetCapacityType)
{
	defaultTargetCapacityType_ = defaultTargetCapacityType;
	setCoreParameter("DefaultTargetCapacityType", defaultTargetCapacityType);
}

std::string CreateFleetRequest::getExcessCapacityTerminationPolicy()const
{
	return excessCapacityTerminationPolicy_;
}

void CreateFleetRequest::setExcessCapacityTerminationPolicy(const std::string& excessCapacityTerminationPolicy)
{
	excessCapacityTerminationPolicy_ = excessCapacityTerminationPolicy;
	setCoreParameter("ExcessCapacityTerminationPolicy", excessCapacityTerminationPolicy);
}

std::vector<CreateFleetRequest::LaunchTemplateConfig> CreateFleetRequest::getLaunchTemplateConfig()const
{
	return launchTemplateConfig_;
}

void CreateFleetRequest::setLaunchTemplateConfig(const std::vector<LaunchTemplateConfig>& launchTemplateConfig)
{
	launchTemplateConfig_ = launchTemplateConfig;
	int i = 0;
	for(int i = 0; i!= launchTemplateConfig.size(); i++)	{
		auto obj = launchTemplateConfig.at(i);
		std::string str ="LaunchTemplateConfig."+ std::to_string(i);
		setCoreParameter(str + ".InstanceType", obj.instanceType);
		setCoreParameter(str + ".MaxPrice", std::to_string(obj.maxPrice));
		setCoreParameter(str + ".VSwitchId", obj.vSwitchId);
		setCoreParameter(str + ".WeightedCapacity", std::to_string(obj.weightedCapacity));
		setCoreParameter(str + ".Priority", std::to_string(obj.priority));
	}
}

std::string CreateFleetRequest::getValidUntil()const
{
	return validUntil_;
}

void CreateFleetRequest::setValidUntil(const std::string& validUntil)
{
	validUntil_ = validUntil;
	setCoreParameter("ValidUntil", validUntil);
}

std::string CreateFleetRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void CreateFleetRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long CreateFleetRequest::getCallerUid()const
{
	return callerUid_;
}

void CreateFleetRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string CreateFleetRequest::getFillGapWithOnDemand()const
{
	return fillGapWithOnDemand_;
}

void CreateFleetRequest::setFillGapWithOnDemand(const std::string& fillGapWithOnDemand)
{
	fillGapWithOnDemand_ = fillGapWithOnDemand;
	setCoreParameter("FillGapWithOnDemand", fillGapWithOnDemand);
}

std::string CreateFleetRequest::getApp_ip()const
{
	return app_ip_;
}

void CreateFleetRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string CreateFleetRequest::getSpotInstanceInterruptionBehavior()const
{
	return spotInstanceInterruptionBehavior_;
}

void CreateFleetRequest::setSpotInstanceInterruptionBehavior(const std::string& spotInstanceInterruptionBehavior)
{
	spotInstanceInterruptionBehavior_ = spotInstanceInterruptionBehavior;
	setCoreParameter("SpotInstanceInterruptionBehavior", spotInstanceInterruptionBehavior);
}

std::string CreateFleetRequest::getLaunchTemplateId()const
{
	return launchTemplateId_;
}

void CreateFleetRequest::setLaunchTemplateId(const std::string& launchTemplateId)
{
	launchTemplateId_ = launchTemplateId;
	setCoreParameter("LaunchTemplateId", launchTemplateId);
}

std::string CreateFleetRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateFleetRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateFleetRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateFleetRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

int CreateFleetRequest::getSpotInstancePoolsToUseCount()const
{
	return spotInstancePoolsToUseCount_;
}

void CreateFleetRequest::setSpotInstancePoolsToUseCount(int spotInstancePoolsToUseCount)
{
	spotInstancePoolsToUseCount_ = spotInstancePoolsToUseCount;
	setCoreParameter("SpotInstancePoolsToUseCount", std::to_string(spotInstancePoolsToUseCount));
}

std::string CreateFleetRequest::getCallerBid()const
{
	return callerBid_;
}

void CreateFleetRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long CreateFleetRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateFleetRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateFleetRequest::getLaunchTemplateVersion()const
{
	return launchTemplateVersion_;
}

void CreateFleetRequest::setLaunchTemplateVersion(const std::string& launchTemplateVersion)
{
	launchTemplateVersion_ = launchTemplateVersion;
	setCoreParameter("LaunchTemplateVersion", launchTemplateVersion);
}

bool CreateFleetRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void CreateFleetRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool CreateFleetRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void CreateFleetRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool CreateFleetRequest::getSecurity_transport()const
{
	return security_transport_;
}

void CreateFleetRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string CreateFleetRequest::getRequestId()const
{
	return requestId_;
}

void CreateFleetRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string CreateFleetRequest::getTotalTargetCapacity()const
{
	return totalTargetCapacity_;
}

void CreateFleetRequest::setTotalTargetCapacity(const std::string& totalTargetCapacity)
{
	totalTargetCapacity_ = totalTargetCapacity;
	setCoreParameter("TotalTargetCapacity", totalTargetCapacity);
}

std::string CreateFleetRequest::getOnDemandAllocationStrategy()const
{
	return onDemandAllocationStrategy_;
}

void CreateFleetRequest::setOnDemandAllocationStrategy(const std::string& onDemandAllocationStrategy)
{
	onDemandAllocationStrategy_ = onDemandAllocationStrategy;
	setCoreParameter("OnDemandAllocationStrategy", onDemandAllocationStrategy);
}

std::string CreateFleetRequest::getSpotTargetCapacity()const
{
	return spotTargetCapacity_;
}

void CreateFleetRequest::setSpotTargetCapacity(const std::string& spotTargetCapacity)
{
	spotTargetCapacity_ = spotTargetCapacity;
	setCoreParameter("SpotTargetCapacity", spotTargetCapacity);
}

std::string CreateFleetRequest::getValidFrom()const
{
	return validFrom_;
}

void CreateFleetRequest::setValidFrom(const std::string& validFrom)
{
	validFrom_ = validFrom;
	setCoreParameter("ValidFrom", validFrom);
}

float CreateFleetRequest::getMaxSpotPrice()const
{
	return maxSpotPrice_;
}

void CreateFleetRequest::setMaxSpotPrice(float maxSpotPrice)
{
	maxSpotPrice_ = maxSpotPrice;
	setCoreParameter("MaxSpotPrice", std::to_string(maxSpotPrice));
}

