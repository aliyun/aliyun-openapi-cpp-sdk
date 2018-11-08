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

#include <alibabacloud/rtc/model/StartAppRequest.h>

using AlibabaCloud::Rtc::Model::StartAppRequest;

StartAppRequest::StartAppRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "StartApp")
{}

StartAppRequest::~StartAppRequest()
{}

std::string StartAppRequest::getApp_ip()const
{
	return app_ip_;
}

void StartAppRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string StartAppRequest::getPopProduct()const
{
	return popProduct_;
}

void StartAppRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

long StartAppRequest::getCallerParentId()const
{
	return callerParentId_;
}

void StartAppRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool StartAppRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void StartAppRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string StartAppRequest::getCallerBid()const
{
	return callerBid_;
}

void StartAppRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long StartAppRequest::getOwnerId()const
{
	return ownerId_;
}

void StartAppRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string StartAppRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void StartAppRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string StartAppRequest::getVersion()const
{
	return version_;
}

void StartAppRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

std::string StartAppRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void StartAppRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string StartAppRequest::getCallerType()const
{
	return callerType_;
}

void StartAppRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

bool StartAppRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void StartAppRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool StartAppRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void StartAppRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

std::string StartAppRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void StartAppRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

bool StartAppRequest::getSecurity_transport()const
{
	return security_transport_;
}

void StartAppRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string StartAppRequest::getSecurityToken()const
{
	return securityToken_;
}

void StartAppRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string StartAppRequest::getRequestId()const
{
	return requestId_;
}

void StartAppRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string StartAppRequest::getRequestContent()const
{
	return requestContent_;
}

void StartAppRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string StartAppRequest::getAppId()const
{
	return appId_;
}

void StartAppRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string StartAppRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void StartAppRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string StartAppRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void StartAppRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long StartAppRequest::getCallerUid()const
{
	return callerUid_;
}

void StartAppRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

