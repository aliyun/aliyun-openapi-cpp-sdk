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

#include <alibabacloud/vpc/model/DescribeIpv6GatewaysRequest.h>

using AlibabaCloud::Vpc::Model::DescribeIpv6GatewaysRequest;

DescribeIpv6GatewaysRequest::DescribeIpv6GatewaysRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DescribeIpv6Gateways")
{}

DescribeIpv6GatewaysRequest::~DescribeIpv6GatewaysRequest()
{}

long DescribeIpv6GatewaysRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeIpv6GatewaysRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DescribeIpv6GatewaysRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeIpv6GatewaysRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeIpv6GatewaysRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeIpv6GatewaysRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DescribeIpv6GatewaysRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeIpv6GatewaysRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

int DescribeIpv6GatewaysRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeIpv6GatewaysRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeIpv6GatewaysRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeIpv6GatewaysRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeIpv6GatewaysRequest::getCallerType()const
{
	return callerType_;
}

void DescribeIpv6GatewaysRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string DescribeIpv6GatewaysRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeIpv6GatewaysRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeIpv6GatewaysRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeIpv6GatewaysRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeIpv6GatewaysRequest::getRegionId()const
{
	return regionId_;
}

void DescribeIpv6GatewaysRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeIpv6GatewaysRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeIpv6GatewaysRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

bool DescribeIpv6GatewaysRequest::getEnable()const
{
	return enable_;
}

void DescribeIpv6GatewaysRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
}

std::string DescribeIpv6GatewaysRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeIpv6GatewaysRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

int DescribeIpv6GatewaysRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeIpv6GatewaysRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeIpv6GatewaysRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeIpv6GatewaysRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeIpv6GatewaysRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeIpv6GatewaysRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeIpv6GatewaysRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeIpv6GatewaysRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeIpv6GatewaysRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeIpv6GatewaysRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeIpv6GatewaysRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeIpv6GatewaysRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeIpv6GatewaysRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeIpv6GatewaysRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeIpv6GatewaysRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeIpv6GatewaysRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeIpv6GatewaysRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeIpv6GatewaysRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool DescribeIpv6GatewaysRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeIpv6GatewaysRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DescribeIpv6GatewaysRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeIpv6GatewaysRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool DescribeIpv6GatewaysRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeIpv6GatewaysRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DescribeIpv6GatewaysRequest::getRequestId()const
{
	return requestId_;
}

void DescribeIpv6GatewaysRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string DescribeIpv6GatewaysRequest::getVpcId()const
{
	return vpcId_;
}

void DescribeIpv6GatewaysRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

std::string DescribeIpv6GatewaysRequest::getIpv6GatewayId()const
{
	return ipv6GatewayId_;
}

void DescribeIpv6GatewaysRequest::setIpv6GatewayId(const std::string& ipv6GatewayId)
{
	ipv6GatewayId_ = ipv6GatewayId;
	setParameter("Ipv6GatewayId", ipv6GatewayId);
}

std::string DescribeIpv6GatewaysRequest::getName()const
{
	return name_;
}

void DescribeIpv6GatewaysRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

