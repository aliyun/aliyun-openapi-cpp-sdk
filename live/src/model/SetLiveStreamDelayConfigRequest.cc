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

#include <alibabacloud/live/model/SetLiveStreamDelayConfigRequest.h>

using AlibabaCloud::Live::Model::SetLiveStreamDelayConfigRequest;

SetLiveStreamDelayConfigRequest::SetLiveStreamDelayConfigRequest() :
	RpcServiceRequest("live", "2016-11-01", "SetLiveStreamDelayConfig")
{}

SetLiveStreamDelayConfigRequest::~SetLiveStreamDelayConfigRequest()
{}

std::string SetLiveStreamDelayConfigRequest::getFlvLevel()const
{
	return flvLevel_;
}

void SetLiveStreamDelayConfigRequest::setFlvLevel(const std::string& flvLevel)
{
	flvLevel_ = flvLevel;
	setCoreParameter("FlvLevel", flvLevel);
}

long SetLiveStreamDelayConfigRequest::getCallerParentId()const
{
	return callerParentId_;
}

void SetLiveStreamDelayConfigRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool SetLiveStreamDelayConfigRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void SetLiveStreamDelayConfigRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string SetLiveStreamDelayConfigRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void SetLiveStreamDelayConfigRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string SetLiveStreamDelayConfigRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void SetLiveStreamDelayConfigRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string SetLiveStreamDelayConfigRequest::getCallerType()const
{
	return callerType_;
}

void SetLiveStreamDelayConfigRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string SetLiveStreamDelayConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetLiveStreamDelayConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string SetLiveStreamDelayConfigRequest::getHlsLevel()const
{
	return hlsLevel_;
}

void SetLiveStreamDelayConfigRequest::setHlsLevel(const std::string& hlsLevel)
{
	hlsLevel_ = hlsLevel;
	setCoreParameter("HlsLevel", hlsLevel);
}

std::string SetLiveStreamDelayConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetLiveStreamDelayConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string SetLiveStreamDelayConfigRequest::getRegionId()const
{
	return regionId_;
}

void SetLiveStreamDelayConfigRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string SetLiveStreamDelayConfigRequest::getRequestContent()const
{
	return requestContent_;
}

void SetLiveStreamDelayConfigRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string SetLiveStreamDelayConfigRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void SetLiveStreamDelayConfigRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string SetLiveStreamDelayConfigRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void SetLiveStreamDelayConfigRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long SetLiveStreamDelayConfigRequest::getCallerUid()const
{
	return callerUid_;
}

void SetLiveStreamDelayConfigRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string SetLiveStreamDelayConfigRequest::getApp_ip()const
{
	return app_ip_;
}

void SetLiveStreamDelayConfigRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string SetLiveStreamDelayConfigRequest::getPopProduct()const
{
	return popProduct_;
}

void SetLiveStreamDelayConfigRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

int SetLiveStreamDelayConfigRequest::getRtmpDelay()const
{
	return rtmpDelay_;
}

void SetLiveStreamDelayConfigRequest::setRtmpDelay(int rtmpDelay)
{
	rtmpDelay_ = rtmpDelay;
	setCoreParameter("RtmpDelay", std::to_string(rtmpDelay));
}

std::string SetLiveStreamDelayConfigRequest::getDomainName()const
{
	return domainName_;
}

void SetLiveStreamDelayConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string SetLiveStreamDelayConfigRequest::getCallerBid()const
{
	return callerBid_;
}

void SetLiveStreamDelayConfigRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long SetLiveStreamDelayConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetLiveStreamDelayConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string SetLiveStreamDelayConfigRequest::getVersion()const
{
	return version_;
}

void SetLiveStreamDelayConfigRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool SetLiveStreamDelayConfigRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void SetLiveStreamDelayConfigRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool SetLiveStreamDelayConfigRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void SetLiveStreamDelayConfigRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool SetLiveStreamDelayConfigRequest::getSecurity_transport()const
{
	return security_transport_;
}

void SetLiveStreamDelayConfigRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string SetLiveStreamDelayConfigRequest::getRequestId()const
{
	return requestId_;
}

void SetLiveStreamDelayConfigRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

int SetLiveStreamDelayConfigRequest::getFlvDelay()const
{
	return flvDelay_;
}

void SetLiveStreamDelayConfigRequest::setFlvDelay(int flvDelay)
{
	flvDelay_ = flvDelay;
	setCoreParameter("FlvDelay", std::to_string(flvDelay));
}

std::string SetLiveStreamDelayConfigRequest::getRtmpLevel()const
{
	return rtmpLevel_;
}

void SetLiveStreamDelayConfigRequest::setRtmpLevel(const std::string& rtmpLevel)
{
	rtmpLevel_ = rtmpLevel;
	setCoreParameter("RtmpLevel", rtmpLevel);
}

int SetLiveStreamDelayConfigRequest::getHlsDelay()const
{
	return hlsDelay_;
}

void SetLiveStreamDelayConfigRequest::setHlsDelay(int hlsDelay)
{
	hlsDelay_ = hlsDelay;
	setCoreParameter("HlsDelay", std::to_string(hlsDelay));
}

