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

#include <alibabacloud/cdn/model/DescribeCdnDomainLogsRequest.h>

using AlibabaCloud::Cdn::Model::DescribeCdnDomainLogsRequest;

DescribeCdnDomainLogsRequest::DescribeCdnDomainLogsRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "DescribeCdnDomainLogs")
{}

DescribeCdnDomainLogsRequest::~DescribeCdnDomainLogsRequest()
{}

long DescribeCdnDomainLogsRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeCdnDomainLogsRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeCdnDomainLogsRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeCdnDomainLogsRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeCdnDomainLogsRequest::getStartTime()const
{
	return startTime_;
}

void DescribeCdnDomainLogsRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeCdnDomainLogsRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeCdnDomainLogsRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeCdnDomainLogsRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeCdnDomainLogsRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeCdnDomainLogsRequest::getCallerType()const
{
	return callerType_;
}

void DescribeCdnDomainLogsRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

long DescribeCdnDomainLogsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeCdnDomainLogsRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeCdnDomainLogsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeCdnDomainLogsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeCdnDomainLogsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeCdnDomainLogsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeCdnDomainLogsRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeCdnDomainLogsRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

long DescribeCdnDomainLogsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeCdnDomainLogsRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeCdnDomainLogsRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeCdnDomainLogsRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeCdnDomainLogsRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeCdnDomainLogsRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeCdnDomainLogsRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeCdnDomainLogsRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeCdnDomainLogsRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeCdnDomainLogsRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeCdnDomainLogsRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeCdnDomainLogsRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DescribeCdnDomainLogsRequest::getDomainName()const
{
	return domainName_;
}

void DescribeCdnDomainLogsRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeCdnDomainLogsRequest::getEndTime()const
{
	return endTime_;
}

void DescribeCdnDomainLogsRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeCdnDomainLogsRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeCdnDomainLogsRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeCdnDomainLogsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeCdnDomainLogsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeCdnDomainLogsRequest::getVersion()const
{
	return version_;
}

void DescribeCdnDomainLogsRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DescribeCdnDomainLogsRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeCdnDomainLogsRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeCdnDomainLogsRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeCdnDomainLogsRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeCdnDomainLogsRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeCdnDomainLogsRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeCdnDomainLogsRequest::getRequestId()const
{
	return requestId_;
}

void DescribeCdnDomainLogsRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

