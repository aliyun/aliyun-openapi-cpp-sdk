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

#include <alibabacloud/emr/model/CreateBackupRequest.h>

using AlibabaCloud::Emr::Model::CreateBackupRequest;

CreateBackupRequest::CreateBackupRequest() :
	RpcServiceRequest("emr", "2016-04-08", "CreateBackup")
{}

CreateBackupRequest::~CreateBackupRequest()
{}

std::string CreateBackupRequest::getApp_ip()const
{
	return app_ip_;
}

void CreateBackupRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

long CreateBackupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateBackupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long CreateBackupRequest::getCallerParentId()const
{
	return callerParentId_;
}

void CreateBackupRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool CreateBackupRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void CreateBackupRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string CreateBackupRequest::getBackupPlanId()const
{
	return backupPlanId_;
}

void CreateBackupRequest::setBackupPlanId(const std::string& backupPlanId)
{
	backupPlanId_ = backupPlanId;
	setCoreParameter("BackupPlanId", backupPlanId);
}

std::string CreateBackupRequest::getCallerBid()const
{
	return callerBid_;
}

void CreateBackupRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

std::string CreateBackupRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void CreateBackupRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string CreateBackupRequest::getMetadataType()const
{
	return metadataType_;
}

void CreateBackupRequest::setMetadataType(const std::string& metadataType)
{
	metadataType_ = metadataType;
	setCoreParameter("MetadataType", metadataType);
}

bool CreateBackupRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void CreateBackupRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool CreateBackupRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void CreateBackupRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

std::string CreateBackupRequest::getCallerType()const
{
	return callerType_;
}

void CreateBackupRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string CreateBackupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateBackupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

bool CreateBackupRequest::getSecurity_transport()const
{
	return security_transport_;
}

void CreateBackupRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string CreateBackupRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateBackupRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string CreateBackupRequest::getRegionId()const
{
	return regionId_;
}

void CreateBackupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateBackupRequest::getRequestId()const
{
	return requestId_;
}

void CreateBackupRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

long CreateBackupRequest::getCallerUid()const
{
	return callerUid_;
}

void CreateBackupRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

