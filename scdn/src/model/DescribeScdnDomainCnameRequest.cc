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

#include <alibabacloud/scdn/model/DescribeScdnDomainCnameRequest.h>

using AlibabaCloud::Scdn::Model::DescribeScdnDomainCnameRequest;

DescribeScdnDomainCnameRequest::DescribeScdnDomainCnameRequest() :
	RpcServiceRequest("scdn", "2017-11-15", "DescribeScdnDomainCname")
{}

DescribeScdnDomainCnameRequest::~DescribeScdnDomainCnameRequest()
{}

std::string DescribeScdnDomainCnameRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeScdnDomainCnameRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeScdnDomainCnameRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeScdnDomainCnameRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DescribeScdnDomainCnameRequest::getProduct()const
{
	return product_;
}

void DescribeScdnDomainCnameRequest::setProduct(const std::string& product)
{
	product_ = product;
	setCoreParameter("Product", product);
}

long DescribeScdnDomainCnameRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeScdnDomainCnameRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

std::string DescribeScdnDomainCnameRequest::getDomainName()const
{
	return domainName_;
}

void DescribeScdnDomainCnameRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

bool DescribeScdnDomainCnameRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeScdnDomainCnameRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeScdnDomainCnameRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeScdnDomainCnameRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeScdnDomainCnameRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeScdnDomainCnameRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeScdnDomainCnameRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeScdnDomainCnameRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeScdnDomainCnameRequest::getVersion()const
{
	return version_;
}

void DescribeScdnDomainCnameRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

std::string DescribeScdnDomainCnameRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeScdnDomainCnameRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeScdnDomainCnameRequest::getCallerType()const
{
	return callerType_;
}

void DescribeScdnDomainCnameRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

bool DescribeScdnDomainCnameRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeScdnDomainCnameRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeScdnDomainCnameRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeScdnDomainCnameRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

std::string DescribeScdnDomainCnameRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeScdnDomainCnameRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

bool DescribeScdnDomainCnameRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeScdnDomainCnameRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeScdnDomainCnameRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeScdnDomainCnameRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeScdnDomainCnameRequest::getRequestId()const
{
	return requestId_;
}

void DescribeScdnDomainCnameRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeScdnDomainCnameRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeScdnDomainCnameRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeScdnDomainCnameRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeScdnDomainCnameRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeScdnDomainCnameRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeScdnDomainCnameRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeScdnDomainCnameRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeScdnDomainCnameRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

