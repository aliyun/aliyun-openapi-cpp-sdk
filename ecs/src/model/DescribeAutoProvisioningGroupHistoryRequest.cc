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

#include <alibabacloud/ecs/model/DescribeAutoProvisioningGroupHistoryRequest.h>

using AlibabaCloud::Ecs::Model::DescribeAutoProvisioningGroupHistoryRequest;

DescribeAutoProvisioningGroupHistoryRequest::DescribeAutoProvisioningGroupHistoryRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeAutoProvisioningGroupHistory")
{}

DescribeAutoProvisioningGroupHistoryRequest::~DescribeAutoProvisioningGroupHistoryRequest()
{}

long DescribeAutoProvisioningGroupHistoryRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeAutoProvisioningGroupHistoryRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DescribeAutoProvisioningGroupHistoryRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeAutoProvisioningGroupHistoryRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeAutoProvisioningGroupHistoryRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeAutoProvisioningGroupHistoryRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeAutoProvisioningGroupHistoryRequest::getStartTime()const
{
	return startTime_;
}

void DescribeAutoProvisioningGroupHistoryRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeAutoProvisioningGroupHistoryRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeAutoProvisioningGroupHistoryRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeAutoProvisioningGroupHistoryRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeAutoProvisioningGroupHistoryRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeAutoProvisioningGroupHistoryRequest::getCallerType()const
{
	return callerType_;
}

void DescribeAutoProvisioningGroupHistoryRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

int DescribeAutoProvisioningGroupHistoryRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeAutoProvisioningGroupHistoryRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeAutoProvisioningGroupHistoryRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeAutoProvisioningGroupHistoryRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeAutoProvisioningGroupHistoryRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeAutoProvisioningGroupHistoryRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeAutoProvisioningGroupHistoryRequest::getRegionId()const
{
	return regionId_;
}

void DescribeAutoProvisioningGroupHistoryRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool DescribeAutoProvisioningGroupHistoryRequest::getEnable()const
{
	return enable_;
}

void DescribeAutoProvisioningGroupHistoryRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string DescribeAutoProvisioningGroupHistoryRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeAutoProvisioningGroupHistoryRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

int DescribeAutoProvisioningGroupHistoryRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeAutoProvisioningGroupHistoryRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeAutoProvisioningGroupHistoryRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeAutoProvisioningGroupHistoryRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeAutoProvisioningGroupHistoryRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeAutoProvisioningGroupHistoryRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeAutoProvisioningGroupHistoryRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeAutoProvisioningGroupHistoryRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeAutoProvisioningGroupHistoryRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeAutoProvisioningGroupHistoryRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeAutoProvisioningGroupHistoryRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeAutoProvisioningGroupHistoryRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeAutoProvisioningGroupHistoryRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeAutoProvisioningGroupHistoryRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeAutoProvisioningGroupHistoryRequest::getEndTime()const
{
	return endTime_;
}

void DescribeAutoProvisioningGroupHistoryRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeAutoProvisioningGroupHistoryRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeAutoProvisioningGroupHistoryRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeAutoProvisioningGroupHistoryRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeAutoProvisioningGroupHistoryRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

bool DescribeAutoProvisioningGroupHistoryRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeAutoProvisioningGroupHistoryRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeAutoProvisioningGroupHistoryRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeAutoProvisioningGroupHistoryRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

std::string DescribeAutoProvisioningGroupHistoryRequest::getAutoProvisioningGroupId()const
{
	return autoProvisioningGroupId_;
}

void DescribeAutoProvisioningGroupHistoryRequest::setAutoProvisioningGroupId(const std::string& autoProvisioningGroupId)
{
	autoProvisioningGroupId_ = autoProvisioningGroupId;
	setCoreParameter("AutoProvisioningGroupId", autoProvisioningGroupId);
}

bool DescribeAutoProvisioningGroupHistoryRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeAutoProvisioningGroupHistoryRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeAutoProvisioningGroupHistoryRequest::getRequestId()const
{
	return requestId_;
}

void DescribeAutoProvisioningGroupHistoryRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeAutoProvisioningGroupHistoryRequest::getAkProxy()const
{
	return akProxy_;
}

void DescribeAutoProvisioningGroupHistoryRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", akProxy);
}

