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

#include <alibabacloud/ecs/model/ModifyAutoProvisioningGroupRequest.h>

using AlibabaCloud::Ecs::Model::ModifyAutoProvisioningGroupRequest;

ModifyAutoProvisioningGroupRequest::ModifyAutoProvisioningGroupRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifyAutoProvisioningGroup")
{}

ModifyAutoProvisioningGroupRequest::~ModifyAutoProvisioningGroupRequest()
{}

long ModifyAutoProvisioningGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyAutoProvisioningGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long ModifyAutoProvisioningGroupRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ModifyAutoProvisioningGroupRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool ModifyAutoProvisioningGroupRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ModifyAutoProvisioningGroupRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string ModifyAutoProvisioningGroupRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ModifyAutoProvisioningGroupRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

bool ModifyAutoProvisioningGroupRequest::getTerminateInstancesWithExpiration()const
{
	return terminateInstancesWithExpiration_;
}

void ModifyAutoProvisioningGroupRequest::setTerminateInstancesWithExpiration(bool terminateInstancesWithExpiration)
{
	terminateInstancesWithExpiration_ = terminateInstancesWithExpiration;
	setCoreParameter("TerminateInstancesWithExpiration", terminateInstancesWithExpiration);
}

std::string ModifyAutoProvisioningGroupRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ModifyAutoProvisioningGroupRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string ModifyAutoProvisioningGroupRequest::getCallerType()const
{
	return callerType_;
}

void ModifyAutoProvisioningGroupRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string ModifyAutoProvisioningGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyAutoProvisioningGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifyAutoProvisioningGroupRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyAutoProvisioningGroupRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ModifyAutoProvisioningGroupRequest::getRegionId()const
{
	return regionId_;
}

void ModifyAutoProvisioningGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool ModifyAutoProvisioningGroupRequest::getEnable()const
{
	return enable_;
}

void ModifyAutoProvisioningGroupRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable);
}

std::string ModifyAutoProvisioningGroupRequest::getRequestContent()const
{
	return requestContent_;
}

void ModifyAutoProvisioningGroupRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string ModifyAutoProvisioningGroupRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ModifyAutoProvisioningGroupRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string ModifyAutoProvisioningGroupRequest::getDefaultTargetCapacityType()const
{
	return defaultTargetCapacityType_;
}

void ModifyAutoProvisioningGroupRequest::setDefaultTargetCapacityType(const std::string& defaultTargetCapacityType)
{
	defaultTargetCapacityType_ = defaultTargetCapacityType;
	setCoreParameter("DefaultTargetCapacityType", defaultTargetCapacityType);
}

std::string ModifyAutoProvisioningGroupRequest::getExcessCapacityTerminationPolicy()const
{
	return excessCapacityTerminationPolicy_;
}

void ModifyAutoProvisioningGroupRequest::setExcessCapacityTerminationPolicy(const std::string& excessCapacityTerminationPolicy)
{
	excessCapacityTerminationPolicy_ = excessCapacityTerminationPolicy;
	setCoreParameter("ExcessCapacityTerminationPolicy", excessCapacityTerminationPolicy);
}

std::string ModifyAutoProvisioningGroupRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ModifyAutoProvisioningGroupRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long ModifyAutoProvisioningGroupRequest::getCallerUid()const
{
	return callerUid_;
}

void ModifyAutoProvisioningGroupRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string ModifyAutoProvisioningGroupRequest::getApp_ip()const
{
	return app_ip_;
}

void ModifyAutoProvisioningGroupRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string ModifyAutoProvisioningGroupRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyAutoProvisioningGroupRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyAutoProvisioningGroupRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyAutoProvisioningGroupRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ModifyAutoProvisioningGroupRequest::getCallerBid()const
{
	return callerBid_;
}

void ModifyAutoProvisioningGroupRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long ModifyAutoProvisioningGroupRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyAutoProvisioningGroupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

bool ModifyAutoProvisioningGroupRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ModifyAutoProvisioningGroupRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

bool ModifyAutoProvisioningGroupRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ModifyAutoProvisioningGroupRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

std::string ModifyAutoProvisioningGroupRequest::getAutoProvisioningGroupId()const
{
	return autoProvisioningGroupId_;
}

void ModifyAutoProvisioningGroupRequest::setAutoProvisioningGroupId(const std::string& autoProvisioningGroupId)
{
	autoProvisioningGroupId_ = autoProvisioningGroupId;
	setCoreParameter("AutoProvisioningGroupId", autoProvisioningGroupId);
}

bool ModifyAutoProvisioningGroupRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ModifyAutoProvisioningGroupRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string ModifyAutoProvisioningGroupRequest::getPayAsYouGoTargetCapacity()const
{
	return payAsYouGoTargetCapacity_;
}

void ModifyAutoProvisioningGroupRequest::setPayAsYouGoTargetCapacity(const std::string& payAsYouGoTargetCapacity)
{
	payAsYouGoTargetCapacity_ = payAsYouGoTargetCapacity;
	setCoreParameter("PayAsYouGoTargetCapacity", payAsYouGoTargetCapacity);
}

std::string ModifyAutoProvisioningGroupRequest::getRequestId()const
{
	return requestId_;
}

void ModifyAutoProvisioningGroupRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string ModifyAutoProvisioningGroupRequest::getAkProxy()const
{
	return akProxy_;
}

void ModifyAutoProvisioningGroupRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", akProxy);
}

std::string ModifyAutoProvisioningGroupRequest::getTotalTargetCapacity()const
{
	return totalTargetCapacity_;
}

void ModifyAutoProvisioningGroupRequest::setTotalTargetCapacity(const std::string& totalTargetCapacity)
{
	totalTargetCapacity_ = totalTargetCapacity;
	setCoreParameter("TotalTargetCapacity", totalTargetCapacity);
}

std::string ModifyAutoProvisioningGroupRequest::getSpotTargetCapacity()const
{
	return spotTargetCapacity_;
}

void ModifyAutoProvisioningGroupRequest::setSpotTargetCapacity(const std::string& spotTargetCapacity)
{
	spotTargetCapacity_ = spotTargetCapacity;
	setCoreParameter("SpotTargetCapacity", spotTargetCapacity);
}

float ModifyAutoProvisioningGroupRequest::getMaxSpotPrice()const
{
	return maxSpotPrice_;
}

void ModifyAutoProvisioningGroupRequest::setMaxSpotPrice(float maxSpotPrice)
{
	maxSpotPrice_ = maxSpotPrice;
	setCoreParameter("MaxSpotPrice", maxSpotPrice);
}

std::string ModifyAutoProvisioningGroupRequest::getAutoProvisioningGroupName()const
{
	return autoProvisioningGroupName_;
}

void ModifyAutoProvisioningGroupRequest::setAutoProvisioningGroupName(const std::string& autoProvisioningGroupName)
{
	autoProvisioningGroupName_ = autoProvisioningGroupName;
	setCoreParameter("AutoProvisioningGroupName", autoProvisioningGroupName);
}

