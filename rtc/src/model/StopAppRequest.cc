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

#include <alibabacloud/rtc/model/StopAppRequest.h>

using AlibabaCloud::Rtc::Model::StopAppRequest;

StopAppRequest::StopAppRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "StopApp")
{}

StopAppRequest::~StopAppRequest()
{}

std::string StopAppRequest::getApp_ip()const
{
	return app_ip_;
}

void StopAppRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string StopAppRequest::getProduct()const
{
	return product_;
}

void StopAppRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

long StopAppRequest::getCallerParentId()const
{
	return callerParentId_;
}

void StopAppRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool StopAppRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void StopAppRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string StopAppRequest::getCallerBid()const
{
	return callerBid_;
}

void StopAppRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long StopAppRequest::getOwnerId()const
{
	return ownerId_;
}

void StopAppRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string StopAppRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void StopAppRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string StopAppRequest::getVersion()const
{
	return version_;
}

void StopAppRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

std::string StopAppRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void StopAppRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string StopAppRequest::getCallerType()const
{
	return callerType_;
}

void StopAppRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

bool StopAppRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void StopAppRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool StopAppRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void StopAppRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

std::string StopAppRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void StopAppRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

bool StopAppRequest::getSecurity_transport()const
{
	return security_transport_;
}

void StopAppRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string StopAppRequest::getSecurityToken()const
{
	return securityToken_;
}

void StopAppRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string StopAppRequest::getRequestId()const
{
	return requestId_;
}

void StopAppRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string StopAppRequest::getRequestContent()const
{
	return requestContent_;
}

void StopAppRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string StopAppRequest::getAppId()const
{
	return appId_;
}

void StopAppRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string StopAppRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void StopAppRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string StopAppRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void StopAppRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long StopAppRequest::getCallerUid()const
{
	return callerUid_;
}

void StopAppRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

