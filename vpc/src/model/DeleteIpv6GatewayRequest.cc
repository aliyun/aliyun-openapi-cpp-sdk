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

#include <alibabacloud/vpc/model/DeleteIpv6GatewayRequest.h>

using AlibabaCloud::Vpc::Model::DeleteIpv6GatewayRequest;

DeleteIpv6GatewayRequest::DeleteIpv6GatewayRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DeleteIpv6Gateway")
{}

DeleteIpv6GatewayRequest::~DeleteIpv6GatewayRequest()
{}

long DeleteIpv6GatewayRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteIpv6GatewayRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DeleteIpv6GatewayRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DeleteIpv6GatewayRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DeleteIpv6GatewayRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DeleteIpv6GatewayRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DeleteIpv6GatewayRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DeleteIpv6GatewayRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DeleteIpv6GatewayRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DeleteIpv6GatewayRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DeleteIpv6GatewayRequest::getCallerType()const
{
	return callerType_;
}

void DeleteIpv6GatewayRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string DeleteIpv6GatewayRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteIpv6GatewayRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DeleteIpv6GatewayRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DeleteIpv6GatewayRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DeleteIpv6GatewayRequest::getRegionId()const
{
	return regionId_;
}

void DeleteIpv6GatewayRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DeleteIpv6GatewayRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteIpv6GatewayRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

bool DeleteIpv6GatewayRequest::getEnable()const
{
	return enable_;
}

void DeleteIpv6GatewayRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
}

std::string DeleteIpv6GatewayRequest::getRequestContent()const
{
	return requestContent_;
}

void DeleteIpv6GatewayRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string DeleteIpv6GatewayRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DeleteIpv6GatewayRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DeleteIpv6GatewayRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DeleteIpv6GatewayRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DeleteIpv6GatewayRequest::getCallerUid()const
{
	return callerUid_;
}

void DeleteIpv6GatewayRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DeleteIpv6GatewayRequest::getApp_ip()const
{
	return app_ip_;
}

void DeleteIpv6GatewayRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DeleteIpv6GatewayRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteIpv6GatewayRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteIpv6GatewayRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteIpv6GatewayRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DeleteIpv6GatewayRequest::getCallerBid()const
{
	return callerBid_;
}

void DeleteIpv6GatewayRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DeleteIpv6GatewayRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteIpv6GatewayRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool DeleteIpv6GatewayRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DeleteIpv6GatewayRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DeleteIpv6GatewayRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DeleteIpv6GatewayRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool DeleteIpv6GatewayRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DeleteIpv6GatewayRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DeleteIpv6GatewayRequest::getRequestId()const
{
	return requestId_;
}

void DeleteIpv6GatewayRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string DeleteIpv6GatewayRequest::getIpv6GatewayId()const
{
	return ipv6GatewayId_;
}

void DeleteIpv6GatewayRequest::setIpv6GatewayId(const std::string& ipv6GatewayId)
{
	ipv6GatewayId_ = ipv6GatewayId;
	setParameter("Ipv6GatewayId", ipv6GatewayId);
}

