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

#include <alibabacloud/cdn/model/DescribeDomainRealTimeBpsDataRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainRealTimeBpsDataRequest;

DescribeDomainRealTimeBpsDataRequest::DescribeDomainRealTimeBpsDataRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeDomainRealTimeBpsData")
{}

DescribeDomainRealTimeBpsDataRequest::~DescribeDomainRealTimeBpsDataRequest()
{}

long DescribeDomainRealTimeBpsDataRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeDomainRealTimeBpsDataRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeDomainRealTimeBpsDataRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeDomainRealTimeBpsDataRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DescribeDomainRealTimeBpsDataRequest::getLocationNameEn()const
{
	return locationNameEn_;
}

void DescribeDomainRealTimeBpsDataRequest::setLocationNameEn(const std::string& locationNameEn)
{
	locationNameEn_ = locationNameEn;
	setParameter("LocationNameEn", locationNameEn);
}

std::string DescribeDomainRealTimeBpsDataRequest::getIspNameEn()const
{
	return ispNameEn_;
}

void DescribeDomainRealTimeBpsDataRequest::setIspNameEn(const std::string& ispNameEn)
{
	ispNameEn_ = ispNameEn;
	setParameter("IspNameEn", ispNameEn);
}

std::string DescribeDomainRealTimeBpsDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainRealTimeBpsDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeDomainRealTimeBpsDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeDomainRealTimeBpsDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeDomainRealTimeBpsDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeDomainRealTimeBpsDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeDomainRealTimeBpsDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeDomainRealTimeBpsDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string DescribeDomainRealTimeBpsDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDomainRealTimeBpsDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDomainRealTimeBpsDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDomainRealTimeBpsDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeDomainRealTimeBpsDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeDomainRealTimeBpsDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string DescribeDomainRealTimeBpsDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeDomainRealTimeBpsDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeDomainRealTimeBpsDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeDomainRealTimeBpsDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeDomainRealTimeBpsDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeDomainRealTimeBpsDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeDomainRealTimeBpsDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeDomainRealTimeBpsDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeDomainRealTimeBpsDataRequest::getProduct()const
{
	return product_;
}

void DescribeDomainRealTimeBpsDataRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

std::string DescribeDomainRealTimeBpsDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainRealTimeBpsDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeDomainRealTimeBpsDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDomainRealTimeBpsDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeDomainRealTimeBpsDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeDomainRealTimeBpsDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeDomainRealTimeBpsDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainRealTimeBpsDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDomainRealTimeBpsDataRequest::getVersion()const
{
	return version_;
}

void DescribeDomainRealTimeBpsDataRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool DescribeDomainRealTimeBpsDataRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeDomainRealTimeBpsDataRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DescribeDomainRealTimeBpsDataRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeDomainRealTimeBpsDataRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool DescribeDomainRealTimeBpsDataRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeDomainRealTimeBpsDataRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DescribeDomainRealTimeBpsDataRequest::getRequestId()const
{
	return requestId_;
}

void DescribeDomainRealTimeBpsDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

