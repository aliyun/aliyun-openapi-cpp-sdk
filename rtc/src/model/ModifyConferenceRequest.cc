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

#include <alibabacloud/rtc/model/ModifyConferenceRequest.h>

using AlibabaCloud::Rtc::Model::ModifyConferenceRequest;

ModifyConferenceRequest::ModifyConferenceRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "ModifyConference")
{}

ModifyConferenceRequest::~ModifyConferenceRequest()
{}

long ModifyConferenceRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ModifyConferenceRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool ModifyConferenceRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ModifyConferenceRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string ModifyConferenceRequest::getStartTime()const
{
	return startTime_;
}

void ModifyConferenceRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string ModifyConferenceRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ModifyConferenceRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string ModifyConferenceRequest::getType()const
{
	return type_;
}

void ModifyConferenceRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::string ModifyConferenceRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ModifyConferenceRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string ModifyConferenceRequest::getCallerType()const
{
	return callerType_;
}

void ModifyConferenceRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string ModifyConferenceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyConferenceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifyConferenceRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyConferenceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ModifyConferenceRequest::getConferenceId()const
{
	return conferenceId_;
}

void ModifyConferenceRequest::setConferenceId(const std::string& conferenceId)
{
	conferenceId_ = conferenceId;
	setCoreParameter("ConferenceId", conferenceId);
}

std::string ModifyConferenceRequest::getConferenceName()const
{
	return conferenceName_;
}

void ModifyConferenceRequest::setConferenceName(const std::string& conferenceName)
{
	conferenceName_ = conferenceName;
	setCoreParameter("ConferenceName", conferenceName);
}

std::string ModifyConferenceRequest::getRequestContent()const
{
	return requestContent_;
}

void ModifyConferenceRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string ModifyConferenceRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ModifyConferenceRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string ModifyConferenceRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ModifyConferenceRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long ModifyConferenceRequest::getCallerUid()const
{
	return callerUid_;
}

void ModifyConferenceRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string ModifyConferenceRequest::getApp_ip()const
{
	return app_ip_;
}

void ModifyConferenceRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string ModifyConferenceRequest::getPopProduct()const
{
	return popProduct_;
}

void ModifyConferenceRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string ModifyConferenceRequest::getCallerBid()const
{
	return callerBid_;
}

void ModifyConferenceRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long ModifyConferenceRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyConferenceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyConferenceRequest::getVersion()const
{
	return version_;
}

void ModifyConferenceRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool ModifyConferenceRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ModifyConferenceRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool ModifyConferenceRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ModifyConferenceRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool ModifyConferenceRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ModifyConferenceRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string ModifyConferenceRequest::getRequestId()const
{
	return requestId_;
}

void ModifyConferenceRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string ModifyConferenceRequest::getAppId()const
{
	return appId_;
}

void ModifyConferenceRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", appId);
}

int ModifyConferenceRequest::getRemindNotice()const
{
	return remindNotice_;
}

void ModifyConferenceRequest::setRemindNotice(int remindNotice)
{
	remindNotice_ = remindNotice;
	setCoreParameter("RemindNotice", std::to_string(remindNotice));
}

