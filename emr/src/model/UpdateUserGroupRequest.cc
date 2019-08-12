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

#include <alibabacloud/emr/model/UpdateUserGroupRequest.h>

using AlibabaCloud::Emr::Model::UpdateUserGroupRequest;

UpdateUserGroupRequest::UpdateUserGroupRequest() :
	RpcServiceRequest("emr", "2016-04-08", "UpdateUserGroup")
{}

UpdateUserGroupRequest::~UpdateUserGroupRequest()
{}

std::string UpdateUserGroupRequest::getApp_ip()const
{
	return app_ip_;
}

void UpdateUserGroupRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

long UpdateUserGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpdateUserGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long UpdateUserGroupRequest::getCallerParentId()const
{
	return callerParentId_;
}

void UpdateUserGroupRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

std::vector<long> UpdateUserGroupRequest::getRoleId()const
{
	return roleId_;
}

void UpdateUserGroupRequest::setRoleId(const std::vector<long>& roleId)
{
	roleId_ = roleId;
	for(int i = 0; i!= roleId.size(); i++)
		setCoreParameter("RoleId."+ std::to_string(i), std::to_string(roleId.at(i)));
}

bool UpdateUserGroupRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void UpdateUserGroupRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string UpdateUserGroupRequest::getDescription()const
{
	return description_;
}

void UpdateUserGroupRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string UpdateUserGroupRequest::getCallerBid()const
{
	return callerBid_;
}

void UpdateUserGroupRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

std::string UpdateUserGroupRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void UpdateUserGroupRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string UpdateUserGroupRequest::getType()const
{
	return type_;
}

void UpdateUserGroupRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

bool UpdateUserGroupRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void UpdateUserGroupRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool UpdateUserGroupRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void UpdateUserGroupRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

std::string UpdateUserGroupRequest::getCallerType()const
{
	return callerType_;
}

void UpdateUserGroupRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string UpdateUserGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateUserGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

bool UpdateUserGroupRequest::getSecurity_transport()const
{
	return security_transport_;
}

void UpdateUserGroupRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string UpdateUserGroupRequest::getSecurityToken()const
{
	return securityToken_;
}

void UpdateUserGroupRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string UpdateUserGroupRequest::getRegionId()const
{
	return regionId_;
}

void UpdateUserGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string UpdateUserGroupRequest::getRequestId()const
{
	return requestId_;
}

void UpdateUserGroupRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string UpdateUserGroupRequest::getName()const
{
	return name_;
}

void UpdateUserGroupRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

long UpdateUserGroupRequest::getId()const
{
	return id_;
}

void UpdateUserGroupRequest::setId(long id)
{
	id_ = id;
	setCoreParameter("Id", std::to_string(id));
}

long UpdateUserGroupRequest::getCallerUid()const
{
	return callerUid_;
}

void UpdateUserGroupRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

