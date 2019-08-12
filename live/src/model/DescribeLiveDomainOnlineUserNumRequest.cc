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

#include <alibabacloud/live/model/DescribeLiveDomainOnlineUserNumRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveDomainOnlineUserNumRequest;

DescribeLiveDomainOnlineUserNumRequest::DescribeLiveDomainOnlineUserNumRequest() :
	RpcServiceRequest("live", "2016-11-01", "DescribeLiveDomainOnlineUserNum")
{}

DescribeLiveDomainOnlineUserNumRequest::~DescribeLiveDomainOnlineUserNumRequest()
{}

long DescribeLiveDomainOnlineUserNumRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeLiveDomainOnlineUserNumRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeLiveDomainOnlineUserNumRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeLiveDomainOnlineUserNumRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeLiveDomainOnlineUserNumRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeLiveDomainOnlineUserNumRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string DescribeLiveDomainOnlineUserNumRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeLiveDomainOnlineUserNumRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string DescribeLiveDomainOnlineUserNumRequest::getCallerType()const
{
	return callerType_;
}

void DescribeLiveDomainOnlineUserNumRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string DescribeLiveDomainOnlineUserNumRequest::getEagleEyeRpcId()const
{
	return eagleEyeRpcId_;
}

void DescribeLiveDomainOnlineUserNumRequest::setEagleEyeRpcId(const std::string& eagleEyeRpcId)
{
	eagleEyeRpcId_ = eagleEyeRpcId;
	setCoreParameter("EagleEyeRpcId", std::to_string(eagleEyeRpcId));
}

std::string DescribeLiveDomainOnlineUserNumRequest::getQueryTime()const
{
	return queryTime_;
}

void DescribeLiveDomainOnlineUserNumRequest::setQueryTime(const std::string& queryTime)
{
	queryTime_ = queryTime;
	setCoreParameter("QueryTime", std::to_string(queryTime));
}

std::string DescribeLiveDomainOnlineUserNumRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeLiveDomainOnlineUserNumRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string DescribeLiveDomainOnlineUserNumRequest::getEagleEyeTraceId()const
{
	return eagleEyeTraceId_;
}

void DescribeLiveDomainOnlineUserNumRequest::setEagleEyeTraceId(const std::string& eagleEyeTraceId)
{
	eagleEyeTraceId_ = eagleEyeTraceId;
	setCoreParameter("EagleEyeTraceId", std::to_string(eagleEyeTraceId));
}

std::string DescribeLiveDomainOnlineUserNumRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeLiveDomainOnlineUserNumRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DescribeLiveDomainOnlineUserNumRequest::getRegionId()const
{
	return regionId_;
}

void DescribeLiveDomainOnlineUserNumRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DescribeLiveDomainOnlineUserNumRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeLiveDomainOnlineUserNumRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string DescribeLiveDomainOnlineUserNumRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeLiveDomainOnlineUserNumRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string DescribeLiveDomainOnlineUserNumRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeLiveDomainOnlineUserNumRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long DescribeLiveDomainOnlineUserNumRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeLiveDomainOnlineUserNumRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeLiveDomainOnlineUserNumRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeLiveDomainOnlineUserNumRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string DescribeLiveDomainOnlineUserNumRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeLiveDomainOnlineUserNumRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", std::to_string(popProduct));
}

std::string DescribeLiveDomainOnlineUserNumRequest::getDomainName()const
{
	return domainName_;
}

void DescribeLiveDomainOnlineUserNumRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", std::to_string(domainName));
}

std::string DescribeLiveDomainOnlineUserNumRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeLiveDomainOnlineUserNumRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long DescribeLiveDomainOnlineUserNumRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLiveDomainOnlineUserNumRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeLiveDomainOnlineUserNumRequest::getVersion()const
{
	return version_;
}

void DescribeLiveDomainOnlineUserNumRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", std::to_string(version));
}

bool DescribeLiveDomainOnlineUserNumRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeLiveDomainOnlineUserNumRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeLiveDomainOnlineUserNumRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeLiveDomainOnlineUserNumRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeLiveDomainOnlineUserNumRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeLiveDomainOnlineUserNumRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeLiveDomainOnlineUserNumRequest::getServiceCode()const
{
	return serviceCode_;
}

void DescribeLiveDomainOnlineUserNumRequest::setServiceCode(const std::string& serviceCode)
{
	serviceCode_ = serviceCode;
	setCoreParameter("ServiceCode", std::to_string(serviceCode));
}

std::string DescribeLiveDomainOnlineUserNumRequest::getRequestId()const
{
	return requestId_;
}

void DescribeLiveDomainOnlineUserNumRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string DescribeLiveDomainOnlineUserNumRequest::getEagleEyeUserData()const
{
	return eagleEyeUserData_;
}

void DescribeLiveDomainOnlineUserNumRequest::setEagleEyeUserData(const std::string& eagleEyeUserData)
{
	eagleEyeUserData_ = eagleEyeUserData;
	setCoreParameter("EagleEyeUserData", std::to_string(eagleEyeUserData));
}

