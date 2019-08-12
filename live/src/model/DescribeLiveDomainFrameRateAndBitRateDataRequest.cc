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

#include <alibabacloud/live/model/DescribeLiveDomainFrameRateAndBitRateDataRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveDomainFrameRateAndBitRateDataRequest;

DescribeLiveDomainFrameRateAndBitRateDataRequest::DescribeLiveDomainFrameRateAndBitRateDataRequest() :
	RpcServiceRequest("live", "2016-11-01", "DescribeLiveDomainFrameRateAndBitRateData")
{}

DescribeLiveDomainFrameRateAndBitRateDataRequest::~DescribeLiveDomainFrameRateAndBitRateDataRequest()
{}

long DescribeLiveDomainFrameRateAndBitRateDataRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

std::string DescribeLiveDomainFrameRateAndBitRateDataRequest::getCatalog()const
{
	return catalog_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setCatalog(const std::string& catalog)
{
	catalog_ = catalog;
	setCoreParameter("Catalog", catalog);
}

bool DescribeLiveDomainFrameRateAndBitRateDataRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeLiveDomainFrameRateAndBitRateDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeLiveDomainFrameRateAndBitRateDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeLiveDomainFrameRateAndBitRateDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeLiveDomainFrameRateAndBitRateDataRequest::getEagleEyeRpcId()const
{
	return eagleEyeRpcId_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setEagleEyeRpcId(const std::string& eagleEyeRpcId)
{
	eagleEyeRpcId_ = eagleEyeRpcId;
	setCoreParameter("EagleEyeRpcId", eagleEyeRpcId);
}

std::string DescribeLiveDomainFrameRateAndBitRateDataRequest::getQueryTime()const
{
	return queryTime_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setQueryTime(const std::string& queryTime)
{
	queryTime_ = queryTime;
	setCoreParameter("QueryTime", queryTime);
}

std::string DescribeLiveDomainFrameRateAndBitRateDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeLiveDomainFrameRateAndBitRateDataRequest::getEagleEyeTraceId()const
{
	return eagleEyeTraceId_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setEagleEyeTraceId(const std::string& eagleEyeTraceId)
{
	eagleEyeTraceId_ = eagleEyeTraceId;
	setCoreParameter("EagleEyeTraceId", eagleEyeTraceId);
}

std::string DescribeLiveDomainFrameRateAndBitRateDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeLiveDomainFrameRateAndBitRateDataRequest::getRegionId()const
{
	return regionId_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeLiveDomainFrameRateAndBitRateDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeLiveDomainFrameRateAndBitRateDataRequest::getHost()const
{
	return host_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setHost(const std::string& host)
{
	host_ = host;
	setCoreParameter("Host", host);
}

std::string DescribeLiveDomainFrameRateAndBitRateDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeLiveDomainFrameRateAndBitRateDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeLiveDomainFrameRateAndBitRateDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeLiveDomainFrameRateAndBitRateDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeLiveDomainFrameRateAndBitRateDataRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DescribeLiveDomainFrameRateAndBitRateDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeLiveDomainFrameRateAndBitRateDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeLiveDomainFrameRateAndBitRateDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeLiveDomainFrameRateAndBitRateDataRequest::getVersion()const
{
	return version_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DescribeLiveDomainFrameRateAndBitRateDataRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeLiveDomainFrameRateAndBitRateDataRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeLiveDomainFrameRateAndBitRateDataRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeLiveDomainFrameRateAndBitRateDataRequest::getServiceCode()const
{
	return serviceCode_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setServiceCode(const std::string& serviceCode)
{
	serviceCode_ = serviceCode;
	setCoreParameter("ServiceCode", serviceCode);
}

std::string DescribeLiveDomainFrameRateAndBitRateDataRequest::getRequestId()const
{
	return requestId_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeLiveDomainFrameRateAndBitRateDataRequest::getEagleEyeUserData()const
{
	return eagleEyeUserData_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setEagleEyeUserData(const std::string& eagleEyeUserData)
{
	eagleEyeUserData_ = eagleEyeUserData;
	setCoreParameter("EagleEyeUserData", eagleEyeUserData);
}

std::string DescribeLiveDomainFrameRateAndBitRateDataRequest::getFields()const
{
	return fields_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setFields(const std::string& fields)
{
	fields_ = fields;
	setCoreParameter("Fields", fields);
}

