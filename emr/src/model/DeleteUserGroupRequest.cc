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

#include <alibabacloud/emr/model/DeleteUserGroupRequest.h>

using AlibabaCloud::Emr::Model::DeleteUserGroupRequest;

DeleteUserGroupRequest::DeleteUserGroupRequest() :
	RpcServiceRequest("emr", "2016-04-08", "DeleteUserGroup")
{}

DeleteUserGroupRequest::~DeleteUserGroupRequest()
{}

std::string DeleteUserGroupRequest::getApp_ip()const
{
	return app_ip_;
}

void DeleteUserGroupRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

long DeleteUserGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteUserGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long DeleteUserGroupRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DeleteUserGroupRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DeleteUserGroupRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DeleteUserGroupRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string DeleteUserGroupRequest::getCallerBid()const
{
	return callerBid_;
}

void DeleteUserGroupRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

std::string DeleteUserGroupRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DeleteUserGroupRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

bool DeleteUserGroupRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DeleteUserGroupRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

bool DeleteUserGroupRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DeleteUserGroupRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

std::string DeleteUserGroupRequest::getCallerType()const
{
	return callerType_;
}

void DeleteUserGroupRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DeleteUserGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteUserGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

bool DeleteUserGroupRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DeleteUserGroupRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string DeleteUserGroupRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteUserGroupRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DeleteUserGroupRequest::getRegionId()const
{
	return regionId_;
}

void DeleteUserGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteUserGroupRequest::getRequestId()const
{
	return requestId_;
}

void DeleteUserGroupRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

long DeleteUserGroupRequest::getCallerUid()const
{
	return callerUid_;
}

void DeleteUserGroupRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

long DeleteUserGroupRequest::getGroupId()const
{
	return groupId_;
}

void DeleteUserGroupRequest::setGroupId(long groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

