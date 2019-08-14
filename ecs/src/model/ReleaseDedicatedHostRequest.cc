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

#include <alibabacloud/ecs/model/ReleaseDedicatedHostRequest.h>

using AlibabaCloud::Ecs::Model::ReleaseDedicatedHostRequest;

ReleaseDedicatedHostRequest::ReleaseDedicatedHostRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ReleaseDedicatedHost")
{}

ReleaseDedicatedHostRequest::~ReleaseDedicatedHostRequest()
{}

long ReleaseDedicatedHostRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ReleaseDedicatedHostRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long ReleaseDedicatedHostRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ReleaseDedicatedHostRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool ReleaseDedicatedHostRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ReleaseDedicatedHostRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string ReleaseDedicatedHostRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ReleaseDedicatedHostRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string ReleaseDedicatedHostRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ReleaseDedicatedHostRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string ReleaseDedicatedHostRequest::getCallerType()const
{
	return callerType_;
}

void ReleaseDedicatedHostRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string ReleaseDedicatedHostRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ReleaseDedicatedHostRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ReleaseDedicatedHostRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void ReleaseDedicatedHostRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

std::string ReleaseDedicatedHostRequest::getSecurityToken()const
{
	return securityToken_;
}

void ReleaseDedicatedHostRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ReleaseDedicatedHostRequest::getRegionId()const
{
	return regionId_;
}

void ReleaseDedicatedHostRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool ReleaseDedicatedHostRequest::getEnable()const
{
	return enable_;
}

void ReleaseDedicatedHostRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string ReleaseDedicatedHostRequest::getRequestContent()const
{
	return requestContent_;
}

void ReleaseDedicatedHostRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string ReleaseDedicatedHostRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ReleaseDedicatedHostRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string ReleaseDedicatedHostRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ReleaseDedicatedHostRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long ReleaseDedicatedHostRequest::getCallerUid()const
{
	return callerUid_;
}

void ReleaseDedicatedHostRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string ReleaseDedicatedHostRequest::getApp_ip()const
{
	return app_ip_;
}

void ReleaseDedicatedHostRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string ReleaseDedicatedHostRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ReleaseDedicatedHostRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ReleaseDedicatedHostRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ReleaseDedicatedHostRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ReleaseDedicatedHostRequest::getDedicatedHostId()const
{
	return dedicatedHostId_;
}

void ReleaseDedicatedHostRequest::setDedicatedHostId(const std::string& dedicatedHostId)
{
	dedicatedHostId_ = dedicatedHostId;
	setCoreParameter("DedicatedHostId", dedicatedHostId);
}

std::string ReleaseDedicatedHostRequest::getCallerBid()const
{
	return callerBid_;
}

void ReleaseDedicatedHostRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long ReleaseDedicatedHostRequest::getOwnerId()const
{
	return ownerId_;
}

void ReleaseDedicatedHostRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

bool ReleaseDedicatedHostRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ReleaseDedicatedHostRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool ReleaseDedicatedHostRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ReleaseDedicatedHostRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool ReleaseDedicatedHostRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ReleaseDedicatedHostRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string ReleaseDedicatedHostRequest::getRequestId()const
{
	return requestId_;
}

void ReleaseDedicatedHostRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string ReleaseDedicatedHostRequest::getAkProxy()const
{
	return akProxy_;
}

void ReleaseDedicatedHostRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", akProxy);
}

