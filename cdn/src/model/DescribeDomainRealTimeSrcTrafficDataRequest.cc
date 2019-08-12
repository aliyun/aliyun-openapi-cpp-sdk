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

#include <alibabacloud/cdn/model/DescribeDomainRealTimeSrcTrafficDataRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainRealTimeSrcTrafficDataRequest;

DescribeDomainRealTimeSrcTrafficDataRequest::DescribeDomainRealTimeSrcTrafficDataRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeDomainRealTimeSrcTrafficData")
{}

DescribeDomainRealTimeSrcTrafficDataRequest::~DescribeDomainRealTimeSrcTrafficDataRequest()
{}

long DescribeDomainRealTimeSrcTrafficDataRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeDomainRealTimeSrcTrafficDataRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeDomainRealTimeSrcTrafficDataRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeDomainRealTimeSrcTrafficDataRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string DescribeDomainRealTimeSrcTrafficDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainRealTimeSrcTrafficDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeDomainRealTimeSrcTrafficDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeDomainRealTimeSrcTrafficDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeDomainRealTimeSrcTrafficDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeDomainRealTimeSrcTrafficDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeDomainRealTimeSrcTrafficDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeDomainRealTimeSrcTrafficDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeDomainRealTimeSrcTrafficDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDomainRealTimeSrcTrafficDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDomainRealTimeSrcTrafficDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDomainRealTimeSrcTrafficDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeDomainRealTimeSrcTrafficDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeDomainRealTimeSrcTrafficDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeDomainRealTimeSrcTrafficDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeDomainRealTimeSrcTrafficDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeDomainRealTimeSrcTrafficDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeDomainRealTimeSrcTrafficDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeDomainRealTimeSrcTrafficDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeDomainRealTimeSrcTrafficDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeDomainRealTimeSrcTrafficDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeDomainRealTimeSrcTrafficDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeDomainRealTimeSrcTrafficDataRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeDomainRealTimeSrcTrafficDataRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DescribeDomainRealTimeSrcTrafficDataRequest::getProduct()const
{
	return product_;
}

void DescribeDomainRealTimeSrcTrafficDataRequest::setProduct(const std::string& product)
{
	product_ = product;
	setCoreParameter("Product", product);
}

std::string DescribeDomainRealTimeSrcTrafficDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainRealTimeSrcTrafficDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeDomainRealTimeSrcTrafficDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDomainRealTimeSrcTrafficDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeDomainRealTimeSrcTrafficDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeDomainRealTimeSrcTrafficDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeDomainRealTimeSrcTrafficDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainRealTimeSrcTrafficDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeDomainRealTimeSrcTrafficDataRequest::getVersion()const
{
	return version_;
}

void DescribeDomainRealTimeSrcTrafficDataRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DescribeDomainRealTimeSrcTrafficDataRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeDomainRealTimeSrcTrafficDataRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

bool DescribeDomainRealTimeSrcTrafficDataRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeDomainRealTimeSrcTrafficDataRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

bool DescribeDomainRealTimeSrcTrafficDataRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeDomainRealTimeSrcTrafficDataRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string DescribeDomainRealTimeSrcTrafficDataRequest::getRequestId()const
{
	return requestId_;
}

void DescribeDomainRealTimeSrcTrafficDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeDomainRealTimeSrcTrafficDataRequest::getInterval()const
{
	return interval_;
}

void DescribeDomainRealTimeSrcTrafficDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setCoreParameter("Interval", interval);
}

std::string DescribeDomainRealTimeSrcTrafficDataRequest::getFields()const
{
	return fields_;
}

void DescribeDomainRealTimeSrcTrafficDataRequest::setFields(const std::string& fields)
{
	fields_ = fields;
	setCoreParameter("Fields", fields);
}

