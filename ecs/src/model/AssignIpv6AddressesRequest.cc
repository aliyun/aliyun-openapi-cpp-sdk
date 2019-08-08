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

#include <alibabacloud/ecs/model/AssignIpv6AddressesRequest.h>

using AlibabaCloud::Ecs::Model::AssignIpv6AddressesRequest;

AssignIpv6AddressesRequest::AssignIpv6AddressesRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "AssignIpv6Addresses")
{}

AssignIpv6AddressesRequest::~AssignIpv6AddressesRequest()
{}

long AssignIpv6AddressesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AssignIpv6AddressesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long AssignIpv6AddressesRequest::getCallerParentId()const
{
	return callerParentId_;
}

void AssignIpv6AddressesRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool AssignIpv6AddressesRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void AssignIpv6AddressesRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string AssignIpv6AddressesRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void AssignIpv6AddressesRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string AssignIpv6AddressesRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void AssignIpv6AddressesRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string AssignIpv6AddressesRequest::getCallerType()const
{
	return callerType_;
}

void AssignIpv6AddressesRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string AssignIpv6AddressesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AssignIpv6AddressesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string AssignIpv6AddressesRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void AssignIpv6AddressesRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

std::string AssignIpv6AddressesRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void AssignIpv6AddressesRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string AssignIpv6AddressesRequest::getSecurityToken()const
{
	return securityToken_;
}

void AssignIpv6AddressesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string AssignIpv6AddressesRequest::getRegionId()const
{
	return regionId_;
}

void AssignIpv6AddressesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool AssignIpv6AddressesRequest::getEnable()const
{
	return enable_;
}

void AssignIpv6AddressesRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string AssignIpv6AddressesRequest::getRequestContent()const
{
	return requestContent_;
}

void AssignIpv6AddressesRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string AssignIpv6AddressesRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void AssignIpv6AddressesRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string AssignIpv6AddressesRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void AssignIpv6AddressesRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long AssignIpv6AddressesRequest::getCallerUid()const
{
	return callerUid_;
}

void AssignIpv6AddressesRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string AssignIpv6AddressesRequest::getApp_ip()const
{
	return app_ip_;
}

void AssignIpv6AddressesRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string AssignIpv6AddressesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AssignIpv6AddressesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

int AssignIpv6AddressesRequest::getIpv6AddressCount()const
{
	return ipv6AddressCount_;
}

void AssignIpv6AddressesRequest::setIpv6AddressCount(int ipv6AddressCount)
{
	ipv6AddressCount_ = ipv6AddressCount;
	setCoreParameter("Ipv6AddressCount", std::to_string(ipv6AddressCount));
}

std::string AssignIpv6AddressesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AssignIpv6AddressesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string AssignIpv6AddressesRequest::getCallerBid()const
{
	return callerBid_;
}

void AssignIpv6AddressesRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long AssignIpv6AddressesRequest::getOwnerId()const
{
	return ownerId_;
}

void AssignIpv6AddressesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

bool AssignIpv6AddressesRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void AssignIpv6AddressesRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool AssignIpv6AddressesRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void AssignIpv6AddressesRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool AssignIpv6AddressesRequest::getSecurity_transport()const
{
	return security_transport_;
}

void AssignIpv6AddressesRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string AssignIpv6AddressesRequest::getRequestId()const
{
	return requestId_;
}

void AssignIpv6AddressesRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string AssignIpv6AddressesRequest::getAkProxy()const
{
	return akProxy_;
}

void AssignIpv6AddressesRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", akProxy);
}

std::string AssignIpv6AddressesRequest::getNetworkInterfaceId()const
{
	return networkInterfaceId_;
}

void AssignIpv6AddressesRequest::setNetworkInterfaceId(const std::string& networkInterfaceId)
{
	networkInterfaceId_ = networkInterfaceId;
	setCoreParameter("NetworkInterfaceId", networkInterfaceId);
}

std::vector<std::string> AssignIpv6AddressesRequest::getIpv6Address()const
{
	return ipv6Address_;
}

void AssignIpv6AddressesRequest::setIpv6Address(const std::vector<std::string>& ipv6Address)
{
	ipv6Address_ = ipv6Address;
	for(int i = 0; i!= ipv6Address.size(); i++)
		setCoreParameter("Ipv6Address."+ std::to_string(i), ipv6Address.at(i));
}

