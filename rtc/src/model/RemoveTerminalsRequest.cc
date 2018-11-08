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

#include <alibabacloud/rtc/model/RemoveTerminalsRequest.h>

using AlibabaCloud::Rtc::Model::RemoveTerminalsRequest;

RemoveTerminalsRequest::RemoveTerminalsRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "RemoveTerminals")
{}

RemoveTerminalsRequest::~RemoveTerminalsRequest()
{}

long RemoveTerminalsRequest::getCallerParentId()const
{
	return callerParentId_;
}

void RemoveTerminalsRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool RemoveTerminalsRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void RemoveTerminalsRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string RemoveTerminalsRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void RemoveTerminalsRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string RemoveTerminalsRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void RemoveTerminalsRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string RemoveTerminalsRequest::getCallerType()const
{
	return callerType_;
}

void RemoveTerminalsRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string RemoveTerminalsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RemoveTerminalsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string RemoveTerminalsRequest::getSecurityToken()const
{
	return securityToken_;
}

void RemoveTerminalsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string RemoveTerminalsRequest::getRequestContent()const
{
	return requestContent_;
}

void RemoveTerminalsRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string RemoveTerminalsRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void RemoveTerminalsRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::vector<std::string> RemoveTerminalsRequest::getTerminalIds()const
{
	return terminalIds_;
}

void RemoveTerminalsRequest::setTerminalIds(const std::vector<std::string>& terminalIds)
{
	terminalIds_ = terminalIds;
	for(int i = 0; i!= terminalIds.size(); i++)
		setParameter("TerminalIds."+ std::to_string(i), terminalIds.at(i));
}

std::string RemoveTerminalsRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void RemoveTerminalsRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long RemoveTerminalsRequest::getCallerUid()const
{
	return callerUid_;
}

void RemoveTerminalsRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string RemoveTerminalsRequest::getApp_ip()const
{
	return app_ip_;
}

void RemoveTerminalsRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string RemoveTerminalsRequest::getPopProduct()const
{
	return popProduct_;
}

void RemoveTerminalsRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string RemoveTerminalsRequest::getProduct()const
{
	return product_;
}

void RemoveTerminalsRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

std::string RemoveTerminalsRequest::getCallerBid()const
{
	return callerBid_;
}

void RemoveTerminalsRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long RemoveTerminalsRequest::getOwnerId()const
{
	return ownerId_;
}

void RemoveTerminalsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string RemoveTerminalsRequest::getVersion()const
{
	return version_;
}

void RemoveTerminalsRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool RemoveTerminalsRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void RemoveTerminalsRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool RemoveTerminalsRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void RemoveTerminalsRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool RemoveTerminalsRequest::getSecurity_transport()const
{
	return security_transport_;
}

void RemoveTerminalsRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string RemoveTerminalsRequest::getRequestId()const
{
	return requestId_;
}

void RemoveTerminalsRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string RemoveTerminalsRequest::getAppId()const
{
	return appId_;
}

void RemoveTerminalsRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string RemoveTerminalsRequest::getChannelId()const
{
	return channelId_;
}

void RemoveTerminalsRequest::setChannelId(const std::string& channelId)
{
	channelId_ = channelId;
	setParameter("ChannelId", channelId);
}

