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

#include <alibabacloud/vpc/model/ModifyIpv6AddressAttributeRequest.h>

using AlibabaCloud::Vpc::Model::ModifyIpv6AddressAttributeRequest;

ModifyIpv6AddressAttributeRequest::ModifyIpv6AddressAttributeRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "ModifyIpv6AddressAttribute")
{}

ModifyIpv6AddressAttributeRequest::~ModifyIpv6AddressAttributeRequest()
{}

long ModifyIpv6AddressAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyIpv6AddressAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long ModifyIpv6AddressAttributeRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ModifyIpv6AddressAttributeRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

std::string ModifyIpv6AddressAttributeRequest::getDescription()const
{
	return description_;
}

void ModifyIpv6AddressAttributeRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

bool ModifyIpv6AddressAttributeRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ModifyIpv6AddressAttributeRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string ModifyIpv6AddressAttributeRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ModifyIpv6AddressAttributeRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string ModifyIpv6AddressAttributeRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ModifyIpv6AddressAttributeRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string ModifyIpv6AddressAttributeRequest::getCallerType()const
{
	return callerType_;
}

void ModifyIpv6AddressAttributeRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string ModifyIpv6AddressAttributeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyIpv6AddressAttributeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyIpv6AddressAttributeRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void ModifyIpv6AddressAttributeRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string ModifyIpv6AddressAttributeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyIpv6AddressAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyIpv6AddressAttributeRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyIpv6AddressAttributeRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

bool ModifyIpv6AddressAttributeRequest::getEnable()const
{
	return enable_;
}

void ModifyIpv6AddressAttributeRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
}

std::string ModifyIpv6AddressAttributeRequest::getRequestContent()const
{
	return requestContent_;
}

void ModifyIpv6AddressAttributeRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string ModifyIpv6AddressAttributeRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ModifyIpv6AddressAttributeRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string ModifyIpv6AddressAttributeRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ModifyIpv6AddressAttributeRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long ModifyIpv6AddressAttributeRequest::getCallerUid()const
{
	return callerUid_;
}

void ModifyIpv6AddressAttributeRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string ModifyIpv6AddressAttributeRequest::getApp_ip()const
{
	return app_ip_;
}

void ModifyIpv6AddressAttributeRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string ModifyIpv6AddressAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyIpv6AddressAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyIpv6AddressAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyIpv6AddressAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ModifyIpv6AddressAttributeRequest::getCallerBid()const
{
	return callerBid_;
}

void ModifyIpv6AddressAttributeRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long ModifyIpv6AddressAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyIpv6AddressAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool ModifyIpv6AddressAttributeRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ModifyIpv6AddressAttributeRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool ModifyIpv6AddressAttributeRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ModifyIpv6AddressAttributeRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool ModifyIpv6AddressAttributeRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ModifyIpv6AddressAttributeRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string ModifyIpv6AddressAttributeRequest::getIpv6AddressId()const
{
	return ipv6AddressId_;
}

void ModifyIpv6AddressAttributeRequest::setIpv6AddressId(const std::string& ipv6AddressId)
{
	ipv6AddressId_ = ipv6AddressId;
	setParameter("Ipv6AddressId", ipv6AddressId);
}

std::string ModifyIpv6AddressAttributeRequest::getRequestId()const
{
	return requestId_;
}

void ModifyIpv6AddressAttributeRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string ModifyIpv6AddressAttributeRequest::getName()const
{
	return name_;
}

void ModifyIpv6AddressAttributeRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

