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

#include <alibabacloud/live/model/DescribeLiveStreamDelayConfigRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveStreamDelayConfigRequest;

DescribeLiveStreamDelayConfigRequest::DescribeLiveStreamDelayConfigRequest() :
	RpcServiceRequest("live", "2016-11-01", "DescribeLiveStreamDelayConfig")
{}

DescribeLiveStreamDelayConfigRequest::~DescribeLiveStreamDelayConfigRequest()
{}

long DescribeLiveStreamDelayConfigRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeLiveStreamDelayConfigRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeLiveStreamDelayConfigRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeLiveStreamDelayConfigRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeLiveStreamDelayConfigRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeLiveStreamDelayConfigRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeLiveStreamDelayConfigRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeLiveStreamDelayConfigRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeLiveStreamDelayConfigRequest::getCallerType()const
{
	return callerType_;
}

void DescribeLiveStreamDelayConfigRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeLiveStreamDelayConfigRequest::getEagleEyeRpcId()const
{
	return eagleEyeRpcId_;
}

void DescribeLiveStreamDelayConfigRequest::setEagleEyeRpcId(const std::string& eagleEyeRpcId)
{
	eagleEyeRpcId_ = eagleEyeRpcId;
	setCoreParameter("EagleEyeRpcId", eagleEyeRpcId);
}

std::string DescribeLiveStreamDelayConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeLiveStreamDelayConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeLiveStreamDelayConfigRequest::getEagleEyeTraceId()const
{
	return eagleEyeTraceId_;
}

void DescribeLiveStreamDelayConfigRequest::setEagleEyeTraceId(const std::string& eagleEyeTraceId)
{
	eagleEyeTraceId_ = eagleEyeTraceId;
	setCoreParameter("EagleEyeTraceId", eagleEyeTraceId);
}

std::string DescribeLiveStreamDelayConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeLiveStreamDelayConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeLiveStreamDelayConfigRequest::getRegionId()const
{
	return regionId_;
}

void DescribeLiveStreamDelayConfigRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeLiveStreamDelayConfigRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeLiveStreamDelayConfigRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeLiveStreamDelayConfigRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeLiveStreamDelayConfigRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeLiveStreamDelayConfigRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeLiveStreamDelayConfigRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeLiveStreamDelayConfigRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeLiveStreamDelayConfigRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeLiveStreamDelayConfigRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeLiveStreamDelayConfigRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeLiveStreamDelayConfigRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeLiveStreamDelayConfigRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DescribeLiveStreamDelayConfigRequest::getDomainName()const
{
	return domainName_;
}

void DescribeLiveStreamDelayConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeLiveStreamDelayConfigRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeLiveStreamDelayConfigRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeLiveStreamDelayConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLiveStreamDelayConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeLiveStreamDelayConfigRequest::getVersion()const
{
	return version_;
}

void DescribeLiveStreamDelayConfigRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DescribeLiveStreamDelayConfigRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeLiveStreamDelayConfigRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeLiveStreamDelayConfigRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeLiveStreamDelayConfigRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeLiveStreamDelayConfigRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeLiveStreamDelayConfigRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeLiveStreamDelayConfigRequest::getRequestId()const
{
	return requestId_;
}

void DescribeLiveStreamDelayConfigRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeLiveStreamDelayConfigRequest::getEagleEyeUserData()const
{
	return eagleEyeUserData_;
}

void DescribeLiveStreamDelayConfigRequest::setEagleEyeUserData(const std::string& eagleEyeUserData)
{
	eagleEyeUserData_ = eagleEyeUserData;
	setCoreParameter("EagleEyeUserData", eagleEyeUserData);
}

