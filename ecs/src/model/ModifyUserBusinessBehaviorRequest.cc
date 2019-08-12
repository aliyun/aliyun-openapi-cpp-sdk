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

#include <alibabacloud/ecs/model/ModifyUserBusinessBehaviorRequest.h>

using AlibabaCloud::Ecs::Model::ModifyUserBusinessBehaviorRequest;

ModifyUserBusinessBehaviorRequest::ModifyUserBusinessBehaviorRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifyUserBusinessBehavior")
{}

ModifyUserBusinessBehaviorRequest::~ModifyUserBusinessBehaviorRequest()
{}

long ModifyUserBusinessBehaviorRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyUserBusinessBehaviorRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long ModifyUserBusinessBehaviorRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ModifyUserBusinessBehaviorRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool ModifyUserBusinessBehaviorRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ModifyUserBusinessBehaviorRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string ModifyUserBusinessBehaviorRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ModifyUserBusinessBehaviorRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string ModifyUserBusinessBehaviorRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ModifyUserBusinessBehaviorRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string ModifyUserBusinessBehaviorRequest::getCallerType()const
{
	return callerType_;
}

void ModifyUserBusinessBehaviorRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string ModifyUserBusinessBehaviorRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyUserBusinessBehaviorRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifyUserBusinessBehaviorRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void ModifyUserBusinessBehaviorRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

std::string ModifyUserBusinessBehaviorRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyUserBusinessBehaviorRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ModifyUserBusinessBehaviorRequest::getRegionId()const
{
	return regionId_;
}

void ModifyUserBusinessBehaviorRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool ModifyUserBusinessBehaviorRequest::getEnable()const
{
	return enable_;
}

void ModifyUserBusinessBehaviorRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable);
}

std::string ModifyUserBusinessBehaviorRequest::getRequestContent()const
{
	return requestContent_;
}

void ModifyUserBusinessBehaviorRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string ModifyUserBusinessBehaviorRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ModifyUserBusinessBehaviorRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string ModifyUserBusinessBehaviorRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ModifyUserBusinessBehaviorRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long ModifyUserBusinessBehaviorRequest::getCallerUid()const
{
	return callerUid_;
}

void ModifyUserBusinessBehaviorRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string ModifyUserBusinessBehaviorRequest::getApp_ip()const
{
	return app_ip_;
}

void ModifyUserBusinessBehaviorRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string ModifyUserBusinessBehaviorRequest::getStatusValue()const
{
	return statusValue_;
}

void ModifyUserBusinessBehaviorRequest::setStatusValue(const std::string& statusValue)
{
	statusValue_ = statusValue;
	setCoreParameter("StatusValue", statusValue);
}

std::string ModifyUserBusinessBehaviorRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyUserBusinessBehaviorRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyUserBusinessBehaviorRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyUserBusinessBehaviorRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ModifyUserBusinessBehaviorRequest::getCallerBid()const
{
	return callerBid_;
}

void ModifyUserBusinessBehaviorRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long ModifyUserBusinessBehaviorRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyUserBusinessBehaviorRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

bool ModifyUserBusinessBehaviorRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ModifyUserBusinessBehaviorRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

bool ModifyUserBusinessBehaviorRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ModifyUserBusinessBehaviorRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

bool ModifyUserBusinessBehaviorRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ModifyUserBusinessBehaviorRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string ModifyUserBusinessBehaviorRequest::getRequestId()const
{
	return requestId_;
}

void ModifyUserBusinessBehaviorRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string ModifyUserBusinessBehaviorRequest::getAkProxy()const
{
	return akProxy_;
}

void ModifyUserBusinessBehaviorRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", akProxy);
}

std::string ModifyUserBusinessBehaviorRequest::getStatusKey()const
{
	return statusKey_;
}

void ModifyUserBusinessBehaviorRequest::setStatusKey(const std::string& statusKey)
{
	statusKey_ = statusKey;
	setCoreParameter("StatusKey", statusKey);
}

