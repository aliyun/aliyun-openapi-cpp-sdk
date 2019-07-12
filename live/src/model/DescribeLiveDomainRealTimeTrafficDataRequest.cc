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

#include <alibabacloud/live/model/DescribeLiveDomainRealTimeTrafficDataRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveDomainRealTimeTrafficDataRequest;

DescribeLiveDomainRealTimeTrafficDataRequest::DescribeLiveDomainRealTimeTrafficDataRequest() :
	RpcServiceRequest("live", "2016-11-01", "DescribeLiveDomainRealTimeTrafficData")
{}

DescribeLiveDomainRealTimeTrafficDataRequest::~DescribeLiveDomainRealTimeTrafficDataRequest()
{}

long DescribeLiveDomainRealTimeTrafficDataRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeLiveDomainRealTimeTrafficDataRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeLiveDomainRealTimeTrafficDataRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeLiveDomainRealTimeTrafficDataRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeLiveDomainRealTimeTrafficDataRequest::getLocationNameEn()const
{
	return locationNameEn_;
}

void DescribeLiveDomainRealTimeTrafficDataRequest::setLocationNameEn(const std::string& locationNameEn)
{
	locationNameEn_ = locationNameEn;
	setCoreParameter("LocationNameEn", locationNameEn);
}

std::string DescribeLiveDomainRealTimeTrafficDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeLiveDomainRealTimeTrafficDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeLiveDomainRealTimeTrafficDataRequest::getIspNameEn()const
{
	return ispNameEn_;
}

void DescribeLiveDomainRealTimeTrafficDataRequest::setIspNameEn(const std::string& ispNameEn)
{
	ispNameEn_ = ispNameEn;
	setCoreParameter("IspNameEn", ispNameEn);
}

std::string DescribeLiveDomainRealTimeTrafficDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeLiveDomainRealTimeTrafficDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeLiveDomainRealTimeTrafficDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeLiveDomainRealTimeTrafficDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeLiveDomainRealTimeTrafficDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeLiveDomainRealTimeTrafficDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeLiveDomainRealTimeTrafficDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeLiveDomainRealTimeTrafficDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeLiveDomainRealTimeTrafficDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeLiveDomainRealTimeTrafficDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeLiveDomainRealTimeTrafficDataRequest::getRegionId()const
{
	return regionId_;
}

void DescribeLiveDomainRealTimeTrafficDataRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeLiveDomainRealTimeTrafficDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeLiveDomainRealTimeTrafficDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeLiveDomainRealTimeTrafficDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeLiveDomainRealTimeTrafficDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeLiveDomainRealTimeTrafficDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeLiveDomainRealTimeTrafficDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeLiveDomainRealTimeTrafficDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeLiveDomainRealTimeTrafficDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeLiveDomainRealTimeTrafficDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeLiveDomainRealTimeTrafficDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeLiveDomainRealTimeTrafficDataRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeLiveDomainRealTimeTrafficDataRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DescribeLiveDomainRealTimeTrafficDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeLiveDomainRealTimeTrafficDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeLiveDomainRealTimeTrafficDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeLiveDomainRealTimeTrafficDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeLiveDomainRealTimeTrafficDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeLiveDomainRealTimeTrafficDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeLiveDomainRealTimeTrafficDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLiveDomainRealTimeTrafficDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeLiveDomainRealTimeTrafficDataRequest::getVersion()const
{
	return version_;
}

void DescribeLiveDomainRealTimeTrafficDataRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DescribeLiveDomainRealTimeTrafficDataRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeLiveDomainRealTimeTrafficDataRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeLiveDomainRealTimeTrafficDataRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeLiveDomainRealTimeTrafficDataRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeLiveDomainRealTimeTrafficDataRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeLiveDomainRealTimeTrafficDataRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeLiveDomainRealTimeTrafficDataRequest::getRequestId()const
{
	return requestId_;
}

void DescribeLiveDomainRealTimeTrafficDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeLiveDomainRealTimeTrafficDataRequest::getInterval()const
{
	return interval_;
}

void DescribeLiveDomainRealTimeTrafficDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setCoreParameter("Interval", interval);
}

std::string DescribeLiveDomainRealTimeTrafficDataRequest::getFields()const
{
	return fields_;
}

void DescribeLiveDomainRealTimeTrafficDataRequest::setFields(const std::string& fields)
{
	fields_ = fields;
	setCoreParameter("Fields", fields);
}

