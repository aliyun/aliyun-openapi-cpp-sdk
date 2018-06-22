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

#include <alibabacloud/rtc/model/DeleteChannelRequest.h>

using AlibabaCloud::Rtc::Model::DeleteChannelRequest;

DeleteChannelRequest::DeleteChannelRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "DeleteChannel")
{}

DeleteChannelRequest::~DeleteChannelRequest()
{}

std::string DeleteChannelRequest::getApp_ip()const
{
	return app_ip_;
}

void DeleteChannelRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DeleteChannelRequest::getProduct()const
{
	return product_;
}

void DeleteChannelRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

long DeleteChannelRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DeleteChannelRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DeleteChannelRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DeleteChannelRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DeleteChannelRequest::getCallerBid()const
{
	return callerBid_;
}

void DeleteChannelRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DeleteChannelRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteChannelRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteChannelRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DeleteChannelRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DeleteChannelRequest::getVersion()const
{
	return version_;
}

void DeleteChannelRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

std::string DeleteChannelRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DeleteChannelRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DeleteChannelRequest::getCallerType()const
{
	return callerType_;
}

void DeleteChannelRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

bool DeleteChannelRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DeleteChannelRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DeleteChannelRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DeleteChannelRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

std::string DeleteChannelRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteChannelRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

bool DeleteChannelRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DeleteChannelRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DeleteChannelRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteChannelRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DeleteChannelRequest::getRequestId()const
{
	return requestId_;
}

void DeleteChannelRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string DeleteChannelRequest::getRequestContent()const
{
	return requestContent_;
}

void DeleteChannelRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string DeleteChannelRequest::getAppId()const
{
	return appId_;
}

void DeleteChannelRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string DeleteChannelRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DeleteChannelRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DeleteChannelRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DeleteChannelRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

std::string DeleteChannelRequest::getChannelId()const
{
	return channelId_;
}

void DeleteChannelRequest::setChannelId(const std::string& channelId)
{
	channelId_ = channelId;
	setParameter("ChannelId", channelId);
}

long DeleteChannelRequest::getCallerUid()const
{
	return callerUid_;
}

void DeleteChannelRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

