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

#include <alibabacloud/vpc/model/CreateIpv6EgressOnlyRuleRequest.h>

using AlibabaCloud::Vpc::Model::CreateIpv6EgressOnlyRuleRequest;

CreateIpv6EgressOnlyRuleRequest::CreateIpv6EgressOnlyRuleRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "CreateIpv6EgressOnlyRule")
{}

CreateIpv6EgressOnlyRuleRequest::~CreateIpv6EgressOnlyRuleRequest()
{}

long CreateIpv6EgressOnlyRuleRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateIpv6EgressOnlyRuleRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateIpv6EgressOnlyRuleRequest::getClientToken()const
{
	return clientToken_;
}

void CreateIpv6EgressOnlyRuleRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

long CreateIpv6EgressOnlyRuleRequest::getCallerParentId()const
{
	return callerParentId_;
}

void CreateIpv6EgressOnlyRuleRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

std::string CreateIpv6EgressOnlyRuleRequest::getDescription()const
{
	return description_;
}

void CreateIpv6EgressOnlyRuleRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

bool CreateIpv6EgressOnlyRuleRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void CreateIpv6EgressOnlyRuleRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string CreateIpv6EgressOnlyRuleRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void CreateIpv6EgressOnlyRuleRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string CreateIpv6EgressOnlyRuleRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void CreateIpv6EgressOnlyRuleRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string CreateIpv6EgressOnlyRuleRequest::getCallerType()const
{
	return callerType_;
}

void CreateIpv6EgressOnlyRuleRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string CreateIpv6EgressOnlyRuleRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateIpv6EgressOnlyRuleRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateIpv6EgressOnlyRuleRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateIpv6EgressOnlyRuleRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateIpv6EgressOnlyRuleRequest::getRegionId()const
{
	return regionId_;
}

void CreateIpv6EgressOnlyRuleRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateIpv6EgressOnlyRuleRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateIpv6EgressOnlyRuleRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

bool CreateIpv6EgressOnlyRuleRequest::getEnable()const
{
	return enable_;
}

void CreateIpv6EgressOnlyRuleRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string CreateIpv6EgressOnlyRuleRequest::getRequestContent()const
{
	return requestContent_;
}

void CreateIpv6EgressOnlyRuleRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string CreateIpv6EgressOnlyRuleRequest::getInstanceType()const
{
	return instanceType_;
}

void CreateIpv6EgressOnlyRuleRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setCoreParameter("InstanceType", instanceType);
}

std::string CreateIpv6EgressOnlyRuleRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void CreateIpv6EgressOnlyRuleRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string CreateIpv6EgressOnlyRuleRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void CreateIpv6EgressOnlyRuleRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long CreateIpv6EgressOnlyRuleRequest::getCallerUid()const
{
	return callerUid_;
}

void CreateIpv6EgressOnlyRuleRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string CreateIpv6EgressOnlyRuleRequest::getApp_ip()const
{
	return app_ip_;
}

void CreateIpv6EgressOnlyRuleRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string CreateIpv6EgressOnlyRuleRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateIpv6EgressOnlyRuleRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateIpv6EgressOnlyRuleRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateIpv6EgressOnlyRuleRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string CreateIpv6EgressOnlyRuleRequest::getCallerBid()const
{
	return callerBid_;
}

void CreateIpv6EgressOnlyRuleRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long CreateIpv6EgressOnlyRuleRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateIpv6EgressOnlyRuleRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

bool CreateIpv6EgressOnlyRuleRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void CreateIpv6EgressOnlyRuleRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool CreateIpv6EgressOnlyRuleRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void CreateIpv6EgressOnlyRuleRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool CreateIpv6EgressOnlyRuleRequest::getSecurity_transport()const
{
	return security_transport_;
}

void CreateIpv6EgressOnlyRuleRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string CreateIpv6EgressOnlyRuleRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateIpv6EgressOnlyRuleRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string CreateIpv6EgressOnlyRuleRequest::getRequestId()const
{
	return requestId_;
}

void CreateIpv6EgressOnlyRuleRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string CreateIpv6EgressOnlyRuleRequest::getIpv6GatewayId()const
{
	return ipv6GatewayId_;
}

void CreateIpv6EgressOnlyRuleRequest::setIpv6GatewayId(const std::string& ipv6GatewayId)
{
	ipv6GatewayId_ = ipv6GatewayId;
	setCoreParameter("Ipv6GatewayId", ipv6GatewayId);
}

std::string CreateIpv6EgressOnlyRuleRequest::getName()const
{
	return name_;
}

void CreateIpv6EgressOnlyRuleRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

