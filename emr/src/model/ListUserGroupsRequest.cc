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

#include <alibabacloud/emr/model/ListUserGroupsRequest.h>

using AlibabaCloud::Emr::Model::ListUserGroupsRequest;

ListUserGroupsRequest::ListUserGroupsRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListUserGroups")
{}

ListUserGroupsRequest::~ListUserGroupsRequest()
{}

std::string ListUserGroupsRequest::getApp_ip()const
{
	return app_ip_;
}

void ListUserGroupsRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

long ListUserGroupsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListUserGroupsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListUserGroupsRequest::getFuzzyName()const
{
	return fuzzyName_;
}

void ListUserGroupsRequest::setFuzzyName(const std::string& fuzzyName)
{
	fuzzyName_ = fuzzyName;
	setCoreParameter("FuzzyName", fuzzyName);
}

long ListUserGroupsRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ListUserGroupsRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool ListUserGroupsRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ListUserGroupsRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string ListUserGroupsRequest::getCallerBid()const
{
	return callerBid_;
}

void ListUserGroupsRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

std::string ListUserGroupsRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ListUserGroupsRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

bool ListUserGroupsRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ListUserGroupsRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool ListUserGroupsRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ListUserGroupsRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

std::string ListUserGroupsRequest::getCallerType()const
{
	return callerType_;
}

void ListUserGroupsRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string ListUserGroupsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListUserGroupsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

bool ListUserGroupsRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ListUserGroupsRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string ListUserGroupsRequest::getSecurityToken()const
{
	return securityToken_;
}

void ListUserGroupsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ListUserGroupsRequest::getRegionId()const
{
	return regionId_;
}

void ListUserGroupsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ListUserGroupsRequest::getRequestId()const
{
	return requestId_;
}

void ListUserGroupsRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

long ListUserGroupsRequest::getCallerUid()const
{
	return callerUid_;
}

void ListUserGroupsRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

