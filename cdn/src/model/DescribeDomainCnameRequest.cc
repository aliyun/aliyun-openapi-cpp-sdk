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

#include <alibabacloud/cdn/model/DescribeDomainCnameRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainCnameRequest;

DescribeDomainCnameRequest::DescribeDomainCnameRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeDomainCname")
{}

DescribeDomainCnameRequest::~DescribeDomainCnameRequest()
{}

std::string DescribeDomainCnameRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeDomainCnameRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeDomainCnameRequest::getProduct()const
{
	return product_;
}

void DescribeDomainCnameRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

long DescribeDomainCnameRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeDomainCnameRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

std::string DescribeDomainCnameRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainCnameRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

bool DescribeDomainCnameRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeDomainCnameRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeDomainCnameRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeDomainCnameRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeDomainCnameRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainCnameRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDomainCnameRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeDomainCnameRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeDomainCnameRequest::getVersion()const
{
	return version_;
}

void DescribeDomainCnameRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

std::string DescribeDomainCnameRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeDomainCnameRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeDomainCnameRequest::getCallerType()const
{
	return callerType_;
}

void DescribeDomainCnameRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

bool DescribeDomainCnameRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeDomainCnameRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeDomainCnameRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeDomainCnameRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

std::string DescribeDomainCnameRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDomainCnameRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

bool DescribeDomainCnameRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeDomainCnameRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeDomainCnameRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDomainCnameRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeDomainCnameRequest::getRequestId()const
{
	return requestId_;
}

void DescribeDomainCnameRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string DescribeDomainCnameRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeDomainCnameRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string DescribeDomainCnameRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeDomainCnameRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeDomainCnameRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeDomainCnameRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeDomainCnameRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeDomainCnameRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

