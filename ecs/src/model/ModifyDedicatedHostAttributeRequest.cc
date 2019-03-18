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
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long ModifyDedicatedHostAttributeRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ModifyDedicatedHostAttributeRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool ModifyDedicatedHostAttributeRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ModifyDedicatedHostAttributeRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string ModifyDedicatedHostAttributeRequest::getDescription()const
{
	return description_;
}

void ModifyDedicatedHostAttributeRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string ModifyDedicatedHostAttributeRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ModifyDedicatedHostAttributeRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string ModifyDedicatedHostAttributeRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ModifyDedicatedHostAttributeRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string ModifyDedicatedHostAttributeRequest::getCallerType()const
{
	return callerType_;
}

void ModifyDedicatedHostAttributeRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string ModifyDedicatedHostAttributeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDedicatedHostAttributeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyDedicatedHostAttributeRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyDedicatedHostAttributeRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string ModifyDedicatedHostAttributeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyDedicatedHostAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool ModifyDedicatedHostAttributeRequest::getEnable()const
{
	return enable_;
}

void ModifyDedicatedHostAttributeRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", enable ? "true" : "false");
}

std::string ModifyDedicatedHostAttributeRequest::getRequestContent()const
{
	return requestContent_;
}

void ModifyDedicatedHostAttributeRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string ModifyDedicatedHostAttributeRequest::getActionOnMaintenance()const
{
	return actionOnMaintenance_;
}

void ModifyDedicatedHostAttributeRequest::setActionOnMaintenance(const std::string& actionOnMaintenance)
{
	actionOnMaintenance_ = actionOnMaintenance;
	setParameter("ActionOnMaintenance", actionOnMaintenance);
}

std::string ModifyDedicatedHostAttributeRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ModifyDedicatedHostAttributeRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string ModifyDedicatedHostAttributeRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ModifyDedicatedHostAttributeRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long ModifyDedicatedHostAttributeRequest::getCallerUid()const
{
	return callerUid_;
}

void ModifyDedicatedHostAttributeRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string ModifyDedicatedHostAttributeRequest::getApp_ip()const
{
	return app_ip_;
}

void ModifyDedicatedHostAttributeRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string ModifyDedicatedHostAttributeRequest::getDedicatedHostName()const
{
	return dedicatedHostName_;
}

void ModifyDedicatedHostAttributeRequest::setDedicatedHostName(const std::string& dedicatedHostName)
{
	dedicatedHostName_ = dedicatedHostName;
	setParameter("DedicatedHostName", dedicatedHostName);
}

std::string ModifyDedicatedHostAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDedicatedHostAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyDedicatedHostAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyDedicatedHostAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ModifyDedicatedHostAttributeRequest::getDedicatedHostId()const
{
	return dedicatedHostId_;
}

void ModifyDedicatedHostAttributeRequest::setDedicatedHostId(const std::string& dedicatedHostId)
{
	dedicatedHostId_ = dedicatedHostId;
	setParameter("DedicatedHostId", dedicatedHostId);
}

std::string ModifyDedicatedHostAttributeRequest::getCallerBid()const
{
	return callerBid_;
}

void ModifyDedicatedHostAttributeRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long ModifyDedicatedHostAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDedicatedHostAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool ModifyDedicatedHostAttributeRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ModifyDedicatedHostAttributeRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool ModifyDedicatedHostAttributeRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ModifyDedicatedHostAttributeRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool ModifyDedicatedHostAttributeRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ModifyDedicatedHostAttributeRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", security_transport ? "true" : "false");
}

std::string ModifyDedicatedHostAttributeRequest::getRequestId()const
{
	return requestId_;
}

void ModifyDedicatedHostAttributeRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

int ModifyDedicatedHostAttributeRequest::getNetworkAttributesSlbUdpTimeout()const
{
	return networkAttributesSlbUdpTimeout_;
}

void ModifyDedicatedHostAttributeRequest::setNetworkAttributesSlbUdpTimeout(int networkAttributesSlbUdpTimeout)
{
	networkAttributesSlbUdpTimeout_ = networkAttributesSlbUdpTimeout;
	setParameter("NetworkAttributesSlbUdpTimeout", std::to_string(networkAttributesSlbUdpTimeout));
}

int ModifyDedicatedHostAttributeRequest::getNetworkAttributesUdpTimeout()const
{
	return networkAttributesUdpTimeout_;
}

void ModifyDedicatedHostAttributeRequest::setNetworkAttributesUdpTimeout(int networkAttributesUdpTimeout)
{
	networkAttributesUdpTimeout_ = networkAttributesUdpTimeout;
	setParameter("NetworkAttributesUdpTimeout", std::to_string(networkAttributesUdpTimeout));
}

