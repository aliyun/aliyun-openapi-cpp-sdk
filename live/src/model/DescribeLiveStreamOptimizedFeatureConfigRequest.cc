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

#include <alibabacloud/live/model/DescribeLiveStreamOptimizedFeatureConfigRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveStreamOptimizedFeatureConfigRequest;

DescribeLiveStreamOptimizedFeatureConfigRequest::DescribeLiveStreamOptimizedFeatureConfigRequest() :
	RpcServiceRequest("live", "2016-11-01", "DescribeLiveStreamOptimizedFeatureConfig")
{}

DescribeLiveStreamOptimizedFeatureConfigRequest::~DescribeLiveStreamOptimizedFeatureConfigRequest()
{}

long DescribeLiveStreamOptimizedFeatureConfigRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeLiveStreamOptimizedFeatureConfigRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeLiveStreamOptimizedFeatureConfigRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeLiveStreamOptimizedFeatureConfigRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeLiveStreamOptimizedFeatureConfigRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeLiveStreamOptimizedFeatureConfigRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeLiveStreamOptimizedFeatureConfigRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeLiveStreamOptimizedFeatureConfigRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeLiveStreamOptimizedFeatureConfigRequest::getCallerType()const
{
	return callerType_;
}

void DescribeLiveStreamOptimizedFeatureConfigRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeLiveStreamOptimizedFeatureConfigRequest::getEagleEyeRpcId()const
{
	return eagleEyeRpcId_;
}

void DescribeLiveStreamOptimizedFeatureConfigRequest::setEagleEyeRpcId(const std::string& eagleEyeRpcId)
{
	eagleEyeRpcId_ = eagleEyeRpcId;
	setCoreParameter("EagleEyeRpcId", eagleEyeRpcId);
}

std::string DescribeLiveStreamOptimizedFeatureConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeLiveStreamOptimizedFeatureConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeLiveStreamOptimizedFeatureConfigRequest::getEagleEyeTraceId()const
{
	return eagleEyeTraceId_;
}

void DescribeLiveStreamOptimizedFeatureConfigRequest::setEagleEyeTraceId(const std::string& eagleEyeTraceId)
{
	eagleEyeTraceId_ = eagleEyeTraceId;
	setCoreParameter("EagleEyeTraceId", eagleEyeTraceId);
}

std::string DescribeLiveStreamOptimizedFeatureConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeLiveStreamOptimizedFeatureConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeLiveStreamOptimizedFeatureConfigRequest::getRegionId()const
{
	return regionId_;
}

void DescribeLiveStreamOptimizedFeatureConfigRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeLiveStreamOptimizedFeatureConfigRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeLiveStreamOptimizedFeatureConfigRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeLiveStreamOptimizedFeatureConfigRequest::getConfigName()const
{
	return configName_;
}

void DescribeLiveStreamOptimizedFeatureConfigRequest::setConfigName(const std::string& configName)
{
	configName_ = configName;
	setCoreParameter("ConfigName", configName);
}

std::string DescribeLiveStreamOptimizedFeatureConfigRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeLiveStreamOptimizedFeatureConfigRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeLiveStreamOptimizedFeatureConfigRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeLiveStreamOptimizedFeatureConfigRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeLiveStreamOptimizedFeatureConfigRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeLiveStreamOptimizedFeatureConfigRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeLiveStreamOptimizedFeatureConfigRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeLiveStreamOptimizedFeatureConfigRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeLiveStreamOptimizedFeatureConfigRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeLiveStreamOptimizedFeatureConfigRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DescribeLiveStreamOptimizedFeatureConfigRequest::getDomainName()const
{
	return domainName_;
}

void DescribeLiveStreamOptimizedFeatureConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeLiveStreamOptimizedFeatureConfigRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeLiveStreamOptimizedFeatureConfigRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeLiveStreamOptimizedFeatureConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLiveStreamOptimizedFeatureConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeLiveStreamOptimizedFeatureConfigRequest::getVersion()const
{
	return version_;
}

void DescribeLiveStreamOptimizedFeatureConfigRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DescribeLiveStreamOptimizedFeatureConfigRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeLiveStreamOptimizedFeatureConfigRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeLiveStreamOptimizedFeatureConfigRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeLiveStreamOptimizedFeatureConfigRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeLiveStreamOptimizedFeatureConfigRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeLiveStreamOptimizedFeatureConfigRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeLiveStreamOptimizedFeatureConfigRequest::getServiceCode()const
{
	return serviceCode_;
}

void DescribeLiveStreamOptimizedFeatureConfigRequest::setServiceCode(const std::string& serviceCode)
{
	serviceCode_ = serviceCode;
	setCoreParameter("ServiceCode", serviceCode);
}

std::string DescribeLiveStreamOptimizedFeatureConfigRequest::getRequestId()const
{
	return requestId_;
}

void DescribeLiveStreamOptimizedFeatureConfigRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeLiveStreamOptimizedFeatureConfigRequest::getEagleEyeUserData()const
{
	return eagleEyeUserData_;
}

void DescribeLiveStreamOptimizedFeatureConfigRequest::setEagleEyeUserData(const std::string& eagleEyeUserData)
{
	eagleEyeUserData_ = eagleEyeUserData;
	setCoreParameter("EagleEyeUserData", eagleEyeUserData);
}

