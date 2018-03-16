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

#include <alibabacloud/ecs/model/DescribeEventDetailRequest.h>

using AlibabaCloud::Ecs::Model::DescribeEventDetailRequest;

DescribeEventDetailRequest::DescribeEventDetailRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeEventDetail")
{}

DescribeEventDetailRequest::~DescribeEventDetailRequest()
{}

std::string DescribeEventDetailRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeEventDetailRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeEventDetailRequest::getEventId()const
{
	return eventId_;
}

void DescribeEventDetailRequest::setEventId(const std::string& eventId)
{
	eventId_ = eventId;
	setParameter("EventId", eventId);
}

long DescribeEventDetailRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeEventDetailRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeEventDetailRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeEventDetailRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long DescribeEventDetailRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeEventDetailRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeEventDetailRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeEventDetailRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DescribeEventDetailRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeEventDetailRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeEventDetailRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeEventDetailRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeEventDetailRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeEventDetailRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeEventDetailRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeEventDetailRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeEventDetailRequest::getCallerType()const
{
	return callerType_;
}

void DescribeEventDetailRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

bool DescribeEventDetailRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeEventDetailRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DescribeEventDetailRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeEventDetailRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

std::string DescribeEventDetailRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeEventDetailRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

bool DescribeEventDetailRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeEventDetailRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DescribeEventDetailRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeEventDetailRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeEventDetailRequest::getRegionId()const
{
	return regionId_;
}

void DescribeEventDetailRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeEventDetailRequest::getRequestId()const
{
	return requestId_;
}

void DescribeEventDetailRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

bool DescribeEventDetailRequest::getEnable()const
{
	return enable_;
}

void DescribeEventDetailRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
}

std::string DescribeEventDetailRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeEventDetailRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string DescribeEventDetailRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeEventDetailRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeEventDetailRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeEventDetailRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeEventDetailRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeEventDetailRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

