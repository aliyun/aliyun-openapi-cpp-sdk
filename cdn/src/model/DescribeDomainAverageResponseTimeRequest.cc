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

#include <alibabacloud/cdn/model/DescribeDomainAverageResponseTimeRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainAverageResponseTimeRequest;

DescribeDomainAverageResponseTimeRequest::DescribeDomainAverageResponseTimeRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeDomainAverageResponseTime")
{}

DescribeDomainAverageResponseTimeRequest::~DescribeDomainAverageResponseTimeRequest()
{}

long DescribeDomainAverageResponseTimeRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeDomainAverageResponseTimeRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeDomainAverageResponseTimeRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeDomainAverageResponseTimeRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeDomainAverageResponseTimeRequest::getLocationNameEn()const
{
	return locationNameEn_;
}

void DescribeDomainAverageResponseTimeRequest::setLocationNameEn(const std::string& locationNameEn)
{
	locationNameEn_ = locationNameEn;
	setCoreParameter("LocationNameEn", locationNameEn);
}

std::string DescribeDomainAverageResponseTimeRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainAverageResponseTimeRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeDomainAverageResponseTimeRequest::getIspNameEn()const
{
	return ispNameEn_;
}

void DescribeDomainAverageResponseTimeRequest::setIspNameEn(const std::string& ispNameEn)
{
	ispNameEn_ = ispNameEn;
	setCoreParameter("IspNameEn", ispNameEn);
}

std::string DescribeDomainAverageResponseTimeRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeDomainAverageResponseTimeRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeDomainAverageResponseTimeRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeDomainAverageResponseTimeRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeDomainAverageResponseTimeRequest::getCallerType()const
{
	return callerType_;
}

void DescribeDomainAverageResponseTimeRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeDomainAverageResponseTimeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDomainAverageResponseTimeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDomainAverageResponseTimeRequest::getDomainType()const
{
	return domainType_;
}

void DescribeDomainAverageResponseTimeRequest::setDomainType(const std::string& domainType)
{
	domainType_ = domainType;
	setCoreParameter("DomainType", domainType);
}

std::string DescribeDomainAverageResponseTimeRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDomainAverageResponseTimeRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeDomainAverageResponseTimeRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeDomainAverageResponseTimeRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeDomainAverageResponseTimeRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeDomainAverageResponseTimeRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeDomainAverageResponseTimeRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeDomainAverageResponseTimeRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeDomainAverageResponseTimeRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeDomainAverageResponseTimeRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeDomainAverageResponseTimeRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeDomainAverageResponseTimeRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeDomainAverageResponseTimeRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeDomainAverageResponseTimeRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DescribeDomainAverageResponseTimeRequest::getOutString()const
{
	return outString_;
}

void DescribeDomainAverageResponseTimeRequest::setOutString(const std::string& outString)
{
	outString_ = outString;
	setCoreParameter("OutString", outString);
}

std::string DescribeDomainAverageResponseTimeRequest::getTimeMerge()const
{
	return timeMerge_;
}

void DescribeDomainAverageResponseTimeRequest::setTimeMerge(const std::string& timeMerge)
{
	timeMerge_ = timeMerge;
	setCoreParameter("TimeMerge", timeMerge);
}

std::string DescribeDomainAverageResponseTimeRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainAverageResponseTimeRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeDomainAverageResponseTimeRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDomainAverageResponseTimeRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeDomainAverageResponseTimeRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeDomainAverageResponseTimeRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeDomainAverageResponseTimeRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainAverageResponseTimeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDomainAverageResponseTimeRequest::getVersion()const
{
	return version_;
}

void DescribeDomainAverageResponseTimeRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DescribeDomainAverageResponseTimeRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeDomainAverageResponseTimeRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeDomainAverageResponseTimeRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeDomainAverageResponseTimeRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeDomainAverageResponseTimeRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeDomainAverageResponseTimeRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeDomainAverageResponseTimeRequest::getRequestId()const
{
	return requestId_;
}

void DescribeDomainAverageResponseTimeRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeDomainAverageResponseTimeRequest::getInterval()const
{
	return interval_;
}

void DescribeDomainAverageResponseTimeRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setCoreParameter("Interval", interval);
}

std::string DescribeDomainAverageResponseTimeRequest::getFields()const
{
	return fields_;
}

void DescribeDomainAverageResponseTimeRequest::setFields(const std::string& fields)
{
	fields_ = fields;
	setCoreParameter("Fields", fields);
}

