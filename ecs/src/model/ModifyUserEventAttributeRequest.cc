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

#include <alibabacloud/ecs/model/ModifyUserEventAttributeRequest.h>

using AlibabaCloud::Ecs::Model::ModifyUserEventAttributeRequest;

ModifyUserEventAttributeRequest::ModifyUserEventAttributeRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifyUserEventAttribute")
{}

ModifyUserEventAttributeRequest::~ModifyUserEventAttributeRequest()
{}

std::string ModifyUserEventAttributeRequest::getEventId()const
{
	return eventId_;
}

void ModifyUserEventAttributeRequest::setEventId(const std::string& eventId)
{
	eventId_ = eventId;
	setParameter("EventId", eventId);
}

long ModifyUserEventAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyUserEventAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long ModifyUserEventAttributeRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ModifyUserEventAttributeRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool ModifyUserEventAttributeRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ModifyUserEventAttributeRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string ModifyUserEventAttributeRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ModifyUserEventAttributeRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string ModifyUserEventAttributeRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ModifyUserEventAttributeRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string ModifyUserEventAttributeRequest::getCallerType()const
{
	return callerType_;
}

void ModifyUserEventAttributeRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string ModifyUserEventAttributeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyUserEventAttributeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyUserEventAttributeRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyUserEventAttributeRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string ModifyUserEventAttributeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyUserEventAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool ModifyUserEventAttributeRequest::getEnable()const
{
	return enable_;
}

void ModifyUserEventAttributeRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
}

std::string ModifyUserEventAttributeRequest::getRequestContent()const
{
	return requestContent_;
}

void ModifyUserEventAttributeRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string ModifyUserEventAttributeRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ModifyUserEventAttributeRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string ModifyUserEventAttributeRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ModifyUserEventAttributeRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long ModifyUserEventAttributeRequest::getCallerUid()const
{
	return callerUid_;
}

void ModifyUserEventAttributeRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string ModifyUserEventAttributeRequest::getApp_ip()const
{
	return app_ip_;
}

void ModifyUserEventAttributeRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string ModifyUserEventAttributeRequest::getResourceId()const
{
	return resourceId_;
}

void ModifyUserEventAttributeRequest::setResourceId(const std::string& resourceId)
{
	resourceId_ = resourceId;
	setParameter("ResourceId", resourceId);
}

std::string ModifyUserEventAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyUserEventAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyUserEventAttributeRequest::getCallerBid()const
{
	return callerBid_;
}

void ModifyUserEventAttributeRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

std::string ModifyUserEventAttributeRequest::getNewPlanTime()const
{
	return newPlanTime_;
}

void ModifyUserEventAttributeRequest::setNewPlanTime(const std::string& newPlanTime)
{
	newPlanTime_ = newPlanTime;
	setParameter("NewPlanTime", newPlanTime);
}

long ModifyUserEventAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyUserEventAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool ModifyUserEventAttributeRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ModifyUserEventAttributeRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool ModifyUserEventAttributeRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ModifyUserEventAttributeRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool ModifyUserEventAttributeRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ModifyUserEventAttributeRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string ModifyUserEventAttributeRequest::getNewExpireTime()const
{
	return newExpireTime_;
}

void ModifyUserEventAttributeRequest::setNewExpireTime(const std::string& newExpireTime)
{
	newExpireTime_ = newExpireTime;
	setParameter("NewExpireTime", newExpireTime);
}

std::string ModifyUserEventAttributeRequest::getRequestId()const
{
	return requestId_;
}

void ModifyUserEventAttributeRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

