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

#include <alibabacloud/ecs/model/AcceptInquiredSystemEventRequest.h>

using AlibabaCloud::Ecs::Model::AcceptInquiredSystemEventRequest;

AcceptInquiredSystemEventRequest::AcceptInquiredSystemEventRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "AcceptInquiredSystemEvent")
{}

AcceptInquiredSystemEventRequest::~AcceptInquiredSystemEventRequest()
{}

std::string AcceptInquiredSystemEventRequest::getEventId()const
{
	return eventId_;
}

void AcceptInquiredSystemEventRequest::setEventId(const std::string& eventId)
{
	eventId_ = eventId;
	setCoreParameter("EventId", eventId);
}

long AcceptInquiredSystemEventRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AcceptInquiredSystemEventRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long AcceptInquiredSystemEventRequest::getCallerParentId()const
{
	return callerParentId_;
}

void AcceptInquiredSystemEventRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool AcceptInquiredSystemEventRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void AcceptInquiredSystemEventRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string AcceptInquiredSystemEventRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void AcceptInquiredSystemEventRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string AcceptInquiredSystemEventRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void AcceptInquiredSystemEventRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string AcceptInquiredSystemEventRequest::getCallerType()const
{
	return callerType_;
}

void AcceptInquiredSystemEventRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string AcceptInquiredSystemEventRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AcceptInquiredSystemEventRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string AcceptInquiredSystemEventRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void AcceptInquiredSystemEventRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string AcceptInquiredSystemEventRequest::getSecurityToken()const
{
	return securityToken_;
}

void AcceptInquiredSystemEventRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string AcceptInquiredSystemEventRequest::getRegionId()const
{
	return regionId_;
}

void AcceptInquiredSystemEventRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool AcceptInquiredSystemEventRequest::getEnable()const
{
	return enable_;
}

void AcceptInquiredSystemEventRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string AcceptInquiredSystemEventRequest::getRequestContent()const
{
	return requestContent_;
}

void AcceptInquiredSystemEventRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string AcceptInquiredSystemEventRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void AcceptInquiredSystemEventRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string AcceptInquiredSystemEventRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void AcceptInquiredSystemEventRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long AcceptInquiredSystemEventRequest::getCallerUid()const
{
	return callerUid_;
}

void AcceptInquiredSystemEventRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string AcceptInquiredSystemEventRequest::getApp_ip()const
{
	return app_ip_;
}

void AcceptInquiredSystemEventRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string AcceptInquiredSystemEventRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AcceptInquiredSystemEventRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AcceptInquiredSystemEventRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AcceptInquiredSystemEventRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string AcceptInquiredSystemEventRequest::getCallerBid()const
{
	return callerBid_;
}

void AcceptInquiredSystemEventRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long AcceptInquiredSystemEventRequest::getOwnerId()const
{
	return ownerId_;
}

void AcceptInquiredSystemEventRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

bool AcceptInquiredSystemEventRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void AcceptInquiredSystemEventRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool AcceptInquiredSystemEventRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void AcceptInquiredSystemEventRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool AcceptInquiredSystemEventRequest::getSecurity_transport()const
{
	return security_transport_;
}

void AcceptInquiredSystemEventRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string AcceptInquiredSystemEventRequest::getRequestId()const
{
	return requestId_;
}

void AcceptInquiredSystemEventRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

