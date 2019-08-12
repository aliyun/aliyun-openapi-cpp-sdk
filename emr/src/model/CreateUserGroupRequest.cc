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

#include <alibabacloud/emr/model/CreateUserGroupRequest.h>

using AlibabaCloud::Emr::Model::CreateUserGroupRequest;

CreateUserGroupRequest::CreateUserGroupRequest() :
	RpcServiceRequest("emr", "2016-04-08", "CreateUserGroup")
{}

CreateUserGroupRequest::~CreateUserGroupRequest()
{}

std::string CreateUserGroupRequest::getApp_ip()const
{
	return app_ip_;
}

void CreateUserGroupRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

long CreateUserGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateUserGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long CreateUserGroupRequest::getCallerParentId()const
{
	return callerParentId_;
}

void CreateUserGroupRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool CreateUserGroupRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void CreateUserGroupRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string CreateUserGroupRequest::getDescription()const
{
	return description_;
}

void CreateUserGroupRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreateUserGroupRequest::getCallerBid()const
{
	return callerBid_;
}

void CreateUserGroupRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

std::string CreateUserGroupRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void CreateUserGroupRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string CreateUserGroupRequest::getType()const
{
	return type_;
}

void CreateUserGroupRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

bool CreateUserGroupRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void CreateUserGroupRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool CreateUserGroupRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void CreateUserGroupRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

std::string CreateUserGroupRequest::getCallerType()const
{
	return callerType_;
}

void CreateUserGroupRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string CreateUserGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateUserGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

bool CreateUserGroupRequest::getSecurity_transport()const
{
	return security_transport_;
}

void CreateUserGroupRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string CreateUserGroupRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateUserGroupRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string CreateUserGroupRequest::getRegionId()const
{
	return regionId_;
}

void CreateUserGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateUserGroupRequest::getRequestId()const
{
	return requestId_;
}

void CreateUserGroupRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string CreateUserGroupRequest::getName()const
{
	return name_;
}

void CreateUserGroupRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::vector<long> CreateUserGroupRequest::getRoleIdList()const
{
	return roleIdList_;
}

void CreateUserGroupRequest::setRoleIdList(const std::vector<long>& roleIdList)
{
	roleIdList_ = roleIdList;
	for(int i = 0; i!= roleIdList.size(); i++)
		setCoreParameter("RoleIdList."+ std::to_string(i), std::to_string(roleIdList.at(i)));
}

long CreateUserGroupRequest::getCallerUid()const
{
	return callerUid_;
}

void CreateUserGroupRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

