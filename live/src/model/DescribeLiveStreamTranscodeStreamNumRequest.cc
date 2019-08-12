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

#include <alibabacloud/live/model/DescribeLiveStreamTranscodeStreamNumRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveStreamTranscodeStreamNumRequest;

DescribeLiveStreamTranscodeStreamNumRequest::DescribeLiveStreamTranscodeStreamNumRequest() :
	RpcServiceRequest("live", "2016-11-01", "DescribeLiveStreamTranscodeStreamNum")
{}

DescribeLiveStreamTranscodeStreamNumRequest::~DescribeLiveStreamTranscodeStreamNumRequest()
{}

long DescribeLiveStreamTranscodeStreamNumRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeLiveStreamTranscodeStreamNumRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeLiveStreamTranscodeStreamNumRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeLiveStreamTranscodeStreamNumRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeLiveStreamTranscodeStreamNumRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeLiveStreamTranscodeStreamNumRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string DescribeLiveStreamTranscodeStreamNumRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeLiveStreamTranscodeStreamNumRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string DescribeLiveStreamTranscodeStreamNumRequest::getCallerType()const
{
	return callerType_;
}

void DescribeLiveStreamTranscodeStreamNumRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string DescribeLiveStreamTranscodeStreamNumRequest::getEagleEyeRpcId()const
{
	return eagleEyeRpcId_;
}

void DescribeLiveStreamTranscodeStreamNumRequest::setEagleEyeRpcId(const std::string& eagleEyeRpcId)
{
	eagleEyeRpcId_ = eagleEyeRpcId;
	setCoreParameter("EagleEyeRpcId", std::to_string(eagleEyeRpcId));
}

std::string DescribeLiveStreamTranscodeStreamNumRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeLiveStreamTranscodeStreamNumRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string DescribeLiveStreamTranscodeStreamNumRequest::getEagleEyeTraceId()const
{
	return eagleEyeTraceId_;
}

void DescribeLiveStreamTranscodeStreamNumRequest::setEagleEyeTraceId(const std::string& eagleEyeTraceId)
{
	eagleEyeTraceId_ = eagleEyeTraceId;
	setCoreParameter("EagleEyeTraceId", std::to_string(eagleEyeTraceId));
}

std::string DescribeLiveStreamTranscodeStreamNumRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeLiveStreamTranscodeStreamNumRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DescribeLiveStreamTranscodeStreamNumRequest::getRegionId()const
{
	return regionId_;
}

void DescribeLiveStreamTranscodeStreamNumRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DescribeLiveStreamTranscodeStreamNumRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeLiveStreamTranscodeStreamNumRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string DescribeLiveStreamTranscodeStreamNumRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeLiveStreamTranscodeStreamNumRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string DescribeLiveStreamTranscodeStreamNumRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeLiveStreamTranscodeStreamNumRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long DescribeLiveStreamTranscodeStreamNumRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeLiveStreamTranscodeStreamNumRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeLiveStreamTranscodeStreamNumRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeLiveStreamTranscodeStreamNumRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string DescribeLiveStreamTranscodeStreamNumRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeLiveStreamTranscodeStreamNumRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", std::to_string(popProduct));
}

std::string DescribeLiveStreamTranscodeStreamNumRequest::getDomainName()const
{
	return domainName_;
}

void DescribeLiveStreamTranscodeStreamNumRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", std::to_string(domainName));
}

std::string DescribeLiveStreamTranscodeStreamNumRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeLiveStreamTranscodeStreamNumRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long DescribeLiveStreamTranscodeStreamNumRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLiveStreamTranscodeStreamNumRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeLiveStreamTranscodeStreamNumRequest::getVersion()const
{
	return version_;
}

void DescribeLiveStreamTranscodeStreamNumRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", std::to_string(version));
}

bool DescribeLiveStreamTranscodeStreamNumRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeLiveStreamTranscodeStreamNumRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeLiveStreamTranscodeStreamNumRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeLiveStreamTranscodeStreamNumRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeLiveStreamTranscodeStreamNumRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeLiveStreamTranscodeStreamNumRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeLiveStreamTranscodeStreamNumRequest::getServiceCode()const
{
	return serviceCode_;
}

void DescribeLiveStreamTranscodeStreamNumRequest::setServiceCode(const std::string& serviceCode)
{
	serviceCode_ = serviceCode;
	setCoreParameter("ServiceCode", std::to_string(serviceCode));
}

std::string DescribeLiveStreamTranscodeStreamNumRequest::getRequestId()const
{
	return requestId_;
}

void DescribeLiveStreamTranscodeStreamNumRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string DescribeLiveStreamTranscodeStreamNumRequest::getEagleEyeUserData()const
{
	return eagleEyeUserData_;
}

void DescribeLiveStreamTranscodeStreamNumRequest::setEagleEyeUserData(const std::string& eagleEyeUserData)
{
	eagleEyeUserData_ = eagleEyeUserData;
	setCoreParameter("EagleEyeUserData", std::to_string(eagleEyeUserData));
}

