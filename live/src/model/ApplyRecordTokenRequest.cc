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

#include <alibabacloud/live/model/ApplyRecordTokenRequest.h>

using AlibabaCloud::Live::Model::ApplyRecordTokenRequest;

ApplyRecordTokenRequest::ApplyRecordTokenRequest() :
	RpcServiceRequest("live", "2016-11-01", "ApplyRecordToken")
{}

ApplyRecordTokenRequest::~ApplyRecordTokenRequest()
{}

std::string ApplyRecordTokenRequest::getApp_ip()const
{
	return app_ip_;
}

void ApplyRecordTokenRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string ApplyRecordTokenRequest::getPopProduct()const
{
	return popProduct_;
}

void ApplyRecordTokenRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

long ApplyRecordTokenRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ApplyRecordTokenRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool ApplyRecordTokenRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ApplyRecordTokenRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string ApplyRecordTokenRequest::getCallerBid()const
{
	return callerBid_;
}

void ApplyRecordTokenRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long ApplyRecordTokenRequest::getOwnerId()const
{
	return ownerId_;
}

void ApplyRecordTokenRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ApplyRecordTokenRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ApplyRecordTokenRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string ApplyRecordTokenRequest::getVersion()const
{
	return version_;
}

void ApplyRecordTokenRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

std::string ApplyRecordTokenRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ApplyRecordTokenRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string ApplyRecordTokenRequest::getCallerType()const
{
	return callerType_;
}

void ApplyRecordTokenRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

bool ApplyRecordTokenRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ApplyRecordTokenRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool ApplyRecordTokenRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ApplyRecordTokenRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

std::string ApplyRecordTokenRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ApplyRecordTokenRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

bool ApplyRecordTokenRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ApplyRecordTokenRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string ApplyRecordTokenRequest::getSecurityToken()const
{
	return securityToken_;
}

void ApplyRecordTokenRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ApplyRecordTokenRequest::getRegionId()const
{
	return regionId_;
}

void ApplyRecordTokenRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ApplyRecordTokenRequest::getRequestId()const
{
	return requestId_;
}

void ApplyRecordTokenRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string ApplyRecordTokenRequest::getRequestContent()const
{
	return requestContent_;
}

void ApplyRecordTokenRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string ApplyRecordTokenRequest::getAppId()const
{
	return appId_;
}

void ApplyRecordTokenRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", appId);
}

std::string ApplyRecordTokenRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ApplyRecordTokenRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string ApplyRecordTokenRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ApplyRecordTokenRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long ApplyRecordTokenRequest::getCallerUid()const
{
	return callerUid_;
}

void ApplyRecordTokenRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

