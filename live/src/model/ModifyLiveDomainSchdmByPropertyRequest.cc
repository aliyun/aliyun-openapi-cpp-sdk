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

#include <alibabacloud/live/model/ModifyLiveDomainSchdmByPropertyRequest.h>

using AlibabaCloud::Live::Model::ModifyLiveDomainSchdmByPropertyRequest;

ModifyLiveDomainSchdmByPropertyRequest::ModifyLiveDomainSchdmByPropertyRequest() :
	RpcServiceRequest("live", "2016-11-01", "ModifyLiveDomainSchdmByProperty")
{}

ModifyLiveDomainSchdmByPropertyRequest::~ModifyLiveDomainSchdmByPropertyRequest()
{}

long ModifyLiveDomainSchdmByPropertyRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ModifyLiveDomainSchdmByPropertyRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool ModifyLiveDomainSchdmByPropertyRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ModifyLiveDomainSchdmByPropertyRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string ModifyLiveDomainSchdmByPropertyRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ModifyLiveDomainSchdmByPropertyRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string ModifyLiveDomainSchdmByPropertyRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ModifyLiveDomainSchdmByPropertyRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string ModifyLiveDomainSchdmByPropertyRequest::getCallerType()const
{
	return callerType_;
}

void ModifyLiveDomainSchdmByPropertyRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string ModifyLiveDomainSchdmByPropertyRequest::getEagleEyeRpcId()const
{
	return eagleEyeRpcId_;
}

void ModifyLiveDomainSchdmByPropertyRequest::setEagleEyeRpcId(const std::string& eagleEyeRpcId)
{
	eagleEyeRpcId_ = eagleEyeRpcId;
	setCoreParameter("EagleEyeRpcId", std::to_string(eagleEyeRpcId));
}

std::string ModifyLiveDomainSchdmByPropertyRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyLiveDomainSchdmByPropertyRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string ModifyLiveDomainSchdmByPropertyRequest::getEagleEyeTraceId()const
{
	return eagleEyeTraceId_;
}

void ModifyLiveDomainSchdmByPropertyRequest::setEagleEyeTraceId(const std::string& eagleEyeTraceId)
{
	eagleEyeTraceId_ = eagleEyeTraceId;
	setCoreParameter("EagleEyeTraceId", std::to_string(eagleEyeTraceId));
}

std::string ModifyLiveDomainSchdmByPropertyRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyLiveDomainSchdmByPropertyRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string ModifyLiveDomainSchdmByPropertyRequest::getRegionId()const
{
	return regionId_;
}

void ModifyLiveDomainSchdmByPropertyRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string ModifyLiveDomainSchdmByPropertyRequest::getRequestContent()const
{
	return requestContent_;
}

void ModifyLiveDomainSchdmByPropertyRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string ModifyLiveDomainSchdmByPropertyRequest::getProperty()const
{
	return property_;
}

void ModifyLiveDomainSchdmByPropertyRequest::setProperty(const std::string& property)
{
	property_ = property;
	setCoreParameter("Property", std::to_string(property));
}

std::string ModifyLiveDomainSchdmByPropertyRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ModifyLiveDomainSchdmByPropertyRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string ModifyLiveDomainSchdmByPropertyRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ModifyLiveDomainSchdmByPropertyRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long ModifyLiveDomainSchdmByPropertyRequest::getCallerUid()const
{
	return callerUid_;
}

void ModifyLiveDomainSchdmByPropertyRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string ModifyLiveDomainSchdmByPropertyRequest::getApp_ip()const
{
	return app_ip_;
}

void ModifyLiveDomainSchdmByPropertyRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string ModifyLiveDomainSchdmByPropertyRequest::getPopProduct()const
{
	return popProduct_;
}

void ModifyLiveDomainSchdmByPropertyRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", std::to_string(popProduct));
}

std::string ModifyLiveDomainSchdmByPropertyRequest::getDomainName()const
{
	return domainName_;
}

void ModifyLiveDomainSchdmByPropertyRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", std::to_string(domainName));
}

std::string ModifyLiveDomainSchdmByPropertyRequest::getCallerBid()const
{
	return callerBid_;
}

void ModifyLiveDomainSchdmByPropertyRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long ModifyLiveDomainSchdmByPropertyRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyLiveDomainSchdmByPropertyRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string ModifyLiveDomainSchdmByPropertyRequest::getVersion()const
{
	return version_;
}

void ModifyLiveDomainSchdmByPropertyRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", std::to_string(version));
}

bool ModifyLiveDomainSchdmByPropertyRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ModifyLiveDomainSchdmByPropertyRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool ModifyLiveDomainSchdmByPropertyRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ModifyLiveDomainSchdmByPropertyRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool ModifyLiveDomainSchdmByPropertyRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ModifyLiveDomainSchdmByPropertyRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string ModifyLiveDomainSchdmByPropertyRequest::getServiceCode()const
{
	return serviceCode_;
}

void ModifyLiveDomainSchdmByPropertyRequest::setServiceCode(const std::string& serviceCode)
{
	serviceCode_ = serviceCode;
	setCoreParameter("ServiceCode", std::to_string(serviceCode));
}

std::string ModifyLiveDomainSchdmByPropertyRequest::getRequestId()const
{
	return requestId_;
}

void ModifyLiveDomainSchdmByPropertyRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string ModifyLiveDomainSchdmByPropertyRequest::getEagleEyeUserData()const
{
	return eagleEyeUserData_;
}

void ModifyLiveDomainSchdmByPropertyRequest::setEagleEyeUserData(const std::string& eagleEyeUserData)
{
	eagleEyeUserData_ = eagleEyeUserData;
	setCoreParameter("EagleEyeUserData", std::to_string(eagleEyeUserData));
}

