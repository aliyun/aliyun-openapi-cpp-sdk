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

#include <alibabacloud/emr/model/RemoveBackupPlanRequest.h>

using AlibabaCloud::Emr::Model::RemoveBackupPlanRequest;

RemoveBackupPlanRequest::RemoveBackupPlanRequest() :
	RpcServiceRequest("emr", "2016-04-08", "RemoveBackupPlan")
{}

RemoveBackupPlanRequest::~RemoveBackupPlanRequest()
{}

std::string RemoveBackupPlanRequest::getApp_ip()const
{
	return app_ip_;
}

void RemoveBackupPlanRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

long RemoveBackupPlanRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RemoveBackupPlanRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long RemoveBackupPlanRequest::getCallerParentId()const
{
	return callerParentId_;
}

void RemoveBackupPlanRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool RemoveBackupPlanRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void RemoveBackupPlanRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string RemoveBackupPlanRequest::getCallerBid()const
{
	return callerBid_;
}

void RemoveBackupPlanRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

std::string RemoveBackupPlanRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void RemoveBackupPlanRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

bool RemoveBackupPlanRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void RemoveBackupPlanRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool RemoveBackupPlanRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void RemoveBackupPlanRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

std::string RemoveBackupPlanRequest::getCallerType()const
{
	return callerType_;
}

void RemoveBackupPlanRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string RemoveBackupPlanRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RemoveBackupPlanRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

bool RemoveBackupPlanRequest::getSecurity_transport()const
{
	return security_transport_;
}

void RemoveBackupPlanRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string RemoveBackupPlanRequest::getSecurityToken()const
{
	return securityToken_;
}

void RemoveBackupPlanRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string RemoveBackupPlanRequest::getRegionId()const
{
	return regionId_;
}

void RemoveBackupPlanRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string RemoveBackupPlanRequest::getRequestId()const
{
	return requestId_;
}

void RemoveBackupPlanRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

long RemoveBackupPlanRequest::getCallerUid()const
{
	return callerUid_;
}

void RemoveBackupPlanRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string RemoveBackupPlanRequest::getBackupPlanId()const
{
	return backupPlanId_;
}

void RemoveBackupPlanRequest::setBackupPlanId(const std::string& backupPlanId)
{
	backupPlanId_ = backupPlanId;
	setCoreParameter("BackupPlanId", std::to_string(backupPlanId));
}

