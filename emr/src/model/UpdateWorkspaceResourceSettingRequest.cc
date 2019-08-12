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

#include <alibabacloud/emr/model/UpdateWorkspaceResourceSettingRequest.h>

using AlibabaCloud::Emr::Model::UpdateWorkspaceResourceSettingRequest;

UpdateWorkspaceResourceSettingRequest::UpdateWorkspaceResourceSettingRequest() :
	RpcServiceRequest("emr", "2016-04-08", "UpdateWorkspaceResourceSetting")
{}

UpdateWorkspaceResourceSettingRequest::~UpdateWorkspaceResourceSettingRequest()
{}

std::string UpdateWorkspaceResourceSettingRequest::getApp_ip()const
{
	return app_ip_;
}

void UpdateWorkspaceResourceSettingRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

long UpdateWorkspaceResourceSettingRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpdateWorkspaceResourceSettingRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long UpdateWorkspaceResourceSettingRequest::getCallerParentId()const
{
	return callerParentId_;
}

void UpdateWorkspaceResourceSettingRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool UpdateWorkspaceResourceSettingRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void UpdateWorkspaceResourceSettingRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string UpdateWorkspaceResourceSettingRequest::getCallerBid()const
{
	return callerBid_;
}

void UpdateWorkspaceResourceSettingRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

std::string UpdateWorkspaceResourceSettingRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void UpdateWorkspaceResourceSettingRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

bool UpdateWorkspaceResourceSettingRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void UpdateWorkspaceResourceSettingRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool UpdateWorkspaceResourceSettingRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void UpdateWorkspaceResourceSettingRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

std::string UpdateWorkspaceResourceSettingRequest::getCallerType()const
{
	return callerType_;
}

void UpdateWorkspaceResourceSettingRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string UpdateWorkspaceResourceSettingRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateWorkspaceResourceSettingRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

bool UpdateWorkspaceResourceSettingRequest::getSecurity_transport()const
{
	return security_transport_;
}

void UpdateWorkspaceResourceSettingRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string UpdateWorkspaceResourceSettingRequest::getSecurityToken()const
{
	return securityToken_;
}

void UpdateWorkspaceResourceSettingRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string UpdateWorkspaceResourceSettingRequest::getRegionId()const
{
	return regionId_;
}

void UpdateWorkspaceResourceSettingRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string UpdateWorkspaceResourceSettingRequest::getRequestId()const
{
	return requestId_;
}

void UpdateWorkspaceResourceSettingRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

long UpdateWorkspaceResourceSettingRequest::getCallerUid()const
{
	return callerUid_;
}

void UpdateWorkspaceResourceSettingRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string UpdateWorkspaceResourceSettingRequest::getWorkspaceId()const
{
	return workspaceId_;
}

void UpdateWorkspaceResourceSettingRequest::setWorkspaceId(const std::string& workspaceId)
{
	workspaceId_ = workspaceId;
	setCoreParameter("WorkspaceId", std::to_string(workspaceId));
}

std::string UpdateWorkspaceResourceSettingRequest::getOssSetting()const
{
	return ossSetting_;
}

void UpdateWorkspaceResourceSettingRequest::setOssSetting(const std::string& ossSetting)
{
	ossSetting_ = ossSetting;
	setCoreParameter("OssSetting", std::to_string(ossSetting));
}

