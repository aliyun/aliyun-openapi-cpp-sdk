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

#include <alibabacloud/cdn/model/DescribeDomainReqHitRateDataRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainReqHitRateDataRequest;

DescribeDomainReqHitRateDataRequest::DescribeDomainReqHitRateDataRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeDomainReqHitRateData")
{}

DescribeDomainReqHitRateDataRequest::~DescribeDomainReqHitRateDataRequest()
{}

long DescribeDomainReqHitRateDataRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeDomainReqHitRateDataRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeDomainReqHitRateDataRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeDomainReqHitRateDataRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeDomainReqHitRateDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainReqHitRateDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeDomainReqHitRateDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeDomainReqHitRateDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeDomainReqHitRateDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeDomainReqHitRateDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeDomainReqHitRateDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeDomainReqHitRateDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string DescribeDomainReqHitRateDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDomainReqHitRateDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDomainReqHitRateDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDomainReqHitRateDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeDomainReqHitRateDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeDomainReqHitRateDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string DescribeDomainReqHitRateDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeDomainReqHitRateDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeDomainReqHitRateDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeDomainReqHitRateDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeDomainReqHitRateDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeDomainReqHitRateDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeDomainReqHitRateDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeDomainReqHitRateDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeDomainReqHitRateDataRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeDomainReqHitRateDataRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string DescribeDomainReqHitRateDataRequest::getOutString()const
{
	return outString_;
}

void DescribeDomainReqHitRateDataRequest::setOutString(const std::string& outString)
{
	outString_ = outString;
	setParameter("OutString", outString);
}

std::string DescribeDomainReqHitRateDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainReqHitRateDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeDomainReqHitRateDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDomainReqHitRateDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeDomainReqHitRateDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeDomainReqHitRateDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeDomainReqHitRateDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainReqHitRateDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDomainReqHitRateDataRequest::getVersion()const
{
	return version_;
}

void DescribeDomainReqHitRateDataRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool DescribeDomainReqHitRateDataRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeDomainReqHitRateDataRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeDomainReqHitRateDataRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeDomainReqHitRateDataRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeDomainReqHitRateDataRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeDomainReqHitRateDataRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeDomainReqHitRateDataRequest::getRequestId()const
{
	return requestId_;
}

void DescribeDomainReqHitRateDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string DescribeDomainReqHitRateDataRequest::getInterval()const
{
	return interval_;
}

void DescribeDomainReqHitRateDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setParameter("Interval", interval);
}

std::string DescribeDomainReqHitRateDataRequest::getFields()const
{
	return fields_;
}

void DescribeDomainReqHitRateDataRequest::setFields(const std::string& fields)
{
	fields_ = fields;
	setParameter("Fields", fields);
}

