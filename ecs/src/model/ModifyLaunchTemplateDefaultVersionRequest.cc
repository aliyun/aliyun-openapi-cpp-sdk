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

#include <alibabacloud/ecs/model/ModifyLaunchTemplateDefaultVersionRequest.h>

using AlibabaCloud::Ecs::Model::ModifyLaunchTemplateDefaultVersionRequest;

ModifyLaunchTemplateDefaultVersionRequest::ModifyLaunchTemplateDefaultVersionRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifyLaunchTemplateDefaultVersion")
{}

ModifyLaunchTemplateDefaultVersionRequest::~ModifyLaunchTemplateDefaultVersionRequest()
{}

std::string ModifyLaunchTemplateDefaultVersionRequest::getLaunchTemplateName()const
{
	return launchTemplateName_;
}

void ModifyLaunchTemplateDefaultVersionRequest::setLaunchTemplateName(const std::string& launchTemplateName)
{
	launchTemplateName_ = launchTemplateName;
	setParameter("LaunchTemplateName", launchTemplateName);
}

long ModifyLaunchTemplateDefaultVersionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyLaunchTemplateDefaultVersionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long ModifyLaunchTemplateDefaultVersionRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ModifyLaunchTemplateDefaultVersionRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool ModifyLaunchTemplateDefaultVersionRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ModifyLaunchTemplateDefaultVersionRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string ModifyLaunchTemplateDefaultVersionRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ModifyLaunchTemplateDefaultVersionRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string ModifyLaunchTemplateDefaultVersionRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ModifyLaunchTemplateDefaultVersionRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string ModifyLaunchTemplateDefaultVersionRequest::getCallerType()const
{
	return callerType_;
}

void ModifyLaunchTemplateDefaultVersionRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string ModifyLaunchTemplateDefaultVersionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyLaunchTemplateDefaultVersionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyLaunchTemplateDefaultVersionRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void ModifyLaunchTemplateDefaultVersionRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setParameter("SourceRegionId", sourceRegionId);
}

std::string ModifyLaunchTemplateDefaultVersionRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyLaunchTemplateDefaultVersionRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string ModifyLaunchTemplateDefaultVersionRequest::getRegionId()const
{
	return regionId_;
}

void ModifyLaunchTemplateDefaultVersionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool ModifyLaunchTemplateDefaultVersionRequest::getEnable()const
{
	return enable_;
}

void ModifyLaunchTemplateDefaultVersionRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
}

std::string ModifyLaunchTemplateDefaultVersionRequest::getRequestContent()const
{
	return requestContent_;
}

void ModifyLaunchTemplateDefaultVersionRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string ModifyLaunchTemplateDefaultVersionRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ModifyLaunchTemplateDefaultVersionRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string ModifyLaunchTemplateDefaultVersionRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ModifyLaunchTemplateDefaultVersionRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long ModifyLaunchTemplateDefaultVersionRequest::getCallerUid()const
{
	return callerUid_;
}

void ModifyLaunchTemplateDefaultVersionRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string ModifyLaunchTemplateDefaultVersionRequest::getApp_ip()const
{
	return app_ip_;
}

void ModifyLaunchTemplateDefaultVersionRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string ModifyLaunchTemplateDefaultVersionRequest::getLaunchTemplateId()const
{
	return launchTemplateId_;
}

void ModifyLaunchTemplateDefaultVersionRequest::setLaunchTemplateId(const std::string& launchTemplateId)
{
	launchTemplateId_ = launchTemplateId;
	setParameter("LaunchTemplateId", launchTemplateId);
}

std::string ModifyLaunchTemplateDefaultVersionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyLaunchTemplateDefaultVersionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyLaunchTemplateDefaultVersionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyLaunchTemplateDefaultVersionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ModifyLaunchTemplateDefaultVersionRequest::getCallerBid()const
{
	return callerBid_;
}

void ModifyLaunchTemplateDefaultVersionRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long ModifyLaunchTemplateDefaultVersionRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyLaunchTemplateDefaultVersionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool ModifyLaunchTemplateDefaultVersionRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ModifyLaunchTemplateDefaultVersionRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool ModifyLaunchTemplateDefaultVersionRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ModifyLaunchTemplateDefaultVersionRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool ModifyLaunchTemplateDefaultVersionRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ModifyLaunchTemplateDefaultVersionRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

long ModifyLaunchTemplateDefaultVersionRequest::getDefaultVersionNumber()const
{
	return defaultVersionNumber_;
}

void ModifyLaunchTemplateDefaultVersionRequest::setDefaultVersionNumber(long defaultVersionNumber)
{
	defaultVersionNumber_ = defaultVersionNumber;
	setParameter("DefaultVersionNumber", std::to_string(defaultVersionNumber));
}

std::string ModifyLaunchTemplateDefaultVersionRequest::getRequestId()const
{
	return requestId_;
}

void ModifyLaunchTemplateDefaultVersionRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

