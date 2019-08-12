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

#include <alibabacloud/emr/model/PageListUserGroupsRequest.h>

using AlibabaCloud::Emr::Model::PageListUserGroupsRequest;

PageListUserGroupsRequest::PageListUserGroupsRequest() :
	RpcServiceRequest("emr", "2016-04-08", "PageListUserGroups")
{}

PageListUserGroupsRequest::~PageListUserGroupsRequest()
{}

std::string PageListUserGroupsRequest::getApp_ip()const
{
	return app_ip_;
}

void PageListUserGroupsRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

long PageListUserGroupsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void PageListUserGroupsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string PageListUserGroupsRequest::getFuzzyName()const
{
	return fuzzyName_;
}

void PageListUserGroupsRequest::setFuzzyName(const std::string& fuzzyName)
{
	fuzzyName_ = fuzzyName;
	setCoreParameter("FuzzyName", fuzzyName);
}

long PageListUserGroupsRequest::getCallerParentId()const
{
	return callerParentId_;
}

void PageListUserGroupsRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool PageListUserGroupsRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void PageListUserGroupsRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string PageListUserGroupsRequest::getCallerBid()const
{
	return callerBid_;
}

void PageListUserGroupsRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

std::string PageListUserGroupsRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void PageListUserGroupsRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

bool PageListUserGroupsRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void PageListUserGroupsRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool PageListUserGroupsRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void PageListUserGroupsRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

std::string PageListUserGroupsRequest::getCallerType()const
{
	return callerType_;
}

void PageListUserGroupsRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

int PageListUserGroupsRequest::getPageNumber()const
{
	return pageNumber_;
}

void PageListUserGroupsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string PageListUserGroupsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void PageListUserGroupsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

bool PageListUserGroupsRequest::getSecurity_transport()const
{
	return security_transport_;
}

void PageListUserGroupsRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string PageListUserGroupsRequest::getSecurityToken()const
{
	return securityToken_;
}

void PageListUserGroupsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string PageListUserGroupsRequest::getRegionId()const
{
	return regionId_;
}

void PageListUserGroupsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string PageListUserGroupsRequest::getRequestId()const
{
	return requestId_;
}

void PageListUserGroupsRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

int PageListUserGroupsRequest::getPageSize()const
{
	return pageSize_;
}

void PageListUserGroupsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

long PageListUserGroupsRequest::getCallerUid()const
{
	return callerUid_;
}

void PageListUserGroupsRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

