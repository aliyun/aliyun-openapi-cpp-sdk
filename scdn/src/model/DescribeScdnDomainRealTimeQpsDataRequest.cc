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

#include <alibabacloud/scdn/model/DescribeScdnDomainRealTimeQpsDataRequest.h>

using AlibabaCloud::Scdn::Model::DescribeScdnDomainRealTimeQpsDataRequest;

DescribeScdnDomainRealTimeQpsDataRequest::DescribeScdnDomainRealTimeQpsDataRequest() :
	RpcServiceRequest("scdn", "2017-11-15", "DescribeScdnDomainRealTimeQpsData")
{}

DescribeScdnDomainRealTimeQpsDataRequest::~DescribeScdnDomainRealTimeQpsDataRequest()
{}

long DescribeScdnDomainRealTimeQpsDataRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeScdnDomainRealTimeQpsDataRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeScdnDomainRealTimeQpsDataRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeScdnDomainRealTimeQpsDataRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeScdnDomainRealTimeQpsDataRequest::getLocationNameEn()const
{
	return locationNameEn_;
}

void DescribeScdnDomainRealTimeQpsDataRequest::setLocationNameEn(const std::string& locationNameEn)
{
	locationNameEn_ = locationNameEn;
	setCoreParameter("LocationNameEn", std::to_string(locationNameEn));
}

std::string DescribeScdnDomainRealTimeQpsDataRequest::getIspNameEn()const
{
	return ispNameEn_;
}

void DescribeScdnDomainRealTimeQpsDataRequest::setIspNameEn(const std::string& ispNameEn)
{
	ispNameEn_ = ispNameEn;
	setCoreParameter("IspNameEn", std::to_string(ispNameEn));
}

std::string DescribeScdnDomainRealTimeQpsDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeScdnDomainRealTimeQpsDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

std::string DescribeScdnDomainRealTimeQpsDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeScdnDomainRealTimeQpsDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string DescribeScdnDomainRealTimeQpsDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeScdnDomainRealTimeQpsDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string DescribeScdnDomainRealTimeQpsDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeScdnDomainRealTimeQpsDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string DescribeScdnDomainRealTimeQpsDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeScdnDomainRealTimeQpsDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string DescribeScdnDomainRealTimeQpsDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeScdnDomainRealTimeQpsDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DescribeScdnDomainRealTimeQpsDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeScdnDomainRealTimeQpsDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string DescribeScdnDomainRealTimeQpsDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeScdnDomainRealTimeQpsDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string DescribeScdnDomainRealTimeQpsDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeScdnDomainRealTimeQpsDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long DescribeScdnDomainRealTimeQpsDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeScdnDomainRealTimeQpsDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeScdnDomainRealTimeQpsDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeScdnDomainRealTimeQpsDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string DescribeScdnDomainRealTimeQpsDataRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeScdnDomainRealTimeQpsDataRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", std::to_string(popProduct));
}

std::string DescribeScdnDomainRealTimeQpsDataRequest::getProduct()const
{
	return product_;
}

void DescribeScdnDomainRealTimeQpsDataRequest::setProduct(const std::string& product)
{
	product_ = product;
	setCoreParameter("Product", std::to_string(product));
}

std::string DescribeScdnDomainRealTimeQpsDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeScdnDomainRealTimeQpsDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", std::to_string(domainName));
}

std::string DescribeScdnDomainRealTimeQpsDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeScdnDomainRealTimeQpsDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string DescribeScdnDomainRealTimeQpsDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeScdnDomainRealTimeQpsDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long DescribeScdnDomainRealTimeQpsDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeScdnDomainRealTimeQpsDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeScdnDomainRealTimeQpsDataRequest::getVersion()const
{
	return version_;
}

void DescribeScdnDomainRealTimeQpsDataRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", std::to_string(version));
}

bool DescribeScdnDomainRealTimeQpsDataRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeScdnDomainRealTimeQpsDataRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeScdnDomainRealTimeQpsDataRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeScdnDomainRealTimeQpsDataRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeScdnDomainRealTimeQpsDataRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeScdnDomainRealTimeQpsDataRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeScdnDomainRealTimeQpsDataRequest::getRequestId()const
{
	return requestId_;
}

void DescribeScdnDomainRealTimeQpsDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

