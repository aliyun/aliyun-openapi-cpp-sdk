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
	setCoreParameter("App_ip", app_ip);
}

long DescribeEipGatewayInfoRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeEipGatewayInfoRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeEipGatewayInfoRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeEipGatewayInfoRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long DescribeEipGatewayInfoRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeEipGatewayInfoRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

std::string DescribeEipGatewayInfoRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeEipGatewayInfoRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
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
	setCoreParameter("CallerBid", callerBid);
}

long DescribeEipGatewayInfoRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeEipGatewayInfoRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeEipGatewayInfoRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeEipGatewayInfoRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeEipGatewayInfoRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeEipGatewayInfoRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeEipGatewayInfoRequest::getCallerType()const
{
	return callerType_;
}

void DescribeEipGatewayInfoRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
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
	setCoreParameter("AccessKeyId", accessKeyId);
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
	setCoreParameter("InstanceId", instanceId);
}

std::string DescribeEipGatewayInfoRequest::getRegionId()const
{
	return regionId_;
}

void DescribeEipGatewayInfoRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeEipGatewayInfoRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeEipGatewayInfoRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeEipGatewayInfoRequest::getRequestId()const
{
	return requestId_;
}

void DescribeEipGatewayInfoRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
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
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeEipGatewayInfoRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeEipGatewayInfoRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeEipGatewayInfoRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeEipGatewayInfoRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeEipGatewayInfoRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeEipGatewayInfoRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

