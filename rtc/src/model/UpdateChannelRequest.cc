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

#include <alibabacloud/rtc/model/UpdateChannelRequest.h>

using AlibabaCloud::Rtc::Model::UpdateChannelRequest;

UpdateChannelRequest::UpdateChannelRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "UpdateChannel")
{}

UpdateChannelRequest::~UpdateChannelRequest()
{}

long UpdateChannelRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpdateChannelRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long UpdateChannelRequest::getCallerParentId()const
{
	return callerParentId_;
}

void UpdateChannelRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool UpdateChannelRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void UpdateChannelRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string UpdateChannelRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void UpdateChannelRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string UpdateChannelRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void UpdateChannelRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string UpdateChannelRequest::getCallerType()const
{
	return callerType_;
}

void UpdateChannelRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string UpdateChannelRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateChannelRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string UpdateChannelRequest::getSecurityToken()const
{
	return securityToken_;
}

void UpdateChannelRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string UpdateChannelRequest::getRequestContent()const
{
	return requestContent_;
}

void UpdateChannelRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string UpdateChannelRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void UpdateChannelRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string UpdateChannelRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void UpdateChannelRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long UpdateChannelRequest::getCallerUid()const
{
	return callerUid_;
}

void UpdateChannelRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string UpdateChannelRequest::getApp_ip()const
{
	return app_ip_;
}

void UpdateChannelRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string UpdateChannelRequest::getPopProduct()const
{
	return popProduct_;
}

void UpdateChannelRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", std::to_string(popProduct));
}

std::string UpdateChannelRequest::getCallerBid()const
{
	return callerBid_;
}

void UpdateChannelRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long UpdateChannelRequest::getOwnerId()const
{
	return ownerId_;
}

void UpdateChannelRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string UpdateChannelRequest::getVersion()const
{
	return version_;
}

void UpdateChannelRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", std::to_string(version));
}

std::string UpdateChannelRequest::getNonce()const
{
	return nonce_;
}

void UpdateChannelRequest::setNonce(const std::string& nonce)
{
	nonce_ = nonce;
	setCoreParameter("Nonce", std::to_string(nonce));
}

bool UpdateChannelRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void UpdateChannelRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool UpdateChannelRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void UpdateChannelRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool UpdateChannelRequest::getSecurity_transport()const
{
	return security_transport_;
}

void UpdateChannelRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string UpdateChannelRequest::getServiceCode()const
{
	return serviceCode_;
}

void UpdateChannelRequest::setServiceCode(const std::string& serviceCode)
{
	serviceCode_ = serviceCode;
	setCoreParameter("ServiceCode", std::to_string(serviceCode));
}

std::string UpdateChannelRequest::getRequestId()const
{
	return requestId_;
}

void UpdateChannelRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string UpdateChannelRequest::getAppId()const
{
	return appId_;
}

void UpdateChannelRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", std::to_string(appId));
}

std::string UpdateChannelRequest::getChannelId()const
{
	return channelId_;
}

void UpdateChannelRequest::setChannelId(const std::string& channelId)
{
	channelId_ = channelId;
	setCoreParameter("ChannelId", std::to_string(channelId));
}

