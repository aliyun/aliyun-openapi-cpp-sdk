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

#include <alibabacloud/ecs/model/ModifyHpcClusterAttributeRequest.h>

using AlibabaCloud::Ecs::Model::ModifyHpcClusterAttributeRequest;

ModifyHpcClusterAttributeRequest::ModifyHpcClusterAttributeRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifyHpcClusterAttribute")
{}

ModifyHpcClusterAttributeRequest::~ModifyHpcClusterAttributeRequest()
{}

long ModifyHpcClusterAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyHpcClusterAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyHpcClusterAttributeRequest::getHpcClusterId()const
{
	return hpcClusterId_;
}

void ModifyHpcClusterAttributeRequest::setHpcClusterId(const std::string& hpcClusterId)
{
	hpcClusterId_ = hpcClusterId;
	setCoreParameter("HpcClusterId", hpcClusterId);
}

std::string ModifyHpcClusterAttributeRequest::getClientToken()const
{
	return clientToken_;
}

void ModifyHpcClusterAttributeRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

long ModifyHpcClusterAttributeRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ModifyHpcClusterAttributeRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool ModifyHpcClusterAttributeRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ModifyHpcClusterAttributeRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string ModifyHpcClusterAttributeRequest::getDescription()const
{
	return description_;
}

void ModifyHpcClusterAttributeRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string ModifyHpcClusterAttributeRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ModifyHpcClusterAttributeRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string ModifyHpcClusterAttributeRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ModifyHpcClusterAttributeRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string ModifyHpcClusterAttributeRequest::getCallerType()const
{
	return callerType_;
}

void ModifyHpcClusterAttributeRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string ModifyHpcClusterAttributeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyHpcClusterAttributeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifyHpcClusterAttributeRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void ModifyHpcClusterAttributeRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

std::string ModifyHpcClusterAttributeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyHpcClusterAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyHpcClusterAttributeRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyHpcClusterAttributeRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

bool ModifyHpcClusterAttributeRequest::getEnable()const
{
	return enable_;
}

void ModifyHpcClusterAttributeRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string ModifyHpcClusterAttributeRequest::getRequestContent()const
{
	return requestContent_;
}

void ModifyHpcClusterAttributeRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string ModifyHpcClusterAttributeRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ModifyHpcClusterAttributeRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string ModifyHpcClusterAttributeRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ModifyHpcClusterAttributeRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long ModifyHpcClusterAttributeRequest::getCallerUid()const
{
	return callerUid_;
}

void ModifyHpcClusterAttributeRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string ModifyHpcClusterAttributeRequest::getApp_ip()const
{
	return app_ip_;
}

void ModifyHpcClusterAttributeRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string ModifyHpcClusterAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyHpcClusterAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyHpcClusterAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyHpcClusterAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ModifyHpcClusterAttributeRequest::getCallerBid()const
{
	return callerBid_;
}

void ModifyHpcClusterAttributeRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long ModifyHpcClusterAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyHpcClusterAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

bool ModifyHpcClusterAttributeRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ModifyHpcClusterAttributeRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool ModifyHpcClusterAttributeRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ModifyHpcClusterAttributeRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool ModifyHpcClusterAttributeRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ModifyHpcClusterAttributeRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string ModifyHpcClusterAttributeRequest::getRequestId()const
{
	return requestId_;
}

void ModifyHpcClusterAttributeRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string ModifyHpcClusterAttributeRequest::getAkProxy()const
{
	return akProxy_;
}

void ModifyHpcClusterAttributeRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", akProxy);
}

std::string ModifyHpcClusterAttributeRequest::getName()const
{
	return name_;
}

void ModifyHpcClusterAttributeRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

