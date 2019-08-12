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

#include <alibabacloud/emr/model/RestoreBackupRequest.h>

using AlibabaCloud::Emr::Model::RestoreBackupRequest;

RestoreBackupRequest::RestoreBackupRequest() :
	RpcServiceRequest("emr", "2016-04-08", "RestoreBackup")
{}

RestoreBackupRequest::~RestoreBackupRequest()
{}

std::string RestoreBackupRequest::getApp_ip()const
{
	return app_ip_;
}

void RestoreBackupRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

long RestoreBackupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RestoreBackupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long RestoreBackupRequest::getCallerParentId()const
{
	return callerParentId_;
}

void RestoreBackupRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool RestoreBackupRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void RestoreBackupRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string RestoreBackupRequest::getCallerBid()const
{
	return callerBid_;
}

void RestoreBackupRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

std::string RestoreBackupRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void RestoreBackupRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

bool RestoreBackupRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void RestoreBackupRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

bool RestoreBackupRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void RestoreBackupRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

std::string RestoreBackupRequest::getCallerType()const
{
	return callerType_;
}

void RestoreBackupRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string RestoreBackupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RestoreBackupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

bool RestoreBackupRequest::getSecurity_transport()const
{
	return security_transport_;
}

void RestoreBackupRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string RestoreBackupRequest::getSecurityToken()const
{
	return securityToken_;
}

void RestoreBackupRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string RestoreBackupRequest::getRegionId()const
{
	return regionId_;
}

void RestoreBackupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string RestoreBackupRequest::getRequestId()const
{
	return requestId_;
}

void RestoreBackupRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

long RestoreBackupRequest::getCallerUid()const
{
	return callerUid_;
}

void RestoreBackupRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string RestoreBackupRequest::getBackupPlanId()const
{
	return backupPlanId_;
}

void RestoreBackupRequest::setBackupPlanId(const std::string& backupPlanId)
{
	backupPlanId_ = backupPlanId;
	setCoreParameter("BackupPlanId", backupPlanId);
}

std::string RestoreBackupRequest::getBackupId()const
{
	return backupId_;
}

void RestoreBackupRequest::setBackupId(const std::string& backupId)
{
	backupId_ = backupId;
	setCoreParameter("BackupId", backupId);
}

