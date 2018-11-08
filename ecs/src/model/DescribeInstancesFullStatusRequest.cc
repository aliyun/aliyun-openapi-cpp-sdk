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

#include <alibabacloud/ecs/model/DescribeInstancesFullStatusRequest.h>

using AlibabaCloud::Ecs::Model::DescribeInstancesFullStatusRequest;

DescribeInstancesFullStatusRequest::DescribeInstancesFullStatusRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeInstancesFullStatus")
{}

DescribeInstancesFullStatusRequest::~DescribeInstancesFullStatusRequest()
{}

std::vector<std::string> DescribeInstancesFullStatusRequest::getEventId()const
{
	return eventId_;
}

void DescribeInstancesFullStatusRequest::setEventId(const std::vector<std::string>& eventId)
{
	eventId_ = eventId;
	for(int i = 0; i!= eventId.size(); i++)
		setParameter("EventId."+ std::to_string(i), eventId.at(i));
}

long DescribeInstancesFullStatusRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeInstancesFullStatusRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DescribeInstancesFullStatusRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeInstancesFullStatusRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeInstancesFullStatusRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeInstancesFullStatusRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DescribeInstancesFullStatusRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeInstancesFullStatusRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeInstancesFullStatusRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeInstancesFullStatusRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeInstancesFullStatusRequest::getCallerType()const
{
	return callerType_;
}

void DescribeInstancesFullStatusRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

int DescribeInstancesFullStatusRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeInstancesFullStatusRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeInstancesFullStatusRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeInstancesFullStatusRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeInstancesFullStatusRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeInstancesFullStatusRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeInstancesFullStatusRequest::getRegionId()const
{
	return regionId_;
}

void DescribeInstancesFullStatusRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool DescribeInstancesFullStatusRequest::getEnable()const
{
	return enable_;
}

void DescribeInstancesFullStatusRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
}

std::string DescribeInstancesFullStatusRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeInstancesFullStatusRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

int DescribeInstancesFullStatusRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeInstancesFullStatusRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeInstancesFullStatusRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeInstancesFullStatusRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeInstancesFullStatusRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeInstancesFullStatusRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

std::string DescribeInstancesFullStatusRequest::getEventPublishTimeEnd()const
{
	return eventPublishTimeEnd_;
}

void DescribeInstancesFullStatusRequest::setEventPublishTimeEnd(const std::string& eventPublishTimeEnd)
{
	eventPublishTimeEnd_ = eventPublishTimeEnd;
	setParameter("EventPublishTimeEnd", eventPublishTimeEnd);
}

long DescribeInstancesFullStatusRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeInstancesFullStatusRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeInstancesFullStatusRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeInstancesFullStatusRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::vector<std::string> DescribeInstancesFullStatusRequest::getInstanceEventType()const
{
	return instanceEventType_;
}

void DescribeInstancesFullStatusRequest::setInstanceEventType(const std::vector<std::string>& instanceEventType)
{
	instanceEventType_ = instanceEventType;
	for(int i = 0; i!= instanceEventType.size(); i++)
		setParameter("InstanceEventType."+ std::to_string(i), instanceEventType.at(i));
}

std::string DescribeInstancesFullStatusRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeInstancesFullStatusRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeInstancesFullStatusRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeInstancesFullStatusRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeInstancesFullStatusRequest::getNotBeforeStart()const
{
	return notBeforeStart_;
}

void DescribeInstancesFullStatusRequest::setNotBeforeStart(const std::string& notBeforeStart)
{
	notBeforeStart_ = notBeforeStart;
	setParameter("NotBeforeStart", notBeforeStart);
}

std::string DescribeInstancesFullStatusRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeInstancesFullStatusRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeInstancesFullStatusRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeInstancesFullStatusRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool DescribeInstancesFullStatusRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeInstancesFullStatusRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DescribeInstancesFullStatusRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeInstancesFullStatusRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool DescribeInstancesFullStatusRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeInstancesFullStatusRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DescribeInstancesFullStatusRequest::getEventPublishTimeStart()const
{
	return eventPublishTimeStart_;
}

void DescribeInstancesFullStatusRequest::setEventPublishTimeStart(const std::string& eventPublishTimeStart)
{
	eventPublishTimeStart_ = eventPublishTimeStart;
	setParameter("EventPublishTimeStart", eventPublishTimeStart);
}

std::vector<std::string> DescribeInstancesFullStatusRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeInstancesFullStatusRequest::setInstanceId(const std::vector<std::string>& instanceId)
{
	instanceId_ = instanceId;
	for(int i = 0; i!= instanceId.size(); i++)
		setParameter("InstanceId."+ std::to_string(i), instanceId.at(i));
}

std::string DescribeInstancesFullStatusRequest::getNotBeforeEnd()const
{
	return notBeforeEnd_;
}

void DescribeInstancesFullStatusRequest::setNotBeforeEnd(const std::string& notBeforeEnd)
{
	notBeforeEnd_ = notBeforeEnd;
	setParameter("NotBeforeEnd", notBeforeEnd);
}

std::string DescribeInstancesFullStatusRequest::getRequestId()const
{
	return requestId_;
}

void DescribeInstancesFullStatusRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string DescribeInstancesFullStatusRequest::getHealthStatus()const
{
	return healthStatus_;
}

void DescribeInstancesFullStatusRequest::setHealthStatus(const std::string& healthStatus)
{
	healthStatus_ = healthStatus;
	setParameter("HealthStatus", healthStatus);
}

std::string DescribeInstancesFullStatusRequest::getEventType()const
{
	return eventType_;
}

void DescribeInstancesFullStatusRequest::setEventType(const std::string& eventType)
{
	eventType_ = eventType;
	setParameter("EventType", eventType);
}

std::string DescribeInstancesFullStatusRequest::getStatus()const
{
	return status_;
}

void DescribeInstancesFullStatusRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

