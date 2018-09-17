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

long SetLiveLazyPullStreamInfoConfigRequest::getCallerParentId()const
{
	return callerParentId_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool SetLiveLazyPullStreamInfoConfigRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string SetLiveLazyPullStreamInfoConfigRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string SetLiveLazyPullStreamInfoConfigRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string SetLiveLazyPullStreamInfoConfigRequest::getCallerType()const
{
	return callerType_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string SetLiveLazyPullStreamInfoConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string SetLiveLazyPullStreamInfoConfigRequest::getAppName()const
{
	return appName_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setParameter("AppName", appName);
}

std::string SetLiveLazyPullStreamInfoConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string SetLiveLazyPullStreamInfoConfigRequest::getRegionId()const
{
	return regionId_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string SetLiveLazyPullStreamInfoConfigRequest::getRequestContent()const
{
	return requestContent_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string SetLiveLazyPullStreamInfoConfigRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string SetLiveLazyPullStreamInfoConfigRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long SetLiveLazyPullStreamInfoConfigRequest::getCallerUid()const
{
	return callerUid_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string SetLiveLazyPullStreamInfoConfigRequest::getApp_ip()const
{
	return app_ip_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string SetLiveLazyPullStreamInfoConfigRequest::getPopProduct()const
{
	return popProduct_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string SetLiveLazyPullStreamInfoConfigRequest::getPullAuthKey()const
{
	return pullAuthKey_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setPullAuthKey(const std::string& pullAuthKey)
{
	pullAuthKey_ = pullAuthKey;
	setParameter("PullAuthKey", pullAuthKey);
}

std::string SetLiveLazyPullStreamInfoConfigRequest::getPullAuthType()const
{
	return pullAuthType_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setPullAuthType(const std::string& pullAuthType)
{
	pullAuthType_ = pullAuthType;
	setParameter("PullAuthType", pullAuthType);
}

std::string SetLiveLazyPullStreamInfoConfigRequest::getDomainName()const
{
	return domainName_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string SetLiveLazyPullStreamInfoConfigRequest::getPullDomainName()const
{
	return pullDomainName_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setPullDomainName(const std::string& pullDomainName)
{
	pullDomainName_ = pullDomainName;
	setParameter("PullDomainName", pullDomainName);
}

std::string SetLiveLazyPullStreamInfoConfigRequest::getCallerBid()const
{
	return callerBid_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long SetLiveLazyPullStreamInfoConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SetLiveLazyPullStreamInfoConfigRequest::getVersion()const
{
	return version_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool SetLiveLazyPullStreamInfoConfigRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool SetLiveLazyPullStreamInfoConfigRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool SetLiveLazyPullStreamInfoConfigRequest::getSecurity_transport()const
{
	return security_transport_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string SetLiveLazyPullStreamInfoConfigRequest::getPullAppName()const
{
	return pullAppName_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setPullAppName(const std::string& pullAppName)
{
	pullAppName_ = pullAppName;
	setParameter("PullAppName", pullAppName);
}

std::string SetLiveLazyPullStreamInfoConfigRequest::getRequestId()const
{
	return requestId_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string SetLiveLazyPullStreamInfoConfigRequest::getPullProtocol()const
{
	return pullProtocol_;
}

void SetLiveLazyPullStreamInfoConfigRequest::setPullProtocol(const std::string& pullProtocol)
{
	pullProtocol_ = pullProtocol;
	setParameter("PullProtocol", pullProtocol);
}

