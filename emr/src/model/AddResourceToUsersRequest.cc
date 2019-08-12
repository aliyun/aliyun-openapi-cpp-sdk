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

#include <alibabacloud/emr/model/AddResourceToUsersRequest.h>

using AlibabaCloud::Emr::Model::AddResourceToUsersRequest;

AddResourceToUsersRequest::AddResourceToUsersRequest() :
	RpcServiceRequest("emr", "2016-04-08", "AddResourceToUsers")
{}

AddResourceToUsersRequest::~AddResourceToUsersRequest()
{}

std::string AddResourceToUsersRequest::getApp_ip()const
{
	return app_ip_;
}

void AddResourceToUsersRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

long AddResourceToUsersRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AddResourceToUsersRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string AddResourceToUsersRequest::getResourceId()const
{
	return resourceId_;
}

void AddResourceToUsersRequest::setResourceId(const std::string& resourceId)
{
	resourceId_ = resourceId;
	setCoreParameter("ResourceId", resourceId);
}

long AddResourceToUsersRequest::getCallerParentId()const
{
	return callerParentId_;
}

void AddResourceToUsersRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

std::vector<std::string> AddResourceToUsersRequest::getUserIdList()const
{
	return userIdList_;
}

void AddResourceToUsersRequest::setUserIdList(const std::vector<std::string>& userIdList)
{
	userIdList_ = userIdList;
	for(int i = 0; i!= userIdList.size(); i++)
		setCoreParameter("UserIdList."+ std::to_string(i), std::to_string(userIdList.at(i)));
}

bool AddResourceToUsersRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void AddResourceToUsersRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string AddResourceToUsersRequest::getCallerBid()const
{
	return callerBid_;
}

void AddResourceToUsersRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

std::string AddResourceToUsersRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void AddResourceToUsersRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string AddResourceToUsersRequest::getResourceType()const
{
	return resourceType_;
}

void AddResourceToUsersRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setCoreParameter("ResourceType", resourceType);
}

bool AddResourceToUsersRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void AddResourceToUsersRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

bool AddResourceToUsersRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void AddResourceToUsersRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

std::string AddResourceToUsersRequest::getCallerType()const
{
	return callerType_;
}

void AddResourceToUsersRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string AddResourceToUsersRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AddResourceToUsersRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

bool AddResourceToUsersRequest::getSecurity_transport()const
{
	return security_transport_;
}

void AddResourceToUsersRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string AddResourceToUsersRequest::getSecurityToken()const
{
	return securityToken_;
}

void AddResourceToUsersRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string AddResourceToUsersRequest::getRegionId()const
{
	return regionId_;
}

void AddResourceToUsersRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string AddResourceToUsersRequest::getRequestId()const
{
	return requestId_;
}

void AddResourceToUsersRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::vector<long> AddResourceToUsersRequest::getRoleIdList()const
{
	return roleIdList_;
}

void AddResourceToUsersRequest::setRoleIdList(const std::vector<long>& roleIdList)
{
	roleIdList_ = roleIdList;
	for(int i = 0; i!= roleIdList.size(); i++)
		setCoreParameter("RoleIdList."+ std::to_string(i), roleIdList.at(i));
}

long AddResourceToUsersRequest::getCallerUid()const
{
	return callerUid_;
}

void AddResourceToUsersRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

