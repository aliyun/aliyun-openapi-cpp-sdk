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

#include <alibabacloud/rtc/model/MuteAudioRequest.h>

using AlibabaCloud::Rtc::Model::MuteAudioRequest;

MuteAudioRequest::MuteAudioRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "MuteAudio")
{}

MuteAudioRequest::~MuteAudioRequest()
{}

std::string MuteAudioRequest::getApp_ip()const
{
	return app_ip_;
}

void MuteAudioRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string MuteAudioRequest::getPopProduct()const
{
	return popProduct_;
}

void MuteAudioRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::vector<std::string> MuteAudioRequest::getParticipantIds()const
{
	return participantIds_;
}

void MuteAudioRequest::setParticipantIds(const std::vector<std::string>& participantIds)
{
	participantIds_ = participantIds;
	for(int i = 0; i!= participantIds.size(); i++)
		setParameter("ParticipantIds."+ std::to_string(i), participantIds.at(i));
}

long MuteAudioRequest::getCallerParentId()const
{
	return callerParentId_;
}

void MuteAudioRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool MuteAudioRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void MuteAudioRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string MuteAudioRequest::getCallerBid()const
{
	return callerBid_;
}

void MuteAudioRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long MuteAudioRequest::getOwnerId()const
{
	return ownerId_;
}

void MuteAudioRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string MuteAudioRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void MuteAudioRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string MuteAudioRequest::getVersion()const
{
	return version_;
}

void MuteAudioRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

std::string MuteAudioRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void MuteAudioRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string MuteAudioRequest::getCallerType()const
{
	return callerType_;
}

void MuteAudioRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

bool MuteAudioRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void MuteAudioRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool MuteAudioRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void MuteAudioRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

std::string MuteAudioRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void MuteAudioRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

bool MuteAudioRequest::getSecurity_transport()const
{
	return security_transport_;
}

void MuteAudioRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string MuteAudioRequest::getSecurityToken()const
{
	return securityToken_;
}

void MuteAudioRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string MuteAudioRequest::getConferenceId()const
{
	return conferenceId_;
}

void MuteAudioRequest::setConferenceId(const std::string& conferenceId)
{
	conferenceId_ = conferenceId;
	setParameter("ConferenceId", conferenceId);
}

std::string MuteAudioRequest::getRequestId()const
{
	return requestId_;
}

void MuteAudioRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string MuteAudioRequest::getRequestContent()const
{
	return requestContent_;
}

void MuteAudioRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string MuteAudioRequest::getAppId()const
{
	return appId_;
}

void MuteAudioRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string MuteAudioRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void MuteAudioRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string MuteAudioRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void MuteAudioRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long MuteAudioRequest::getCallerUid()const
{
	return callerUid_;
}

void MuteAudioRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

