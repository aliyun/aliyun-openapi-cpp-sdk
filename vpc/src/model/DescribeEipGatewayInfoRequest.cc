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

#include <alibabacloud/vpc/model/DescribeEipGatewayInfoRequest.h>

using AlibabaCloud::Vpc::Model::DescribeEipGatewayInfoRequest;

DescribeEipGatewayInfoRequest::DescribeEipGatewayInfoRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DescribeEipGatewayInfo")
{}

DescribeEipGatewayInfoRequest::~DescribeEipGatewayInfoRequest()
{}

std::string DescribeEipGatewayInfoRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeEipGatewayInfoRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

long DescribeEipGatewayInfoRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeEipGatewayInfoRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeEipGatewayInfoRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeEipGatewayInfoRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

long DescribeEipGatewayInfoRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeEipGatewayInfoRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

std::string DescribeEipGatewayInfoRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeEipGatewayInfoRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

bool DescribeEipGatewayInfoRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeEipGatewayInfoRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeEipGatewayInfoRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeEipGatewayInfoRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long DescribeEipGatewayInfoRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeEipGatewayInfoRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeEipGatewayInfoRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeEipGatewayInfoRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string DescribeEipGatewayInfoRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeEipGatewayInfoRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string DescribeEipGatewayInfoRequest::getCallerType()const
{
	return callerType_;
}

void DescribeEipGatewayInfoRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

bool DescribeEipGatewayInfoRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeEipGatewayInfoRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeEipGatewayInfoRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeEipGatewayInfoRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

std::string DescribeEipGatewayInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeEipGatewayInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

bool DescribeEipGatewayInfoRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeEipGatewayInfoRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeEipGatewayInfoRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeEipGatewayInfoRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

std::string DescribeEipGatewayInfoRequest::getRegionId()const
{
	return regionId_;
}

void DescribeEipGatewayInfoRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DescribeEipGatewayInfoRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeEipGatewayInfoRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DescribeEipGatewayInfoRequest::getRequestId()const
{
	return requestId_;
}

void DescribeEipGatewayInfoRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

bool DescribeEipGatewayInfoRequest::getEnable()const
{
	return enable_;
}

void DescribeEipGatewayInfoRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string DescribeEipGatewayInfoRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeEipGatewayInfoRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string DescribeEipGatewayInfoRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeEipGatewayInfoRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string DescribeEipGatewayInfoRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeEipGatewayInfoRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long DescribeEipGatewayInfoRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeEipGatewayInfoRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

