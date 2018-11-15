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

#include <alibabacloud/ecs/model/CreateUserEventRequest.h>

using AlibabaCloud::Ecs::Model::CreateUserEventRequest;

CreateUserEventRequest::CreateUserEventRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "CreateUserEvent")
{}

CreateUserEventRequest::~CreateUserEventRequest()
{}

long CreateUserEventRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateUserEventRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long CreateUserEventRequest::getCallerParentId()const
{
	return callerParentId_;
}

void CreateUserEventRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool CreateUserEventRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void CreateUserEventRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string CreateUserEventRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void CreateUserEventRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string CreateUserEventRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void CreateUserEventRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string CreateUserEventRequest::getCallerType()const
{
	return callerType_;
}

void CreateUserEventRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string CreateUserEventRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateUserEventRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateUserEventRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateUserEventRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string CreateUserEventRequest::getRegionId()const
{
	return regionId_;
}

void CreateUserEventRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool CreateUserEventRequest::getEnable()const
{
	return enable_;
}

void CreateUserEventRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
}

std::string CreateUserEventRequest::getRequestContent()const
{
	return requestContent_;
}

void CreateUserEventRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string CreateUserEventRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void CreateUserEventRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string CreateUserEventRequest::getPlanTime()const
{
	return planTime_;
}

void CreateUserEventRequest::setPlanTime(const std::string& planTime)
{
	planTime_ = planTime;
	setParameter("PlanTime", planTime);
}

std::string CreateUserEventRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void CreateUserEventRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long CreateUserEventRequest::getCallerUid()const
{
	return callerUid_;
}

void CreateUserEventRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string CreateUserEventRequest::getApp_ip()const
{
	return app_ip_;
}

void CreateUserEventRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string CreateUserEventRequest::getExpireTime()const
{
	return expireTime_;
}

void CreateUserEventRequest::setExpireTime(const std::string& expireTime)
{
	expireTime_ = expireTime;
	setParameter("ExpireTime", expireTime);
}

std::string CreateUserEventRequest::getResourceId()const
{
	return resourceId_;
}

void CreateUserEventRequest::setResourceId(const std::string& resourceId)
{
	resourceId_ = resourceId;
	setParameter("ResourceId", resourceId);
}

std::string CreateUserEventRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateUserEventRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateUserEventRequest::getCallerBid()const
{
	return callerBid_;
}

void CreateUserEventRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long CreateUserEventRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateUserEventRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool CreateUserEventRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void CreateUserEventRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool CreateUserEventRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void CreateUserEventRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool CreateUserEventRequest::getSecurity_transport()const
{
	return security_transport_;
}

void CreateUserEventRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string CreateUserEventRequest::getRequestId()const
{
	return requestId_;
}

void CreateUserEventRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string CreateUserEventRequest::getEventType()const
{
	return eventType_;
}

void CreateUserEventRequest::setEventType(const std::string& eventType)
{
	eventType_ = eventType;
	setParameter("EventType", eventType);
}

