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

#include <alibabacloud/vpc/model/AllocateIpv6InternetBandwidthRequest.h>

using AlibabaCloud::Vpc::Model::AllocateIpv6InternetBandwidthRequest;

AllocateIpv6InternetBandwidthRequest::AllocateIpv6InternetBandwidthRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "AllocateIpv6InternetBandwidth")
{}

AllocateIpv6InternetBandwidthRequest::~AllocateIpv6InternetBandwidthRequest()
{}

long AllocateIpv6InternetBandwidthRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AllocateIpv6InternetBandwidthRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AllocateIpv6InternetBandwidthRequest::getClientToken()const
{
	return clientToken_;
}

void AllocateIpv6InternetBandwidthRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

long AllocateIpv6InternetBandwidthRequest::getCallerParentId()const
{
	return callerParentId_;
}

void AllocateIpv6InternetBandwidthRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool AllocateIpv6InternetBandwidthRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void AllocateIpv6InternetBandwidthRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string AllocateIpv6InternetBandwidthRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void AllocateIpv6InternetBandwidthRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string AllocateIpv6InternetBandwidthRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void AllocateIpv6InternetBandwidthRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string AllocateIpv6InternetBandwidthRequest::getCallerType()const
{
	return callerType_;
}

void AllocateIpv6InternetBandwidthRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string AllocateIpv6InternetBandwidthRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AllocateIpv6InternetBandwidthRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string AllocateIpv6InternetBandwidthRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void AllocateIpv6InternetBandwidthRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string AllocateIpv6InternetBandwidthRequest::getRegionId()const
{
	return regionId_;
}

void AllocateIpv6InternetBandwidthRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string AllocateIpv6InternetBandwidthRequest::getSecurityToken()const
{
	return securityToken_;
}

void AllocateIpv6InternetBandwidthRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

bool AllocateIpv6InternetBandwidthRequest::getEnable()const
{
	return enable_;
}

void AllocateIpv6InternetBandwidthRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
}

std::string AllocateIpv6InternetBandwidthRequest::getRequestContent()const
{
	return requestContent_;
}

void AllocateIpv6InternetBandwidthRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string AllocateIpv6InternetBandwidthRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void AllocateIpv6InternetBandwidthRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string AllocateIpv6InternetBandwidthRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void AllocateIpv6InternetBandwidthRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long AllocateIpv6InternetBandwidthRequest::getCallerUid()const
{
	return callerUid_;
}

void AllocateIpv6InternetBandwidthRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string AllocateIpv6InternetBandwidthRequest::getApp_ip()const
{
	return app_ip_;
}

void AllocateIpv6InternetBandwidthRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

int AllocateIpv6InternetBandwidthRequest::getBandwidth()const
{
	return bandwidth_;
}

void AllocateIpv6InternetBandwidthRequest::setBandwidth(int bandwidth)
{
	bandwidth_ = bandwidth;
	setParameter("Bandwidth", std::to_string(bandwidth));
}

std::string AllocateIpv6InternetBandwidthRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AllocateIpv6InternetBandwidthRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AllocateIpv6InternetBandwidthRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AllocateIpv6InternetBandwidthRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string AllocateIpv6InternetBandwidthRequest::getCallerBid()const
{
	return callerBid_;
}

void AllocateIpv6InternetBandwidthRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long AllocateIpv6InternetBandwidthRequest::getOwnerId()const
{
	return ownerId_;
}

void AllocateIpv6InternetBandwidthRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool AllocateIpv6InternetBandwidthRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void AllocateIpv6InternetBandwidthRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool AllocateIpv6InternetBandwidthRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void AllocateIpv6InternetBandwidthRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool AllocateIpv6InternetBandwidthRequest::getSecurity_transport()const
{
	return security_transport_;
}

void AllocateIpv6InternetBandwidthRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string AllocateIpv6InternetBandwidthRequest::getIpv6AddressId()const
{
	return ipv6AddressId_;
}

void AllocateIpv6InternetBandwidthRequest::setIpv6AddressId(const std::string& ipv6AddressId)
{
	ipv6AddressId_ = ipv6AddressId;
	setParameter("Ipv6AddressId", ipv6AddressId);
}

std::string AllocateIpv6InternetBandwidthRequest::getInternetChargeType()const
{
	return internetChargeType_;
}

void AllocateIpv6InternetBandwidthRequest::setInternetChargeType(const std::string& internetChargeType)
{
	internetChargeType_ = internetChargeType;
	setParameter("InternetChargeType", internetChargeType);
}

std::string AllocateIpv6InternetBandwidthRequest::getRequestId()const
{
	return requestId_;
}

void AllocateIpv6InternetBandwidthRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string AllocateIpv6InternetBandwidthRequest::getIpv6GatewayId()const
{
	return ipv6GatewayId_;
}

void AllocateIpv6InternetBandwidthRequest::setIpv6GatewayId(const std::string& ipv6GatewayId)
{
	ipv6GatewayId_ = ipv6GatewayId;
	setParameter("Ipv6GatewayId", ipv6GatewayId);
}

