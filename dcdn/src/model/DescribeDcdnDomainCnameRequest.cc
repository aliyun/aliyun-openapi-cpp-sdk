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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainCnameRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnDomainCnameRequest;

DescribeDcdnDomainCnameRequest::DescribeDcdnDomainCnameRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnDomainCname")
{}

DescribeDcdnDomainCnameRequest::~DescribeDcdnDomainCnameRequest()
{}

std::string DescribeDcdnDomainCnameRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeDcdnDomainCnameRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeDcdnDomainCnameRequest::getProduct()const
{
	return product_;
}

void DescribeDcdnDomainCnameRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

long DescribeDcdnDomainCnameRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeDcdnDomainCnameRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

std::string DescribeDcdnDomainCnameRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDcdnDomainCnameRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

bool DescribeDcdnDomainCnameRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeDcdnDomainCnameRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DescribeDcdnDomainCnameRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeDcdnDomainCnameRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeDcdnDomainCnameRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDcdnDomainCnameRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDcdnDomainCnameRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeDcdnDomainCnameRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeDcdnDomainCnameRequest::getVersion()const
{
	return version_;
}

void DescribeDcdnDomainCnameRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

std::string DescribeDcdnDomainCnameRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeDcdnDomainCnameRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeDcdnDomainCnameRequest::getCallerType()const
{
	return callerType_;
}

void DescribeDcdnDomainCnameRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

bool DescribeDcdnDomainCnameRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeDcdnDomainCnameRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DescribeDcdnDomainCnameRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeDcdnDomainCnameRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

std::string DescribeDcdnDomainCnameRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDcdnDomainCnameRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

bool DescribeDcdnDomainCnameRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeDcdnDomainCnameRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DescribeDcdnDomainCnameRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDcdnDomainCnameRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeDcdnDomainCnameRequest::getRequestId()const
{
	return requestId_;
}

void DescribeDcdnDomainCnameRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string DescribeDcdnDomainCnameRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeDcdnDomainCnameRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string DescribeDcdnDomainCnameRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeDcdnDomainCnameRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeDcdnDomainCnameRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeDcdnDomainCnameRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeDcdnDomainCnameRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeDcdnDomainCnameRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

