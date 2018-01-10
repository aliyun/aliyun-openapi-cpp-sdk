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

#include <alibabacloud/ecs/model/DescribeInstanceHistoryEventsRequest.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeInstanceHistoryEventsRequest::DescribeInstanceHistoryEventsRequest() :
	EcsRequest("DescribeInstanceHistoryEvents")
{}

DescribeInstanceHistoryEventsRequest::~DescribeInstanceHistoryEventsRequest()
{}

std::vector<std::string> DescribeInstanceHistoryEventsRequest::getEventId()const
{
	return eventId_;
}

void DescribeInstanceHistoryEventsRequest::setEventId(const std::vector<std::string>& eventId)
{
	eventId_ = eventId;
	for(int i = 0; i!= eventId.size(); i++)
		setParameter("EventId."+ std::to_string(i), eventId.at(i));
}

long DescribeInstanceHistoryEventsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeInstanceHistoryEventsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeInstanceHistoryEventsRequest::getEventCycleStatus()const
{
	return eventCycleStatus_;
}

void DescribeInstanceHistoryEventsRequest::setEventCycleStatus(const std::string& eventCycleStatus)
{
	eventCycleStatus_ = eventCycleStatus;
	setParameter("EventCycleStatus", eventCycleStatus);
}

long DescribeInstanceHistoryEventsRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeInstanceHistoryEventsRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeInstanceHistoryEventsRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeInstanceHistoryEventsRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DescribeInstanceHistoryEventsRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeInstanceHistoryEventsRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeInstanceHistoryEventsRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeInstanceHistoryEventsRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeInstanceHistoryEventsRequest::getCallerType()const
{
	return callerType_;
}

void DescribeInstanceHistoryEventsRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

int DescribeInstanceHistoryEventsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeInstanceHistoryEventsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeInstanceHistoryEventsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeInstanceHistoryEventsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeInstanceHistoryEventsRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeInstanceHistoryEventsRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeInstanceHistoryEventsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeInstanceHistoryEventsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeInstanceHistoryEventsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeInstanceHistoryEventsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool DescribeInstanceHistoryEventsRequest::getEnable()const
{
	return enable_;
}

void DescribeInstanceHistoryEventsRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
}

std::string DescribeInstanceHistoryEventsRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeInstanceHistoryEventsRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

int DescribeInstanceHistoryEventsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeInstanceHistoryEventsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeInstanceHistoryEventsRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeInstanceHistoryEventsRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeInstanceHistoryEventsRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeInstanceHistoryEventsRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

std::string DescribeInstanceHistoryEventsRequest::getEventPublishTimeEnd()const
{
	return eventPublishTimeEnd_;
}

void DescribeInstanceHistoryEventsRequest::setEventPublishTimeEnd(const std::string& eventPublishTimeEnd)
{
	eventPublishTimeEnd_ = eventPublishTimeEnd;
	setParameter("EventPublishTimeEnd", eventPublishTimeEnd);
}

long DescribeInstanceHistoryEventsRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeInstanceHistoryEventsRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeInstanceHistoryEventsRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeInstanceHistoryEventsRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeInstanceHistoryEventsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeInstanceHistoryEventsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeInstanceHistoryEventsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeInstanceHistoryEventsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeInstanceHistoryEventsRequest::getNotBeforeStart()const
{
	return notBeforeStart_;
}

void DescribeInstanceHistoryEventsRequest::setNotBeforeStart(const std::string& notBeforeStart)
{
	notBeforeStart_ = notBeforeStart;
	setParameter("NotBeforeStart", notBeforeStart);
}

std::string DescribeInstanceHistoryEventsRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeInstanceHistoryEventsRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeInstanceHistoryEventsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeInstanceHistoryEventsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool DescribeInstanceHistoryEventsRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeInstanceHistoryEventsRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DescribeInstanceHistoryEventsRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeInstanceHistoryEventsRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool DescribeInstanceHistoryEventsRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeInstanceHistoryEventsRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DescribeInstanceHistoryEventsRequest::getEventPublishTimeStart()const
{
	return eventPublishTimeStart_;
}

void DescribeInstanceHistoryEventsRequest::setEventPublishTimeStart(const std::string& eventPublishTimeStart)
{
	eventPublishTimeStart_ = eventPublishTimeStart;
	setParameter("EventPublishTimeStart", eventPublishTimeStart);
}

std::string DescribeInstanceHistoryEventsRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeInstanceHistoryEventsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DescribeInstanceHistoryEventsRequest::getNotBeforeEnd()const
{
	return notBeforeEnd_;
}

void DescribeInstanceHistoryEventsRequest::setNotBeforeEnd(const std::string& notBeforeEnd)
{
	notBeforeEnd_ = notBeforeEnd;
	setParameter("NotBeforeEnd", notBeforeEnd);
}

std::string DescribeInstanceHistoryEventsRequest::getRequestId()const
{
	return requestId_;
}

void DescribeInstanceHistoryEventsRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string DescribeInstanceHistoryEventsRequest::getEventType()const
{
	return eventType_;
}

void DescribeInstanceHistoryEventsRequest::setEventType(const std::string& eventType)
{
	eventType_ = eventType;
	setParameter("EventType", eventType);
}

