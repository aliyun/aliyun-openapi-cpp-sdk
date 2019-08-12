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

#include <alibabacloud/emr/model/RemoveBackupRuleRequest.h>

using AlibabaCloud::Emr::Model::RemoveBackupRuleRequest;

RemoveBackupRuleRequest::RemoveBackupRuleRequest() :
	RpcServiceRequest("emr", "2016-04-08", "RemoveBackupRule")
{}

RemoveBackupRuleRequest::~RemoveBackupRuleRequest()
{}

std::string RemoveBackupRuleRequest::getApp_ip()const
{
	return app_ip_;
}

void RemoveBackupRuleRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

long RemoveBackupRuleRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RemoveBackupRuleRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long RemoveBackupRuleRequest::getCallerParentId()const
{
	return callerParentId_;
}

void RemoveBackupRuleRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool RemoveBackupRuleRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void RemoveBackupRuleRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string RemoveBackupRuleRequest::getCallerBid()const
{
	return callerBid_;
}

void RemoveBackupRuleRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

std::string RemoveBackupRuleRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void RemoveBackupRuleRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

bool RemoveBackupRuleRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void RemoveBackupRuleRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool RemoveBackupRuleRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void RemoveBackupRuleRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

std::string RemoveBackupRuleRequest::getCallerType()const
{
	return callerType_;
}

void RemoveBackupRuleRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string RemoveBackupRuleRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RemoveBackupRuleRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

bool RemoveBackupRuleRequest::getSecurity_transport()const
{
	return security_transport_;
}

void RemoveBackupRuleRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string RemoveBackupRuleRequest::getSecurityToken()const
{
	return securityToken_;
}

void RemoveBackupRuleRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string RemoveBackupRuleRequest::getRegionId()const
{
	return regionId_;
}

void RemoveBackupRuleRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string RemoveBackupRuleRequest::getRequestId()const
{
	return requestId_;
}

void RemoveBackupRuleRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

long RemoveBackupRuleRequest::getCallerUid()const
{
	return callerUid_;
}

void RemoveBackupRuleRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string RemoveBackupRuleRequest::getBackupRuleId()const
{
	return backupRuleId_;
}

void RemoveBackupRuleRequest::setBackupRuleId(const std::string& backupRuleId)
{
	backupRuleId_ = backupRuleId;
	setCoreParameter("BackupRuleId", std::to_string(backupRuleId));
}

