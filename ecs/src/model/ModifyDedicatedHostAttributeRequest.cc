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

#include <alibabacloud/ecs/model/ModifyDedicatedHostAttributeRequest.h>

using AlibabaCloud::Ecs::Model::ModifyDedicatedHostAttributeRequest;

ModifyDedicatedHostAttributeRequest::ModifyDedicatedHostAttributeRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifyDedicatedHostAttribute")
{}

ModifyDedicatedHostAttributeRequest::~ModifyDedicatedHostAttributeRequest()
{}

long ModifyDedicatedHostAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDedicatedHostAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long ModifyDedicatedHostAttributeRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ModifyDedicatedHostAttributeRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool ModifyDedicatedHostAttributeRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ModifyDedicatedHostAttributeRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string ModifyDedicatedHostAttributeRequest::getDescription()const
{
	return description_;
}

void ModifyDedicatedHostAttributeRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

std::string ModifyDedicatedHostAttributeRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ModifyDedicatedHostAttributeRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string ModifyDedicatedHostAttributeRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ModifyDedicatedHostAttributeRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string ModifyDedicatedHostAttributeRequest::getCallerType()const
{
	return callerType_;
}

void ModifyDedicatedHostAttributeRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string ModifyDedicatedHostAttributeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDedicatedHostAttributeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string ModifyDedicatedHostAttributeRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void ModifyDedicatedHostAttributeRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", std::to_string(sourceRegionId));
}

std::string ModifyDedicatedHostAttributeRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyDedicatedHostAttributeRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string ModifyDedicatedHostAttributeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyDedicatedHostAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

bool ModifyDedicatedHostAttributeRequest::getEnable()const
{
	return enable_;
}

void ModifyDedicatedHostAttributeRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string ModifyDedicatedHostAttributeRequest::getRequestContent()const
{
	return requestContent_;
}

void ModifyDedicatedHostAttributeRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string ModifyDedicatedHostAttributeRequest::getActionOnMaintenance()const
{
	return actionOnMaintenance_;
}

void ModifyDedicatedHostAttributeRequest::setActionOnMaintenance(const std::string& actionOnMaintenance)
{
	actionOnMaintenance_ = actionOnMaintenance;
	setCoreParameter("ActionOnMaintenance", std::to_string(actionOnMaintenance));
}

std::string ModifyDedicatedHostAttributeRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ModifyDedicatedHostAttributeRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string ModifyDedicatedHostAttributeRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ModifyDedicatedHostAttributeRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long ModifyDedicatedHostAttributeRequest::getCallerUid()const
{
	return callerUid_;
}

void ModifyDedicatedHostAttributeRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string ModifyDedicatedHostAttributeRequest::getApp_ip()const
{
	return app_ip_;
}

void ModifyDedicatedHostAttributeRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string ModifyDedicatedHostAttributeRequest::getDedicatedHostName()const
{
	return dedicatedHostName_;
}

void ModifyDedicatedHostAttributeRequest::setDedicatedHostName(const std::string& dedicatedHostName)
{
	dedicatedHostName_ = dedicatedHostName;
	setCoreParameter("DedicatedHostName", std::to_string(dedicatedHostName));
}

std::string ModifyDedicatedHostAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDedicatedHostAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string ModifyDedicatedHostAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyDedicatedHostAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string ModifyDedicatedHostAttributeRequest::getDedicatedHostId()const
{
	return dedicatedHostId_;
}

void ModifyDedicatedHostAttributeRequest::setDedicatedHostId(const std::string& dedicatedHostId)
{
	dedicatedHostId_ = dedicatedHostId;
	setCoreParameter("DedicatedHostId", std::to_string(dedicatedHostId));
}

std::string ModifyDedicatedHostAttributeRequest::getCallerBid()const
{
	return callerBid_;
}

void ModifyDedicatedHostAttributeRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long ModifyDedicatedHostAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDedicatedHostAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

bool ModifyDedicatedHostAttributeRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ModifyDedicatedHostAttributeRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool ModifyDedicatedHostAttributeRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ModifyDedicatedHostAttributeRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool ModifyDedicatedHostAttributeRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ModifyDedicatedHostAttributeRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string ModifyDedicatedHostAttributeRequest::getRequestId()const
{
	return requestId_;
}

void ModifyDedicatedHostAttributeRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string ModifyDedicatedHostAttributeRequest::getAkProxy()const
{
	return akProxy_;
}

void ModifyDedicatedHostAttributeRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", std::to_string(akProxy));
}

int ModifyDedicatedHostAttributeRequest::getNetworkAttributesSlbUdpTimeout()const
{
	return networkAttributesSlbUdpTimeout_;
}

void ModifyDedicatedHostAttributeRequest::setNetworkAttributesSlbUdpTimeout(int networkAttributesSlbUdpTimeout)
{
	networkAttributesSlbUdpTimeout_ = networkAttributesSlbUdpTimeout;
	setCoreParameter("NetworkAttributesSlbUdpTimeout", networkAttributesSlbUdpTimeout);
}

std::string ModifyDedicatedHostAttributeRequest::getAutoPlacement()const
{
	return autoPlacement_;
}

void ModifyDedicatedHostAttributeRequest::setAutoPlacement(const std::string& autoPlacement)
{
	autoPlacement_ = autoPlacement;
	setCoreParameter("AutoPlacement", std::to_string(autoPlacement));
}

int ModifyDedicatedHostAttributeRequest::getNetworkAttributesUdpTimeout()const
{
	return networkAttributesUdpTimeout_;
}

void ModifyDedicatedHostAttributeRequest::setNetworkAttributesUdpTimeout(int networkAttributesUdpTimeout)
{
	networkAttributesUdpTimeout_ = networkAttributesUdpTimeout;
	setCoreParameter("NetworkAttributesUdpTimeout", networkAttributesUdpTimeout);
}

