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

#include <alibabacloud/cdn/model/DescribeDomainISPDataRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainISPDataRequest;

DescribeDomainISPDataRequest::DescribeDomainISPDataRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeDomainISPData")
{}

DescribeDomainISPDataRequest::~DescribeDomainISPDataRequest()
{}

long DescribeDomainISPDataRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeDomainISPDataRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeDomainISPDataRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeDomainISPDataRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DescribeDomainISPDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainISPDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeDomainISPDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeDomainISPDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeDomainISPDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeDomainISPDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeDomainISPDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeDomainISPDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string DescribeDomainISPDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDomainISPDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDomainISPDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDomainISPDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeDomainISPDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeDomainISPDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string DescribeDomainISPDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeDomainISPDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeDomainISPDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeDomainISPDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeDomainISPDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeDomainISPDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeDomainISPDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeDomainISPDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeDomainISPDataRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeDomainISPDataRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string DescribeDomainISPDataRequest::getProduct()const
{
	return product_;
}

void DescribeDomainISPDataRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

std::string DescribeDomainISPDataRequest::getOutString()const
{
	return outString_;
}

void DescribeDomainISPDataRequest::setOutString(const std::string& outString)
{
	outString_ = outString;
	setParameter("OutString", outString);
}

std::string DescribeDomainISPDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainISPDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeDomainISPDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDomainISPDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeDomainISPDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeDomainISPDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeDomainISPDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainISPDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDomainISPDataRequest::getVersion()const
{
	return version_;
}

void DescribeDomainISPDataRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool DescribeDomainISPDataRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeDomainISPDataRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DescribeDomainISPDataRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeDomainISPDataRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool DescribeDomainISPDataRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeDomainISPDataRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DescribeDomainISPDataRequest::getRequestId()const
{
	return requestId_;
}

void DescribeDomainISPDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

