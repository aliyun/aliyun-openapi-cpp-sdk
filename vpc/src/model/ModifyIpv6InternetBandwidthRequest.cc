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

#include <alibabacloud/vpc/model/ModifyIpv6InternetBandwidthRequest.h>

using AlibabaCloud::Vpc::Model::ModifyIpv6InternetBandwidthRequest;

ModifyIpv6InternetBandwidthRequest::ModifyIpv6InternetBandwidthRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "ModifyIpv6InternetBandwidth")
{}

ModifyIpv6InternetBandwidthRequest::~ModifyIpv6InternetBandwidthRequest()
{}

long ModifyIpv6InternetBandwidthRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyIpv6InternetBandwidthRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyIpv6InternetBandwidthRequest::getClientToken()const
{
	return clientToken_;
}

void ModifyIpv6InternetBandwidthRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

long ModifyIpv6InternetBandwidthRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ModifyIpv6InternetBandwidthRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool ModifyIpv6InternetBandwidthRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ModifyIpv6InternetBandwidthRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string ModifyIpv6InternetBandwidthRequest::getIpv6InternetBandwidthId()const
{
	return ipv6InternetBandwidthId_;
}

void ModifyIpv6InternetBandwidthRequest::setIpv6InternetBandwidthId(const std::string& ipv6InternetBandwidthId)
{
	ipv6InternetBandwidthId_ = ipv6InternetBandwidthId;
	setCoreParameter("Ipv6InternetBandwidthId", ipv6InternetBandwidthId);
}

std::string ModifyIpv6InternetBandwidthRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ModifyIpv6InternetBandwidthRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string ModifyIpv6InternetBandwidthRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ModifyIpv6InternetBandwidthRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string ModifyIpv6InternetBandwidthRequest::getCallerType()const
{
	return callerType_;
}

void ModifyIpv6InternetBandwidthRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string ModifyIpv6InternetBandwidthRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyIpv6InternetBandwidthRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifyIpv6InternetBandwidthRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void ModifyIpv6InternetBandwidthRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string ModifyIpv6InternetBandwidthRequest::getRegionId()const
{
	return regionId_;
}

void ModifyIpv6InternetBandwidthRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyIpv6InternetBandwidthRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyIpv6InternetBandwidthRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

bool ModifyIpv6InternetBandwidthRequest::getEnable()const
{
	return enable_;
}

void ModifyIpv6InternetBandwidthRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string ModifyIpv6InternetBandwidthRequest::getRequestContent()const
{
	return requestContent_;
}

void ModifyIpv6InternetBandwidthRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string ModifyIpv6InternetBandwidthRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ModifyIpv6InternetBandwidthRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string ModifyIpv6InternetBandwidthRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ModifyIpv6InternetBandwidthRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long ModifyIpv6InternetBandwidthRequest::getCallerUid()const
{
	return callerUid_;
}

void ModifyIpv6InternetBandwidthRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string ModifyIpv6InternetBandwidthRequest::getApp_ip()const
{
	return app_ip_;
}

void ModifyIpv6InternetBandwidthRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

long ModifyIpv6InternetBandwidthRequest::getBandwidth()const
{
	return bandwidth_;
}

void ModifyIpv6InternetBandwidthRequest::setBandwidth(long bandwidth)
{
	bandwidth_ = bandwidth;
	setCoreParameter("Bandwidth", std::to_string(bandwidth));
}

std::string ModifyIpv6InternetBandwidthRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyIpv6InternetBandwidthRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyIpv6InternetBandwidthRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyIpv6InternetBandwidthRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ModifyIpv6InternetBandwidthRequest::getCallerBid()const
{
	return callerBid_;
}

void ModifyIpv6InternetBandwidthRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long ModifyIpv6InternetBandwidthRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyIpv6InternetBandwidthRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

bool ModifyIpv6InternetBandwidthRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ModifyIpv6InternetBandwidthRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool ModifyIpv6InternetBandwidthRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ModifyIpv6InternetBandwidthRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool ModifyIpv6InternetBandwidthRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ModifyIpv6InternetBandwidthRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string ModifyIpv6InternetBandwidthRequest::getIpv6AddressId()const
{
	return ipv6AddressId_;
}

void ModifyIpv6InternetBandwidthRequest::setIpv6AddressId(const std::string& ipv6AddressId)
{
	ipv6AddressId_ = ipv6AddressId;
	setCoreParameter("Ipv6AddressId", ipv6AddressId);
}

std::string ModifyIpv6InternetBandwidthRequest::getRequestId()const
{
	return requestId_;
}

void ModifyIpv6InternetBandwidthRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

