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

#include <alibabacloud/ecs/model/DescribeUserBusinessBehaviorRequest.h>

using AlibabaCloud::Ecs::Model::DescribeUserBusinessBehaviorRequest;

DescribeUserBusinessBehaviorRequest::DescribeUserBusinessBehaviorRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeUserBusinessBehavior")
{}

DescribeUserBusinessBehaviorRequest::~DescribeUserBusinessBehaviorRequest()
{}

long DescribeUserBusinessBehaviorRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeUserBusinessBehaviorRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DescribeUserBusinessBehaviorRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeUserBusinessBehaviorRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeUserBusinessBehaviorRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeUserBusinessBehaviorRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DescribeUserBusinessBehaviorRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeUserBusinessBehaviorRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeUserBusinessBehaviorRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeUserBusinessBehaviorRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeUserBusinessBehaviorRequest::getCallerType()const
{
	return callerType_;
}

void DescribeUserBusinessBehaviorRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string DescribeUserBusinessBehaviorRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeUserBusinessBehaviorRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeUserBusinessBehaviorRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DescribeUserBusinessBehaviorRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setParameter("SourceRegionId", sourceRegionId);
}

std::string DescribeUserBusinessBehaviorRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeUserBusinessBehaviorRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeUserBusinessBehaviorRequest::getRegionId()const
{
	return regionId_;
}

void DescribeUserBusinessBehaviorRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool DescribeUserBusinessBehaviorRequest::getEnable()const
{
	return enable_;
}

void DescribeUserBusinessBehaviorRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
}

std::string DescribeUserBusinessBehaviorRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeUserBusinessBehaviorRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string DescribeUserBusinessBehaviorRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeUserBusinessBehaviorRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeUserBusinessBehaviorRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeUserBusinessBehaviorRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeUserBusinessBehaviorRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeUserBusinessBehaviorRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeUserBusinessBehaviorRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeUserBusinessBehaviorRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeUserBusinessBehaviorRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeUserBusinessBehaviorRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeUserBusinessBehaviorRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeUserBusinessBehaviorRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeUserBusinessBehaviorRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeUserBusinessBehaviorRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeUserBusinessBehaviorRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeUserBusinessBehaviorRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool DescribeUserBusinessBehaviorRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeUserBusinessBehaviorRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DescribeUserBusinessBehaviorRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeUserBusinessBehaviorRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool DescribeUserBusinessBehaviorRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeUserBusinessBehaviorRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DescribeUserBusinessBehaviorRequest::getRequestId()const
{
	return requestId_;
}

void DescribeUserBusinessBehaviorRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string DescribeUserBusinessBehaviorRequest::getStatusKey()const
{
	return statusKey_;
}

void DescribeUserBusinessBehaviorRequest::setStatusKey(const std::string& statusKey)
{
	statusKey_ = statusKey;
	setParameter("StatusKey", statusKey);
}

