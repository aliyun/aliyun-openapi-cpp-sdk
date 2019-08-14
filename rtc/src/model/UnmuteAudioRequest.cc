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

#include <alibabacloud/rtc/model/UnmuteAudioRequest.h>

using AlibabaCloud::Rtc::Model::UnmuteAudioRequest;

UnmuteAudioRequest::UnmuteAudioRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "UnmuteAudio")
{}

UnmuteAudioRequest::~UnmuteAudioRequest()
{}

std::string UnmuteAudioRequest::getApp_ip()const
{
	return app_ip_;
}

void UnmuteAudioRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string UnmuteAudioRequest::getPopProduct()const
{
	return popProduct_;
}

void UnmuteAudioRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::vector<std::string> UnmuteAudioRequest::getParticipantIds()const
{
	return participantIds_;
}

void UnmuteAudioRequest::setParticipantIds(const std::vector<std::string>& participantIds)
{
	participantIds_ = participantIds;
	for(int i = 0; i!= participantIds.size(); i++)
		setCoreParameter("ParticipantIds."+ std::to_string(i), participantIds.at(i));
}

long UnmuteAudioRequest::getCallerParentId()const
{
	return callerParentId_;
}

void UnmuteAudioRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool UnmuteAudioRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void UnmuteAudioRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string UnmuteAudioRequest::getCallerBid()const
{
	return callerBid_;
}

void UnmuteAudioRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long UnmuteAudioRequest::getOwnerId()const
{
	return ownerId_;
}

void UnmuteAudioRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string UnmuteAudioRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void UnmuteAudioRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string UnmuteAudioRequest::getVersion()const
{
	return version_;
}

void UnmuteAudioRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

std::string UnmuteAudioRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void UnmuteAudioRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string UnmuteAudioRequest::getCallerType()const
{
	return callerType_;
}

void UnmuteAudioRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

bool UnmuteAudioRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void UnmuteAudioRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool UnmuteAudioRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void UnmuteAudioRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

std::string UnmuteAudioRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UnmuteAudioRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

bool UnmuteAudioRequest::getSecurity_transport()const
{
	return security_transport_;
}

void UnmuteAudioRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string UnmuteAudioRequest::getSecurityToken()const
{
	return securityToken_;
}

void UnmuteAudioRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string UnmuteAudioRequest::getConferenceId()const
{
	return conferenceId_;
}

void UnmuteAudioRequest::setConferenceId(const std::string& conferenceId)
{
	conferenceId_ = conferenceId;
	setCoreParameter("ConferenceId", conferenceId);
}

std::string UnmuteAudioRequest::getRequestId()const
{
	return requestId_;
}

void UnmuteAudioRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string UnmuteAudioRequest::getRequestContent()const
{
	return requestContent_;
}

void UnmuteAudioRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string UnmuteAudioRequest::getAppId()const
{
	return appId_;
}

void UnmuteAudioRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", appId);
}

std::string UnmuteAudioRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void UnmuteAudioRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string UnmuteAudioRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void UnmuteAudioRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long UnmuteAudioRequest::getCallerUid()const
{
	return callerUid_;
}

void UnmuteAudioRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

