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

#include <alibabacloud/ecs/model/UnassignIpv6AddressesRequest.h>

using AlibabaCloud::Ecs::Model::UnassignIpv6AddressesRequest;

UnassignIpv6AddressesRequest::UnassignIpv6AddressesRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "UnassignIpv6Addresses")
{}

UnassignIpv6AddressesRequest::~UnassignIpv6AddressesRequest()
{}

long UnassignIpv6AddressesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UnassignIpv6AddressesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long UnassignIpv6AddressesRequest::getCallerParentId()const
{
	return callerParentId_;
}

void UnassignIpv6AddressesRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool UnassignIpv6AddressesRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void UnassignIpv6AddressesRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string UnassignIpv6AddressesRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void UnassignIpv6AddressesRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string UnassignIpv6AddressesRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void UnassignIpv6AddressesRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string UnassignIpv6AddressesRequest::getCallerType()const
{
	return callerType_;
}

void UnassignIpv6AddressesRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string UnassignIpv6AddressesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UnassignIpv6AddressesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string UnassignIpv6AddressesRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void UnassignIpv6AddressesRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

std::string UnassignIpv6AddressesRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void UnassignIpv6AddressesRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string UnassignIpv6AddressesRequest::getSecurityToken()const
{
	return securityToken_;
}

void UnassignIpv6AddressesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string UnassignIpv6AddressesRequest::getRegionId()const
{
	return regionId_;
}

void UnassignIpv6AddressesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool UnassignIpv6AddressesRequest::getEnable()const
{
	return enable_;
}

void UnassignIpv6AddressesRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string UnassignIpv6AddressesRequest::getRequestContent()const
{
	return requestContent_;
}

void UnassignIpv6AddressesRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string UnassignIpv6AddressesRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void UnassignIpv6AddressesRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string UnassignIpv6AddressesRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void UnassignIpv6AddressesRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long UnassignIpv6AddressesRequest::getCallerUid()const
{
	return callerUid_;
}

void UnassignIpv6AddressesRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string UnassignIpv6AddressesRequest::getApp_ip()const
{
	return app_ip_;
}

void UnassignIpv6AddressesRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string UnassignIpv6AddressesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UnassignIpv6AddressesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string UnassignIpv6AddressesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void UnassignIpv6AddressesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string UnassignIpv6AddressesRequest::getCallerBid()const
{
	return callerBid_;
}

void UnassignIpv6AddressesRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long UnassignIpv6AddressesRequest::getOwnerId()const
{
	return ownerId_;
}

void UnassignIpv6AddressesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

bool UnassignIpv6AddressesRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void UnassignIpv6AddressesRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool UnassignIpv6AddressesRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void UnassignIpv6AddressesRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool UnassignIpv6AddressesRequest::getSecurity_transport()const
{
	return security_transport_;
}

void UnassignIpv6AddressesRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string UnassignIpv6AddressesRequest::getRequestId()const
{
	return requestId_;
}

void UnassignIpv6AddressesRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string UnassignIpv6AddressesRequest::getAkProxy()const
{
	return akProxy_;
}

void UnassignIpv6AddressesRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", akProxy);
}

std::string UnassignIpv6AddressesRequest::getNetworkInterfaceId()const
{
	return networkInterfaceId_;
}

void UnassignIpv6AddressesRequest::setNetworkInterfaceId(const std::string& networkInterfaceId)
{
	networkInterfaceId_ = networkInterfaceId;
	setCoreParameter("NetworkInterfaceId", networkInterfaceId);
}

std::vector<std::string> UnassignIpv6AddressesRequest::getIpv6Address()const
{
	return ipv6Address_;
}

void UnassignIpv6AddressesRequest::setIpv6Address(const std::vector<std::string>& ipv6Address)
{
	ipv6Address_ = ipv6Address;
	for(int i = 0; i!= ipv6Address.size(); i++)
		setCoreParameter("Ipv6Address."+ std::to_string(i), ipv6Address.at(i));
}

