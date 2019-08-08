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

#include <alibabacloud/live/model/DescribeLiveDomainRealTimeBpsDataRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveDomainRealTimeBpsDataRequest;

DescribeLiveDomainRealTimeBpsDataRequest::DescribeLiveDomainRealTimeBpsDataRequest() :
	RpcServiceRequest("live", "2016-11-01", "DescribeLiveDomainRealTimeBpsData")
{}

DescribeLiveDomainRealTimeBpsDataRequest::~DescribeLiveDomainRealTimeBpsDataRequest()
{}

long DescribeLiveDomainRealTimeBpsDataRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeLiveDomainRealTimeBpsDataRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeLiveDomainRealTimeBpsDataRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeLiveDomainRealTimeBpsDataRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeLiveDomainRealTimeBpsDataRequest::getLocationNameEn()const
{
	return locationNameEn_;
}

void DescribeLiveDomainRealTimeBpsDataRequest::setLocationNameEn(const std::string& locationNameEn)
{
	locationNameEn_ = locationNameEn;
	setCoreParameter("LocationNameEn", locationNameEn);
}

std::string DescribeLiveDomainRealTimeBpsDataRequest::getIspNameEn()const
{
	return ispNameEn_;
}

void DescribeLiveDomainRealTimeBpsDataRequest::setIspNameEn(const std::string& ispNameEn)
{
	ispNameEn_ = ispNameEn;
	setCoreParameter("IspNameEn", ispNameEn);
}

std::string DescribeLiveDomainRealTimeBpsDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeLiveDomainRealTimeBpsDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeLiveDomainRealTimeBpsDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeLiveDomainRealTimeBpsDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeLiveDomainRealTimeBpsDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeLiveDomainRealTimeBpsDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeLiveDomainRealTimeBpsDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeLiveDomainRealTimeBpsDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeLiveDomainRealTimeBpsDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeLiveDomainRealTimeBpsDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeLiveDomainRealTimeBpsDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeLiveDomainRealTimeBpsDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeLiveDomainRealTimeBpsDataRequest::getRegionId()const
{
	return regionId_;
}

void DescribeLiveDomainRealTimeBpsDataRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeLiveDomainRealTimeBpsDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeLiveDomainRealTimeBpsDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeLiveDomainRealTimeBpsDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeLiveDomainRealTimeBpsDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeLiveDomainRealTimeBpsDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeLiveDomainRealTimeBpsDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeLiveDomainRealTimeBpsDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeLiveDomainRealTimeBpsDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeLiveDomainRealTimeBpsDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeLiveDomainRealTimeBpsDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeLiveDomainRealTimeBpsDataRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeLiveDomainRealTimeBpsDataRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DescribeLiveDomainRealTimeBpsDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeLiveDomainRealTimeBpsDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeLiveDomainRealTimeBpsDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeLiveDomainRealTimeBpsDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeLiveDomainRealTimeBpsDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeLiveDomainRealTimeBpsDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeLiveDomainRealTimeBpsDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLiveDomainRealTimeBpsDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeLiveDomainRealTimeBpsDataRequest::getVersion()const
{
	return version_;
}

void DescribeLiveDomainRealTimeBpsDataRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DescribeLiveDomainRealTimeBpsDataRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeLiveDomainRealTimeBpsDataRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeLiveDomainRealTimeBpsDataRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeLiveDomainRealTimeBpsDataRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeLiveDomainRealTimeBpsDataRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeLiveDomainRealTimeBpsDataRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeLiveDomainRealTimeBpsDataRequest::getRequestId()const
{
	return requestId_;
}

void DescribeLiveDomainRealTimeBpsDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeLiveDomainRealTimeBpsDataRequest::getInterval()const
{
	return interval_;
}

void DescribeLiveDomainRealTimeBpsDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setCoreParameter("Interval", interval);
}

std::string DescribeLiveDomainRealTimeBpsDataRequest::getFields()const
{
	return fields_;
}

void DescribeLiveDomainRealTimeBpsDataRequest::setFields(const std::string& fields)
{
	fields_ = fields;
	setCoreParameter("Fields", fields);
}

