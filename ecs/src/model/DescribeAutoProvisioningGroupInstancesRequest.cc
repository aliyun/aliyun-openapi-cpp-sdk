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

#include <alibabacloud/ecs/model/DescribeAutoProvisioningGroupInstancesRequest.h>

using AlibabaCloud::Ecs::Model::DescribeAutoProvisioningGroupInstancesRequest;

DescribeAutoProvisioningGroupInstancesRequest::DescribeAutoProvisioningGroupInstancesRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeAutoProvisioningGroupInstances")
{}

DescribeAutoProvisioningGroupInstancesRequest::~DescribeAutoProvisioningGroupInstancesRequest()
{}

long DescribeAutoProvisioningGroupInstancesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeAutoProvisioningGroupInstancesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DescribeAutoProvisioningGroupInstancesRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeAutoProvisioningGroupInstancesRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeAutoProvisioningGroupInstancesRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeAutoProvisioningGroupInstancesRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeAutoProvisioningGroupInstancesRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeAutoProvisioningGroupInstancesRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeAutoProvisioningGroupInstancesRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeAutoProvisioningGroupInstancesRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeAutoProvisioningGroupInstancesRequest::getCallerType()const
{
	return callerType_;
}

void DescribeAutoProvisioningGroupInstancesRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

int DescribeAutoProvisioningGroupInstancesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeAutoProvisioningGroupInstancesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeAutoProvisioningGroupInstancesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeAutoProvisioningGroupInstancesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeAutoProvisioningGroupInstancesRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeAutoProvisioningGroupInstancesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeAutoProvisioningGroupInstancesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeAutoProvisioningGroupInstancesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool DescribeAutoProvisioningGroupInstancesRequest::getEnable()const
{
	return enable_;
}

void DescribeAutoProvisioningGroupInstancesRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string DescribeAutoProvisioningGroupInstancesRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeAutoProvisioningGroupInstancesRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

int DescribeAutoProvisioningGroupInstancesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeAutoProvisioningGroupInstancesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeAutoProvisioningGroupInstancesRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeAutoProvisioningGroupInstancesRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeAutoProvisioningGroupInstancesRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeAutoProvisioningGroupInstancesRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeAutoProvisioningGroupInstancesRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeAutoProvisioningGroupInstancesRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeAutoProvisioningGroupInstancesRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeAutoProvisioningGroupInstancesRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeAutoProvisioningGroupInstancesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeAutoProvisioningGroupInstancesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeAutoProvisioningGroupInstancesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeAutoProvisioningGroupInstancesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeAutoProvisioningGroupInstancesRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeAutoProvisioningGroupInstancesRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeAutoProvisioningGroupInstancesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeAutoProvisioningGroupInstancesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

bool DescribeAutoProvisioningGroupInstancesRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeAutoProvisioningGroupInstancesRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeAutoProvisioningGroupInstancesRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeAutoProvisioningGroupInstancesRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

std::string DescribeAutoProvisioningGroupInstancesRequest::getAutoProvisioningGroupId()const
{
	return autoProvisioningGroupId_;
}

void DescribeAutoProvisioningGroupInstancesRequest::setAutoProvisioningGroupId(const std::string& autoProvisioningGroupId)
{
	autoProvisioningGroupId_ = autoProvisioningGroupId;
	setCoreParameter("AutoProvisioningGroupId", autoProvisioningGroupId);
}

bool DescribeAutoProvisioningGroupInstancesRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeAutoProvisioningGroupInstancesRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeAutoProvisioningGroupInstancesRequest::getRequestId()const
{
	return requestId_;
}

void DescribeAutoProvisioningGroupInstancesRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeAutoProvisioningGroupInstancesRequest::getAkProxy()const
{
	return akProxy_;
}

void DescribeAutoProvisioningGroupInstancesRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", akProxy);
}

