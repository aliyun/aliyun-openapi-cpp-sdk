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

#include <alibabacloud/live/model/ForbidLiveStreamRequest.h>

using AlibabaCloud::Live::Model::ForbidLiveStreamRequest;

ForbidLiveStreamRequest::ForbidLiveStreamRequest() :
	RpcServiceRequest("live", "2016-11-01", "ForbidLiveStream")
{}

ForbidLiveStreamRequest::~ForbidLiveStreamRequest()
{}

long ForbidLiveStreamRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ForbidLiveStreamRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool ForbidLiveStreamRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ForbidLiveStreamRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string ForbidLiveStreamRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ForbidLiveStreamRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string ForbidLiveStreamRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ForbidLiveStreamRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string ForbidLiveStreamRequest::getCallerType()const
{
	return callerType_;
}

void ForbidLiveStreamRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string ForbidLiveStreamRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ForbidLiveStreamRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ForbidLiveStreamRequest::getAppName()const
{
	return appName_;
}

void ForbidLiveStreamRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setParameter("AppName", appName);
}

std::string ForbidLiveStreamRequest::getSecurityToken()const
{
	return securityToken_;
}

void ForbidLiveStreamRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string ForbidLiveStreamRequest::getRegionId()const
{
	return regionId_;
}

void ForbidLiveStreamRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ForbidLiveStreamRequest::getRequestContent()const
{
	return requestContent_;
}

void ForbidLiveStreamRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string ForbidLiveStreamRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ForbidLiveStreamRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string ForbidLiveStreamRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ForbidLiveStreamRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

std::string ForbidLiveStreamRequest::getStreamName()const
{
	return streamName_;
}

void ForbidLiveStreamRequest::setStreamName(const std::string& streamName)
{
	streamName_ = streamName;
	setParameter("StreamName", streamName);
}

long ForbidLiveStreamRequest::getCallerUid()const
{
	return callerUid_;
}

void ForbidLiveStreamRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string ForbidLiveStreamRequest::getControlStreamAction()const
{
	return controlStreamAction_;
}

void ForbidLiveStreamRequest::setControlStreamAction(const std::string& controlStreamAction)
{
	controlStreamAction_ = controlStreamAction;
	setParameter("ControlStreamAction", controlStreamAction);
}

std::string ForbidLiveStreamRequest::getResumeTime()const
{
	return resumeTime_;
}

void ForbidLiveStreamRequest::setResumeTime(const std::string& resumeTime)
{
	resumeTime_ = resumeTime;
	setParameter("ResumeTime", resumeTime);
}

std::string ForbidLiveStreamRequest::getApp_ip()const
{
	return app_ip_;
}

void ForbidLiveStreamRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string ForbidLiveStreamRequest::getPopProduct()const
{
	return popProduct_;
}

void ForbidLiveStreamRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string ForbidLiveStreamRequest::getLiveStreamType()const
{
	return liveStreamType_;
}

void ForbidLiveStreamRequest::setLiveStreamType(const std::string& liveStreamType)
{
	liveStreamType_ = liveStreamType;
	setParameter("LiveStreamType", liveStreamType);
}

std::string ForbidLiveStreamRequest::getDomainName()const
{
	return domainName_;
}

void ForbidLiveStreamRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string ForbidLiveStreamRequest::getCallerBid()const
{
	return callerBid_;
}

void ForbidLiveStreamRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long ForbidLiveStreamRequest::getOwnerId()const
{
	return ownerId_;
}

void ForbidLiveStreamRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ForbidLiveStreamRequest::getVersion()const
{
	return version_;
}

void ForbidLiveStreamRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

std::string ForbidLiveStreamRequest::getOneshot()const
{
	return oneshot_;
}

void ForbidLiveStreamRequest::setOneshot(const std::string& oneshot)
{
	oneshot_ = oneshot;
	setParameter("Oneshot", oneshot);
}

bool ForbidLiveStreamRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ForbidLiveStreamRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool ForbidLiveStreamRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ForbidLiveStreamRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool ForbidLiveStreamRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ForbidLiveStreamRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string ForbidLiveStreamRequest::getRequestId()const
{
	return requestId_;
}

void ForbidLiveStreamRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

