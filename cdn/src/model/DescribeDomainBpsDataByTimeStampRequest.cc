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

#include <alibabacloud/cdn/model/DescribeDomainBpsDataByTimeStampRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainBpsDataByTimeStampRequest;

DescribeDomainBpsDataByTimeStampRequest::DescribeDomainBpsDataByTimeStampRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeDomainBpsDataByTimeStamp")
{}

DescribeDomainBpsDataByTimeStampRequest::~DescribeDomainBpsDataByTimeStampRequest()
{}

long DescribeDomainBpsDataByTimeStampRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDomainBpsDataByTimeStampRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long DescribeDomainBpsDataByTimeStampRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeDomainBpsDataByTimeStampRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

std::string DescribeDomainBpsDataByTimeStampRequest::getLocationNames()const
{
	return locationNames_;
}

void DescribeDomainBpsDataByTimeStampRequest::setLocationNames(const std::string& locationNames)
{
	locationNames_ = locationNames;
	setCoreParameter("LocationNames", std::to_string(locationNames));
}

bool DescribeDomainBpsDataByTimeStampRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeDomainBpsDataByTimeStampRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeDomainBpsDataByTimeStampRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeDomainBpsDataByTimeStampRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string DescribeDomainBpsDataByTimeStampRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeDomainBpsDataByTimeStampRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string DescribeDomainBpsDataByTimeStampRequest::getCallerType()const
{
	return callerType_;
}

void DescribeDomainBpsDataByTimeStampRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string DescribeDomainBpsDataByTimeStampRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDomainBpsDataByTimeStampRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string DescribeDomainBpsDataByTimeStampRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDomainBpsDataByTimeStampRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DescribeDomainBpsDataByTimeStampRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeDomainBpsDataByTimeStampRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string DescribeDomainBpsDataByTimeStampRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeDomainBpsDataByTimeStampRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string DescribeDomainBpsDataByTimeStampRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeDomainBpsDataByTimeStampRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long DescribeDomainBpsDataByTimeStampRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeDomainBpsDataByTimeStampRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeDomainBpsDataByTimeStampRequest::getIspNames()const
{
	return ispNames_;
}

void DescribeDomainBpsDataByTimeStampRequest::setIspNames(const std::string& ispNames)
{
	ispNames_ = ispNames;
	setCoreParameter("IspNames", std::to_string(ispNames));
}

std::string DescribeDomainBpsDataByTimeStampRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeDomainBpsDataByTimeStampRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string DescribeDomainBpsDataByTimeStampRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeDomainBpsDataByTimeStampRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", std::to_string(popProduct));
}

std::string DescribeDomainBpsDataByTimeStampRequest::getProduct()const
{
	return product_;
}

void DescribeDomainBpsDataByTimeStampRequest::setProduct(const std::string& product)
{
	product_ = product;
	setCoreParameter("Product", std::to_string(product));
}

std::string DescribeDomainBpsDataByTimeStampRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainBpsDataByTimeStampRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", std::to_string(domainName));
}

std::string DescribeDomainBpsDataByTimeStampRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeDomainBpsDataByTimeStampRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long DescribeDomainBpsDataByTimeStampRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainBpsDataByTimeStampRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeDomainBpsDataByTimeStampRequest::getVersion()const
{
	return version_;
}

void DescribeDomainBpsDataByTimeStampRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", std::to_string(version));
}

bool DescribeDomainBpsDataByTimeStampRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeDomainBpsDataByTimeStampRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeDomainBpsDataByTimeStampRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeDomainBpsDataByTimeStampRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeDomainBpsDataByTimeStampRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeDomainBpsDataByTimeStampRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeDomainBpsDataByTimeStampRequest::getRequestId()const
{
	return requestId_;
}

void DescribeDomainBpsDataByTimeStampRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string DescribeDomainBpsDataByTimeStampRequest::getTimePoint()const
{
	return timePoint_;
}

void DescribeDomainBpsDataByTimeStampRequest::setTimePoint(const std::string& timePoint)
{
	timePoint_ = timePoint;
	setCoreParameter("TimePoint", std::to_string(timePoint));
}

