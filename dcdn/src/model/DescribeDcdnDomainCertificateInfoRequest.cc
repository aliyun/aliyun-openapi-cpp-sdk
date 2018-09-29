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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainCertificateInfoRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnDomainCertificateInfoRequest;

DescribeDcdnDomainCertificateInfoRequest::DescribeDcdnDomainCertificateInfoRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnDomainCertificateInfo")
{}

DescribeDcdnDomainCertificateInfoRequest::~DescribeDcdnDomainCertificateInfoRequest()
{}

std::string DescribeDcdnDomainCertificateInfoRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeDcdnDomainCertificateInfoRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeDcdnDomainCertificateInfoRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeDcdnDomainCertificateInfoRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string DescribeDcdnDomainCertificateInfoRequest::getProduct()const
{
	return product_;
}

void DescribeDcdnDomainCertificateInfoRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

long DescribeDcdnDomainCertificateInfoRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeDcdnDomainCertificateInfoRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

std::string DescribeDcdnDomainCertificateInfoRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDcdnDomainCertificateInfoRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

bool DescribeDcdnDomainCertificateInfoRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeDcdnDomainCertificateInfoRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DescribeDcdnDomainCertificateInfoRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeDcdnDomainCertificateInfoRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeDcdnDomainCertificateInfoRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDcdnDomainCertificateInfoRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDcdnDomainCertificateInfoRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeDcdnDomainCertificateInfoRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeDcdnDomainCertificateInfoRequest::getVersion()const
{
	return version_;
}

void DescribeDcdnDomainCertificateInfoRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

std::string DescribeDcdnDomainCertificateInfoRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeDcdnDomainCertificateInfoRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeDcdnDomainCertificateInfoRequest::getCallerType()const
{
	return callerType_;
}

void DescribeDcdnDomainCertificateInfoRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

bool DescribeDcdnDomainCertificateInfoRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeDcdnDomainCertificateInfoRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DescribeDcdnDomainCertificateInfoRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeDcdnDomainCertificateInfoRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

std::string DescribeDcdnDomainCertificateInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDcdnDomainCertificateInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

bool DescribeDcdnDomainCertificateInfoRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeDcdnDomainCertificateInfoRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DescribeDcdnDomainCertificateInfoRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDcdnDomainCertificateInfoRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeDcdnDomainCertificateInfoRequest::getRequestId()const
{
	return requestId_;
}

void DescribeDcdnDomainCertificateInfoRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string DescribeDcdnDomainCertificateInfoRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeDcdnDomainCertificateInfoRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string DescribeDcdnDomainCertificateInfoRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeDcdnDomainCertificateInfoRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeDcdnDomainCertificateInfoRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeDcdnDomainCertificateInfoRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeDcdnDomainCertificateInfoRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeDcdnDomainCertificateInfoRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

