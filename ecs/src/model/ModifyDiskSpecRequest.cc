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

#include <alibabacloud/ecs/model/ModifyDiskSpecRequest.h>

using AlibabaCloud::Ecs::Model::ModifyDiskSpecRequest;

ModifyDiskSpecRequest::ModifyDiskSpecRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifyDiskSpec")
{}

ModifyDiskSpecRequest::~ModifyDiskSpecRequest()
{}

long ModifyDiskSpecRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDiskSpecRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long ModifyDiskSpecRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ModifyDiskSpecRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool ModifyDiskSpecRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ModifyDiskSpecRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string ModifyDiskSpecRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ModifyDiskSpecRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string ModifyDiskSpecRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ModifyDiskSpecRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string ModifyDiskSpecRequest::getCallerType()const
{
	return callerType_;
}

void ModifyDiskSpecRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string ModifyDiskSpecRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDiskSpecRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifyDiskSpecRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void ModifyDiskSpecRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

std::string ModifyDiskSpecRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyDiskSpecRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

bool ModifyDiskSpecRequest::getEnable()const
{
	return enable_;
}

void ModifyDiskSpecRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string ModifyDiskSpecRequest::getRequestContent()const
{
	return requestContent_;
}

void ModifyDiskSpecRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string ModifyDiskSpecRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ModifyDiskSpecRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string ModifyDiskSpecRequest::getDiskId()const
{
	return diskId_;
}

void ModifyDiskSpecRequest::setDiskId(const std::string& diskId)
{
	diskId_ = diskId;
	setCoreParameter("DiskId", diskId);
}

std::string ModifyDiskSpecRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ModifyDiskSpecRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long ModifyDiskSpecRequest::getCallerUid()const
{
	return callerUid_;
}

void ModifyDiskSpecRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string ModifyDiskSpecRequest::getApp_ip()const
{
	return app_ip_;
}

void ModifyDiskSpecRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string ModifyDiskSpecRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDiskSpecRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyDiskSpecRequest::getPerformanceLevel()const
{
	return performanceLevel_;
}

void ModifyDiskSpecRequest::setPerformanceLevel(const std::string& performanceLevel)
{
	performanceLevel_ = performanceLevel;
	setCoreParameter("PerformanceLevel", performanceLevel);
}

std::string ModifyDiskSpecRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyDiskSpecRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ModifyDiskSpecRequest::getCallerBid()const
{
	return callerBid_;
}

void ModifyDiskSpecRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long ModifyDiskSpecRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDiskSpecRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

bool ModifyDiskSpecRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ModifyDiskSpecRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool ModifyDiskSpecRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ModifyDiskSpecRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool ModifyDiskSpecRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ModifyDiskSpecRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string ModifyDiskSpecRequest::getRequestId()const
{
	return requestId_;
}

void ModifyDiskSpecRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string ModifyDiskSpecRequest::getAkProxy()const
{
	return akProxy_;
}

void ModifyDiskSpecRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", akProxy);
}

