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

#include <alibabacloud/ecs/model/DescribeSnapshotsUsageRequest.h>

using AlibabaCloud::Ecs::Model::DescribeSnapshotsUsageRequest;

DescribeSnapshotsUsageRequest::DescribeSnapshotsUsageRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeSnapshotsUsage")
{}

DescribeSnapshotsUsageRequest::~DescribeSnapshotsUsageRequest()
{}

long DescribeSnapshotsUsageRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeSnapshotsUsageRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DescribeSnapshotsUsageRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeSnapshotsUsageRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeSnapshotsUsageRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeSnapshotsUsageRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeSnapshotsUsageRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeSnapshotsUsageRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeSnapshotsUsageRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeSnapshotsUsageRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeSnapshotsUsageRequest::getCallerType()const
{
	return callerType_;
}

void DescribeSnapshotsUsageRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string DescribeSnapshotsUsageRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeSnapshotsUsageRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeSnapshotsUsageRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DescribeSnapshotsUsageRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setParameter("SourceRegionId", sourceRegionId);
}

std::string DescribeSnapshotsUsageRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeSnapshotsUsageRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeSnapshotsUsageRequest::getRegionId()const
{
	return regionId_;
}

void DescribeSnapshotsUsageRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool DescribeSnapshotsUsageRequest::getEnable()const
{
	return enable_;
}

void DescribeSnapshotsUsageRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", enable ? "true" : "false");
}

std::string DescribeSnapshotsUsageRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeSnapshotsUsageRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string DescribeSnapshotsUsageRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeSnapshotsUsageRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeSnapshotsUsageRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeSnapshotsUsageRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeSnapshotsUsageRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeSnapshotsUsageRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeSnapshotsUsageRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeSnapshotsUsageRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeSnapshotsUsageRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeSnapshotsUsageRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeSnapshotsUsageRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeSnapshotsUsageRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeSnapshotsUsageRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeSnapshotsUsageRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeSnapshotsUsageRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSnapshotsUsageRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool DescribeSnapshotsUsageRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeSnapshotsUsageRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeSnapshotsUsageRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeSnapshotsUsageRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeSnapshotsUsageRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeSnapshotsUsageRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeSnapshotsUsageRequest::getRequestId()const
{
	return requestId_;
}

void DescribeSnapshotsUsageRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

