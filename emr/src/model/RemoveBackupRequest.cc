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

#include <alibabacloud/emr/model/RemoveBackupRequest.h>

using AlibabaCloud::Emr::Model::RemoveBackupRequest;

RemoveBackupRequest::RemoveBackupRequest() :
	RpcServiceRequest("emr", "2016-04-08", "RemoveBackup")
{}

RemoveBackupRequest::~RemoveBackupRequest()
{}

std::string RemoveBackupRequest::getApp_ip()const
{
	return app_ip_;
}

void RemoveBackupRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

long RemoveBackupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RemoveBackupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long RemoveBackupRequest::getCallerParentId()const
{
	return callerParentId_;
}

void RemoveBackupRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

std::vector<std::string> RemoveBackupRequest::getBackupId()const
{
	return backupId_;
}

void RemoveBackupRequest::setBackupId(const std::vector<std::string>& backupId)
{
	backupId_ = backupId;
	for(int i = 0; i!= backupId.size(); i++)
		setCoreParameter("BackupId."+ std::to_string(i), std::to_string(backupId.at(i)));
}

bool RemoveBackupRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void RemoveBackupRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string RemoveBackupRequest::getBackupPlanId()const
{
	return backupPlanId_;
}

void RemoveBackupRequest::setBackupPlanId(const std::string& backupPlanId)
{
	backupPlanId_ = backupPlanId;
	setCoreParameter("BackupPlanId", std::to_string(backupPlanId));
}

std::string RemoveBackupRequest::getCallerBid()const
{
	return callerBid_;
}

void RemoveBackupRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

std::string RemoveBackupRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void RemoveBackupRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

bool RemoveBackupRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void RemoveBackupRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool RemoveBackupRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void RemoveBackupRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

std::string RemoveBackupRequest::getCallerType()const
{
	return callerType_;
}

void RemoveBackupRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string RemoveBackupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RemoveBackupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

bool RemoveBackupRequest::getSecurity_transport()const
{
	return security_transport_;
}

void RemoveBackupRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string RemoveBackupRequest::getSecurityToken()const
{
	return securityToken_;
}

void RemoveBackupRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string RemoveBackupRequest::getRegionId()const
{
	return regionId_;
}

void RemoveBackupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string RemoveBackupRequest::getRequestId()const
{
	return requestId_;
}

void RemoveBackupRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

long RemoveBackupRequest::getCallerUid()const
{
	return callerUid_;
}

void RemoveBackupRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

