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

#include <alibabacloud/vpc/model/DescribeIpv6AddressesRequest.h>

using AlibabaCloud::Vpc::Model::DescribeIpv6AddressesRequest;

DescribeIpv6AddressesRequest::DescribeIpv6AddressesRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DescribeIpv6Addresses")
{}

DescribeIpv6AddressesRequest::~DescribeIpv6AddressesRequest()
{}

long DescribeIpv6AddressesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeIpv6AddressesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DescribeIpv6AddressesRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeIpv6AddressesRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeIpv6AddressesRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeIpv6AddressesRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeIpv6AddressesRequest::getIpv6InternetBandwidthId()const
{
	return ipv6InternetBandwidthId_;
}

void DescribeIpv6AddressesRequest::setIpv6InternetBandwidthId(const std::string& ipv6InternetBandwidthId)
{
	ipv6InternetBandwidthId_ = ipv6InternetBandwidthId;
	setCoreParameter("Ipv6InternetBandwidthId", ipv6InternetBandwidthId);
}

std::string DescribeIpv6AddressesRequest::getNetworkType()const
{
	return networkType_;
}

void DescribeIpv6AddressesRequest::setNetworkType(const std::string& networkType)
{
	networkType_ = networkType;
	setCoreParameter("NetworkType", networkType);
}

std::string DescribeIpv6AddressesRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeIpv6AddressesRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

int DescribeIpv6AddressesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeIpv6AddressesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeIpv6AddressesRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeIpv6AddressesRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeIpv6AddressesRequest::getCallerType()const
{
	return callerType_;
}

void DescribeIpv6AddressesRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeIpv6AddressesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeIpv6AddressesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeIpv6AddressesRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeIpv6AddressesRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeIpv6AddressesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeIpv6AddressesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeIpv6AddressesRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeIpv6AddressesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeIpv6AddressesRequest::getAssociatedInstanceType()const
{
	return associatedInstanceType_;
}

void DescribeIpv6AddressesRequest::setAssociatedInstanceType(const std::string& associatedInstanceType)
{
	associatedInstanceType_ = associatedInstanceType;
	setCoreParameter("AssociatedInstanceType", associatedInstanceType);
}

bool DescribeIpv6AddressesRequest::getEnable()const
{
	return enable_;
}

void DescribeIpv6AddressesRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string DescribeIpv6AddressesRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeIpv6AddressesRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

int DescribeIpv6AddressesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeIpv6AddressesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeIpv6AddressesRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeIpv6AddressesRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeIpv6AddressesRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeIpv6AddressesRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeIpv6AddressesRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeIpv6AddressesRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeIpv6AddressesRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeIpv6AddressesRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeIpv6AddressesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeIpv6AddressesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeIpv6AddressesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeIpv6AddressesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeIpv6AddressesRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeIpv6AddressesRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeIpv6AddressesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeIpv6AddressesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

bool DescribeIpv6AddressesRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeIpv6AddressesRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeIpv6AddressesRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeIpv6AddressesRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

std::string DescribeIpv6AddressesRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void DescribeIpv6AddressesRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setCoreParameter("VSwitchId", vSwitchId);
}

bool DescribeIpv6AddressesRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeIpv6AddressesRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeIpv6AddressesRequest::getIpv6AddressId()const
{
	return ipv6AddressId_;
}

void DescribeIpv6AddressesRequest::setIpv6AddressId(const std::string& ipv6AddressId)
{
	ipv6AddressId_ = ipv6AddressId;
	setCoreParameter("Ipv6AddressId", ipv6AddressId);
}

std::string DescribeIpv6AddressesRequest::getRequestId()const
{
	return requestId_;
}

void DescribeIpv6AddressesRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeIpv6AddressesRequest::getVpcId()const
{
	return vpcId_;
}

void DescribeIpv6AddressesRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setCoreParameter("VpcId", vpcId);
}

std::string DescribeIpv6AddressesRequest::getName()const
{
	return name_;
}

void DescribeIpv6AddressesRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string DescribeIpv6AddressesRequest::getIpv6Address()const
{
	return ipv6Address_;
}

void DescribeIpv6AddressesRequest::setIpv6Address(const std::string& ipv6Address)
{
	ipv6Address_ = ipv6Address;
	setCoreParameter("Ipv6Address", ipv6Address);
}

std::string DescribeIpv6AddressesRequest::getAssociatedInstanceId()const
{
	return associatedInstanceId_;
}

void DescribeIpv6AddressesRequest::setAssociatedInstanceId(const std::string& associatedInstanceId)
{
	associatedInstanceId_ = associatedInstanceId;
	setCoreParameter("AssociatedInstanceId", associatedInstanceId);
}

