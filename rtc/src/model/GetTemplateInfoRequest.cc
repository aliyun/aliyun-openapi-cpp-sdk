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

#include <alibabacloud/rtc/model/GetTemplateInfoRequest.h>

using AlibabaCloud::Rtc::Model::GetTemplateInfoRequest;

GetTemplateInfoRequest::GetTemplateInfoRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "GetTemplateInfo")
{}

GetTemplateInfoRequest::~GetTemplateInfoRequest()
{}

std::string GetTemplateInfoRequest::getApp_ip()const
{
	return app_ip_;
}

void GetTemplateInfoRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string GetTemplateInfoRequest::getPopProduct()const
{
	return popProduct_;
}

void GetTemplateInfoRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", std::to_string(popProduct));
}

long GetTemplateInfoRequest::getCallerParentId()const
{
	return callerParentId_;
}

void GetTemplateInfoRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool GetTemplateInfoRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void GetTemplateInfoRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string GetTemplateInfoRequest::getCallerBid()const
{
	return callerBid_;
}

void GetTemplateInfoRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long GetTemplateInfoRequest::getOwnerId()const
{
	return ownerId_;
}

void GetTemplateInfoRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string GetTemplateInfoRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void GetTemplateInfoRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

long GetTemplateInfoRequest::getTemplateId()const
{
	return templateId_;
}

void GetTemplateInfoRequest::setTemplateId(long templateId)
{
	templateId_ = templateId;
	setCoreParameter("TemplateId", templateId);
}

std::string GetTemplateInfoRequest::getVersion()const
{
	return version_;
}

void GetTemplateInfoRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", std::to_string(version));
}

std::string GetTemplateInfoRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void GetTemplateInfoRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string GetTemplateInfoRequest::getCallerType()const
{
	return callerType_;
}

void GetTemplateInfoRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

bool GetTemplateInfoRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void GetTemplateInfoRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool GetTemplateInfoRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void GetTemplateInfoRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

std::string GetTemplateInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetTemplateInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

bool GetTemplateInfoRequest::getSecurity_transport()const
{
	return security_transport_;
}

void GetTemplateInfoRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string GetTemplateInfoRequest::getSecurityToken()const
{
	return securityToken_;
}

void GetTemplateInfoRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string GetTemplateInfoRequest::getRequestId()const
{
	return requestId_;
}

void GetTemplateInfoRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string GetTemplateInfoRequest::getRequestContent()const
{
	return requestContent_;
}

void GetTemplateInfoRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string GetTemplateInfoRequest::getAppId()const
{
	return appId_;
}

void GetTemplateInfoRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", std::to_string(appId));
}

std::string GetTemplateInfoRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void GetTemplateInfoRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string GetTemplateInfoRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void GetTemplateInfoRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long GetTemplateInfoRequest::getCallerUid()const
{
	return callerUid_;
}

void GetTemplateInfoRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

