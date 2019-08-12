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

#include <alibabacloud/emr/model/ListRolesRequest.h>

using AlibabaCloud::Emr::Model::ListRolesRequest;

ListRolesRequest::ListRolesRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListRoles")
{}

ListRolesRequest::~ListRolesRequest()
{}

std::string ListRolesRequest::getApp_ip()const
{
	return app_ip_;
}

void ListRolesRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

long ListRolesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListRolesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long ListRolesRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ListRolesRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool ListRolesRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ListRolesRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string ListRolesRequest::getCallerBid()const
{
	return callerBid_;
}

void ListRolesRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

std::string ListRolesRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ListRolesRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string ListRolesRequest::getResourceType()const
{
	return resourceType_;
}

void ListRolesRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setCoreParameter("ResourceType", resourceType);
}

bool ListRolesRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ListRolesRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

bool ListRolesRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ListRolesRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

std::string ListRolesRequest::getCallerType()const
{
	return callerType_;
}

void ListRolesRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string ListRolesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListRolesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

bool ListRolesRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ListRolesRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string ListRolesRequest::getSecurityToken()const
{
	return securityToken_;
}

void ListRolesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ListRolesRequest::getRegionId()const
{
	return regionId_;
}

void ListRolesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ListRolesRequest::getRequestId()const
{
	return requestId_;
}

void ListRolesRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

long ListRolesRequest::getCallerUid()const
{
	return callerUid_;
}

void ListRolesRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

