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

#include <alibabacloud/vpc/model/ModifyIpv6GatewaySpecRequest.h>

using AlibabaCloud::Vpc::Model::ModifyIpv6GatewaySpecRequest;

ModifyIpv6GatewaySpecRequest::ModifyIpv6GatewaySpecRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "ModifyIpv6GatewaySpec")
{}

ModifyIpv6GatewaySpecRequest::~ModifyIpv6GatewaySpecRequest()
{}

long ModifyIpv6GatewaySpecRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyIpv6GatewaySpecRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyIpv6GatewaySpecRequest::getClientToken()const
{
	return clientToken_;
}

void ModifyIpv6GatewaySpecRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

long ModifyIpv6GatewaySpecRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ModifyIpv6GatewaySpecRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool ModifyIpv6GatewaySpecRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ModifyIpv6GatewaySpecRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string ModifyIpv6GatewaySpecRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ModifyIpv6GatewaySpecRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string ModifyIpv6GatewaySpecRequest::getSpec()const
{
	return spec_;
}

void ModifyIpv6GatewaySpecRequest::setSpec(const std::string& spec)
{
	spec_ = spec;
	setParameter("Spec", spec);
}

std::string ModifyIpv6GatewaySpecRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ModifyIpv6GatewaySpecRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string ModifyIpv6GatewaySpecRequest::getCallerType()const
{
	return callerType_;
}

void ModifyIpv6GatewaySpecRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string ModifyIpv6GatewaySpecRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyIpv6GatewaySpecRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyIpv6GatewaySpecRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void ModifyIpv6GatewaySpecRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string ModifyIpv6GatewaySpecRequest::getRegionId()const
{
	return regionId_;
}

void ModifyIpv6GatewaySpecRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyIpv6GatewaySpecRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyIpv6GatewaySpecRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

bool ModifyIpv6GatewaySpecRequest::getEnable()const
{
	return enable_;
}

void ModifyIpv6GatewaySpecRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
}

std::string ModifyIpv6GatewaySpecRequest::getRequestContent()const
{
	return requestContent_;
}

void ModifyIpv6GatewaySpecRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string ModifyIpv6GatewaySpecRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ModifyIpv6GatewaySpecRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string ModifyIpv6GatewaySpecRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ModifyIpv6GatewaySpecRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long ModifyIpv6GatewaySpecRequest::getCallerUid()const
{
	return callerUid_;
}

void ModifyIpv6GatewaySpecRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string ModifyIpv6GatewaySpecRequest::getApp_ip()const
{
	return app_ip_;
}

void ModifyIpv6GatewaySpecRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string ModifyIpv6GatewaySpecRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyIpv6GatewaySpecRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyIpv6GatewaySpecRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyIpv6GatewaySpecRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ModifyIpv6GatewaySpecRequest::getCallerBid()const
{
	return callerBid_;
}

void ModifyIpv6GatewaySpecRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long ModifyIpv6GatewaySpecRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyIpv6GatewaySpecRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool ModifyIpv6GatewaySpecRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ModifyIpv6GatewaySpecRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool ModifyIpv6GatewaySpecRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ModifyIpv6GatewaySpecRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool ModifyIpv6GatewaySpecRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ModifyIpv6GatewaySpecRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string ModifyIpv6GatewaySpecRequest::getRequestId()const
{
	return requestId_;
}

void ModifyIpv6GatewaySpecRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string ModifyIpv6GatewaySpecRequest::getIpv6GatewayId()const
{
	return ipv6GatewayId_;
}

void ModifyIpv6GatewaySpecRequest::setIpv6GatewayId(const std::string& ipv6GatewayId)
{
	ipv6GatewayId_ = ipv6GatewayId;
	setParameter("Ipv6GatewayId", ipv6GatewayId);
}

