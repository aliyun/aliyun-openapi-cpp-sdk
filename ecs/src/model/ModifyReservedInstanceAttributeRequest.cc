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

#include <alibabacloud/ecs/model/ModifyReservedInstanceAttributeRequest.h>

using AlibabaCloud::Ecs::Model::ModifyReservedInstanceAttributeRequest;

ModifyReservedInstanceAttributeRequest::ModifyReservedInstanceAttributeRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifyReservedInstanceAttribute")
{}

ModifyReservedInstanceAttributeRequest::~ModifyReservedInstanceAttributeRequest()
{}

long ModifyReservedInstanceAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyReservedInstanceAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long ModifyReservedInstanceAttributeRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ModifyReservedInstanceAttributeRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool ModifyReservedInstanceAttributeRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ModifyReservedInstanceAttributeRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string ModifyReservedInstanceAttributeRequest::getDescription()const
{
	return description_;
}

void ModifyReservedInstanceAttributeRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string ModifyReservedInstanceAttributeRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ModifyReservedInstanceAttributeRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string ModifyReservedInstanceAttributeRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ModifyReservedInstanceAttributeRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string ModifyReservedInstanceAttributeRequest::getCallerType()const
{
	return callerType_;
}

void ModifyReservedInstanceAttributeRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string ModifyReservedInstanceAttributeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyReservedInstanceAttributeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifyReservedInstanceAttributeRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyReservedInstanceAttributeRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ModifyReservedInstanceAttributeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyReservedInstanceAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool ModifyReservedInstanceAttributeRequest::getEnable()const
{
	return enable_;
}

void ModifyReservedInstanceAttributeRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable);
}

std::string ModifyReservedInstanceAttributeRequest::getRequestContent()const
{
	return requestContent_;
}

void ModifyReservedInstanceAttributeRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string ModifyReservedInstanceAttributeRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ModifyReservedInstanceAttributeRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string ModifyReservedInstanceAttributeRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ModifyReservedInstanceAttributeRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long ModifyReservedInstanceAttributeRequest::getCallerUid()const
{
	return callerUid_;
}

void ModifyReservedInstanceAttributeRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string ModifyReservedInstanceAttributeRequest::getApp_ip()const
{
	return app_ip_;
}

void ModifyReservedInstanceAttributeRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string ModifyReservedInstanceAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyReservedInstanceAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyReservedInstanceAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyReservedInstanceAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ModifyReservedInstanceAttributeRequest::getCallerBid()const
{
	return callerBid_;
}

void ModifyReservedInstanceAttributeRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long ModifyReservedInstanceAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyReservedInstanceAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

bool ModifyReservedInstanceAttributeRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ModifyReservedInstanceAttributeRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

bool ModifyReservedInstanceAttributeRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ModifyReservedInstanceAttributeRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

bool ModifyReservedInstanceAttributeRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ModifyReservedInstanceAttributeRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string ModifyReservedInstanceAttributeRequest::getReservedInstanceId()const
{
	return reservedInstanceId_;
}

void ModifyReservedInstanceAttributeRequest::setReservedInstanceId(const std::string& reservedInstanceId)
{
	reservedInstanceId_ = reservedInstanceId;
	setCoreParameter("ReservedInstanceId", reservedInstanceId);
}

std::string ModifyReservedInstanceAttributeRequest::getRequestId()const
{
	return requestId_;
}

void ModifyReservedInstanceAttributeRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string ModifyReservedInstanceAttributeRequest::getAkProxy()const
{
	return akProxy_;
}

void ModifyReservedInstanceAttributeRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", akProxy);
}

std::string ModifyReservedInstanceAttributeRequest::getReservedInstanceName()const
{
	return reservedInstanceName_;
}

void ModifyReservedInstanceAttributeRequest::setReservedInstanceName(const std::string& reservedInstanceName)
{
	reservedInstanceName_ = reservedInstanceName;
	setCoreParameter("ReservedInstanceName", reservedInstanceName);
}

