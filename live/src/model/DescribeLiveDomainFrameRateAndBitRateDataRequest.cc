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
	setCoreParameter("CallerParentId", callerParentId);
}

std::string DescribeLiveDomainFrameRateAndBitRateDataRequest::getCatalog()const
{
	return catalog_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setCatalog(const std::string& catalog)
{
	catalog_ = catalog;
	setCoreParameter("Catalog", std::to_string(catalog));
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
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string DescribeLiveDomainFrameRateAndBitRateDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string DescribeLiveDomainFrameRateAndBitRateDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string DescribeLiveDomainFrameRateAndBitRateDataRequest::getEagleEyeRpcId()const
{
	return eagleEyeRpcId_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setEagleEyeRpcId(const std::string& eagleEyeRpcId)
{
	eagleEyeRpcId_ = eagleEyeRpcId;
	setCoreParameter("EagleEyeRpcId", std::to_string(eagleEyeRpcId));
}

std::string DescribeLiveDomainFrameRateAndBitRateDataRequest::getQueryTime()const
{
	return queryTime_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setQueryTime(const std::string& queryTime)
{
	queryTime_ = queryTime;
	setCoreParameter("QueryTime", std::to_string(queryTime));
}

std::string DescribeLiveDomainFrameRateAndBitRateDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string DescribeLiveDomainFrameRateAndBitRateDataRequest::getEagleEyeTraceId()const
{
	return eagleEyeTraceId_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setEagleEyeTraceId(const std::string& eagleEyeTraceId)
{
	eagleEyeTraceId_ = eagleEyeTraceId;
	setCoreParameter("EagleEyeTraceId", std::to_string(eagleEyeTraceId));
}

std::string DescribeLiveDomainFrameRateAndBitRateDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DescribeLiveDomainFrameRateAndBitRateDataRequest::getRegionId()const
{
	return regionId_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DescribeLiveDomainFrameRateAndBitRateDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string DescribeLiveDomainFrameRateAndBitRateDataRequest::getHost()const
{
	return host_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setHost(const std::string& host)
{
	host_ = host;
	setCoreParameter("Host", std::to_string(host));
}

std::string DescribeLiveDomainFrameRateAndBitRateDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string DescribeLiveDomainFrameRateAndBitRateDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long DescribeLiveDomainFrameRateAndBitRateDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeLiveDomainFrameRateAndBitRateDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string DescribeLiveDomainFrameRateAndBitRateDataRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", std::to_string(popProduct));
}

std::string DescribeLiveDomainFrameRateAndBitRateDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", std::to_string(domainName));
}

std::string DescribeLiveDomainFrameRateAndBitRateDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long DescribeLiveDomainFrameRateAndBitRateDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeLiveDomainFrameRateAndBitRateDataRequest::getVersion()const
{
	return version_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", std::to_string(version));
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
	setCoreParameter("ServiceCode", std::to_string(serviceCode));
}

std::string DescribeLiveDomainFrameRateAndBitRateDataRequest::getRequestId()const
{
	return requestId_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string DescribeLiveDomainFrameRateAndBitRateDataRequest::getEagleEyeUserData()const
{
	return eagleEyeUserData_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setEagleEyeUserData(const std::string& eagleEyeUserData)
{
	eagleEyeUserData_ = eagleEyeUserData;
	setCoreParameter("EagleEyeUserData", std::to_string(eagleEyeUserData));
}

std::string DescribeLiveDomainFrameRateAndBitRateDataRequest::getFields()const
{
	return fields_;
}

void DescribeLiveDomainFrameRateAndBitRateDataRequest::setFields(const std::string& fields)
{
	fields_ = fields;
	setCoreParameter("Fields", std::to_string(fields));
}

