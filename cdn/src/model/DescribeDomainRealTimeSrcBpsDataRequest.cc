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

#include <alibabacloud/cdn/model/DescribeDomainRealTimeSrcBpsDataRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainRealTimeSrcBpsDataRequest;

DescribeDomainRealTimeSrcBpsDataRequest::DescribeDomainRealTimeSrcBpsDataRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeDomainRealTimeSrcBpsData")
{}

DescribeDomainRealTimeSrcBpsDataRequest::~DescribeDomainRealTimeSrcBpsDataRequest()
{}

long DescribeDomainRealTimeSrcBpsDataRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeDomainRealTimeSrcBpsDataRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeDomainRealTimeSrcBpsDataRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeDomainRealTimeSrcBpsDataRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeDomainRealTimeSrcBpsDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainRealTimeSrcBpsDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeDomainRealTimeSrcBpsDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeDomainRealTimeSrcBpsDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeDomainRealTimeSrcBpsDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeDomainRealTimeSrcBpsDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeDomainRealTimeSrcBpsDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeDomainRealTimeSrcBpsDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string DescribeDomainRealTimeSrcBpsDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDomainRealTimeSrcBpsDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDomainRealTimeSrcBpsDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDomainRealTimeSrcBpsDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeDomainRealTimeSrcBpsDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeDomainRealTimeSrcBpsDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string DescribeDomainRealTimeSrcBpsDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeDomainRealTimeSrcBpsDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeDomainRealTimeSrcBpsDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeDomainRealTimeSrcBpsDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeDomainRealTimeSrcBpsDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeDomainRealTimeSrcBpsDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeDomainRealTimeSrcBpsDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeDomainRealTimeSrcBpsDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeDomainRealTimeSrcBpsDataRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeDomainRealTimeSrcBpsDataRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string DescribeDomainRealTimeSrcBpsDataRequest::getProduct()const
{
	return product_;
}

void DescribeDomainRealTimeSrcBpsDataRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

std::string DescribeDomainRealTimeSrcBpsDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainRealTimeSrcBpsDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeDomainRealTimeSrcBpsDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDomainRealTimeSrcBpsDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeDomainRealTimeSrcBpsDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeDomainRealTimeSrcBpsDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeDomainRealTimeSrcBpsDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainRealTimeSrcBpsDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDomainRealTimeSrcBpsDataRequest::getVersion()const
{
	return version_;
}

void DescribeDomainRealTimeSrcBpsDataRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool DescribeDomainRealTimeSrcBpsDataRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeDomainRealTimeSrcBpsDataRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeDomainRealTimeSrcBpsDataRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeDomainRealTimeSrcBpsDataRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeDomainRealTimeSrcBpsDataRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeDomainRealTimeSrcBpsDataRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeDomainRealTimeSrcBpsDataRequest::getRequestId()const
{
	return requestId_;
}

void DescribeDomainRealTimeSrcBpsDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string DescribeDomainRealTimeSrcBpsDataRequest::getInterval()const
{
	return interval_;
}

void DescribeDomainRealTimeSrcBpsDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setParameter("Interval", interval);
}

std::string DescribeDomainRealTimeSrcBpsDataRequest::getFields()const
{
	return fields_;
}

void DescribeDomainRealTimeSrcBpsDataRequest::setFields(const std::string& fields)
{
	fields_ = fields;
	setParameter("Fields", fields);
}

