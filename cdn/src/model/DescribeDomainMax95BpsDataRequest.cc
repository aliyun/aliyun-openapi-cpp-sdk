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

#include <alibabacloud/cdn/model/DescribeDomainMax95BpsDataRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainMax95BpsDataRequest;

DescribeDomainMax95BpsDataRequest::DescribeDomainMax95BpsDataRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeDomainMax95BpsData")
{}

DescribeDomainMax95BpsDataRequest::~DescribeDomainMax95BpsDataRequest()
{}

long DescribeDomainMax95BpsDataRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeDomainMax95BpsDataRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeDomainMax95BpsDataRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeDomainMax95BpsDataRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeDomainMax95BpsDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainMax95BpsDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeDomainMax95BpsDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeDomainMax95BpsDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeDomainMax95BpsDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeDomainMax95BpsDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeDomainMax95BpsDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeDomainMax95BpsDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string DescribeDomainMax95BpsDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDomainMax95BpsDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDomainMax95BpsDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDomainMax95BpsDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeDomainMax95BpsDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeDomainMax95BpsDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string DescribeDomainMax95BpsDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeDomainMax95BpsDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeDomainMax95BpsDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeDomainMax95BpsDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeDomainMax95BpsDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeDomainMax95BpsDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeDomainMax95BpsDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeDomainMax95BpsDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeDomainMax95BpsDataRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeDomainMax95BpsDataRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string DescribeDomainMax95BpsDataRequest::getProduct()const
{
	return product_;
}

void DescribeDomainMax95BpsDataRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

std::string DescribeDomainMax95BpsDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainMax95BpsDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeDomainMax95BpsDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDomainMax95BpsDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeDomainMax95BpsDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeDomainMax95BpsDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeDomainMax95BpsDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainMax95BpsDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDomainMax95BpsDataRequest::getVersion()const
{
	return version_;
}

void DescribeDomainMax95BpsDataRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool DescribeDomainMax95BpsDataRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeDomainMax95BpsDataRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeDomainMax95BpsDataRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeDomainMax95BpsDataRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeDomainMax95BpsDataRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeDomainMax95BpsDataRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeDomainMax95BpsDataRequest::getRequestId()const
{
	return requestId_;
}

void DescribeDomainMax95BpsDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

