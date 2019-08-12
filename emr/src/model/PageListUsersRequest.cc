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

#include <alibabacloud/emr/model/PageListUsersRequest.h>

using AlibabaCloud::Emr::Model::PageListUsersRequest;

PageListUsersRequest::PageListUsersRequest() :
	RpcServiceRequest("emr", "2016-04-08", "PageListUsers")
{}

PageListUsersRequest::~PageListUsersRequest()
{}

std::string PageListUsersRequest::getApp_ip()const
{
	return app_ip_;
}

void PageListUsersRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

long PageListUsersRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void PageListUsersRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string PageListUsersRequest::getFuzzyName()const
{
	return fuzzyName_;
}

void PageListUsersRequest::setFuzzyName(const std::string& fuzzyName)
{
	fuzzyName_ = fuzzyName;
	setCoreParameter("FuzzyName", std::to_string(fuzzyName));
}

long PageListUsersRequest::getCallerParentId()const
{
	return callerParentId_;
}

void PageListUsersRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool PageListUsersRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void PageListUsersRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string PageListUsersRequest::getCallerBid()const
{
	return callerBid_;
}

void PageListUsersRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

std::string PageListUsersRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void PageListUsersRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

bool PageListUsersRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void PageListUsersRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool PageListUsersRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void PageListUsersRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

std::string PageListUsersRequest::getCallerType()const
{
	return callerType_;
}

void PageListUsersRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

int PageListUsersRequest::getPageNumber()const
{
	return pageNumber_;
}

void PageListUsersRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string PageListUsersRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void PageListUsersRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

bool PageListUsersRequest::getSecurity_transport()const
{
	return security_transport_;
}

void PageListUsersRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string PageListUsersRequest::getSecurityToken()const
{
	return securityToken_;
}

void PageListUsersRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string PageListUsersRequest::getRegionId()const
{
	return regionId_;
}

void PageListUsersRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string PageListUsersRequest::getRequestId()const
{
	return requestId_;
}

void PageListUsersRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

int PageListUsersRequest::getPageSize()const
{
	return pageSize_;
}

void PageListUsersRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

long PageListUsersRequest::getCallerUid()const
{
	return callerUid_;
}

void PageListUsersRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

