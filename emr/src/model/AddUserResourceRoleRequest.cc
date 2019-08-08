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

#include <alibabacloud/emr/model/AddUserResourceRoleRequest.h>

using AlibabaCloud::Emr::Model::AddUserResourceRoleRequest;

AddUserResourceRoleRequest::AddUserResourceRoleRequest() :
	RpcServiceRequest("emr", "2016-04-08", "AddUserResourceRole")
{}

AddUserResourceRoleRequest::~AddUserResourceRoleRequest()
{}

std::string AddUserResourceRoleRequest::getApp_ip()const
{
	return app_ip_;
}

void AddUserResourceRoleRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

long AddUserResourceRoleRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AddUserResourceRoleRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AddUserResourceRoleRequest::getResourceId()const
{
	return resourceId_;
}

void AddUserResourceRoleRequest::setResourceId(const std::string& resourceId)
{
	resourceId_ = resourceId;
	setCoreParameter("ResourceId", resourceId);
}

long AddUserResourceRoleRequest::getCallerParentId()const
{
	return callerParentId_;
}

void AddUserResourceRoleRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

long AddUserResourceRoleRequest::getRoleId()const
{
	return roleId_;
}

void AddUserResourceRoleRequest::setRoleId(long roleId)
{
	roleId_ = roleId;
	setCoreParameter("RoleId", std::to_string(roleId));
}

bool AddUserResourceRoleRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void AddUserResourceRoleRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string AddUserResourceRoleRequest::getCallerBid()const
{
	return callerBid_;
}

void AddUserResourceRoleRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

std::string AddUserResourceRoleRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void AddUserResourceRoleRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string AddUserResourceRoleRequest::getResourceType()const
{
	return resourceType_;
}

void AddUserResourceRoleRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setCoreParameter("ResourceType", resourceType);
}

bool AddUserResourceRoleRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void AddUserResourceRoleRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool AddUserResourceRoleRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void AddUserResourceRoleRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

std::string AddUserResourceRoleRequest::getCallerType()const
{
	return callerType_;
}

void AddUserResourceRoleRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string AddUserResourceRoleRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AddUserResourceRoleRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

bool AddUserResourceRoleRequest::getSecurity_transport()const
{
	return security_transport_;
}

void AddUserResourceRoleRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string AddUserResourceRoleRequest::getSecurityToken()const
{
	return securityToken_;
}

void AddUserResourceRoleRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string AddUserResourceRoleRequest::getRegionId()const
{
	return regionId_;
}

void AddUserResourceRoleRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string AddUserResourceRoleRequest::getRequestId()const
{
	return requestId_;
}

void AddUserResourceRoleRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

long AddUserResourceRoleRequest::getCallerUid()const
{
	return callerUid_;
}

void AddUserResourceRoleRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string AddUserResourceRoleRequest::getAliyunUserId()const
{
	return aliyunUserId_;
}

void AddUserResourceRoleRequest::setAliyunUserId(const std::string& aliyunUserId)
{
	aliyunUserId_ = aliyunUserId;
	setCoreParameter("AliyunUserId", aliyunUserId);
}

