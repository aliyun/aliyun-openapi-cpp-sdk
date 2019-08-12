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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainRealTimeBpsDataRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnDomainRealTimeBpsDataRequest;

DescribeDcdnDomainRealTimeBpsDataRequest::DescribeDcdnDomainRealTimeBpsDataRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnDomainRealTimeBpsData")
{}

DescribeDcdnDomainRealTimeBpsDataRequest::~DescribeDcdnDomainRealTimeBpsDataRequest()
{}

long DescribeDcdnDomainRealTimeBpsDataRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDcdnDomainRealTimeBpsDataRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long DescribeDcdnDomainRealTimeBpsDataRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeDcdnDomainRealTimeBpsDataRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeDcdnDomainRealTimeBpsDataRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeDcdnDomainRealTimeBpsDataRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string DescribeDcdnDomainRealTimeBpsDataRequest::getLocationNameEn()const
{
	return locationNameEn_;
}

void DescribeDcdnDomainRealTimeBpsDataRequest::setLocationNameEn(const std::string& locationNameEn)
{
	locationNameEn_ = locationNameEn;
	setCoreParameter("LocationNameEn", locationNameEn);
}

std::string DescribeDcdnDomainRealTimeBpsDataRequest::getIspNameEn()const
{
	return ispNameEn_;
}

void DescribeDcdnDomainRealTimeBpsDataRequest::setIspNameEn(const std::string& ispNameEn)
{
	ispNameEn_ = ispNameEn;
	setCoreParameter("IspNameEn", ispNameEn);
}

std::string DescribeDcdnDomainRealTimeBpsDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDcdnDomainRealTimeBpsDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeDcdnDomainRealTimeBpsDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeDcdnDomainRealTimeBpsDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeDcdnDomainRealTimeBpsDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeDcdnDomainRealTimeBpsDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeDcdnDomainRealTimeBpsDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeDcdnDomainRealTimeBpsDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeDcdnDomainRealTimeBpsDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDcdnDomainRealTimeBpsDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDcdnDomainRealTimeBpsDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDcdnDomainRealTimeBpsDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeDcdnDomainRealTimeBpsDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeDcdnDomainRealTimeBpsDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeDcdnDomainRealTimeBpsDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeDcdnDomainRealTimeBpsDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeDcdnDomainRealTimeBpsDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeDcdnDomainRealTimeBpsDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeDcdnDomainRealTimeBpsDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeDcdnDomainRealTimeBpsDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeDcdnDomainRealTimeBpsDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeDcdnDomainRealTimeBpsDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeDcdnDomainRealTimeBpsDataRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeDcdnDomainRealTimeBpsDataRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DescribeDcdnDomainRealTimeBpsDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDcdnDomainRealTimeBpsDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeDcdnDomainRealTimeBpsDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDcdnDomainRealTimeBpsDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeDcdnDomainRealTimeBpsDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeDcdnDomainRealTimeBpsDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeDcdnDomainRealTimeBpsDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDcdnDomainRealTimeBpsDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeDcdnDomainRealTimeBpsDataRequest::getVersion()const
{
	return version_;
}

void DescribeDcdnDomainRealTimeBpsDataRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DescribeDcdnDomainRealTimeBpsDataRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeDcdnDomainRealTimeBpsDataRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

bool DescribeDcdnDomainRealTimeBpsDataRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeDcdnDomainRealTimeBpsDataRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

bool DescribeDcdnDomainRealTimeBpsDataRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeDcdnDomainRealTimeBpsDataRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string DescribeDcdnDomainRealTimeBpsDataRequest::getRequestId()const
{
	return requestId_;
}

void DescribeDcdnDomainRealTimeBpsDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeDcdnDomainRealTimeBpsDataRequest::getInterval()const
{
	return interval_;
}

void DescribeDcdnDomainRealTimeBpsDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setCoreParameter("Interval", interval);
}

std::string DescribeDcdnDomainRealTimeBpsDataRequest::getFields()const
{
	return fields_;
}

void DescribeDcdnDomainRealTimeBpsDataRequest::setFields(const std::string& fields)
{
	fields_ = fields;
	setCoreParameter("Fields", fields);
}

