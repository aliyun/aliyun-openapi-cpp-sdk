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

#include <alibabacloud/emr/model/PageListResourceUsersRequest.h>

using AlibabaCloud::Emr::Model::PageListResourceUsersRequest;

PageListResourceUsersRequest::PageListResourceUsersRequest() :
	RpcServiceRequest("emr", "2016-04-08", "PageListResourceUsers")
{}

PageListResourceUsersRequest::~PageListResourceUsersRequest()
{}

std::string PageListResourceUsersRequest::getApp_ip()const
{
	return app_ip_;
}

void PageListResourceUsersRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

long PageListResourceUsersRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void PageListResourceUsersRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string PageListResourceUsersRequest::getResourceId()const
{
	return resourceId_;
}

void PageListResourceUsersRequest::setResourceId(const std::string& resourceId)
{
	resourceId_ = resourceId;
	setCoreParameter("ResourceId", std::to_string(resourceId));
}

long PageListResourceUsersRequest::getCallerParentId()const
{
	return callerParentId_;
}

void PageListResourceUsersRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool PageListResourceUsersRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void PageListResourceUsersRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string PageListResourceUsersRequest::getSearchKey()const
{
	return searchKey_;
}

void PageListResourceUsersRequest::setSearchKey(const std::string& searchKey)
{
	searchKey_ = searchKey;
	setCoreParameter("SearchKey", std::to_string(searchKey));
}

std::string PageListResourceUsersRequest::getCallerBid()const
{
	return callerBid_;
}

void PageListResourceUsersRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

std::string PageListResourceUsersRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void PageListResourceUsersRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string PageListResourceUsersRequest::getResourceType()const
{
	return resourceType_;
}

void PageListResourceUsersRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setCoreParameter("ResourceType", std::to_string(resourceType));
}

bool PageListResourceUsersRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void PageListResourceUsersRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool PageListResourceUsersRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void PageListResourceUsersRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

std::string PageListResourceUsersRequest::getCallerType()const
{
	return callerType_;
}

void PageListResourceUsersRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

int PageListResourceUsersRequest::getPageNumber()const
{
	return pageNumber_;
}

void PageListResourceUsersRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string PageListResourceUsersRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void PageListResourceUsersRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

bool PageListResourceUsersRequest::getSecurity_transport()const
{
	return security_transport_;
}

void PageListResourceUsersRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string PageListResourceUsersRequest::getSecurityToken()const
{
	return securityToken_;
}

void PageListResourceUsersRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string PageListResourceUsersRequest::getRegionId()const
{
	return regionId_;
}

void PageListResourceUsersRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string PageListResourceUsersRequest::getRequestId()const
{
	return requestId_;
}

void PageListResourceUsersRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

int PageListResourceUsersRequest::getPageSize()const
{
	return pageSize_;
}

void PageListResourceUsersRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

long PageListResourceUsersRequest::getCallerUid()const
{
	return callerUid_;
}

void PageListResourceUsersRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

