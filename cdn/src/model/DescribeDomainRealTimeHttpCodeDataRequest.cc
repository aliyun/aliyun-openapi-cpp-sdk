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

#include <alibabacloud/cdn/model/DescribeDomainRealTimeHttpCodeDataRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainRealTimeHttpCodeDataRequest;

DescribeDomainRealTimeHttpCodeDataRequest::DescribeDomainRealTimeHttpCodeDataRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeDomainRealTimeHttpCodeData")
{}

DescribeDomainRealTimeHttpCodeDataRequest::~DescribeDomainRealTimeHttpCodeDataRequest()
{}

long DescribeDomainRealTimeHttpCodeDataRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeDomainRealTimeHttpCodeDataRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeDomainRealTimeHttpCodeDataRequest::getLocationNameEn()const
{
	return locationNameEn_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setLocationNameEn(const std::string& locationNameEn)
{
	locationNameEn_ = locationNameEn;
	setCoreParameter("LocationNameEn", std::to_string(locationNameEn));
}

std::string DescribeDomainRealTimeHttpCodeDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

std::string DescribeDomainRealTimeHttpCodeDataRequest::getIspNameEn()const
{
	return ispNameEn_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setIspNameEn(const std::string& ispNameEn)
{
	ispNameEn_ = ispNameEn;
	setCoreParameter("IspNameEn", std::to_string(ispNameEn));
}

std::string DescribeDomainRealTimeHttpCodeDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string DescribeDomainRealTimeHttpCodeDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string DescribeDomainRealTimeHttpCodeDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string DescribeDomainRealTimeHttpCodeDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string DescribeDomainRealTimeHttpCodeDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DescribeDomainRealTimeHttpCodeDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string DescribeDomainRealTimeHttpCodeDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string DescribeDomainRealTimeHttpCodeDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long DescribeDomainRealTimeHttpCodeDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeDomainRealTimeHttpCodeDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string DescribeDomainRealTimeHttpCodeDataRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", std::to_string(popProduct));
}

std::string DescribeDomainRealTimeHttpCodeDataRequest::getProduct()const
{
	return product_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setProduct(const std::string& product)
{
	product_ = product;
	setCoreParameter("Product", std::to_string(product));
}

std::string DescribeDomainRealTimeHttpCodeDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", std::to_string(domainName));
}

std::string DescribeDomainRealTimeHttpCodeDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string DescribeDomainRealTimeHttpCodeDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long DescribeDomainRealTimeHttpCodeDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeDomainRealTimeHttpCodeDataRequest::getVersion()const
{
	return version_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", std::to_string(version));
}

bool DescribeDomainRealTimeHttpCodeDataRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeDomainRealTimeHttpCodeDataRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeDomainRealTimeHttpCodeDataRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeDomainRealTimeHttpCodeDataRequest::getRequestId()const
{
	return requestId_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string DescribeDomainRealTimeHttpCodeDataRequest::getInterval()const
{
	return interval_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setCoreParameter("Interval", std::to_string(interval));
}

std::string DescribeDomainRealTimeHttpCodeDataRequest::getFields()const
{
	return fields_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setFields(const std::string& fields)
{
	fields_ = fields;
	setCoreParameter("Fields", std::to_string(fields));
}

