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

#include <alibabacloud/cdn/model/DescribeDomainsUsageByDayRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainsUsageByDayRequest;

DescribeDomainsUsageByDayRequest::DescribeDomainsUsageByDayRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeDomainsUsageByDay")
{}

DescribeDomainsUsageByDayRequest::~DescribeDomainsUsageByDayRequest()
{}

long DescribeDomainsUsageByDayRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeDomainsUsageByDayRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeDomainsUsageByDayRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeDomainsUsageByDayRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeDomainsUsageByDayRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainsUsageByDayRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeDomainsUsageByDayRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeDomainsUsageByDayRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeDomainsUsageByDayRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeDomainsUsageByDayRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeDomainsUsageByDayRequest::getCallerType()const
{
	return callerType_;
}

void DescribeDomainsUsageByDayRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeDomainsUsageByDayRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDomainsUsageByDayRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDomainsUsageByDayRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDomainsUsageByDayRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeDomainsUsageByDayRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeDomainsUsageByDayRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeDomainsUsageByDayRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeDomainsUsageByDayRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeDomainsUsageByDayRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeDomainsUsageByDayRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeDomainsUsageByDayRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeDomainsUsageByDayRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeDomainsUsageByDayRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeDomainsUsageByDayRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeDomainsUsageByDayRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeDomainsUsageByDayRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DescribeDomainsUsageByDayRequest::getProduct()const
{
	return product_;
}

void DescribeDomainsUsageByDayRequest::setProduct(const std::string& product)
{
	product_ = product;
	setCoreParameter("Product", product);
}

std::string DescribeDomainsUsageByDayRequest::getOutString()const
{
	return outString_;
}

void DescribeDomainsUsageByDayRequest::setOutString(const std::string& outString)
{
	outString_ = outString;
	setCoreParameter("OutString", outString);
}

std::string DescribeDomainsUsageByDayRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainsUsageByDayRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeDomainsUsageByDayRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDomainsUsageByDayRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeDomainsUsageByDayRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeDomainsUsageByDayRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeDomainsUsageByDayRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainsUsageByDayRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDomainsUsageByDayRequest::getVersion()const
{
	return version_;
}

void DescribeDomainsUsageByDayRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DescribeDomainsUsageByDayRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeDomainsUsageByDayRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeDomainsUsageByDayRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeDomainsUsageByDayRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeDomainsUsageByDayRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeDomainsUsageByDayRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeDomainsUsageByDayRequest::getRequestId()const
{
	return requestId_;
}

void DescribeDomainsUsageByDayRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

