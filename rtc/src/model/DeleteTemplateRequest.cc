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

#include <alibabacloud/rtc/model/DeleteTemplateRequest.h>

using AlibabaCloud::Rtc::Model::DeleteTemplateRequest;

DeleteTemplateRequest::DeleteTemplateRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "DeleteTemplate")
{}

DeleteTemplateRequest::~DeleteTemplateRequest()
{}

std::string DeleteTemplateRequest::getApp_ip()const
{
	return app_ip_;
}

void DeleteTemplateRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string DeleteTemplateRequest::getPopProduct()const
{
	return popProduct_;
}

void DeleteTemplateRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", std::to_string(popProduct));
}

long DeleteTemplateRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DeleteTemplateRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DeleteTemplateRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DeleteTemplateRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DeleteTemplateRequest::getCallerBid()const
{
	return callerBid_;
}

void DeleteTemplateRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long DeleteTemplateRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteTemplateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DeleteTemplateRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DeleteTemplateRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

long DeleteTemplateRequest::getTemplateId()const
{
	return templateId_;
}

void DeleteTemplateRequest::setTemplateId(long templateId)
{
	templateId_ = templateId;
	setCoreParameter("TemplateId", templateId);
}

std::string DeleteTemplateRequest::getVersion()const
{
	return version_;
}

void DeleteTemplateRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", std::to_string(version));
}

std::string DeleteTemplateRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DeleteTemplateRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string DeleteTemplateRequest::getCallerType()const
{
	return callerType_;
}

void DeleteTemplateRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

bool DeleteTemplateRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DeleteTemplateRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DeleteTemplateRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DeleteTemplateRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

std::string DeleteTemplateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteTemplateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

bool DeleteTemplateRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DeleteTemplateRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DeleteTemplateRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteTemplateRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DeleteTemplateRequest::getRequestId()const
{
	return requestId_;
}

void DeleteTemplateRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string DeleteTemplateRequest::getRequestContent()const
{
	return requestContent_;
}

void DeleteTemplateRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string DeleteTemplateRequest::getAppId()const
{
	return appId_;
}

void DeleteTemplateRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", std::to_string(appId));
}

std::string DeleteTemplateRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DeleteTemplateRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string DeleteTemplateRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DeleteTemplateRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long DeleteTemplateRequest::getCallerUid()const
{
	return callerUid_;
}

void DeleteTemplateRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

