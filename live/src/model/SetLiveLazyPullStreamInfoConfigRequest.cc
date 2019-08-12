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

#include <alibabacloud/live/model/SetLiveLazyPullStreamInfoConfigRequest.h>

using AlibabaCloud::Live::Model::SetLiveLazyPullStreamInfoConfigRequest;

SetLiveLazyPullStreamInfoConfigRequest::SetLiveLazyPullStreamInfoConfigRequest() :
	RpcServiceRequest("live", "2016-11-01", "SetLiveLazyPullStreamInfoConfig")
{}

SetLiveLazyPullStreamInfoConfigRequest::~SetLiveLazyPullStreamInfoConfigRequest()
{}

std::string SetLiveLazyPullStreamInfoConfigRequest::getPullArgs()const
{
	return pullArgs_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setPullArgs(const std::string& pullArgs)
{
	pullArgs_ = pullArgs;
	setCoreParameter("PullArgs", std::to_string(pullArgs));
}

long SetLiveLazyPullStreamInfoConfigRequest::getCallerParentId()const
{
	return callerParentId_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool SetLiveLazyPullStreamInfoConfigRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string SetLiveLazyPullStreamInfoConfigRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string SetLiveLazyPullStreamInfoConfigRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string SetLiveLazyPullStreamInfoConfigRequest::getCallerType()const
{
	return callerType_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string SetLiveLazyPullStreamInfoConfigRequest::getEagleEyeRpcId()const
{
	return eagleEyeRpcId_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setEagleEyeRpcId(const std::string& eagleEyeRpcId)
{
	eagleEyeRpcId_ = eagleEyeRpcId;
	setCoreParameter("EagleEyeRpcId", std::to_string(eagleEyeRpcId));
}

std::string SetLiveLazyPullStreamInfoConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string SetLiveLazyPullStreamInfoConfigRequest::getEagleEyeTraceId()const
{
	return eagleEyeTraceId_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setEagleEyeTraceId(const std::string& eagleEyeTraceId)
{
	eagleEyeTraceId_ = eagleEyeTraceId;
	setCoreParameter("EagleEyeTraceId", std::to_string(eagleEyeTraceId));
}

std::string SetLiveLazyPullStreamInfoConfigRequest::getAppName()const
{
	return appName_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setCoreParameter("AppName", std::to_string(appName));
}

std::string SetLiveLazyPullStreamInfoConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string SetLiveLazyPullStreamInfoConfigRequest::getRegionId()const
{
	return regionId_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string SetLiveLazyPullStreamInfoConfigRequest::getRequestContent()const
{
	return requestContent_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string SetLiveLazyPullStreamInfoConfigRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string SetLiveLazyPullStreamInfoConfigRequest::getLiveapiRequestFrom()const
{
	return liveapiRequestFrom_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setLiveapiRequestFrom(const std::string& liveapiRequestFrom)
{
	liveapiRequestFrom_ = liveapiRequestFrom;
	setCoreParameter("LiveapiRequestFrom", std::to_string(liveapiRequestFrom));
}

std::string SetLiveLazyPullStreamInfoConfigRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long SetLiveLazyPullStreamInfoConfigRequest::getCallerUid()const
{
	return callerUid_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string SetLiveLazyPullStreamInfoConfigRequest::getApp_ip()const
{
	return app_ip_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string SetLiveLazyPullStreamInfoConfigRequest::getPopProduct()const
{
	return popProduct_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", std::to_string(popProduct));
}

std::string SetLiveLazyPullStreamInfoConfigRequest::getPullAuthKey()const
{
	return pullAuthKey_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setPullAuthKey(const std::string& pullAuthKey)
{
	pullAuthKey_ = pullAuthKey;
	setCoreParameter("PullAuthKey", std::to_string(pullAuthKey));
}

std::string SetLiveLazyPullStreamInfoConfigRequest::getPullAuthType()const
{
	return pullAuthType_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setPullAuthType(const std::string& pullAuthType)
{
	pullAuthType_ = pullAuthType;
	setCoreParameter("PullAuthType", std::to_string(pullAuthType));
}

std::string SetLiveLazyPullStreamInfoConfigRequest::getDomainName()const
{
	return domainName_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", std::to_string(domainName));
}

std::string SetLiveLazyPullStreamInfoConfigRequest::getPullDomainName()const
{
	return pullDomainName_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setPullDomainName(const std::string& pullDomainName)
{
	pullDomainName_ = pullDomainName;
	setCoreParameter("PullDomainName", std::to_string(pullDomainName));
}

std::string SetLiveLazyPullStreamInfoConfigRequest::getCallerBid()const
{
	return callerBid_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long SetLiveLazyPullStreamInfoConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string SetLiveLazyPullStreamInfoConfigRequest::getVersion()const
{
	return version_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", std::to_string(version));
}

bool SetLiveLazyPullStreamInfoConfigRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool SetLiveLazyPullStreamInfoConfigRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool SetLiveLazyPullStreamInfoConfigRequest::getSecurity_transport()const
{
	return security_transport_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string SetLiveLazyPullStreamInfoConfigRequest::getPullAppName()const
{
	return pullAppName_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setPullAppName(const std::string& pullAppName)
{
	pullAppName_ = pullAppName;
	setCoreParameter("PullAppName", std::to_string(pullAppName));
}

std::string SetLiveLazyPullStreamInfoConfigRequest::getServiceCode()const
{
	return serviceCode_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setServiceCode(const std::string& serviceCode)
{
	serviceCode_ = serviceCode;
	setCoreParameter("ServiceCode", std::to_string(serviceCode));
}

std::string SetLiveLazyPullStreamInfoConfigRequest::getRequestId()const
{
	return requestId_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string SetLiveLazyPullStreamInfoConfigRequest::getEagleEyeUserData()const
{
	return eagleEyeUserData_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setEagleEyeUserData(const std::string& eagleEyeUserData)
{
	eagleEyeUserData_ = eagleEyeUserData;
	setCoreParameter("EagleEyeUserData", std::to_string(eagleEyeUserData));
}

std::string SetLiveLazyPullStreamInfoConfigRequest::getPullProtocol()const
{
	return pullProtocol_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setPullProtocol(const std::string& pullProtocol)
{
	pullProtocol_ = pullProtocol;
	setCoreParameter("PullProtocol", std::to_string(pullProtocol));
}

