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

#include <alibabacloud/ecs/model/DescribeDisksFullStatusRequest.h>

using AlibabaCloud::Ecs::Model::DescribeDisksFullStatusRequest;

DescribeDisksFullStatusRequest::DescribeDisksFullStatusRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeDisksFullStatus")
{}

DescribeDisksFullStatusRequest::~DescribeDisksFullStatusRequest()
{}

std::vector<std::string> DescribeDisksFullStatusRequest::getEventId()const
{
	return eventId_;
}

void DescribeDisksFullStatusRequest::setEventId(const std::vector<std::string>& eventId)
{
	eventId_ = eventId;
	for(int i = 0; i!= eventId.size(); i++)
		setParameter("EventId."+ std::to_string(i), eventId.at(i));
}

long DescribeDisksFullStatusRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDisksFullStatusRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DescribeDisksFullStatusRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeDisksFullStatusRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeDisksFullStatusRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeDisksFullStatusRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DescribeDisksFullStatusRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeDisksFullStatusRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeDisksFullStatusRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeDisksFullStatusRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeDisksFullStatusRequest::getCallerType()const
{
	return callerType_;
}

void DescribeDisksFullStatusRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

int DescribeDisksFullStatusRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeDisksFullStatusRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeDisksFullStatusRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDisksFullStatusRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDisksFullStatusRequest::getEventTimeStart()const
{
	return eventTimeStart_;
}

void DescribeDisksFullStatusRequest::setEventTimeStart(const std::string& eventTimeStart)
{
	eventTimeStart_ = eventTimeStart;
	setParameter("EventTimeStart", eventTimeStart);
}

std::string DescribeDisksFullStatusRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDisksFullStatusRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeDisksFullStatusRequest::getRegionId()const
{
	return regionId_;
}

void DescribeDisksFullStatusRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool DescribeDisksFullStatusRequest::getEnable()const
{
	return enable_;
}

void DescribeDisksFullStatusRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
}

std::string DescribeDisksFullStatusRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeDisksFullStatusRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

int DescribeDisksFullStatusRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDisksFullStatusRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeDisksFullStatusRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeDisksFullStatusRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::vector<std::string> DescribeDisksFullStatusRequest::getDiskId()const
{
	return diskId_;
}

void DescribeDisksFullStatusRequest::setDiskId(const std::vector<std::string>& diskId)
{
	diskId_ = diskId;
	for(int i = 0; i!= diskId.size(); i++)
		setParameter("DiskId."+ std::to_string(i), diskId.at(i));
}

std::string DescribeDisksFullStatusRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeDisksFullStatusRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeDisksFullStatusRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeDisksFullStatusRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeDisksFullStatusRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeDisksFullStatusRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeDisksFullStatusRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDisksFullStatusRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeDisksFullStatusRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeDisksFullStatusRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeDisksFullStatusRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeDisksFullStatusRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeDisksFullStatusRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDisksFullStatusRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool DescribeDisksFullStatusRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeDisksFullStatusRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DescribeDisksFullStatusRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeDisksFullStatusRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

std::string DescribeDisksFullStatusRequest::getEventTimeEnd()const
{
	return eventTimeEnd_;
}

void DescribeDisksFullStatusRequest::setEventTimeEnd(const std::string& eventTimeEnd)
{
	eventTimeEnd_ = eventTimeEnd;
	setParameter("EventTimeEnd", eventTimeEnd);
}

bool DescribeDisksFullStatusRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeDisksFullStatusRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DescribeDisksFullStatusRequest::getRequestId()const
{
	return requestId_;
}

void DescribeDisksFullStatusRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string DescribeDisksFullStatusRequest::getHealthStatus()const
{
	return healthStatus_;
}

void DescribeDisksFullStatusRequest::setHealthStatus(const std::string& healthStatus)
{
	healthStatus_ = healthStatus;
	setParameter("HealthStatus", healthStatus);
}

std::string DescribeDisksFullStatusRequest::getEventType()const
{
	return eventType_;
}

void DescribeDisksFullStatusRequest::setEventType(const std::string& eventType)
{
	eventType_ = eventType;
	setParameter("EventType", eventType);
}

std::string DescribeDisksFullStatusRequest::getStatus()const
{
	return status_;
}

void DescribeDisksFullStatusRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

