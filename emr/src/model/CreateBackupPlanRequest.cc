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

#include <alibabacloud/emr/model/CreateBackupPlanRequest.h>

using AlibabaCloud::Emr::Model::CreateBackupPlanRequest;

CreateBackupPlanRequest::CreateBackupPlanRequest() :
	RpcServiceRequest("emr", "2016-04-08", "CreateBackupPlan")
{}

CreateBackupPlanRequest::~CreateBackupPlanRequest()
{}

std::string CreateBackupPlanRequest::getApp_ip()const
{
	return app_ip_;
}

void CreateBackupPlanRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

long CreateBackupPlanRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateBackupPlanRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long CreateBackupPlanRequest::getCallerParentId()const
{
	return callerParentId_;
}

void CreateBackupPlanRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool CreateBackupPlanRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void CreateBackupPlanRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string CreateBackupPlanRequest::getDescription()const
{
	return description_;
}

void CreateBackupPlanRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

std::string CreateBackupPlanRequest::getCallerBid()const
{
	return callerBid_;
}

void CreateBackupPlanRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

std::string CreateBackupPlanRequest::getClusterId()const
{
	return clusterId_;
}

void CreateBackupPlanRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", std::to_string(clusterId));
}

std::string CreateBackupPlanRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void CreateBackupPlanRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

bool CreateBackupPlanRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void CreateBackupPlanRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool CreateBackupPlanRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void CreateBackupPlanRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

std::string CreateBackupPlanRequest::getCallerType()const
{
	return callerType_;
}

void CreateBackupPlanRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string CreateBackupPlanRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateBackupPlanRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

bool CreateBackupPlanRequest::getSecurity_transport()const
{
	return security_transport_;
}

void CreateBackupPlanRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string CreateBackupPlanRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateBackupPlanRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string CreateBackupPlanRequest::getRegionId()const
{
	return regionId_;
}

void CreateBackupPlanRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string CreateBackupPlanRequest::getRequestId()const
{
	return requestId_;
}

void CreateBackupPlanRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string CreateBackupPlanRequest::getName()const
{
	return name_;
}

void CreateBackupPlanRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

std::string CreateBackupPlanRequest::getRootPath()const
{
	return rootPath_;
}

void CreateBackupPlanRequest::setRootPath(const std::string& rootPath)
{
	rootPath_ = rootPath;
	setCoreParameter("RootPath", std::to_string(rootPath));
}

long CreateBackupPlanRequest::getCallerUid()const
{
	return callerUid_;
}

void CreateBackupPlanRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

