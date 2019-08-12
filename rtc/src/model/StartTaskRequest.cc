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

#include <alibabacloud/rtc/model/StartTaskRequest.h>

using AlibabaCloud::Rtc::Model::StartTaskRequest;

StartTaskRequest::StartTaskRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "StartTask")
{}

StartTaskRequest::~StartTaskRequest()
{}

std::vector<StartTaskRequest::MixPanes> StartTaskRequest::getMixPanes()const
{
	return mixPanes_;
}

void StartTaskRequest::setMixPanes(const std::vector<MixPanes>& mixPanes)
{
	mixPanes_ = mixPanes;
	int i = 0;
	for(int i = 0; i!= mixPanes.size(); i++)	{
		auto obj = mixPanes.at(i);
		std::string str ="MixPanes."+ std::to_string(i);
		setCoreParameter(str + ".PaneId", obj.paneId);
		setCoreParameter(str + ".UserId", std::to_string(obj.userId));
		setCoreParameter(str + ".SourceType", std::to_string(obj.sourceType));
	}
}

long StartTaskRequest::getCallerParentId()const
{
	return callerParentId_;
}

void StartTaskRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

std::string StartTaskRequest::getIdempotentId()const
{
	return idempotentId_;
}

void StartTaskRequest::setIdempotentId(const std::string& idempotentId)
{
	idempotentId_ = idempotentId;
	setCoreParameter("IdempotentId", idempotentId);
}

bool StartTaskRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void StartTaskRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string StartTaskRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void StartTaskRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string StartTaskRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void StartTaskRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string StartTaskRequest::getCallerType()const
{
	return callerType_;
}

void StartTaskRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string StartTaskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void StartTaskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string StartTaskRequest::getSecurityToken()const
{
	return securityToken_;
}

void StartTaskRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string StartTaskRequest::getRequestContent()const
{
	return requestContent_;
}

void StartTaskRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string StartTaskRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void StartTaskRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string StartTaskRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void StartTaskRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long StartTaskRequest::getCallerUid()const
{
	return callerUid_;
}

void StartTaskRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string StartTaskRequest::getApp_ip()const
{
	return app_ip_;
}

void StartTaskRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string StartTaskRequest::getPopProduct()const
{
	return popProduct_;
}

void StartTaskRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string StartTaskRequest::getCallerBid()const
{
	return callerBid_;
}

void StartTaskRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long StartTaskRequest::getOwnerId()const
{
	return ownerId_;
}

void StartTaskRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

long StartTaskRequest::getTemplateId()const
{
	return templateId_;
}

void StartTaskRequest::setTemplateId(long templateId)
{
	templateId_ = templateId;
	setCoreParameter("TemplateId", templateId);
}

std::string StartTaskRequest::getVersion()const
{
	return version_;
}

void StartTaskRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool StartTaskRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void StartTaskRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

bool StartTaskRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void StartTaskRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

bool StartTaskRequest::getSecurity_transport()const
{
	return security_transport_;
}

void StartTaskRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string StartTaskRequest::getRequestId()const
{
	return requestId_;
}

void StartTaskRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string StartTaskRequest::getAppId()const
{
	return appId_;
}

void StartTaskRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", appId);
}

std::string StartTaskRequest::getChannelId()const
{
	return channelId_;
}

void StartTaskRequest::setChannelId(const std::string& channelId)
{
	channelId_ = channelId;
	setCoreParameter("ChannelId", channelId);
}

