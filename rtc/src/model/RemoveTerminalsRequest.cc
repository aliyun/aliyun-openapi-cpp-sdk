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

long RemoveTerminalsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RemoveTerminalsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long RemoveTerminalsRequest::getCallerParentId()const
{
	return callerParentId_;
}

void RemoveTerminalsRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool RemoveTerminalsRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void RemoveTerminalsRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string RemoveTerminalsRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void RemoveTerminalsRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string RemoveTerminalsRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void RemoveTerminalsRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string RemoveTerminalsRequest::getCallerType()const
{
	return callerType_;
}

void RemoveTerminalsRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string RemoveTerminalsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RemoveTerminalsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string RemoveTerminalsRequest::getSecurityToken()const
{
	return securityToken_;
}

void RemoveTerminalsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string RemoveTerminalsRequest::getRequestContent()const
{
	return requestContent_;
}

void RemoveTerminalsRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string RemoveTerminalsRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void RemoveTerminalsRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::vector<std::string> RemoveTerminalsRequest::getTerminalIds()const
{
	return terminalIds_;
}

void RemoveTerminalsRequest::setTerminalIds(const std::vector<std::string>& terminalIds)
{
	terminalIds_ = terminalIds;
	for(int i = 0; i!= terminalIds.size(); i++)
		setCoreParameter("TerminalIds."+ std::to_string(i), std::to_string(terminalIds.at(i)));
}

std::string RemoveTerminalsRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void RemoveTerminalsRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long RemoveTerminalsRequest::getCallerUid()const
{
	return callerUid_;
}

void RemoveTerminalsRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string RemoveTerminalsRequest::getApp_ip()const
{
	return app_ip_;
}

void RemoveTerminalsRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string RemoveTerminalsRequest::getPopProduct()const
{
	return popProduct_;
}

void RemoveTerminalsRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", std::to_string(popProduct));
}

std::string RemoveTerminalsRequest::getCallerBid()const
{
	return callerBid_;
}

void RemoveTerminalsRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long RemoveTerminalsRequest::getOwnerId()const
{
	return ownerId_;
}

void RemoveTerminalsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string RemoveTerminalsRequest::getVersion()const
{
	return version_;
}

void RemoveTerminalsRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", std::to_string(version));
}

bool RemoveTerminalsRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void RemoveTerminalsRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool RemoveTerminalsRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void RemoveTerminalsRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool RemoveTerminalsRequest::getSecurity_transport()const
{
	return security_transport_;
}

void RemoveTerminalsRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string RemoveTerminalsRequest::getServiceCode()const
{
	return serviceCode_;
}

void RemoveTerminalsRequest::setServiceCode(const std::string& serviceCode)
{
	serviceCode_ = serviceCode;
	setCoreParameter("ServiceCode", std::to_string(serviceCode));
}

std::string RemoveTerminalsRequest::getRequestId()const
{
	return requestId_;
}

void RemoveTerminalsRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string RemoveTerminalsRequest::getAppId()const
{
	return appId_;
}

void RemoveTerminalsRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", std::to_string(appId));
}

std::string RemoveTerminalsRequest::getChannelId()const
{
	return channelId_;
}

void RemoveTerminalsRequest::setChannelId(const std::string& channelId)
{
	channelId_ = channelId;
	setCoreParameter("ChannelId", std::to_string(channelId));
}

