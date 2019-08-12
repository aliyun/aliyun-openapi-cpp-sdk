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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainRealTimeHttpCodeDataRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnDomainRealTimeHttpCodeDataRequest;

DescribeDcdnDomainRealTimeHttpCodeDataRequest::DescribeDcdnDomainRealTimeHttpCodeDataRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnDomainRealTimeHttpCodeData")
{}

DescribeDcdnDomainRealTimeHttpCodeDataRequest::~DescribeDcdnDomainRealTimeHttpCodeDataRequest()
{}

long DescribeDcdnDomainRealTimeHttpCodeDataRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDcdnDomainRealTimeHttpCodeDataRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DescribeDcdnDomainRealTimeHttpCodeDataRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeDcdnDomainRealTimeHttpCodeDataRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeDcdnDomainRealTimeHttpCodeDataRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeDcdnDomainRealTimeHttpCodeDataRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeDcdnDomainRealTimeHttpCodeDataRequest::getLocationNameEn()const
{
	return locationNameEn_;
}

void DescribeDcdnDomainRealTimeHttpCodeDataRequest::setLocationNameEn(const std::string& locationNameEn)
{
	locationNameEn_ = locationNameEn;
	setCoreParameter("LocationNameEn", locationNameEn);
}

std::string DescribeDcdnDomainRealTimeHttpCodeDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDcdnDomainRealTimeHttpCodeDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeDcdnDomainRealTimeHttpCodeDataRequest::getIspNameEn()const
{
	return ispNameEn_;
}

void DescribeDcdnDomainRealTimeHttpCodeDataRequest::setIspNameEn(const std::string& ispNameEn)
{
	ispNameEn_ = ispNameEn;
	setCoreParameter("IspNameEn", ispNameEn);
}

std::string DescribeDcdnDomainRealTimeHttpCodeDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeDcdnDomainRealTimeHttpCodeDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeDcdnDomainRealTimeHttpCodeDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeDcdnDomainRealTimeHttpCodeDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeDcdnDomainRealTimeHttpCodeDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeDcdnDomainRealTimeHttpCodeDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeDcdnDomainRealTimeHttpCodeDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDcdnDomainRealTimeHttpCodeDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDcdnDomainRealTimeHttpCodeDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDcdnDomainRealTimeHttpCodeDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeDcdnDomainRealTimeHttpCodeDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeDcdnDomainRealTimeHttpCodeDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeDcdnDomainRealTimeHttpCodeDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeDcdnDomainRealTimeHttpCodeDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeDcdnDomainRealTimeHttpCodeDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeDcdnDomainRealTimeHttpCodeDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeDcdnDomainRealTimeHttpCodeDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeDcdnDomainRealTimeHttpCodeDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeDcdnDomainRealTimeHttpCodeDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeDcdnDomainRealTimeHttpCodeDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeDcdnDomainRealTimeHttpCodeDataRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeDcdnDomainRealTimeHttpCodeDataRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DescribeDcdnDomainRealTimeHttpCodeDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDcdnDomainRealTimeHttpCodeDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeDcdnDomainRealTimeHttpCodeDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDcdnDomainRealTimeHttpCodeDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeDcdnDomainRealTimeHttpCodeDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeDcdnDomainRealTimeHttpCodeDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeDcdnDomainRealTimeHttpCodeDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDcdnDomainRealTimeHttpCodeDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDcdnDomainRealTimeHttpCodeDataRequest::getVersion()const
{
	return version_;
}

void DescribeDcdnDomainRealTimeHttpCodeDataRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DescribeDcdnDomainRealTimeHttpCodeDataRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeDcdnDomainRealTimeHttpCodeDataRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeDcdnDomainRealTimeHttpCodeDataRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeDcdnDomainRealTimeHttpCodeDataRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeDcdnDomainRealTimeHttpCodeDataRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeDcdnDomainRealTimeHttpCodeDataRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeDcdnDomainRealTimeHttpCodeDataRequest::getRequestId()const
{
	return requestId_;
}

void DescribeDcdnDomainRealTimeHttpCodeDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeDcdnDomainRealTimeHttpCodeDataRequest::getInterval()const
{
	return interval_;
}

void DescribeDcdnDomainRealTimeHttpCodeDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setCoreParameter("Interval", interval);
}

std::string DescribeDcdnDomainRealTimeHttpCodeDataRequest::getFields()const
{
	return fields_;
}

void DescribeDcdnDomainRealTimeHttpCodeDataRequest::setFields(const std::string& fields)
{
	fields_ = fields;
	setCoreParameter("Fields", fields);
}

