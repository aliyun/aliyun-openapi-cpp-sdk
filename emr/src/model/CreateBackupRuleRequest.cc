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

#include <alibabacloud/emr/model/CreateBackupRuleRequest.h>

using AlibabaCloud::Emr::Model::CreateBackupRuleRequest;

CreateBackupRuleRequest::CreateBackupRuleRequest() :
	RpcServiceRequest("emr", "2016-04-08", "CreateBackupRule")
{}

CreateBackupRuleRequest::~CreateBackupRuleRequest()
{}

std::string CreateBackupRuleRequest::getApp_ip()const
{
	return app_ip_;
}

void CreateBackupRuleRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

long CreateBackupRuleRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateBackupRuleRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string CreateBackupRuleRequest::getBackupMethodType()const
{
	return backupMethodType_;
}

void CreateBackupRuleRequest::setBackupMethodType(const std::string& backupMethodType)
{
	backupMethodType_ = backupMethodType;
	setCoreParameter("BackupMethodType", std::to_string(backupMethodType));
}

long CreateBackupRuleRequest::getCallerParentId()const
{
	return callerParentId_;
}

void CreateBackupRuleRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool CreateBackupRuleRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void CreateBackupRuleRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string CreateBackupRuleRequest::getDescription()const
{
	return description_;
}

void CreateBackupRuleRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

std::string CreateBackupRuleRequest::getBackupPlanId()const
{
	return backupPlanId_;
}

void CreateBackupRuleRequest::setBackupPlanId(const std::string& backupPlanId)
{
	backupPlanId_ = backupPlanId;
	setCoreParameter("BackupPlanId", std::to_string(backupPlanId));
}

std::string CreateBackupRuleRequest::getCallerBid()const
{
	return callerBid_;
}

void CreateBackupRuleRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

std::string CreateBackupRuleRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void CreateBackupRuleRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string CreateBackupRuleRequest::getMetadataType()const
{
	return metadataType_;
}

void CreateBackupRuleRequest::setMetadataType(const std::string& metadataType)
{
	metadataType_ = metadataType;
	setCoreParameter("MetadataType", std::to_string(metadataType));
}

bool CreateBackupRuleRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void CreateBackupRuleRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool CreateBackupRuleRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void CreateBackupRuleRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

std::string CreateBackupRuleRequest::getCallerType()const
{
	return callerType_;
}

void CreateBackupRuleRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string CreateBackupRuleRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateBackupRuleRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

bool CreateBackupRuleRequest::getSecurity_transport()const
{
	return security_transport_;
}

void CreateBackupRuleRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string CreateBackupRuleRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateBackupRuleRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string CreateBackupRuleRequest::getRegionId()const
{
	return regionId_;
}

void CreateBackupRuleRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string CreateBackupRuleRequest::getRequestId()const
{
	return requestId_;
}

void CreateBackupRuleRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string CreateBackupRuleRequest::getName()const
{
	return name_;
}

void CreateBackupRuleRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

long CreateBackupRuleRequest::getCallerUid()const
{
	return callerUid_;
}

void CreateBackupRuleRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

