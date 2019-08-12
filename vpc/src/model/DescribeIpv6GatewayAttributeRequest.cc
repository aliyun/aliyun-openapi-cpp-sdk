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

#include <alibabacloud/vpc/model/DescribeIpv6GatewayAttributeRequest.h>

using AlibabaCloud::Vpc::Model::DescribeIpv6GatewayAttributeRequest;

DescribeIpv6GatewayAttributeRequest::DescribeIpv6GatewayAttributeRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DescribeIpv6GatewayAttribute")
{}

DescribeIpv6GatewayAttributeRequest::~DescribeIpv6GatewayAttributeRequest()
{}

long DescribeIpv6GatewayAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeIpv6GatewayAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long DescribeIpv6GatewayAttributeRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeIpv6GatewayAttributeRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeIpv6GatewayAttributeRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeIpv6GatewayAttributeRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string DescribeIpv6GatewayAttributeRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeIpv6GatewayAttributeRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeIpv6GatewayAttributeRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeIpv6GatewayAttributeRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeIpv6GatewayAttributeRequest::getCallerType()const
{
	return callerType_;
}

void DescribeIpv6GatewayAttributeRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeIpv6GatewayAttributeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeIpv6GatewayAttributeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeIpv6GatewayAttributeRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeIpv6GatewayAttributeRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeIpv6GatewayAttributeRequest::getRegionId()const
{
	return regionId_;
}

void DescribeIpv6GatewayAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeIpv6GatewayAttributeRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeIpv6GatewayAttributeRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

bool DescribeIpv6GatewayAttributeRequest::getEnable()const
{
	return enable_;
}

void DescribeIpv6GatewayAttributeRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable);
}

std::string DescribeIpv6GatewayAttributeRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeIpv6GatewayAttributeRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeIpv6GatewayAttributeRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeIpv6GatewayAttributeRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeIpv6GatewayAttributeRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeIpv6GatewayAttributeRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeIpv6GatewayAttributeRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeIpv6GatewayAttributeRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeIpv6GatewayAttributeRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeIpv6GatewayAttributeRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeIpv6GatewayAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeIpv6GatewayAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeIpv6GatewayAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeIpv6GatewayAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeIpv6GatewayAttributeRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeIpv6GatewayAttributeRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeIpv6GatewayAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeIpv6GatewayAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

bool DescribeIpv6GatewayAttributeRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeIpv6GatewayAttributeRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

bool DescribeIpv6GatewayAttributeRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeIpv6GatewayAttributeRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

bool DescribeIpv6GatewayAttributeRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeIpv6GatewayAttributeRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string DescribeIpv6GatewayAttributeRequest::getRequestId()const
{
	return requestId_;
}

void DescribeIpv6GatewayAttributeRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeIpv6GatewayAttributeRequest::getIpv6GatewayId()const
{
	return ipv6GatewayId_;
}

void DescribeIpv6GatewayAttributeRequest::setIpv6GatewayId(const std::string& ipv6GatewayId)
{
	ipv6GatewayId_ = ipv6GatewayId;
	setCoreParameter("Ipv6GatewayId", ipv6GatewayId);
}

