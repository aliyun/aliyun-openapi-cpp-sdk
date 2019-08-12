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

#include <alibabacloud/cdn/model/ModifyDomainCustomLogConfigRequest.h>

using AlibabaCloud::Cdn::Model::ModifyDomainCustomLogConfigRequest;

ModifyDomainCustomLogConfigRequest::ModifyDomainCustomLogConfigRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "ModifyDomainCustomLogConfig")
{}

ModifyDomainCustomLogConfigRequest::~ModifyDomainCustomLogConfigRequest()
{}

std::string ModifyDomainCustomLogConfigRequest::getApp_ip()const
{
	return app_ip_;
}

void ModifyDomainCustomLogConfigRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string ModifyDomainCustomLogConfigRequest::getPopProduct()const
{
	return popProduct_;
}

void ModifyDomainCustomLogConfigRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string ModifyDomainCustomLogConfigRequest::getProduct()const
{
	return product_;
}

void ModifyDomainCustomLogConfigRequest::setProduct(const std::string& product)
{
	product_ = product;
	setCoreParameter("Product", product);
}

long ModifyDomainCustomLogConfigRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ModifyDomainCustomLogConfigRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

std::string ModifyDomainCustomLogConfigRequest::getDomainName()const
{
	return domainName_;
}

void ModifyDomainCustomLogConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

bool ModifyDomainCustomLogConfigRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ModifyDomainCustomLogConfigRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string ModifyDomainCustomLogConfigRequest::getCallerBid()const
{
	return callerBid_;
}

void ModifyDomainCustomLogConfigRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long ModifyDomainCustomLogConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDomainCustomLogConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string ModifyDomainCustomLogConfigRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ModifyDomainCustomLogConfigRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string ModifyDomainCustomLogConfigRequest::getVersion()const
{
	return version_;
}

void ModifyDomainCustomLogConfigRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

std::string ModifyDomainCustomLogConfigRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ModifyDomainCustomLogConfigRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string ModifyDomainCustomLogConfigRequest::getCallerType()const
{
	return callerType_;
}

void ModifyDomainCustomLogConfigRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

bool ModifyDomainCustomLogConfigRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ModifyDomainCustomLogConfigRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

bool ModifyDomainCustomLogConfigRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ModifyDomainCustomLogConfigRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

std::string ModifyDomainCustomLogConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDomainCustomLogConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

bool ModifyDomainCustomLogConfigRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ModifyDomainCustomLogConfigRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string ModifyDomainCustomLogConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyDomainCustomLogConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ModifyDomainCustomLogConfigRequest::getRequestId()const
{
	return requestId_;
}

void ModifyDomainCustomLogConfigRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string ModifyDomainCustomLogConfigRequest::getRequestContent()const
{
	return requestContent_;
}

void ModifyDomainCustomLogConfigRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string ModifyDomainCustomLogConfigRequest::getConfigId()const
{
	return configId_;
}

void ModifyDomainCustomLogConfigRequest::setConfigId(const std::string& configId)
{
	configId_ = configId;
	setCoreParameter("ConfigId", configId);
}

std::string ModifyDomainCustomLogConfigRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ModifyDomainCustomLogConfigRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string ModifyDomainCustomLogConfigRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ModifyDomainCustomLogConfigRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long ModifyDomainCustomLogConfigRequest::getCallerUid()const
{
	return callerUid_;
}

void ModifyDomainCustomLogConfigRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

