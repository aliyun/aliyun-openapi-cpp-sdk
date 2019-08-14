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
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
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
	setCoreParameter("LocationNameEn", locationNameEn);
}

std::string DescribeDomainRealTimeHttpCodeDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeDomainRealTimeHttpCodeDataRequest::getIspNameEn()const
{
	return ispNameEn_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setIspNameEn(const std::string& ispNameEn)
{
	ispNameEn_ = ispNameEn;
	setCoreParameter("IspNameEn", ispNameEn);
}

std::string DescribeDomainRealTimeHttpCodeDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeDomainRealTimeHttpCodeDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeDomainRealTimeHttpCodeDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeDomainRealTimeHttpCodeDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDomainRealTimeHttpCodeDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeDomainRealTimeHttpCodeDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeDomainRealTimeHttpCodeDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeDomainRealTimeHttpCodeDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeDomainRealTimeHttpCodeDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeDomainRealTimeHttpCodeDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeDomainRealTimeHttpCodeDataRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DescribeDomainRealTimeHttpCodeDataRequest::getProduct()const
{
	return product_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setProduct(const std::string& product)
{
	product_ = product;
	setCoreParameter("Product", product);
}

std::string DescribeDomainRealTimeHttpCodeDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeDomainRealTimeHttpCodeDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeDomainRealTimeHttpCodeDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeDomainRealTimeHttpCodeDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDomainRealTimeHttpCodeDataRequest::getVersion()const
{
	return version_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
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
	setCoreParameter("RequestId", requestId);
}

std::string DescribeDomainRealTimeHttpCodeDataRequest::getInterval()const
{
	return interval_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setCoreParameter("Interval", interval);
}

std::string DescribeDomainRealTimeHttpCodeDataRequest::getFields()const
{
	return fields_;
}

void DescribeDomainRealTimeHttpCodeDataRequest::setFields(const std::string& fields)
{
	fields_ = fields;
	setCoreParameter("Fields", fields);
}

