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

#include <alibabacloud/vpc/model/DescribeNetworkAclAttributesRequest.h>

using AlibabaCloud::Vpc::Model::DescribeNetworkAclAttributesRequest;

DescribeNetworkAclAttributesRequest::DescribeNetworkAclAttributesRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DescribeNetworkAclAttributes")
{}

DescribeNetworkAclAttributesRequest::~DescribeNetworkAclAttributesRequest()
{}

long DescribeNetworkAclAttributesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeNetworkAclAttributesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeNetworkAclAttributesRequest::getClientToken()const
{
	return clientToken_;
}

void DescribeNetworkAclAttributesRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", std::to_string(clientToken));
}

long DescribeNetworkAclAttributesRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeNetworkAclAttributesRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeNetworkAclAttributesRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeNetworkAclAttributesRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeNetworkAclAttributesRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeNetworkAclAttributesRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string DescribeNetworkAclAttributesRequest::getCallerType()const
{
	return callerType_;
}

void DescribeNetworkAclAttributesRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string DescribeNetworkAclAttributesRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeNetworkAclAttributesRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string DescribeNetworkAclAttributesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeNetworkAclAttributesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string DescribeNetworkAclAttributesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeNetworkAclAttributesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DescribeNetworkAclAttributesRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeNetworkAclAttributesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

bool DescribeNetworkAclAttributesRequest::getEnable()const
{
	return enable_;
}

void DescribeNetworkAclAttributesRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string DescribeNetworkAclAttributesRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeNetworkAclAttributesRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string DescribeNetworkAclAttributesRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeNetworkAclAttributesRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string DescribeNetworkAclAttributesRequest::getNetworkAclId()const
{
	return networkAclId_;
}

void DescribeNetworkAclAttributesRequest::setNetworkAclId(const std::string& networkAclId)
{
	networkAclId_ = networkAclId;
	setCoreParameter("NetworkAclId", std::to_string(networkAclId));
}

std::string DescribeNetworkAclAttributesRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeNetworkAclAttributesRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long DescribeNetworkAclAttributesRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeNetworkAclAttributesRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeNetworkAclAttributesRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeNetworkAclAttributesRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string DescribeNetworkAclAttributesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeNetworkAclAttributesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DescribeNetworkAclAttributesRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeNetworkAclAttributesRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long DescribeNetworkAclAttributesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeNetworkAclAttributesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

bool DescribeNetworkAclAttributesRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeNetworkAclAttributesRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeNetworkAclAttributesRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeNetworkAclAttributesRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeNetworkAclAttributesRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeNetworkAclAttributesRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeNetworkAclAttributesRequest::getRequestId()const
{
	return requestId_;
}

void DescribeNetworkAclAttributesRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

