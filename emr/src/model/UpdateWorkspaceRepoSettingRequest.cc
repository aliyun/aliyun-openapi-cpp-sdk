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

#include <alibabacloud/emr/model/UpdateWorkspaceRepoSettingRequest.h>

using AlibabaCloud::Emr::Model::UpdateWorkspaceRepoSettingRequest;

UpdateWorkspaceRepoSettingRequest::UpdateWorkspaceRepoSettingRequest() :
	RpcServiceRequest("emr", "2016-04-08", "UpdateWorkspaceRepoSetting")
{}

UpdateWorkspaceRepoSettingRequest::~UpdateWorkspaceRepoSettingRequest()
{}

std::string UpdateWorkspaceRepoSettingRequest::getApp_ip()const
{
	return app_ip_;
}

void UpdateWorkspaceRepoSettingRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

long UpdateWorkspaceRepoSettingRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpdateWorkspaceRepoSettingRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long UpdateWorkspaceRepoSettingRequest::getCallerParentId()const
{
	return callerParentId_;
}

void UpdateWorkspaceRepoSettingRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool UpdateWorkspaceRepoSettingRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void UpdateWorkspaceRepoSettingRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string UpdateWorkspaceRepoSettingRequest::getCallerBid()const
{
	return callerBid_;
}

void UpdateWorkspaceRepoSettingRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

std::string UpdateWorkspaceRepoSettingRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void UpdateWorkspaceRepoSettingRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

bool UpdateWorkspaceRepoSettingRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void UpdateWorkspaceRepoSettingRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool UpdateWorkspaceRepoSettingRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void UpdateWorkspaceRepoSettingRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

std::string UpdateWorkspaceRepoSettingRequest::getCallerType()const
{
	return callerType_;
}

void UpdateWorkspaceRepoSettingRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string UpdateWorkspaceRepoSettingRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateWorkspaceRepoSettingRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

bool UpdateWorkspaceRepoSettingRequest::getSecurity_transport()const
{
	return security_transport_;
}

void UpdateWorkspaceRepoSettingRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string UpdateWorkspaceRepoSettingRequest::getSecurityToken()const
{
	return securityToken_;
}

void UpdateWorkspaceRepoSettingRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string UpdateWorkspaceRepoSettingRequest::getRegionId()const
{
	return regionId_;
}

void UpdateWorkspaceRepoSettingRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string UpdateWorkspaceRepoSettingRequest::getRequestId()const
{
	return requestId_;
}

void UpdateWorkspaceRepoSettingRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::vector<UpdateWorkspaceRepoSettingRequest::RepoMaven> UpdateWorkspaceRepoSettingRequest::getRepoMaven()const
{
	return repoMaven_;
}

void UpdateWorkspaceRepoSettingRequest::setRepoMaven(const std::vector<RepoMaven>& repoMaven)
{
	repoMaven_ = repoMaven;
	int i = 0;
	for(int i = 0; i!= repoMaven.size(); i++)	{
		auto obj = repoMaven.at(i);
		std::string str ="RepoMaven."+ std::to_string(i);
		setCoreParameter(str + ".GroupId", obj.groupId);
		setCoreParameter(str + ".ArtifactId", obj.artifactId);
		setCoreParameter(str + ".Version", obj.version);
	}
}

std::vector<UpdateWorkspaceRepoSettingRequest::RepoPip> UpdateWorkspaceRepoSettingRequest::getRepoPip()const
{
	return repoPip_;
}

void UpdateWorkspaceRepoSettingRequest::setRepoPip(const std::vector<RepoPip>& repoPip)
{
	repoPip_ = repoPip;
	int i = 0;
	for(int i = 0; i!= repoPip.size(); i++)	{
		auto obj = repoPip.at(i);
		std::string str ="RepoPip."+ std::to_string(i);
		setCoreParameter(str + ".PackageName", obj.packageName);
		setCoreParameter(str + ".Version", obj.version);
	}
}

long UpdateWorkspaceRepoSettingRequest::getCallerUid()const
{
	return callerUid_;
}

void UpdateWorkspaceRepoSettingRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string UpdateWorkspaceRepoSettingRequest::getWorkspaceId()const
{
	return workspaceId_;
}

void UpdateWorkspaceRepoSettingRequest::setWorkspaceId(const std::string& workspaceId)
{
	workspaceId_ = workspaceId;
	setCoreParameter("WorkspaceId", workspaceId);
}

