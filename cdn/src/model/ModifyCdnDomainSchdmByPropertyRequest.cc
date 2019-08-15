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

#include <alibabacloud/cdn/model/ModifyCdnDomainSchdmByPropertyRequest.h>

using AlibabaCloud::Cdn::Model::ModifyCdnDomainSchdmByPropertyRequest;

ModifyCdnDomainSchdmByPropertyRequest::ModifyCdnDomainSchdmByPropertyRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "ModifyCdnDomainSchdmByProperty")
{}

ModifyCdnDomainSchdmByPropertyRequest::~ModifyCdnDomainSchdmByPropertyRequest()
{}

std::string ModifyCdnDomainSchdmByPropertyRequest::getApp_ip()const
{
	return app_ip_;
}

void ModifyCdnDomainSchdmByPropertyRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string ModifyCdnDomainSchdmByPropertyRequest::getPopProduct()const
{
	return popProduct_;
}

void ModifyCdnDomainSchdmByPropertyRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

long ModifyCdnDomainSchdmByPropertyRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyCdnDomainSchdmByPropertyRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long ModifyCdnDomainSchdmByPropertyRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ModifyCdnDomainSchdmByPropertyRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

std::string ModifyCdnDomainSchdmByPropertyRequest::getDomainName()const
{
	return domainName_;
}

void ModifyCdnDomainSchdmByPropertyRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

bool ModifyCdnDomainSchdmByPropertyRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ModifyCdnDomainSchdmByPropertyRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string ModifyCdnDomainSchdmByPropertyRequest::getCallerBid()const
{
	return callerBid_;
}

void ModifyCdnDomainSchdmByPropertyRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long ModifyCdnDomainSchdmByPropertyRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyCdnDomainSchdmByPropertyRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyCdnDomainSchdmByPropertyRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ModifyCdnDomainSchdmByPropertyRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string ModifyCdnDomainSchdmByPropertyRequest::getVersion()const
{
	return version_;
}

void ModifyCdnDomainSchdmByPropertyRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

std::string ModifyCdnDomainSchdmByPropertyRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ModifyCdnDomainSchdmByPropertyRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string ModifyCdnDomainSchdmByPropertyRequest::getCallerType()const
{
	return callerType_;
}

void ModifyCdnDomainSchdmByPropertyRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

bool ModifyCdnDomainSchdmByPropertyRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ModifyCdnDomainSchdmByPropertyRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool ModifyCdnDomainSchdmByPropertyRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ModifyCdnDomainSchdmByPropertyRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

std::string ModifyCdnDomainSchdmByPropertyRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyCdnDomainSchdmByPropertyRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

bool ModifyCdnDomainSchdmByPropertyRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ModifyCdnDomainSchdmByPropertyRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string ModifyCdnDomainSchdmByPropertyRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyCdnDomainSchdmByPropertyRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ModifyCdnDomainSchdmByPropertyRequest::getRequestId()const
{
	return requestId_;
}

void ModifyCdnDomainSchdmByPropertyRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string ModifyCdnDomainSchdmByPropertyRequest::getRequestContent()const
{
	return requestContent_;
}

void ModifyCdnDomainSchdmByPropertyRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string ModifyCdnDomainSchdmByPropertyRequest::getProperty()const
{
	return property_;
}

void ModifyCdnDomainSchdmByPropertyRequest::setProperty(const std::string& property)
{
	property_ = property;
	setCoreParameter("Property", property);
}

std::string ModifyCdnDomainSchdmByPropertyRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ModifyCdnDomainSchdmByPropertyRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string ModifyCdnDomainSchdmByPropertyRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ModifyCdnDomainSchdmByPropertyRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long ModifyCdnDomainSchdmByPropertyRequest::getCallerUid()const
{
	return callerUid_;
}

void ModifyCdnDomainSchdmByPropertyRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

