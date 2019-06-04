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

#include <alibabacloud/live/model/SetBoardCallbackRequest.h>

using AlibabaCloud::Live::Model::SetBoardCallbackRequest;

SetBoardCallbackRequest::SetBoardCallbackRequest() :
	RpcServiceRequest("live", "2016-11-01", "SetBoardCallback")
{}

SetBoardCallbackRequest::~SetBoardCallbackRequest()
{}

std::string SetBoardCallbackRequest::getAuthKey()const
{
	return authKey_;
}

void SetBoardCallbackRequest::setAuthKey(const std::string& authKey)
{
	authKey_ = authKey;
	setCoreParameter("AuthKey", authKey);
}

long SetBoardCallbackRequest::getCallerParentId()const
{
	return callerParentId_;
}

void SetBoardCallbackRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool SetBoardCallbackRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void SetBoardCallbackRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string SetBoardCallbackRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void SetBoardCallbackRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string SetBoardCallbackRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void SetBoardCallbackRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string SetBoardCallbackRequest::getCallerType()const
{
	return callerType_;
}

void SetBoardCallbackRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string SetBoardCallbackRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetBoardCallbackRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

int SetBoardCallbackRequest::getCallbackEnable()const
{
	return callbackEnable_;
}

void SetBoardCallbackRequest::setCallbackEnable(int callbackEnable)
{
	callbackEnable_ = callbackEnable;
	setCoreParameter("CallbackEnable", std::to_string(callbackEnable));
}

std::string SetBoardCallbackRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetBoardCallbackRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string SetBoardCallbackRequest::getRegionId()const
{
	return regionId_;
}

void SetBoardCallbackRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string SetBoardCallbackRequest::getRequestContent()const
{
	return requestContent_;
}

void SetBoardCallbackRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string SetBoardCallbackRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void SetBoardCallbackRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string SetBoardCallbackRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void SetBoardCallbackRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long SetBoardCallbackRequest::getCallerUid()const
{
	return callerUid_;
}

void SetBoardCallbackRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string SetBoardCallbackRequest::getApp_ip()const
{
	return app_ip_;
}

void SetBoardCallbackRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string SetBoardCallbackRequest::getPopProduct()const
{
	return popProduct_;
}

void SetBoardCallbackRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string SetBoardCallbackRequest::getCallbackEvents()const
{
	return callbackEvents_;
}

void SetBoardCallbackRequest::setCallbackEvents(const std::string& callbackEvents)
{
	callbackEvents_ = callbackEvents;
	setCoreParameter("CallbackEvents", callbackEvents);
}

std::string SetBoardCallbackRequest::getCallerBid()const
{
	return callerBid_;
}

void SetBoardCallbackRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long SetBoardCallbackRequest::getOwnerId()const
{
	return ownerId_;
}

void SetBoardCallbackRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string SetBoardCallbackRequest::getVersion()const
{
	return version_;
}

void SetBoardCallbackRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool SetBoardCallbackRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void SetBoardCallbackRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool SetBoardCallbackRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void SetBoardCallbackRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool SetBoardCallbackRequest::getSecurity_transport()const
{
	return security_transport_;
}

void SetBoardCallbackRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string SetBoardCallbackRequest::getRequestId()const
{
	return requestId_;
}

void SetBoardCallbackRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string SetBoardCallbackRequest::getCallbackUri()const
{
	return callbackUri_;
}

void SetBoardCallbackRequest::setCallbackUri(const std::string& callbackUri)
{
	callbackUri_ = callbackUri;
	setCoreParameter("CallbackUri", callbackUri);
}

std::string SetBoardCallbackRequest::getAppId()const
{
	return appId_;
}

void SetBoardCallbackRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", appId);
}

std::string SetBoardCallbackRequest::getAuthSwitch()const
{
	return authSwitch_;
}

void SetBoardCallbackRequest::setAuthSwitch(const std::string& authSwitch)
{
	authSwitch_ = authSwitch;
	setCoreParameter("AuthSwitch", authSwitch);
}

