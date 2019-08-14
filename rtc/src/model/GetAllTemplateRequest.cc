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

#include <alibabacloud/rtc/model/GetAllTemplateRequest.h>

using AlibabaCloud::Rtc::Model::GetAllTemplateRequest;

GetAllTemplateRequest::GetAllTemplateRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "GetAllTemplate")
{}

GetAllTemplateRequest::~GetAllTemplateRequest()
{}

std::string GetAllTemplateRequest::getApp_ip()const
{
	return app_ip_;
}

void GetAllTemplateRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string GetAllTemplateRequest::getPopProduct()const
{
	return popProduct_;
}

void GetAllTemplateRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

long GetAllTemplateRequest::getCallerParentId()const
{
	return callerParentId_;
}

void GetAllTemplateRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool GetAllTemplateRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void GetAllTemplateRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string GetAllTemplateRequest::getCallerBid()const
{
	return callerBid_;
}

void GetAllTemplateRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long GetAllTemplateRequest::getOwnerId()const
{
	return ownerId_;
}

void GetAllTemplateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string GetAllTemplateRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void GetAllTemplateRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string GetAllTemplateRequest::getVersion()const
{
	return version_;
}

void GetAllTemplateRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

std::string GetAllTemplateRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void GetAllTemplateRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string GetAllTemplateRequest::getCallerType()const
{
	return callerType_;
}

void GetAllTemplateRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

bool GetAllTemplateRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void GetAllTemplateRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool GetAllTemplateRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void GetAllTemplateRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

std::string GetAllTemplateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetAllTemplateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

bool GetAllTemplateRequest::getSecurity_transport()const
{
	return security_transport_;
}

void GetAllTemplateRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string GetAllTemplateRequest::getSecurityToken()const
{
	return securityToken_;
}

void GetAllTemplateRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string GetAllTemplateRequest::getRequestId()const
{
	return requestId_;
}

void GetAllTemplateRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string GetAllTemplateRequest::getRequestContent()const
{
	return requestContent_;
}

void GetAllTemplateRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string GetAllTemplateRequest::getAppId()const
{
	return appId_;
}

void GetAllTemplateRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", appId);
}

std::string GetAllTemplateRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void GetAllTemplateRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string GetAllTemplateRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void GetAllTemplateRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long GetAllTemplateRequest::getCallerUid()const
{
	return callerUid_;
}

void GetAllTemplateRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

