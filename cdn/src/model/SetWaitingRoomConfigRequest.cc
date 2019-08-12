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

#include <alibabacloud/cdn/model/SetWaitingRoomConfigRequest.h>

using AlibabaCloud::Cdn::Model::SetWaitingRoomConfigRequest;

SetWaitingRoomConfigRequest::SetWaitingRoomConfigRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "SetWaitingRoomConfig")
{}

SetWaitingRoomConfigRequest::~SetWaitingRoomConfigRequest()
{}

long SetWaitingRoomConfigRequest::getCallerParentId()const
{
	return callerParentId_;
}

void SetWaitingRoomConfigRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool SetWaitingRoomConfigRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void SetWaitingRoomConfigRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string SetWaitingRoomConfigRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void SetWaitingRoomConfigRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string SetWaitingRoomConfigRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void SetWaitingRoomConfigRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string SetWaitingRoomConfigRequest::getCallerType()const
{
	return callerType_;
}

void SetWaitingRoomConfigRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string SetWaitingRoomConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetWaitingRoomConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string SetWaitingRoomConfigRequest::getWaitUrl()const
{
	return waitUrl_;
}

void SetWaitingRoomConfigRequest::setWaitUrl(const std::string& waitUrl)
{
	waitUrl_ = waitUrl;
	setCoreParameter("WaitUrl", std::to_string(waitUrl));
}

std::string SetWaitingRoomConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetWaitingRoomConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string SetWaitingRoomConfigRequest::getRequestContent()const
{
	return requestContent_;
}

void SetWaitingRoomConfigRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string SetWaitingRoomConfigRequest::getFunctionName()const
{
	return functionName_;
}

void SetWaitingRoomConfigRequest::setFunctionName(const std::string& functionName)
{
	functionName_ = functionName;
	setCoreParameter("FunctionName", std::to_string(functionName));
}

std::string SetWaitingRoomConfigRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void SetWaitingRoomConfigRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string SetWaitingRoomConfigRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void SetWaitingRoomConfigRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

std::string SetWaitingRoomConfigRequest::getWaitUri()const
{
	return waitUri_;
}

void SetWaitingRoomConfigRequest::setWaitUri(const std::string& waitUri)
{
	waitUri_ = waitUri;
	setCoreParameter("WaitUri", std::to_string(waitUri));
}

long SetWaitingRoomConfigRequest::getCallerUid()const
{
	return callerUid_;
}

void SetWaitingRoomConfigRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string SetWaitingRoomConfigRequest::getApp_ip()const
{
	return app_ip_;
}

void SetWaitingRoomConfigRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string SetWaitingRoomConfigRequest::getPopProduct()const
{
	return popProduct_;
}

void SetWaitingRoomConfigRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", std::to_string(popProduct));
}

int SetWaitingRoomConfigRequest::getMaxTimeWait()const
{
	return maxTimeWait_;
}

void SetWaitingRoomConfigRequest::setMaxTimeWait(int maxTimeWait)
{
	maxTimeWait_ = maxTimeWait;
	setCoreParameter("MaxTimeWait", maxTimeWait);
}

std::string SetWaitingRoomConfigRequest::getDomainName()const
{
	return domainName_;
}

void SetWaitingRoomConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", std::to_string(domainName));
}

int SetWaitingRoomConfigRequest::getAllowPct()const
{
	return allowPct_;
}

void SetWaitingRoomConfigRequest::setAllowPct(int allowPct)
{
	allowPct_ = allowPct;
	setCoreParameter("AllowPct", allowPct);
}

std::string SetWaitingRoomConfigRequest::getCallerBid()const
{
	return callerBid_;
}

void SetWaitingRoomConfigRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

int SetWaitingRoomConfigRequest::getGapTime()const
{
	return gapTime_;
}

void SetWaitingRoomConfigRequest::setGapTime(int gapTime)
{
	gapTime_ = gapTime;
	setCoreParameter("GapTime", gapTime);
}

long SetWaitingRoomConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetWaitingRoomConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string SetWaitingRoomConfigRequest::getVersion()const
{
	return version_;
}

void SetWaitingRoomConfigRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", std::to_string(version));
}

bool SetWaitingRoomConfigRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void SetWaitingRoomConfigRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool SetWaitingRoomConfigRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void SetWaitingRoomConfigRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool SetWaitingRoomConfigRequest::getSecurity_transport()const
{
	return security_transport_;
}

void SetWaitingRoomConfigRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string SetWaitingRoomConfigRequest::getRequestId()const
{
	return requestId_;
}

void SetWaitingRoomConfigRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

