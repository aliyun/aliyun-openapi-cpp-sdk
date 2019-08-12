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

#include <alibabacloud/cdn/model/DescribeCdnMonitorDataRequest.h>

using AlibabaCloud::Cdn::Model::DescribeCdnMonitorDataRequest;

DescribeCdnMonitorDataRequest::DescribeCdnMonitorDataRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeCdnMonitorData")
{}

DescribeCdnMonitorDataRequest::~DescribeCdnMonitorDataRequest()
{}

long DescribeCdnMonitorDataRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeCdnMonitorDataRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeCdnMonitorDataRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeCdnMonitorDataRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string DescribeCdnMonitorDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeCdnMonitorDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeCdnMonitorDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeCdnMonitorDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeCdnMonitorDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeCdnMonitorDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeCdnMonitorDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeCdnMonitorDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeCdnMonitorDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeCdnMonitorDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeCdnMonitorDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeCdnMonitorDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeCdnMonitorDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeCdnMonitorDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeCdnMonitorDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeCdnMonitorDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeCdnMonitorDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeCdnMonitorDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeCdnMonitorDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeCdnMonitorDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeCdnMonitorDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeCdnMonitorDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeCdnMonitorDataRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeCdnMonitorDataRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DescribeCdnMonitorDataRequest::getOutString()const
{
	return outString_;
}

void DescribeCdnMonitorDataRequest::setOutString(const std::string& outString)
{
	outString_ = outString;
	setCoreParameter("OutString", outString);
}

std::string DescribeCdnMonitorDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeCdnMonitorDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeCdnMonitorDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeCdnMonitorDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeCdnMonitorDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeCdnMonitorDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeCdnMonitorDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeCdnMonitorDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeCdnMonitorDataRequest::getVersion()const
{
	return version_;
}

void DescribeCdnMonitorDataRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DescribeCdnMonitorDataRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeCdnMonitorDataRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

bool DescribeCdnMonitorDataRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeCdnMonitorDataRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

bool DescribeCdnMonitorDataRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeCdnMonitorDataRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string DescribeCdnMonitorDataRequest::getRequestId()const
{
	return requestId_;
}

void DescribeCdnMonitorDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeCdnMonitorDataRequest::getInterval()const
{
	return interval_;
}

void DescribeCdnMonitorDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setCoreParameter("Interval", interval);
}

std::string DescribeCdnMonitorDataRequest::getFields()const
{
	return fields_;
}

void DescribeCdnMonitorDataRequest::setFields(const std::string& fields)
{
	fields_ = fields;
	setCoreParameter("Fields", fields);
}

