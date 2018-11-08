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

#include <alibabacloud/live/model/DeleteLiveLazyPullStreamInfoConfigRequest.h>

using AlibabaCloud::Live::Model::DeleteLiveLazyPullStreamInfoConfigRequest;

DeleteLiveLazyPullStreamInfoConfigRequest::DeleteLiveLazyPullStreamInfoConfigRequest() :
	RpcServiceRequest("live", "2016-11-01", "DeleteLiveLazyPullStreamInfoConfig")
{}

DeleteLiveLazyPullStreamInfoConfigRequest::~DeleteLiveLazyPullStreamInfoConfigRequest()
{}

std::string DeleteLiveLazyPullStreamInfoConfigRequest::getApp_ip()const
{
	return app_ip_;
}

void DeleteLiveLazyPullStreamInfoConfigRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DeleteLiveLazyPullStreamInfoConfigRequest::getPopProduct()const
{
	return popProduct_;
}

void DeleteLiveLazyPullStreamInfoConfigRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

long DeleteLiveLazyPullStreamInfoConfigRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DeleteLiveLazyPullStreamInfoConfigRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

std::string DeleteLiveLazyPullStreamInfoConfigRequest::getDomainName()const
{
	return domainName_;
}

void DeleteLiveLazyPullStreamInfoConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

bool DeleteLiveLazyPullStreamInfoConfigRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DeleteLiveLazyPullStreamInfoConfigRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DeleteLiveLazyPullStreamInfoConfigRequest::getCallerBid()const
{
	return callerBid_;
}

void DeleteLiveLazyPullStreamInfoConfigRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DeleteLiveLazyPullStreamInfoConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteLiveLazyPullStreamInfoConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteLiveLazyPullStreamInfoConfigRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DeleteLiveLazyPullStreamInfoConfigRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DeleteLiveLazyPullStreamInfoConfigRequest::getVersion()const
{
	return version_;
}

void DeleteLiveLazyPullStreamInfoConfigRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

std::string DeleteLiveLazyPullStreamInfoConfigRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DeleteLiveLazyPullStreamInfoConfigRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DeleteLiveLazyPullStreamInfoConfigRequest::getCallerType()const
{
	return callerType_;
}

void DeleteLiveLazyPullStreamInfoConfigRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

bool DeleteLiveLazyPullStreamInfoConfigRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DeleteLiveLazyPullStreamInfoConfigRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DeleteLiveLazyPullStreamInfoConfigRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DeleteLiveLazyPullStreamInfoConfigRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

std::string DeleteLiveLazyPullStreamInfoConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteLiveLazyPullStreamInfoConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

bool DeleteLiveLazyPullStreamInfoConfigRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DeleteLiveLazyPullStreamInfoConfigRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DeleteLiveLazyPullStreamInfoConfigRequest::getAppName()const
{
	return appName_;
}

void DeleteLiveLazyPullStreamInfoConfigRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setParameter("AppName", appName);
}

std::string DeleteLiveLazyPullStreamInfoConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteLiveLazyPullStreamInfoConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DeleteLiveLazyPullStreamInfoConfigRequest::getRegionId()const
{
	return regionId_;
}

void DeleteLiveLazyPullStreamInfoConfigRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DeleteLiveLazyPullStreamInfoConfigRequest::getRequestId()const
{
	return requestId_;
}

void DeleteLiveLazyPullStreamInfoConfigRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string DeleteLiveLazyPullStreamInfoConfigRequest::getRequestContent()const
{
	return requestContent_;
}

void DeleteLiveLazyPullStreamInfoConfigRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string DeleteLiveLazyPullStreamInfoConfigRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DeleteLiveLazyPullStreamInfoConfigRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DeleteLiveLazyPullStreamInfoConfigRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DeleteLiveLazyPullStreamInfoConfigRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DeleteLiveLazyPullStreamInfoConfigRequest::getCallerUid()const
{
	return callerUid_;
}

void DeleteLiveLazyPullStreamInfoConfigRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

