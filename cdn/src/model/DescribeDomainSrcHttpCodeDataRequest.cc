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

#include <alibabacloud/cdn/model/DescribeDomainSrcHttpCodeDataRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainSrcHttpCodeDataRequest;

DescribeDomainSrcHttpCodeDataRequest::DescribeDomainSrcHttpCodeDataRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "DescribeDomainSrcHttpCodeData")
{}

DescribeDomainSrcHttpCodeDataRequest::~DescribeDomainSrcHttpCodeDataRequest()
{}

long DescribeDomainSrcHttpCodeDataRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeDomainSrcHttpCodeDataRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeDomainSrcHttpCodeDataRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeDomainSrcHttpCodeDataRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DescribeDomainSrcHttpCodeDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainSrcHttpCodeDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeDomainSrcHttpCodeDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeDomainSrcHttpCodeDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeDomainSrcHttpCodeDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeDomainSrcHttpCodeDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeDomainSrcHttpCodeDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeDomainSrcHttpCodeDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string DescribeDomainSrcHttpCodeDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDomainSrcHttpCodeDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDomainSrcHttpCodeDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDomainSrcHttpCodeDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeDomainSrcHttpCodeDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeDomainSrcHttpCodeDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string DescribeDomainSrcHttpCodeDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeDomainSrcHttpCodeDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeDomainSrcHttpCodeDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeDomainSrcHttpCodeDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeDomainSrcHttpCodeDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeDomainSrcHttpCodeDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeDomainSrcHttpCodeDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeDomainSrcHttpCodeDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeDomainSrcHttpCodeDataRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeDomainSrcHttpCodeDataRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string DescribeDomainSrcHttpCodeDataRequest::getProduct()const
{
	return product_;
}

void DescribeDomainSrcHttpCodeDataRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

std::string DescribeDomainSrcHttpCodeDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainSrcHttpCodeDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeDomainSrcHttpCodeDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDomainSrcHttpCodeDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeDomainSrcHttpCodeDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeDomainSrcHttpCodeDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeDomainSrcHttpCodeDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainSrcHttpCodeDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDomainSrcHttpCodeDataRequest::getVersion()const
{
	return version_;
}

void DescribeDomainSrcHttpCodeDataRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool DescribeDomainSrcHttpCodeDataRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeDomainSrcHttpCodeDataRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DescribeDomainSrcHttpCodeDataRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeDomainSrcHttpCodeDataRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool DescribeDomainSrcHttpCodeDataRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeDomainSrcHttpCodeDataRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DescribeDomainSrcHttpCodeDataRequest::getRequestId()const
{
	return requestId_;
}

void DescribeDomainSrcHttpCodeDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string DescribeDomainSrcHttpCodeDataRequest::getInterval()const
{
	return interval_;
}

void DescribeDomainSrcHttpCodeDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setParameter("Interval", interval);
}

std::string DescribeDomainSrcHttpCodeDataRequest::getFields()const
{
	return fields_;
}

void DescribeDomainSrcHttpCodeDataRequest::setFields(const std::string& fields)
{
	fields_ = fields;
	setParameter("Fields", fields);
}

