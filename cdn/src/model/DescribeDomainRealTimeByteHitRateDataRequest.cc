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

#include <alibabacloud/cdn/model/DescribeDomainRealTimeByteHitRateDataRequest.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainRealTimeByteHitRateDataRequest::DescribeDomainRealTimeByteHitRateDataRequest() :
	CdnRequest("DescribeDomainRealTimeByteHitRateData")
{}

DescribeDomainRealTimeByteHitRateDataRequest::~DescribeDomainRealTimeByteHitRateDataRequest()
{}

std::string DescribeDomainRealTimeByteHitRateDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeDomainRealTimeByteHitRateDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeDomainRealTimeByteHitRateDataRequest::getProduct()const
{
	return product_;
}

void DescribeDomainRealTimeByteHitRateDataRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

long DescribeDomainRealTimeByteHitRateDataRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeDomainRealTimeByteHitRateDataRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

std::string DescribeDomainRealTimeByteHitRateDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainRealTimeByteHitRateDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

bool DescribeDomainRealTimeByteHitRateDataRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeDomainRealTimeByteHitRateDataRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DescribeDomainRealTimeByteHitRateDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDomainRealTimeByteHitRateDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeDomainRealTimeByteHitRateDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeDomainRealTimeByteHitRateDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

std::string DescribeDomainRealTimeByteHitRateDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainRealTimeByteHitRateDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

long DescribeDomainRealTimeByteHitRateDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainRealTimeByteHitRateDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDomainRealTimeByteHitRateDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeDomainRealTimeByteHitRateDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeDomainRealTimeByteHitRateDataRequest::getVersion()const
{
	return version_;
}

void DescribeDomainRealTimeByteHitRateDataRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

std::string DescribeDomainRealTimeByteHitRateDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeDomainRealTimeByteHitRateDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeDomainRealTimeByteHitRateDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeDomainRealTimeByteHitRateDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

bool DescribeDomainRealTimeByteHitRateDataRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeDomainRealTimeByteHitRateDataRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DescribeDomainRealTimeByteHitRateDataRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeDomainRealTimeByteHitRateDataRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

std::string DescribeDomainRealTimeByteHitRateDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDomainRealTimeByteHitRateDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

bool DescribeDomainRealTimeByteHitRateDataRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeDomainRealTimeByteHitRateDataRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DescribeDomainRealTimeByteHitRateDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDomainRealTimeByteHitRateDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeDomainRealTimeByteHitRateDataRequest::getRequestId()const
{
	return requestId_;
}

void DescribeDomainRealTimeByteHitRateDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string DescribeDomainRealTimeByteHitRateDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeDomainRealTimeByteHitRateDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string DescribeDomainRealTimeByteHitRateDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeDomainRealTimeByteHitRateDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeDomainRealTimeByteHitRateDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeDomainRealTimeByteHitRateDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeDomainRealTimeByteHitRateDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeDomainRealTimeByteHitRateDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

