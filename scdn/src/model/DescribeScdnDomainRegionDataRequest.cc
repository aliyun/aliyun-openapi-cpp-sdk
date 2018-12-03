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

#include <alibabacloud/scdn/model/DescribeScdnDomainRegionDataRequest.h>

using AlibabaCloud::Scdn::Model::DescribeScdnDomainRegionDataRequest;

DescribeScdnDomainRegionDataRequest::DescribeScdnDomainRegionDataRequest() :
	RpcServiceRequest("scdn", "2017-11-15", "DescribeScdnDomainRegionData")
{}

DescribeScdnDomainRegionDataRequest::~DescribeScdnDomainRegionDataRequest()
{}

long DescribeScdnDomainRegionDataRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeScdnDomainRegionDataRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeScdnDomainRegionDataRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeScdnDomainRegionDataRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DescribeScdnDomainRegionDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeScdnDomainRegionDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeScdnDomainRegionDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeScdnDomainRegionDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeScdnDomainRegionDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeScdnDomainRegionDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeScdnDomainRegionDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeScdnDomainRegionDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string DescribeScdnDomainRegionDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeScdnDomainRegionDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeScdnDomainRegionDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeScdnDomainRegionDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeScdnDomainRegionDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeScdnDomainRegionDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string DescribeScdnDomainRegionDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeScdnDomainRegionDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeScdnDomainRegionDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeScdnDomainRegionDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeScdnDomainRegionDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeScdnDomainRegionDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeScdnDomainRegionDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeScdnDomainRegionDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeScdnDomainRegionDataRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeScdnDomainRegionDataRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string DescribeScdnDomainRegionDataRequest::getProduct()const
{
	return product_;
}

void DescribeScdnDomainRegionDataRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

std::string DescribeScdnDomainRegionDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeScdnDomainRegionDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeScdnDomainRegionDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeScdnDomainRegionDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeScdnDomainRegionDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeScdnDomainRegionDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeScdnDomainRegionDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeScdnDomainRegionDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeScdnDomainRegionDataRequest::getVersion()const
{
	return version_;
}

void DescribeScdnDomainRegionDataRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool DescribeScdnDomainRegionDataRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeScdnDomainRegionDataRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DescribeScdnDomainRegionDataRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeScdnDomainRegionDataRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool DescribeScdnDomainRegionDataRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeScdnDomainRegionDataRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DescribeScdnDomainRegionDataRequest::getRequestId()const
{
	return requestId_;
}

void DescribeScdnDomainRegionDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

