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

#include <alibabacloud/rtc/model/MuteAudioAllRequest.h>

using AlibabaCloud::Rtc::Model::MuteAudioAllRequest;

MuteAudioAllRequest::MuteAudioAllRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "MuteAudioAll")
{}

MuteAudioAllRequest::~MuteAudioAllRequest()
{}

std::string MuteAudioAllRequest::getApp_ip()const
{
	return app_ip_;
}

void MuteAudioAllRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string MuteAudioAllRequest::getPopProduct()const
{
	return popProduct_;
}

void MuteAudioAllRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

long MuteAudioAllRequest::getCallerParentId()const
{
	return callerParentId_;
}

void MuteAudioAllRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool MuteAudioAllRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void MuteAudioAllRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string MuteAudioAllRequest::getCallerBid()const
{
	return callerBid_;
}

void MuteAudioAllRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long MuteAudioAllRequest::getOwnerId()const
{
	return ownerId_;
}

void MuteAudioAllRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string MuteAudioAllRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void MuteAudioAllRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string MuteAudioAllRequest::getVersion()const
{
	return version_;
}

void MuteAudioAllRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

std::string MuteAudioAllRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void MuteAudioAllRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string MuteAudioAllRequest::getCallerType()const
{
	return callerType_;
}

void MuteAudioAllRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

bool MuteAudioAllRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void MuteAudioAllRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool MuteAudioAllRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void MuteAudioAllRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

std::string MuteAudioAllRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void MuteAudioAllRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

bool MuteAudioAllRequest::getSecurity_transport()const
{
	return security_transport_;
}

void MuteAudioAllRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string MuteAudioAllRequest::getParticipantId()const
{
	return participantId_;
}

void MuteAudioAllRequest::setParticipantId(const std::string& participantId)
{
	participantId_ = participantId;
	setParameter("ParticipantId", participantId);
}

std::string MuteAudioAllRequest::getSecurityToken()const
{
	return securityToken_;
}

void MuteAudioAllRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string MuteAudioAllRequest::getConferenceId()const
{
	return conferenceId_;
}

void MuteAudioAllRequest::setConferenceId(const std::string& conferenceId)
{
	conferenceId_ = conferenceId;
	setParameter("ConferenceId", conferenceId);
}

std::string MuteAudioAllRequest::getRequestId()const
{
	return requestId_;
}

void MuteAudioAllRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string MuteAudioAllRequest::getRequestContent()const
{
	return requestContent_;
}

void MuteAudioAllRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string MuteAudioAllRequest::getAppId()const
{
	return appId_;
}

void MuteAudioAllRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string MuteAudioAllRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void MuteAudioAllRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string MuteAudioAllRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void MuteAudioAllRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long MuteAudioAllRequest::getCallerUid()const
{
	return callerUid_;
}

void MuteAudioAllRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

