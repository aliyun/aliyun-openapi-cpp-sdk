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

#include <alibabacloud/cdn/model/DescribeL2VipsByDynamicDomainRequest.h>

using AlibabaCloud::Cdn::Model::DescribeL2VipsByDynamicDomainRequest;

DescribeL2VipsByDynamicDomainRequest::DescribeL2VipsByDynamicDomainRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeL2VipsByDynamicDomain")
{}

DescribeL2VipsByDynamicDomainRequest::~DescribeL2VipsByDynamicDomainRequest()
{}

std::string DescribeL2VipsByDynamicDomainRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeL2VipsByDynamicDomainRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeL2VipsByDynamicDomainRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeL2VipsByDynamicDomainRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DescribeL2VipsByDynamicDomainRequest::getProduct()const
{
	return product_;
}

void DescribeL2VipsByDynamicDomainRequest::setProduct(const std::string& product)
{
	product_ = product;
	setCoreParameter("Product", product);
}

long DescribeL2VipsByDynamicDomainRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeL2VipsByDynamicDomainRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

std::string DescribeL2VipsByDynamicDomainRequest::getDomainName()const
{
	return domainName_;
}

void DescribeL2VipsByDynamicDomainRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

bool DescribeL2VipsByDynamicDomainRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeL2VipsByDynamicDomainRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeL2VipsByDynamicDomainRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeL2VipsByDynamicDomainRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeL2VipsByDynamicDomainRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeL2VipsByDynamicDomainRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeL2VipsByDynamicDomainRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeL2VipsByDynamicDomainRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeL2VipsByDynamicDomainRequest::getVersion()const
{
	return version_;
}

void DescribeL2VipsByDynamicDomainRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

std::string DescribeL2VipsByDynamicDomainRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeL2VipsByDynamicDomainRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeL2VipsByDynamicDomainRequest::getCallerType()const
{
	return callerType_;
}

void DescribeL2VipsByDynamicDomainRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

bool DescribeL2VipsByDynamicDomainRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeL2VipsByDynamicDomainRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeL2VipsByDynamicDomainRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeL2VipsByDynamicDomainRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

std::string DescribeL2VipsByDynamicDomainRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeL2VipsByDynamicDomainRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

bool DescribeL2VipsByDynamicDomainRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeL2VipsByDynamicDomainRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeL2VipsByDynamicDomainRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeL2VipsByDynamicDomainRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeL2VipsByDynamicDomainRequest::getRequestId()const
{
	return requestId_;
}

void DescribeL2VipsByDynamicDomainRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeL2VipsByDynamicDomainRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeL2VipsByDynamicDomainRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeL2VipsByDynamicDomainRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeL2VipsByDynamicDomainRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeL2VipsByDynamicDomainRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeL2VipsByDynamicDomainRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeL2VipsByDynamicDomainRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeL2VipsByDynamicDomainRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

