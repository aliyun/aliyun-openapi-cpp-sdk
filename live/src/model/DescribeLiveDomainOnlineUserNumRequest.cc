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
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
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
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeLiveDomainOnlineUserNumRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeLiveDomainOnlineUserNumRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeLiveDomainOnlineUserNumRequest::getCallerType()const
{
	return callerType_;
}

void DescribeLiveDomainOnlineUserNumRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeLiveDomainOnlineUserNumRequest::getEagleEyeRpcId()const
{
	return eagleEyeRpcId_;
}

void DescribeLiveDomainOnlineUserNumRequest::setEagleEyeRpcId(const std::string& eagleEyeRpcId)
{
	eagleEyeRpcId_ = eagleEyeRpcId;
	setCoreParameter("EagleEyeRpcId", eagleEyeRpcId);
}

std::string DescribeLiveDomainOnlineUserNumRequest::getQueryTime()const
{
	return queryTime_;
}

void DescribeLiveDomainOnlineUserNumRequest::setQueryTime(const std::string& queryTime)
{
	queryTime_ = queryTime;
	setCoreParameter("QueryTime", queryTime);
}

std::string DescribeLiveDomainOnlineUserNumRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeLiveDomainOnlineUserNumRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeLiveDomainOnlineUserNumRequest::getEagleEyeTraceId()const
{
	return eagleEyeTraceId_;
}

void DescribeLiveDomainOnlineUserNumRequest::setEagleEyeTraceId(const std::string& eagleEyeTraceId)
{
	eagleEyeTraceId_ = eagleEyeTraceId;
	setCoreParameter("EagleEyeTraceId", eagleEyeTraceId);
}

std::string DescribeLiveDomainOnlineUserNumRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeLiveDomainOnlineUserNumRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeLiveDomainOnlineUserNumRequest::getRegionId()const
{
	return regionId_;
}

void DescribeLiveDomainOnlineUserNumRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeLiveDomainOnlineUserNumRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeLiveDomainOnlineUserNumRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeLiveDomainOnlineUserNumRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeLiveDomainOnlineUserNumRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeLiveDomainOnlineUserNumRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeLiveDomainOnlineUserNumRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeLiveDomainOnlineUserNumRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeLiveDomainOnlineUserNumRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeLiveDomainOnlineUserNumRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeLiveDomainOnlineUserNumRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeLiveDomainOnlineUserNumRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeLiveDomainOnlineUserNumRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DescribeLiveDomainOnlineUserNumRequest::getDomainName()const
{
	return domainName_;
}

void DescribeLiveDomainOnlineUserNumRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeLiveDomainOnlineUserNumRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeLiveDomainOnlineUserNumRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeLiveDomainOnlineUserNumRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLiveDomainOnlineUserNumRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeLiveDomainOnlineUserNumRequest::getVersion()const
{
	return version_;
}

void DescribeLiveDomainOnlineUserNumRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
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
	setCoreParameter("ServiceCode", serviceCode);
}

std::string DescribeLiveDomainOnlineUserNumRequest::getRequestId()const
{
	return requestId_;
}

void DescribeLiveDomainOnlineUserNumRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeLiveDomainOnlineUserNumRequest::getEagleEyeUserData()const
{
	return eagleEyeUserData_;
}

void DescribeLiveDomainOnlineUserNumRequest::setEagleEyeUserData(const std::string& eagleEyeUserData)
{
	eagleEyeUserData_ = eagleEyeUserData;
	setCoreParameter("EagleEyeUserData", eagleEyeUserData);
}

