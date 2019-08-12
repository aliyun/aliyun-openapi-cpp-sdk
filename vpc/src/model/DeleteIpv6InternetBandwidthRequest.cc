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

#include <alibabacloud/vpc/model/DeleteIpv6InternetBandwidthRequest.h>

using AlibabaCloud::Vpc::Model::DeleteIpv6InternetBandwidthRequest;

DeleteIpv6InternetBandwidthRequest::DeleteIpv6InternetBandwidthRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DeleteIpv6InternetBandwidth")
{}

DeleteIpv6InternetBandwidthRequest::~DeleteIpv6InternetBandwidthRequest()
{}

long DeleteIpv6InternetBandwidthRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteIpv6InternetBandwidthRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DeleteIpv6InternetBandwidthRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DeleteIpv6InternetBandwidthRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DeleteIpv6InternetBandwidthRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DeleteIpv6InternetBandwidthRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DeleteIpv6InternetBandwidthRequest::getIpv6InternetBandwidthId()const
{
	return ipv6InternetBandwidthId_;
}

void DeleteIpv6InternetBandwidthRequest::setIpv6InternetBandwidthId(const std::string& ipv6InternetBandwidthId)
{
	ipv6InternetBandwidthId_ = ipv6InternetBandwidthId;
	setCoreParameter("Ipv6InternetBandwidthId", ipv6InternetBandwidthId);
}

std::string DeleteIpv6InternetBandwidthRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DeleteIpv6InternetBandwidthRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DeleteIpv6InternetBandwidthRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DeleteIpv6InternetBandwidthRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DeleteIpv6InternetBandwidthRequest::getCallerType()const
{
	return callerType_;
}

void DeleteIpv6InternetBandwidthRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DeleteIpv6InternetBandwidthRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteIpv6InternetBandwidthRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DeleteIpv6InternetBandwidthRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DeleteIpv6InternetBandwidthRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string DeleteIpv6InternetBandwidthRequest::getRegionId()const
{
	return regionId_;
}

void DeleteIpv6InternetBandwidthRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteIpv6InternetBandwidthRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteIpv6InternetBandwidthRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

bool DeleteIpv6InternetBandwidthRequest::getEnable()const
{
	return enable_;
}

void DeleteIpv6InternetBandwidthRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string DeleteIpv6InternetBandwidthRequest::getRequestContent()const
{
	return requestContent_;
}

void DeleteIpv6InternetBandwidthRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DeleteIpv6InternetBandwidthRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DeleteIpv6InternetBandwidthRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DeleteIpv6InternetBandwidthRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DeleteIpv6InternetBandwidthRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DeleteIpv6InternetBandwidthRequest::getCallerUid()const
{
	return callerUid_;
}

void DeleteIpv6InternetBandwidthRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DeleteIpv6InternetBandwidthRequest::getApp_ip()const
{
	return app_ip_;
}

void DeleteIpv6InternetBandwidthRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DeleteIpv6InternetBandwidthRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteIpv6InternetBandwidthRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteIpv6InternetBandwidthRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteIpv6InternetBandwidthRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DeleteIpv6InternetBandwidthRequest::getCallerBid()const
{
	return callerBid_;
}

void DeleteIpv6InternetBandwidthRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DeleteIpv6InternetBandwidthRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteIpv6InternetBandwidthRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

bool DeleteIpv6InternetBandwidthRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DeleteIpv6InternetBandwidthRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DeleteIpv6InternetBandwidthRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DeleteIpv6InternetBandwidthRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DeleteIpv6InternetBandwidthRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DeleteIpv6InternetBandwidthRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DeleteIpv6InternetBandwidthRequest::getIpv6AddressId()const
{
	return ipv6AddressId_;
}

void DeleteIpv6InternetBandwidthRequest::setIpv6AddressId(const std::string& ipv6AddressId)
{
	ipv6AddressId_ = ipv6AddressId;
	setCoreParameter("Ipv6AddressId", ipv6AddressId);
}

std::string DeleteIpv6InternetBandwidthRequest::getRequestId()const
{
	return requestId_;
}

void DeleteIpv6InternetBandwidthRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

