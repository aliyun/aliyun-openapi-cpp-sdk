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

#include <alibabacloud/rtc/model/CreateConferenceRequest.h>

using AlibabaCloud::Rtc::Model::CreateConferenceRequest;

CreateConferenceRequest::CreateConferenceRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "CreateConference")
{}

CreateConferenceRequest::~CreateConferenceRequest()
{}

std::string CreateConferenceRequest::getClientToken()const
{
	return clientToken_;
}

void CreateConferenceRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", std::to_string(clientToken));
}

long CreateConferenceRequest::getCallerParentId()const
{
	return callerParentId_;
}

void CreateConferenceRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool CreateConferenceRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void CreateConferenceRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string CreateConferenceRequest::getStartTime()const
{
	return startTime_;
}

void CreateConferenceRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

std::string CreateConferenceRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void CreateConferenceRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string CreateConferenceRequest::getType()const
{
	return type_;
}

void CreateConferenceRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", std::to_string(type));
}

std::string CreateConferenceRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void CreateConferenceRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string CreateConferenceRequest::getCallerType()const
{
	return callerType_;
}

void CreateConferenceRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string CreateConferenceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateConferenceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string CreateConferenceRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateConferenceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string CreateConferenceRequest::getConferenceName()const
{
	return conferenceName_;
}

void CreateConferenceRequest::setConferenceName(const std::string& conferenceName)
{
	conferenceName_ = conferenceName;
	setCoreParameter("ConferenceName", std::to_string(conferenceName));
}

std::string CreateConferenceRequest::getRequestContent()const
{
	return requestContent_;
}

void CreateConferenceRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string CreateConferenceRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void CreateConferenceRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string CreateConferenceRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void CreateConferenceRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long CreateConferenceRequest::getCallerUid()const
{
	return callerUid_;
}

void CreateConferenceRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string CreateConferenceRequest::getApp_ip()const
{
	return app_ip_;
}

void CreateConferenceRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string CreateConferenceRequest::getPopProduct()const
{
	return popProduct_;
}

void CreateConferenceRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", std::to_string(popProduct));
}

std::string CreateConferenceRequest::getCallerBid()const
{
	return callerBid_;
}

void CreateConferenceRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long CreateConferenceRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateConferenceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string CreateConferenceRequest::getVersion()const
{
	return version_;
}

void CreateConferenceRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", std::to_string(version));
}

bool CreateConferenceRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void CreateConferenceRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool CreateConferenceRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void CreateConferenceRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool CreateConferenceRequest::getSecurity_transport()const
{
	return security_transport_;
}

void CreateConferenceRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string CreateConferenceRequest::getRequestId()const
{
	return requestId_;
}

void CreateConferenceRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string CreateConferenceRequest::getAppId()const
{
	return appId_;
}

void CreateConferenceRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", std::to_string(appId));
}

int CreateConferenceRequest::getRemindNotice()const
{
	return remindNotice_;
}

void CreateConferenceRequest::setRemindNotice(int remindNotice)
{
	remindNotice_ = remindNotice;
	setCoreParameter("RemindNotice", remindNotice);
}

