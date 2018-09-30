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

#include <alibabacloud/cdn/model/DescribeDomainSrcBpsDataRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainSrcBpsDataRequest;

DescribeDomainSrcBpsDataRequest::DescribeDomainSrcBpsDataRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "DescribeDomainSrcBpsData")
{}

DescribeDomainSrcBpsDataRequest::~DescribeDomainSrcBpsDataRequest()
{}

long DescribeDomainSrcBpsDataRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeDomainSrcBpsDataRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeDomainSrcBpsDataRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeDomainSrcBpsDataRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DescribeDomainSrcBpsDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainSrcBpsDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeDomainSrcBpsDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeDomainSrcBpsDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeDomainSrcBpsDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeDomainSrcBpsDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeDomainSrcBpsDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeDomainSrcBpsDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string DescribeDomainSrcBpsDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDomainSrcBpsDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDomainSrcBpsDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDomainSrcBpsDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeDomainSrcBpsDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeDomainSrcBpsDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string DescribeDomainSrcBpsDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeDomainSrcBpsDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeDomainSrcBpsDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeDomainSrcBpsDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeDomainSrcBpsDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeDomainSrcBpsDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeDomainSrcBpsDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeDomainSrcBpsDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeDomainSrcBpsDataRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeDomainSrcBpsDataRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string DescribeDomainSrcBpsDataRequest::getProduct()const
{
	return product_;
}

void DescribeDomainSrcBpsDataRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

std::string DescribeDomainSrcBpsDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainSrcBpsDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeDomainSrcBpsDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDomainSrcBpsDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeDomainSrcBpsDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeDomainSrcBpsDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeDomainSrcBpsDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainSrcBpsDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDomainSrcBpsDataRequest::getVersion()const
{
	return version_;
}

void DescribeDomainSrcBpsDataRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool DescribeDomainSrcBpsDataRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeDomainSrcBpsDataRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DescribeDomainSrcBpsDataRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeDomainSrcBpsDataRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool DescribeDomainSrcBpsDataRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeDomainSrcBpsDataRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DescribeDomainSrcBpsDataRequest::getRequestId()const
{
	return requestId_;
}

void DescribeDomainSrcBpsDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string DescribeDomainSrcBpsDataRequest::getInterval()const
{
	return interval_;
}

void DescribeDomainSrcBpsDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setParameter("Interval", interval);
}

std::string DescribeDomainSrcBpsDataRequest::getFields()const
{
	return fields_;
}

void DescribeDomainSrcBpsDataRequest::setFields(const std::string& fields)
{
	fields_ = fields;
	setParameter("Fields", fields);
}

