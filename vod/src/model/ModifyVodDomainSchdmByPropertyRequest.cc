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

#include <alibabacloud/vod/model/ModifyVodDomainSchdmByPropertyRequest.h>

using AlibabaCloud::Vod::Model::ModifyVodDomainSchdmByPropertyRequest;

ModifyVodDomainSchdmByPropertyRequest::ModifyVodDomainSchdmByPropertyRequest() :
	RpcServiceRequest("vod", "2017-03-21", "ModifyVodDomainSchdmByProperty")
{}

ModifyVodDomainSchdmByPropertyRequest::~ModifyVodDomainSchdmByPropertyRequest()
{}

long ModifyVodDomainSchdmByPropertyRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyVodDomainSchdmByPropertyRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long ModifyVodDomainSchdmByPropertyRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ModifyVodDomainSchdmByPropertyRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool ModifyVodDomainSchdmByPropertyRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ModifyVodDomainSchdmByPropertyRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string ModifyVodDomainSchdmByPropertyRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ModifyVodDomainSchdmByPropertyRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string ModifyVodDomainSchdmByPropertyRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ModifyVodDomainSchdmByPropertyRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string ModifyVodDomainSchdmByPropertyRequest::getCallerType()const
{
	return callerType_;
}

void ModifyVodDomainSchdmByPropertyRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string ModifyVodDomainSchdmByPropertyRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyVodDomainSchdmByPropertyRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifyVodDomainSchdmByPropertyRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyVodDomainSchdmByPropertyRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ModifyVodDomainSchdmByPropertyRequest::getRegionId()const
{
	return regionId_;
}

void ModifyVodDomainSchdmByPropertyRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyVodDomainSchdmByPropertyRequest::getRequestContent()const
{
	return requestContent_;
}

void ModifyVodDomainSchdmByPropertyRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string ModifyVodDomainSchdmByPropertyRequest::getProperty()const
{
	return property_;
}

void ModifyVodDomainSchdmByPropertyRequest::setProperty(const std::string& property)
{
	property_ = property;
	setCoreParameter("Property", property);
}

std::string ModifyVodDomainSchdmByPropertyRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ModifyVodDomainSchdmByPropertyRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string ModifyVodDomainSchdmByPropertyRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ModifyVodDomainSchdmByPropertyRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long ModifyVodDomainSchdmByPropertyRequest::getCallerUid()const
{
	return callerUid_;
}

void ModifyVodDomainSchdmByPropertyRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string ModifyVodDomainSchdmByPropertyRequest::getApp_ip()const
{
	return app_ip_;
}

void ModifyVodDomainSchdmByPropertyRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string ModifyVodDomainSchdmByPropertyRequest::getPopProduct()const
{
	return popProduct_;
}

void ModifyVodDomainSchdmByPropertyRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string ModifyVodDomainSchdmByPropertyRequest::getDomainName()const
{
	return domainName_;
}

void ModifyVodDomainSchdmByPropertyRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string ModifyVodDomainSchdmByPropertyRequest::getCallerBid()const
{
	return callerBid_;
}

void ModifyVodDomainSchdmByPropertyRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long ModifyVodDomainSchdmByPropertyRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyVodDomainSchdmByPropertyRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string ModifyVodDomainSchdmByPropertyRequest::getVersion()const
{
	return version_;
}

void ModifyVodDomainSchdmByPropertyRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool ModifyVodDomainSchdmByPropertyRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ModifyVodDomainSchdmByPropertyRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

bool ModifyVodDomainSchdmByPropertyRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ModifyVodDomainSchdmByPropertyRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

bool ModifyVodDomainSchdmByPropertyRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ModifyVodDomainSchdmByPropertyRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string ModifyVodDomainSchdmByPropertyRequest::getServiceCode()const
{
	return serviceCode_;
}

void ModifyVodDomainSchdmByPropertyRequest::setServiceCode(const std::string& serviceCode)
{
	serviceCode_ = serviceCode;
	setCoreParameter("ServiceCode", serviceCode);
}

std::string ModifyVodDomainSchdmByPropertyRequest::getRequestId()const
{
	return requestId_;
}

void ModifyVodDomainSchdmByPropertyRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

