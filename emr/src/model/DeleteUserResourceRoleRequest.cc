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

#include <alibabacloud/emr/model/DeleteUserResourceRoleRequest.h>

using AlibabaCloud::Emr::Model::DeleteUserResourceRoleRequest;

DeleteUserResourceRoleRequest::DeleteUserResourceRoleRequest() :
	RpcServiceRequest("emr", "2016-04-08", "DeleteUserResourceRole")
{}

DeleteUserResourceRoleRequest::~DeleteUserResourceRoleRequest()
{}

std::string DeleteUserResourceRoleRequest::getApp_ip()const
{
	return app_ip_;
}

void DeleteUserResourceRoleRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

long DeleteUserResourceRoleRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteUserResourceRoleRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DeleteUserResourceRoleRequest::getResourceId()const
{
	return resourceId_;
}

void DeleteUserResourceRoleRequest::setResourceId(const std::string& resourceId)
{
	resourceId_ = resourceId;
	setCoreParameter("ResourceId", resourceId);
}

long DeleteUserResourceRoleRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DeleteUserResourceRoleRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

long DeleteUserResourceRoleRequest::getRoleId()const
{
	return roleId_;
}

void DeleteUserResourceRoleRequest::setRoleId(long roleId)
{
	roleId_ = roleId;
	setCoreParameter("RoleId", roleId);
}

bool DeleteUserResourceRoleRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DeleteUserResourceRoleRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string DeleteUserResourceRoleRequest::getCallerBid()const
{
	return callerBid_;
}

void DeleteUserResourceRoleRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

std::string DeleteUserResourceRoleRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DeleteUserResourceRoleRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DeleteUserResourceRoleRequest::getResourceType()const
{
	return resourceType_;
}

void DeleteUserResourceRoleRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setCoreParameter("ResourceType", resourceType);
}

bool DeleteUserResourceRoleRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DeleteUserResourceRoleRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

bool DeleteUserResourceRoleRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DeleteUserResourceRoleRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

std::string DeleteUserResourceRoleRequest::getCallerType()const
{
	return callerType_;
}

void DeleteUserResourceRoleRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DeleteUserResourceRoleRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteUserResourceRoleRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

bool DeleteUserResourceRoleRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DeleteUserResourceRoleRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string DeleteUserResourceRoleRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteUserResourceRoleRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DeleteUserResourceRoleRequest::getRegionId()const
{
	return regionId_;
}

void DeleteUserResourceRoleRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteUserResourceRoleRequest::getRequestId()const
{
	return requestId_;
}

void DeleteUserResourceRoleRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

long DeleteUserResourceRoleRequest::getCallerUid()const
{
	return callerUid_;
}

void DeleteUserResourceRoleRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DeleteUserResourceRoleRequest::getAliyunUserId()const
{
	return aliyunUserId_;
}

void DeleteUserResourceRoleRequest::setAliyunUserId(const std::string& aliyunUserId)
{
	aliyunUserId_ = aliyunUserId;
	setCoreParameter("AliyunUserId", aliyunUserId);
}

