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

#include <alibabacloud/emr/model/RefreshBackupListRequest.h>

using AlibabaCloud::Emr::Model::RefreshBackupListRequest;

RefreshBackupListRequest::RefreshBackupListRequest() :
	RpcServiceRequest("emr", "2016-04-08", "RefreshBackupList")
{}

RefreshBackupListRequest::~RefreshBackupListRequest()
{}

std::string RefreshBackupListRequest::getApp_ip()const
{
	return app_ip_;
}

void RefreshBackupListRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

long RefreshBackupListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RefreshBackupListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long RefreshBackupListRequest::getCallerParentId()const
{
	return callerParentId_;
}

void RefreshBackupListRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool RefreshBackupListRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void RefreshBackupListRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string RefreshBackupListRequest::getCallerBid()const
{
	return callerBid_;
}

void RefreshBackupListRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

std::string RefreshBackupListRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void RefreshBackupListRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

bool RefreshBackupListRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void RefreshBackupListRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool RefreshBackupListRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void RefreshBackupListRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

std::string RefreshBackupListRequest::getCallerType()const
{
	return callerType_;
}

void RefreshBackupListRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string RefreshBackupListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RefreshBackupListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

bool RefreshBackupListRequest::getSecurity_transport()const
{
	return security_transport_;
}

void RefreshBackupListRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string RefreshBackupListRequest::getSecurityToken()const
{
	return securityToken_;
}

void RefreshBackupListRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string RefreshBackupListRequest::getRegionId()const
{
	return regionId_;
}

void RefreshBackupListRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string RefreshBackupListRequest::getRequestId()const
{
	return requestId_;
}

void RefreshBackupListRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

long RefreshBackupListRequest::getCallerUid()const
{
	return callerUid_;
}

void RefreshBackupListRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string RefreshBackupListRequest::getBackupPlanId()const
{
	return backupPlanId_;
}

void RefreshBackupListRequest::setBackupPlanId(const std::string& backupPlanId)
{
	backupPlanId_ = backupPlanId;
	setCoreParameter("BackupPlanId", backupPlanId);
}

