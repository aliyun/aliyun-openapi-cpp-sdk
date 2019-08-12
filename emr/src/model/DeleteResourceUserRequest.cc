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

#include <alibabacloud/emr/model/DeleteResourceUserRequest.h>

using AlibabaCloud::Emr::Model::DeleteResourceUserRequest;

DeleteResourceUserRequest::DeleteResourceUserRequest() :
	RpcServiceRequest("emr", "2016-04-08", "DeleteResourceUser")
{}

DeleteResourceUserRequest::~DeleteResourceUserRequest()
{}

std::string DeleteResourceUserRequest::getApp_ip()const
{
	return app_ip_;
}

void DeleteResourceUserRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

long DeleteResourceUserRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteResourceUserRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DeleteResourceUserRequest::getResourceId()const
{
	return resourceId_;
}

void DeleteResourceUserRequest::setResourceId(const std::string& resourceId)
{
	resourceId_ = resourceId;
	setCoreParameter("ResourceId", std::to_string(resourceId));
}

long DeleteResourceUserRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DeleteResourceUserRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DeleteResourceUserRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DeleteResourceUserRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DeleteResourceUserRequest::getCallerBid()const
{
	return callerBid_;
}

void DeleteResourceUserRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

std::string DeleteResourceUserRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DeleteResourceUserRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string DeleteResourceUserRequest::getResourceType()const
{
	return resourceType_;
}

void DeleteResourceUserRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setCoreParameter("ResourceType", std::to_string(resourceType));
}

bool DeleteResourceUserRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DeleteResourceUserRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DeleteResourceUserRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DeleteResourceUserRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

std::string DeleteResourceUserRequest::getCallerType()const
{
	return callerType_;
}

void DeleteResourceUserRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string DeleteResourceUserRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteResourceUserRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

bool DeleteResourceUserRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DeleteResourceUserRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DeleteResourceUserRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteResourceUserRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DeleteResourceUserRequest::getRegionId()const
{
	return regionId_;
}

void DeleteResourceUserRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DeleteResourceUserRequest::getRequestId()const
{
	return requestId_;
}

void DeleteResourceUserRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

long DeleteResourceUserRequest::getCallerUid()const
{
	return callerUid_;
}

void DeleteResourceUserRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DeleteResourceUserRequest::getAliyunUserId()const
{
	return aliyunUserId_;
}

void DeleteResourceUserRequest::setAliyunUserId(const std::string& aliyunUserId)
{
	aliyunUserId_ = aliyunUserId;
	setCoreParameter("AliyunUserId", std::to_string(aliyunUserId));
}

