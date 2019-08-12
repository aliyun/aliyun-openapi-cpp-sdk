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

#include <alibabacloud/emr/model/DescribeWorkspaceRepoSettingRequest.h>

using AlibabaCloud::Emr::Model::DescribeWorkspaceRepoSettingRequest;

DescribeWorkspaceRepoSettingRequest::DescribeWorkspaceRepoSettingRequest() :
	RpcServiceRequest("emr", "2016-04-08", "DescribeWorkspaceRepoSetting")
{}

DescribeWorkspaceRepoSettingRequest::~DescribeWorkspaceRepoSettingRequest()
{}

std::string DescribeWorkspaceRepoSettingRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeWorkspaceRepoSettingRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

long DescribeWorkspaceRepoSettingRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeWorkspaceRepoSettingRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long DescribeWorkspaceRepoSettingRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeWorkspaceRepoSettingRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeWorkspaceRepoSettingRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeWorkspaceRepoSettingRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string DescribeWorkspaceRepoSettingRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeWorkspaceRepoSettingRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

std::string DescribeWorkspaceRepoSettingRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeWorkspaceRepoSettingRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

bool DescribeWorkspaceRepoSettingRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeWorkspaceRepoSettingRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

bool DescribeWorkspaceRepoSettingRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeWorkspaceRepoSettingRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

std::string DescribeWorkspaceRepoSettingRequest::getCallerType()const
{
	return callerType_;
}

void DescribeWorkspaceRepoSettingRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeWorkspaceRepoSettingRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeWorkspaceRepoSettingRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

bool DescribeWorkspaceRepoSettingRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeWorkspaceRepoSettingRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string DescribeWorkspaceRepoSettingRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeWorkspaceRepoSettingRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeWorkspaceRepoSettingRequest::getRegionId()const
{
	return regionId_;
}

void DescribeWorkspaceRepoSettingRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeWorkspaceRepoSettingRequest::getRequestId()const
{
	return requestId_;
}

void DescribeWorkspaceRepoSettingRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

long DescribeWorkspaceRepoSettingRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeWorkspaceRepoSettingRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeWorkspaceRepoSettingRequest::getWorkspaceId()const
{
	return workspaceId_;
}

void DescribeWorkspaceRepoSettingRequest::setWorkspaceId(const std::string& workspaceId)
{
	workspaceId_ = workspaceId;
	setCoreParameter("WorkspaceId", workspaceId);
}

