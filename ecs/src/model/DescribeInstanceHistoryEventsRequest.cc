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

using AlibabaCloud::Ecs::Model::DescribeInstanceHistoryEventsRequest;

DescribeInstanceHistoryEventsRequest::DescribeInstanceHistoryEventsRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeInstanceHistoryEvents")
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
		setCoreParameter("EventId."+ std::to_string(i), std::to_string(eventId.at(i)));
}

long DescribeInstanceHistoryEventsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeInstanceHistoryEventsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeInstanceHistoryEventsRequest::getEventCycleStatus()const
{
	return eventCycleStatus_;
}

void DescribeInstanceHistoryEventsRequest::setEventCycleStatus(const std::string& eventCycleStatus)
{
	eventCycleStatus_ = eventCycleStatus;
	setCoreParameter("EventCycleStatus", std::to_string(eventCycleStatus));
}

long DescribeInstanceHistoryEventsRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeInstanceHistoryEventsRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeInstanceHistoryEventsRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeInstanceHistoryEventsRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeInstanceHistoryEventsRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeInstanceHistoryEventsRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string DescribeInstanceHistoryEventsRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeInstanceHistoryEventsRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string DescribeInstanceHistoryEventsRequest::getCallerType()const
{
	return callerType_;
}

void DescribeInstanceHistoryEventsRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

int DescribeInstanceHistoryEventsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeInstanceHistoryEventsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string DescribeInstanceHistoryEventsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeInstanceHistoryEventsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string DescribeInstanceHistoryEventsRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DescribeInstanceHistoryEventsRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", std::to_string(sourceRegionId));
}

std::string DescribeInstanceHistoryEventsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeInstanceHistoryEventsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DescribeInstanceHistoryEventsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeInstanceHistoryEventsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

bool DescribeInstanceHistoryEventsRequest::getEnable()const
{
	return enable_;
}

void DescribeInstanceHistoryEventsRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string DescribeInstanceHistoryEventsRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeInstanceHistoryEventsRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

int DescribeInstanceHistoryEventsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeInstanceHistoryEventsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeInstanceHistoryEventsRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeInstanceHistoryEventsRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::vector<std::string> DescribeInstanceHistoryEventsRequest::getInstanceEventCycleStatus()const
{
	return instanceEventCycleStatus_;
}

void DescribeInstanceHistoryEventsRequest::setInstanceEventCycleStatus(const std::vector<std::string>& instanceEventCycleStatus)
{
	instanceEventCycleStatus_ = instanceEventCycleStatus;
	for(int i = 0; i!= instanceEventCycleStatus.size(); i++)
		setCoreParameter("InstanceEventCycleStatus."+ std::to_string(i), std::to_string(instanceEventCycleStatus.at(i)));
}

std::string DescribeInstanceHistoryEventsRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeInstanceHistoryEventsRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

std::string DescribeInstanceHistoryEventsRequest::getEventPublishTimeEnd()const
{
	return eventPublishTimeEnd_;
}

void DescribeInstanceHistoryEventsRequest::setEventPublishTimeEnd(const std::string& eventPublishTimeEnd)
{
	eventPublishTimeEnd_ = eventPublishTimeEnd;
	setCoreParameter("EventPublishTimeEnd", std::to_string(eventPublishTimeEnd));
}

long DescribeInstanceHistoryEventsRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeInstanceHistoryEventsRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeInstanceHistoryEventsRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeInstanceHistoryEventsRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::vector<std::string> DescribeInstanceHistoryEventsRequest::getInstanceEventType()const
{
	return instanceEventType_;
}

void DescribeInstanceHistoryEventsRequest::setInstanceEventType(const std::vector<std::string>& instanceEventType)
{
	instanceEventType_ = instanceEventType;
	for(int i = 0; i!= instanceEventType.size(); i++)
		setCoreParameter("InstanceEventType."+ std::to_string(i), std::to_string(instanceEventType.at(i)));
}

std::string DescribeInstanceHistoryEventsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeInstanceHistoryEventsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DescribeInstanceHistoryEventsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeInstanceHistoryEventsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string DescribeInstanceHistoryEventsRequest::getNotBeforeStart()const
{
	return notBeforeStart_;
}

void DescribeInstanceHistoryEventsRequest::setNotBeforeStart(const std::string& notBeforeStart)
{
	notBeforeStart_ = notBeforeStart;
	setCoreParameter("NotBeforeStart", std::to_string(notBeforeStart));
}

std::string DescribeInstanceHistoryEventsRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeInstanceHistoryEventsRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long DescribeInstanceHistoryEventsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeInstanceHistoryEventsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

bool DescribeInstanceHistoryEventsRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeInstanceHistoryEventsRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeInstanceHistoryEventsRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeInstanceHistoryEventsRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeInstanceHistoryEventsRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeInstanceHistoryEventsRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeInstanceHistoryEventsRequest::getEventPublishTimeStart()const
{
	return eventPublishTimeStart_;
}

void DescribeInstanceHistoryEventsRequest::setEventPublishTimeStart(const std::string& eventPublishTimeStart)
{
	eventPublishTimeStart_ = eventPublishTimeStart;
	setCoreParameter("EventPublishTimeStart", std::to_string(eventPublishTimeStart));
}

std::string DescribeInstanceHistoryEventsRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeInstanceHistoryEventsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

std::string DescribeInstanceHistoryEventsRequest::getNotBeforeEnd()const
{
	return notBeforeEnd_;
}

void DescribeInstanceHistoryEventsRequest::setNotBeforeEnd(const std::string& notBeforeEnd)
{
	notBeforeEnd_ = notBeforeEnd;
	setCoreParameter("NotBeforeEnd", std::to_string(notBeforeEnd));
}

std::string DescribeInstanceHistoryEventsRequest::getRequestId()const
{
	return requestId_;
}

void DescribeInstanceHistoryEventsRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string DescribeInstanceHistoryEventsRequest::getAkProxy()const
{
	return akProxy_;
}

void DescribeInstanceHistoryEventsRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", std::to_string(akProxy));
}

std::string DescribeInstanceHistoryEventsRequest::getEventType()const
{
	return eventType_;
}

void DescribeInstanceHistoryEventsRequest::setEventType(const std::string& eventType)
{
	eventType_ = eventType;
	setCoreParameter("EventType", std::to_string(eventType));
}

