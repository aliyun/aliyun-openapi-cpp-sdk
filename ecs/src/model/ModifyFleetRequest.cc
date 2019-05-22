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

#include <alibabacloud/ecs/model/ModifyFleetRequest.h>

using AlibabaCloud::Ecs::Model::ModifyFleetRequest;

ModifyFleetRequest::ModifyFleetRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifyFleet")
{}

ModifyFleetRequest::~ModifyFleetRequest()
{}

long ModifyFleetRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyFleetRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long ModifyFleetRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ModifyFleetRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool ModifyFleetRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ModifyFleetRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string ModifyFleetRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ModifyFleetRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

bool ModifyFleetRequest::getTerminateInstancesWithExpiration()const
{
	return terminateInstancesWithExpiration_;
}

void ModifyFleetRequest::setTerminateInstancesWithExpiration(bool terminateInstancesWithExpiration)
{
	terminateInstancesWithExpiration_ = terminateInstancesWithExpiration;
	setCoreParameter("TerminateInstancesWithExpiration", terminateInstancesWithExpiration ? "true" : "false");
}

std::string ModifyFleetRequest::getOnDemandTargetCapacity()const
{
	return onDemandTargetCapacity_;
}

void ModifyFleetRequest::setOnDemandTargetCapacity(const std::string& onDemandTargetCapacity)
{
	onDemandTargetCapacity_ = onDemandTargetCapacity;
	setCoreParameter("OnDemandTargetCapacity", onDemandTargetCapacity);
}

std::string ModifyFleetRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ModifyFleetRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string ModifyFleetRequest::getCallerType()const
{
	return callerType_;
}

void ModifyFleetRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string ModifyFleetRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyFleetRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifyFleetRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyFleetRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ModifyFleetRequest::getRegionId()const
{
	return regionId_;
}

void ModifyFleetRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool ModifyFleetRequest::getEnable()const
{
	return enable_;
}

void ModifyFleetRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string ModifyFleetRequest::getRequestContent()const
{
	return requestContent_;
}

void ModifyFleetRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string ModifyFleetRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ModifyFleetRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string ModifyFleetRequest::getDefaultTargetCapacityType()const
{
	return defaultTargetCapacityType_;
}

void ModifyFleetRequest::setDefaultTargetCapacityType(const std::string& defaultTargetCapacityType)
{
	defaultTargetCapacityType_ = defaultTargetCapacityType;
	setCoreParameter("DefaultTargetCapacityType", defaultTargetCapacityType);
}

std::string ModifyFleetRequest::getExcessCapacityTerminationPolicy()const
{
	return excessCapacityTerminationPolicy_;
}

void ModifyFleetRequest::setExcessCapacityTerminationPolicy(const std::string& excessCapacityTerminationPolicy)
{
	excessCapacityTerminationPolicy_ = excessCapacityTerminationPolicy;
	setCoreParameter("ExcessCapacityTerminationPolicy", excessCapacityTerminationPolicy);
}

std::string ModifyFleetRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ModifyFleetRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long ModifyFleetRequest::getCallerUid()const
{
	return callerUid_;
}

void ModifyFleetRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string ModifyFleetRequest::getApp_ip()const
{
	return app_ip_;
}

void ModifyFleetRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string ModifyFleetRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyFleetRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyFleetRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyFleetRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ModifyFleetRequest::getCallerBid()const
{
	return callerBid_;
}

void ModifyFleetRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long ModifyFleetRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyFleetRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyFleetRequest::getFleetId()const
{
	return fleetId_;
}

void ModifyFleetRequest::setFleetId(const std::string& fleetId)
{
	fleetId_ = fleetId;
	setCoreParameter("FleetId", fleetId);
}

bool ModifyFleetRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ModifyFleetRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool ModifyFleetRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ModifyFleetRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool ModifyFleetRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ModifyFleetRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string ModifyFleetRequest::getRequestId()const
{
	return requestId_;
}

void ModifyFleetRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string ModifyFleetRequest::getTotalTargetCapacity()const
{
	return totalTargetCapacity_;
}

void ModifyFleetRequest::setTotalTargetCapacity(const std::string& totalTargetCapacity)
{
	totalTargetCapacity_ = totalTargetCapacity;
	setCoreParameter("TotalTargetCapacity", totalTargetCapacity);
}

std::string ModifyFleetRequest::getSpotTargetCapacity()const
{
	return spotTargetCapacity_;
}

void ModifyFleetRequest::setSpotTargetCapacity(const std::string& spotTargetCapacity)
{
	spotTargetCapacity_ = spotTargetCapacity;
	setCoreParameter("SpotTargetCapacity", spotTargetCapacity);
}

float ModifyFleetRequest::getMaxSpotPrice()const
{
	return maxSpotPrice_;
}

void ModifyFleetRequest::setMaxSpotPrice(float maxSpotPrice)
{
	maxSpotPrice_ = maxSpotPrice;
	setCoreParameter("MaxSpotPrice", std::to_string(maxSpotPrice));
}

