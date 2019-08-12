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

#include <alibabacloud/scdn/model/DescribeScdnDomainRealTimeSrcTrafficDataRequest.h>

using AlibabaCloud::Scdn::Model::DescribeScdnDomainRealTimeSrcTrafficDataRequest;

DescribeScdnDomainRealTimeSrcTrafficDataRequest::DescribeScdnDomainRealTimeSrcTrafficDataRequest() :
	RpcServiceRequest("scdn", "2017-11-15", "DescribeScdnDomainRealTimeSrcTrafficData")
{}

DescribeScdnDomainRealTimeSrcTrafficDataRequest::~DescribeScdnDomainRealTimeSrcTrafficDataRequest()
{}

long DescribeScdnDomainRealTimeSrcTrafficDataRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeScdnDomainRealTimeSrcTrafficDataRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeScdnDomainRealTimeSrcTrafficDataRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeScdnDomainRealTimeSrcTrafficDataRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeScdnDomainRealTimeSrcTrafficDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeScdnDomainRealTimeSrcTrafficDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

std::string DescribeScdnDomainRealTimeSrcTrafficDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeScdnDomainRealTimeSrcTrafficDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string DescribeScdnDomainRealTimeSrcTrafficDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeScdnDomainRealTimeSrcTrafficDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string DescribeScdnDomainRealTimeSrcTrafficDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeScdnDomainRealTimeSrcTrafficDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string DescribeScdnDomainRealTimeSrcTrafficDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeScdnDomainRealTimeSrcTrafficDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string DescribeScdnDomainRealTimeSrcTrafficDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeScdnDomainRealTimeSrcTrafficDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DescribeScdnDomainRealTimeSrcTrafficDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeScdnDomainRealTimeSrcTrafficDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string DescribeScdnDomainRealTimeSrcTrafficDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeScdnDomainRealTimeSrcTrafficDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string DescribeScdnDomainRealTimeSrcTrafficDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeScdnDomainRealTimeSrcTrafficDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long DescribeScdnDomainRealTimeSrcTrafficDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeScdnDomainRealTimeSrcTrafficDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeScdnDomainRealTimeSrcTrafficDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeScdnDomainRealTimeSrcTrafficDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string DescribeScdnDomainRealTimeSrcTrafficDataRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeScdnDomainRealTimeSrcTrafficDataRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", std::to_string(popProduct));
}

std::string DescribeScdnDomainRealTimeSrcTrafficDataRequest::getProduct()const
{
	return product_;
}

void DescribeScdnDomainRealTimeSrcTrafficDataRequest::setProduct(const std::string& product)
{
	product_ = product;
	setCoreParameter("Product", std::to_string(product));
}

std::string DescribeScdnDomainRealTimeSrcTrafficDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeScdnDomainRealTimeSrcTrafficDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", std::to_string(domainName));
}

std::string DescribeScdnDomainRealTimeSrcTrafficDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeScdnDomainRealTimeSrcTrafficDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string DescribeScdnDomainRealTimeSrcTrafficDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeScdnDomainRealTimeSrcTrafficDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long DescribeScdnDomainRealTimeSrcTrafficDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeScdnDomainRealTimeSrcTrafficDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeScdnDomainRealTimeSrcTrafficDataRequest::getVersion()const
{
	return version_;
}

void DescribeScdnDomainRealTimeSrcTrafficDataRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", std::to_string(version));
}

bool DescribeScdnDomainRealTimeSrcTrafficDataRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeScdnDomainRealTimeSrcTrafficDataRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeScdnDomainRealTimeSrcTrafficDataRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeScdnDomainRealTimeSrcTrafficDataRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeScdnDomainRealTimeSrcTrafficDataRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeScdnDomainRealTimeSrcTrafficDataRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeScdnDomainRealTimeSrcTrafficDataRequest::getRequestId()const
{
	return requestId_;
}

void DescribeScdnDomainRealTimeSrcTrafficDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string DescribeScdnDomainRealTimeSrcTrafficDataRequest::getInterval()const
{
	return interval_;
}

void DescribeScdnDomainRealTimeSrcTrafficDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setCoreParameter("Interval", std::to_string(interval));
}

std::string DescribeScdnDomainRealTimeSrcTrafficDataRequest::getFields()const
{
	return fields_;
}

void DescribeScdnDomainRealTimeSrcTrafficDataRequest::setFields(const std::string& fields)
{
	fields_ = fields;
	setCoreParameter("Fields", std::to_string(fields));
}

