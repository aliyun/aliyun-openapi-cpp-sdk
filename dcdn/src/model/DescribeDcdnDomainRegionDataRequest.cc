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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainRegionDataRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnDomainRegionDataRequest;

DescribeDcdnDomainRegionDataRequest::DescribeDcdnDomainRegionDataRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnDomainRegionData")
{}

DescribeDcdnDomainRegionDataRequest::~DescribeDcdnDomainRegionDataRequest()
{}

long DescribeDcdnDomainRegionDataRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeDcdnDomainRegionDataRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeDcdnDomainRegionDataRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeDcdnDomainRegionDataRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string DescribeDcdnDomainRegionDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDcdnDomainRegionDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeDcdnDomainRegionDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeDcdnDomainRegionDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeDcdnDomainRegionDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeDcdnDomainRegionDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeDcdnDomainRegionDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeDcdnDomainRegionDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeDcdnDomainRegionDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDcdnDomainRegionDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDcdnDomainRegionDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDcdnDomainRegionDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeDcdnDomainRegionDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeDcdnDomainRegionDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeDcdnDomainRegionDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeDcdnDomainRegionDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeDcdnDomainRegionDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeDcdnDomainRegionDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeDcdnDomainRegionDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeDcdnDomainRegionDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeDcdnDomainRegionDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeDcdnDomainRegionDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeDcdnDomainRegionDataRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeDcdnDomainRegionDataRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DescribeDcdnDomainRegionDataRequest::getProduct()const
{
	return product_;
}

void DescribeDcdnDomainRegionDataRequest::setProduct(const std::string& product)
{
	product_ = product;
	setCoreParameter("Product", product);
}

std::string DescribeDcdnDomainRegionDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDcdnDomainRegionDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeDcdnDomainRegionDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDcdnDomainRegionDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeDcdnDomainRegionDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeDcdnDomainRegionDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeDcdnDomainRegionDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDcdnDomainRegionDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeDcdnDomainRegionDataRequest::getVersion()const
{
	return version_;
}

void DescribeDcdnDomainRegionDataRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DescribeDcdnDomainRegionDataRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeDcdnDomainRegionDataRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

bool DescribeDcdnDomainRegionDataRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeDcdnDomainRegionDataRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

bool DescribeDcdnDomainRegionDataRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeDcdnDomainRegionDataRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string DescribeDcdnDomainRegionDataRequest::getRequestId()const
{
	return requestId_;
}

void DescribeDcdnDomainRegionDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

