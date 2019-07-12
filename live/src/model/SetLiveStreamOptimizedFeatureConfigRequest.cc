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

#include <alibabacloud/live/model/SetLiveStreamOptimizedFeatureConfigRequest.h>

using AlibabaCloud::Live::Model::SetLiveStreamOptimizedFeatureConfigRequest;

SetLiveStreamOptimizedFeatureConfigRequest::SetLiveStreamOptimizedFeatureConfigRequest() :
	RpcServiceRequest("live", "2016-11-01", "SetLiveStreamOptimizedFeatureConfig")
{}

SetLiveStreamOptimizedFeatureConfigRequest::~SetLiveStreamOptimizedFeatureConfigRequest()
{}

long SetLiveStreamOptimizedFeatureConfigRequest::getCallerParentId()const
{
	return callerParentId_;
}

void SetLiveStreamOptimizedFeatureConfigRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool SetLiveStreamOptimizedFeatureConfigRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void SetLiveStreamOptimizedFeatureConfigRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string SetLiveStreamOptimizedFeatureConfigRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void SetLiveStreamOptimizedFeatureConfigRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string SetLiveStreamOptimizedFeatureConfigRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void SetLiveStreamOptimizedFeatureConfigRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string SetLiveStreamOptimizedFeatureConfigRequest::getCallerType()const
{
	return callerType_;
}

void SetLiveStreamOptimizedFeatureConfigRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string SetLiveStreamOptimizedFeatureConfigRequest::getEagleEyeRpcId()const
{
	return eagleEyeRpcId_;
}

void SetLiveStreamOptimizedFeatureConfigRequest::setEagleEyeRpcId(const std::string& eagleEyeRpcId)
{
	eagleEyeRpcId_ = eagleEyeRpcId;
	setCoreParameter("EagleEyeRpcId", eagleEyeRpcId);
}

std::string SetLiveStreamOptimizedFeatureConfigRequest::getConfigStatus()const
{
	return configStatus_;
}

void SetLiveStreamOptimizedFeatureConfigRequest::setConfigStatus(const std::string& configStatus)
{
	configStatus_ = configStatus;
	setCoreParameter("ConfigStatus", configStatus);
}

std::string SetLiveStreamOptimizedFeatureConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetLiveStreamOptimizedFeatureConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string SetLiveStreamOptimizedFeatureConfigRequest::getEagleEyeTraceId()const
{
	return eagleEyeTraceId_;
}

void SetLiveStreamOptimizedFeatureConfigRequest::setEagleEyeTraceId(const std::string& eagleEyeTraceId)
{
	eagleEyeTraceId_ = eagleEyeTraceId;
	setCoreParameter("EagleEyeTraceId", eagleEyeTraceId);
}

std::string SetLiveStreamOptimizedFeatureConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetLiveStreamOptimizedFeatureConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string SetLiveStreamOptimizedFeatureConfigRequest::getRegionId()const
{
	return regionId_;
}

void SetLiveStreamOptimizedFeatureConfigRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string SetLiveStreamOptimizedFeatureConfigRequest::getRequestContent()const
{
	return requestContent_;
}

void SetLiveStreamOptimizedFeatureConfigRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string SetLiveStreamOptimizedFeatureConfigRequest::getConfigName()const
{
	return configName_;
}

void SetLiveStreamOptimizedFeatureConfigRequest::setConfigName(const std::string& configName)
{
	configName_ = configName;
	setCoreParameter("ConfigName", configName);
}

std::string SetLiveStreamOptimizedFeatureConfigRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void SetLiveStreamOptimizedFeatureConfigRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string SetLiveStreamOptimizedFeatureConfigRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void SetLiveStreamOptimizedFeatureConfigRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long SetLiveStreamOptimizedFeatureConfigRequest::getCallerUid()const
{
	return callerUid_;
}

void SetLiveStreamOptimizedFeatureConfigRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string SetLiveStreamOptimizedFeatureConfigRequest::getApp_ip()const
{
	return app_ip_;
}

void SetLiveStreamOptimizedFeatureConfigRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string SetLiveStreamOptimizedFeatureConfigRequest::getPopProduct()const
{
	return popProduct_;
}

void SetLiveStreamOptimizedFeatureConfigRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string SetLiveStreamOptimizedFeatureConfigRequest::getDomainName()const
{
	return domainName_;
}

void SetLiveStreamOptimizedFeatureConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string SetLiveStreamOptimizedFeatureConfigRequest::getConfigValue()const
{
	return configValue_;
}

void SetLiveStreamOptimizedFeatureConfigRequest::setConfigValue(const std::string& configValue)
{
	configValue_ = configValue;
	setCoreParameter("ConfigValue", configValue);
}

std::string SetLiveStreamOptimizedFeatureConfigRequest::getCallerBid()const
{
	return callerBid_;
}

void SetLiveStreamOptimizedFeatureConfigRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long SetLiveStreamOptimizedFeatureConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetLiveStreamOptimizedFeatureConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string SetLiveStreamOptimizedFeatureConfigRequest::getVersion()const
{
	return version_;
}

void SetLiveStreamOptimizedFeatureConfigRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool SetLiveStreamOptimizedFeatureConfigRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void SetLiveStreamOptimizedFeatureConfigRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool SetLiveStreamOptimizedFeatureConfigRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void SetLiveStreamOptimizedFeatureConfigRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool SetLiveStreamOptimizedFeatureConfigRequest::getSecurity_transport()const
{
	return security_transport_;
}

void SetLiveStreamOptimizedFeatureConfigRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string SetLiveStreamOptimizedFeatureConfigRequest::getServiceCode()const
{
	return serviceCode_;
}

void SetLiveStreamOptimizedFeatureConfigRequest::setServiceCode(const std::string& serviceCode)
{
	serviceCode_ = serviceCode;
	setCoreParameter("ServiceCode", serviceCode);
}

std::string SetLiveStreamOptimizedFeatureConfigRequest::getRequestId()const
{
	return requestId_;
}

void SetLiveStreamOptimizedFeatureConfigRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string SetLiveStreamOptimizedFeatureConfigRequest::getEagleEyeUserData()const
{
	return eagleEyeUserData_;
}

void SetLiveStreamOptimizedFeatureConfigRequest::setEagleEyeUserData(const std::string& eagleEyeUserData)
{
	eagleEyeUserData_ = eagleEyeUserData;
	setCoreParameter("EagleEyeUserData", eagleEyeUserData);
}

