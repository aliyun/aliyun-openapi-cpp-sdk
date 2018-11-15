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

#include <alibabacloud/ecs/model/DescribeEventsRequest.h>

using AlibabaCloud::Ecs::Model::DescribeEventsRequest;

DescribeEventsRequest::DescribeEventsRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeEvents")
{}

DescribeEventsRequest::~DescribeEventsRequest()
{}

std::string DescribeEventsRequest::getEventId()const
{
	return eventId_;
}

void DescribeEventsRequest::setEventId(const std::string& eventId)
{
	eventId_ = eventId;
	setParameter("EventId", eventId);
}

long DescribeEventsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeEventsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DescribeEventsRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeEventsRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeEventsRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeEventsRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DescribeEventsRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeEventsRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeEventsRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeEventsRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeEventsRequest::getCallerType()const
{
	return callerType_;
}

void DescribeEventsRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

int DescribeEventsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeEventsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeEventsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeEventsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeEventsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeEventsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeEventsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeEventsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool DescribeEventsRequest::getEnable()const
{
	return enable_;
}

void DescribeEventsRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
}

std::string DescribeEventsRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeEventsRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

int DescribeEventsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeEventsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeEventsRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeEventsRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeEventsRequest::getPlanTime()const
{
	return planTime_;
}

void DescribeEventsRequest::setPlanTime(const std::string& planTime)
{
	planTime_ = planTime;
	setParameter("PlanTime", planTime);
}

std::string DescribeEventsRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeEventsRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeEventsRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeEventsRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeEventsRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeEventsRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeEventsRequest::getExpireTime()const
{
	return expireTime_;
}

void DescribeEventsRequest::setExpireTime(const std::string& expireTime)
{
	expireTime_ = expireTime;
	setParameter("ExpireTime", expireTime);
}

std::string DescribeEventsRequest::getResourceId()const
{
	return resourceId_;
}

void DescribeEventsRequest::setResourceId(const std::string& resourceId)
{
	resourceId_ = resourceId;
	setParameter("ResourceId", resourceId);
}

std::string DescribeEventsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeEventsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeEventsRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeEventsRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeEventsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeEventsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool DescribeEventsRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeEventsRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DescribeEventsRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeEventsRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool DescribeEventsRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeEventsRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DescribeEventsRequest::getRequestId()const
{
	return requestId_;
}

void DescribeEventsRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string DescribeEventsRequest::getEventType()const
{
	return eventType_;
}

void DescribeEventsRequest::setEventType(const std::string& eventType)
{
	eventType_ = eventType;
	setParameter("EventType", eventType);
}

std::string DescribeEventsRequest::getStatus()const
{
	return status_;
}

void DescribeEventsRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

