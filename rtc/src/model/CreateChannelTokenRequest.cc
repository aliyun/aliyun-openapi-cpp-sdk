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

#include <alibabacloud/rtc/model/CreateChannelTokenRequest.h>

using AlibabaCloud::Rtc::Model::CreateChannelTokenRequest;

CreateChannelTokenRequest::CreateChannelTokenRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "CreateChannelToken")
{}

CreateChannelTokenRequest::~CreateChannelTokenRequest()
{}

long CreateChannelTokenRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateChannelTokenRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long CreateChannelTokenRequest::getCallerParentId()const
{
	return callerParentId_;
}

void CreateChannelTokenRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool CreateChannelTokenRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void CreateChannelTokenRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string CreateChannelTokenRequest::getSessionId()const
{
	return sessionId_;
}

void CreateChannelTokenRequest::setSessionId(const std::string& sessionId)
{
	sessionId_ = sessionId;
	setCoreParameter("SessionId", sessionId);
}

std::string CreateChannelTokenRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void CreateChannelTokenRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string CreateChannelTokenRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void CreateChannelTokenRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string CreateChannelTokenRequest::getCallerType()const
{
	return callerType_;
}

void CreateChannelTokenRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string CreateChannelTokenRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateChannelTokenRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateChannelTokenRequest::getUId()const
{
	return uId_;
}

void CreateChannelTokenRequest::setUId(const std::string& uId)
{
	uId_ = uId;
	setCoreParameter("UId", uId);
}

std::string CreateChannelTokenRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateChannelTokenRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string CreateChannelTokenRequest::getRequestContent()const
{
	return requestContent_;
}

void CreateChannelTokenRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string CreateChannelTokenRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void CreateChannelTokenRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string CreateChannelTokenRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void CreateChannelTokenRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long CreateChannelTokenRequest::getCallerUid()const
{
	return callerUid_;
}

void CreateChannelTokenRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string CreateChannelTokenRequest::getApp_ip()const
{
	return app_ip_;
}

void CreateChannelTokenRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string CreateChannelTokenRequest::getPopProduct()const
{
	return popProduct_;
}

void CreateChannelTokenRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string CreateChannelTokenRequest::getCallerBid()const
{
	return callerBid_;
}

void CreateChannelTokenRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long CreateChannelTokenRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateChannelTokenRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateChannelTokenRequest::getVersion()const
{
	return version_;
}

void CreateChannelTokenRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

std::string CreateChannelTokenRequest::getNonce()const
{
	return nonce_;
}

void CreateChannelTokenRequest::setNonce(const std::string& nonce)
{
	nonce_ = nonce;
	setCoreParameter("Nonce", nonce);
}

bool CreateChannelTokenRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void CreateChannelTokenRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool CreateChannelTokenRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void CreateChannelTokenRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool CreateChannelTokenRequest::getSecurity_transport()const
{
	return security_transport_;
}

void CreateChannelTokenRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string CreateChannelTokenRequest::getServiceCode()const
{
	return serviceCode_;
}

void CreateChannelTokenRequest::setServiceCode(const std::string& serviceCode)
{
	serviceCode_ = serviceCode;
	setCoreParameter("ServiceCode", serviceCode);
}

std::string CreateChannelTokenRequest::getRequestId()const
{
	return requestId_;
}

void CreateChannelTokenRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string CreateChannelTokenRequest::getAppId()const
{
	return appId_;
}

void CreateChannelTokenRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", appId);
}

std::string CreateChannelTokenRequest::getChannelId()const
{
	return channelId_;
}

void CreateChannelTokenRequest::setChannelId(const std::string& channelId)
{
	channelId_ = channelId;
	setCoreParameter("ChannelId", channelId);
}

