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

#include <alibabacloud/vpc/model/DeleteIpv6EgressOnlyRuleRequest.h>

using AlibabaCloud::Vpc::Model::DeleteIpv6EgressOnlyRuleRequest;

DeleteIpv6EgressOnlyRuleRequest::DeleteIpv6EgressOnlyRuleRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DeleteIpv6EgressOnlyRule")
{}

DeleteIpv6EgressOnlyRuleRequest::~DeleteIpv6EgressOnlyRuleRequest()
{}

long DeleteIpv6EgressOnlyRuleRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteIpv6EgressOnlyRuleRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DeleteIpv6EgressOnlyRuleRequest::getClientToken()const
{
	return clientToken_;
}

void DeleteIpv6EgressOnlyRuleRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", std::to_string(clientToken));
}

long DeleteIpv6EgressOnlyRuleRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DeleteIpv6EgressOnlyRuleRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DeleteIpv6EgressOnlyRuleRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DeleteIpv6EgressOnlyRuleRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DeleteIpv6EgressOnlyRuleRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DeleteIpv6EgressOnlyRuleRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string DeleteIpv6EgressOnlyRuleRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DeleteIpv6EgressOnlyRuleRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string DeleteIpv6EgressOnlyRuleRequest::getCallerType()const
{
	return callerType_;
}

void DeleteIpv6EgressOnlyRuleRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string DeleteIpv6EgressOnlyRuleRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteIpv6EgressOnlyRuleRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string DeleteIpv6EgressOnlyRuleRequest::getIpv6EgressOnlyRuleId()const
{
	return ipv6EgressOnlyRuleId_;
}

void DeleteIpv6EgressOnlyRuleRequest::setIpv6EgressOnlyRuleId(const std::string& ipv6EgressOnlyRuleId)
{
	ipv6EgressOnlyRuleId_ = ipv6EgressOnlyRuleId;
	setCoreParameter("Ipv6EgressOnlyRuleId", std::to_string(ipv6EgressOnlyRuleId));
}

std::string DeleteIpv6EgressOnlyRuleRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DeleteIpv6EgressOnlyRuleRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", std::to_string(resourceGroupId));
}

std::string DeleteIpv6EgressOnlyRuleRequest::getRegionId()const
{
	return regionId_;
}

void DeleteIpv6EgressOnlyRuleRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DeleteIpv6EgressOnlyRuleRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteIpv6EgressOnlyRuleRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

bool DeleteIpv6EgressOnlyRuleRequest::getEnable()const
{
	return enable_;
}

void DeleteIpv6EgressOnlyRuleRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string DeleteIpv6EgressOnlyRuleRequest::getRequestContent()const
{
	return requestContent_;
}

void DeleteIpv6EgressOnlyRuleRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string DeleteIpv6EgressOnlyRuleRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DeleteIpv6EgressOnlyRuleRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string DeleteIpv6EgressOnlyRuleRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DeleteIpv6EgressOnlyRuleRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long DeleteIpv6EgressOnlyRuleRequest::getCallerUid()const
{
	return callerUid_;
}

void DeleteIpv6EgressOnlyRuleRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DeleteIpv6EgressOnlyRuleRequest::getApp_ip()const
{
	return app_ip_;
}

void DeleteIpv6EgressOnlyRuleRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string DeleteIpv6EgressOnlyRuleRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteIpv6EgressOnlyRuleRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DeleteIpv6EgressOnlyRuleRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteIpv6EgressOnlyRuleRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string DeleteIpv6EgressOnlyRuleRequest::getCallerBid()const
{
	return callerBid_;
}

void DeleteIpv6EgressOnlyRuleRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long DeleteIpv6EgressOnlyRuleRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteIpv6EgressOnlyRuleRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

bool DeleteIpv6EgressOnlyRuleRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DeleteIpv6EgressOnlyRuleRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DeleteIpv6EgressOnlyRuleRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DeleteIpv6EgressOnlyRuleRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DeleteIpv6EgressOnlyRuleRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DeleteIpv6EgressOnlyRuleRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DeleteIpv6EgressOnlyRuleRequest::getRequestId()const
{
	return requestId_;
}

void DeleteIpv6EgressOnlyRuleRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

