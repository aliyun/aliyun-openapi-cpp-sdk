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
	setCoreParameter("EventId", std::to_string(eventId));
}

long AcceptInquiredSystemEventRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AcceptInquiredSystemEventRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long AcceptInquiredSystemEventRequest::getCallerParentId()const
{
	return callerParentId_;
}

void AcceptInquiredSystemEventRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
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
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string AcceptInquiredSystemEventRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void AcceptInquiredSystemEventRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string AcceptInquiredSystemEventRequest::getCallerType()const
{
	return callerType_;
}

void AcceptInquiredSystemEventRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string AcceptInquiredSystemEventRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AcceptInquiredSystemEventRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string AcceptInquiredSystemEventRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void AcceptInquiredSystemEventRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", std::to_string(sourceRegionId));
}

std::string AcceptInquiredSystemEventRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void AcceptInquiredSystemEventRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", std::to_string(resourceGroupId));
}

std::string AcceptInquiredSystemEventRequest::getSecurityToken()const
{
	return securityToken_;
}

void AcceptInquiredSystemEventRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string AcceptInquiredSystemEventRequest::getRegionId()const
{
	return regionId_;
}

void AcceptInquiredSystemEventRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
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
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string AcceptInquiredSystemEventRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void AcceptInquiredSystemEventRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string AcceptInquiredSystemEventRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void AcceptInquiredSystemEventRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long AcceptInquiredSystemEventRequest::getCallerUid()const
{
	return callerUid_;
}

void AcceptInquiredSystemEventRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string AcceptInquiredSystemEventRequest::getApp_ip()const
{
	return app_ip_;
}

void AcceptInquiredSystemEventRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string AcceptInquiredSystemEventRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AcceptInquiredSystemEventRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string AcceptInquiredSystemEventRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AcceptInquiredSystemEventRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string AcceptInquiredSystemEventRequest::getCallerBid()const
{
	return callerBid_;
}

void AcceptInquiredSystemEventRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long AcceptInquiredSystemEventRequest::getOwnerId()const
{
	return ownerId_;
}

void AcceptInquiredSystemEventRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
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
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string AcceptInquiredSystemEventRequest::getAkProxy()const
{
	return akProxy_;
}

void AcceptInquiredSystemEventRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", std::to_string(akProxy));
}

