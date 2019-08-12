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

#include <alibabacloud/scdn/model/DescribeScdnDomainBpsDataRequest.h>

using AlibabaCloud::Scdn::Model::DescribeScdnDomainBpsDataRequest;

DescribeScdnDomainBpsDataRequest::DescribeScdnDomainBpsDataRequest() :
	RpcServiceRequest("scdn", "2017-11-15", "DescribeScdnDomainBpsData")
{}

DescribeScdnDomainBpsDataRequest::~DescribeScdnDomainBpsDataRequest()
{}

long DescribeScdnDomainBpsDataRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeScdnDomainBpsDataRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeScdnDomainBpsDataRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeScdnDomainBpsDataRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string DescribeScdnDomainBpsDataRequest::getLocationNameEn()const
{
	return locationNameEn_;
}

void DescribeScdnDomainBpsDataRequest::setLocationNameEn(const std::string& locationNameEn)
{
	locationNameEn_ = locationNameEn;
	setCoreParameter("LocationNameEn", locationNameEn);
}

std::string DescribeScdnDomainBpsDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeScdnDomainBpsDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeScdnDomainBpsDataRequest::getIspNameEn()const
{
	return ispNameEn_;
}

void DescribeScdnDomainBpsDataRequest::setIspNameEn(const std::string& ispNameEn)
{
	ispNameEn_ = ispNameEn;
	setCoreParameter("IspNameEn", ispNameEn);
}

std::string DescribeScdnDomainBpsDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeScdnDomainBpsDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeScdnDomainBpsDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeScdnDomainBpsDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeScdnDomainBpsDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeScdnDomainBpsDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeScdnDomainBpsDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeScdnDomainBpsDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeScdnDomainBpsDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeScdnDomainBpsDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeScdnDomainBpsDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeScdnDomainBpsDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeScdnDomainBpsDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeScdnDomainBpsDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeScdnDomainBpsDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeScdnDomainBpsDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeScdnDomainBpsDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeScdnDomainBpsDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeScdnDomainBpsDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeScdnDomainBpsDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeScdnDomainBpsDataRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeScdnDomainBpsDataRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DescribeScdnDomainBpsDataRequest::getProduct()const
{
	return product_;
}

void DescribeScdnDomainBpsDataRequest::setProduct(const std::string& product)
{
	product_ = product;
	setCoreParameter("Product", product);
}

std::string DescribeScdnDomainBpsDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeScdnDomainBpsDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeScdnDomainBpsDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeScdnDomainBpsDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeScdnDomainBpsDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeScdnDomainBpsDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeScdnDomainBpsDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeScdnDomainBpsDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeScdnDomainBpsDataRequest::getVersion()const
{
	return version_;
}

void DescribeScdnDomainBpsDataRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DescribeScdnDomainBpsDataRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeScdnDomainBpsDataRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

bool DescribeScdnDomainBpsDataRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeScdnDomainBpsDataRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

bool DescribeScdnDomainBpsDataRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeScdnDomainBpsDataRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string DescribeScdnDomainBpsDataRequest::getRequestId()const
{
	return requestId_;
}

void DescribeScdnDomainBpsDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeScdnDomainBpsDataRequest::getInterval()const
{
	return interval_;
}

void DescribeScdnDomainBpsDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setCoreParameter("Interval", interval);
}

