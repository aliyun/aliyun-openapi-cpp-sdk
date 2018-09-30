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

#include <alibabacloud/cdn/model/DescribeDomainCustomLogConfigRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainCustomLogConfigRequest;

DescribeDomainCustomLogConfigRequest::DescribeDomainCustomLogConfigRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "DescribeDomainCustomLogConfig")
{}

DescribeDomainCustomLogConfigRequest::~DescribeDomainCustomLogConfigRequest()
{}

std::string DescribeDomainCustomLogConfigRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeDomainCustomLogConfigRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeDomainCustomLogConfigRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeDomainCustomLogConfigRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string DescribeDomainCustomLogConfigRequest::getProduct()const
{
	return product_;
}

void DescribeDomainCustomLogConfigRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

long DescribeDomainCustomLogConfigRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeDomainCustomLogConfigRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

std::string DescribeDomainCustomLogConfigRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainCustomLogConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

bool DescribeDomainCustomLogConfigRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeDomainCustomLogConfigRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DescribeDomainCustomLogConfigRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeDomainCustomLogConfigRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeDomainCustomLogConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainCustomLogConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDomainCustomLogConfigRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeDomainCustomLogConfigRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeDomainCustomLogConfigRequest::getVersion()const
{
	return version_;
}

void DescribeDomainCustomLogConfigRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

std::string DescribeDomainCustomLogConfigRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeDomainCustomLogConfigRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeDomainCustomLogConfigRequest::getCallerType()const
{
	return callerType_;
}

void DescribeDomainCustomLogConfigRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

bool DescribeDomainCustomLogConfigRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeDomainCustomLogConfigRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DescribeDomainCustomLogConfigRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeDomainCustomLogConfigRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

std::string DescribeDomainCustomLogConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDomainCustomLogConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

bool DescribeDomainCustomLogConfigRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeDomainCustomLogConfigRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DescribeDomainCustomLogConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDomainCustomLogConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeDomainCustomLogConfigRequest::getRequestId()const
{
	return requestId_;
}

void DescribeDomainCustomLogConfigRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string DescribeDomainCustomLogConfigRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeDomainCustomLogConfigRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string DescribeDomainCustomLogConfigRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeDomainCustomLogConfigRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeDomainCustomLogConfigRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeDomainCustomLogConfigRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeDomainCustomLogConfigRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeDomainCustomLogConfigRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

