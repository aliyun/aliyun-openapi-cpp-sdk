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

#include <alibabacloud/cdn/model/DescribeDomainRealTimeReqHitRateDataRequest.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainRealTimeReqHitRateDataRequest::DescribeDomainRealTimeReqHitRateDataRequest() :
	CdnRequest("DescribeDomainRealTimeReqHitRateData")
{}

DescribeDomainRealTimeReqHitRateDataRequest::~DescribeDomainRealTimeReqHitRateDataRequest()
{}

std::string DescribeDomainRealTimeReqHitRateDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeDomainRealTimeReqHitRateDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeDomainRealTimeReqHitRateDataRequest::getProduct()const
{
	return product_;
}

void DescribeDomainRealTimeReqHitRateDataRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

long DescribeDomainRealTimeReqHitRateDataRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeDomainRealTimeReqHitRateDataRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

std::string DescribeDomainRealTimeReqHitRateDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainRealTimeReqHitRateDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

bool DescribeDomainRealTimeReqHitRateDataRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeDomainRealTimeReqHitRateDataRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DescribeDomainRealTimeReqHitRateDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDomainRealTimeReqHitRateDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeDomainRealTimeReqHitRateDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeDomainRealTimeReqHitRateDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

std::string DescribeDomainRealTimeReqHitRateDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainRealTimeReqHitRateDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

long DescribeDomainRealTimeReqHitRateDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainRealTimeReqHitRateDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDomainRealTimeReqHitRateDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeDomainRealTimeReqHitRateDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeDomainRealTimeReqHitRateDataRequest::getVersion()const
{
	return version_;
}

void DescribeDomainRealTimeReqHitRateDataRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

std::string DescribeDomainRealTimeReqHitRateDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeDomainRealTimeReqHitRateDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeDomainRealTimeReqHitRateDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeDomainRealTimeReqHitRateDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

bool DescribeDomainRealTimeReqHitRateDataRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeDomainRealTimeReqHitRateDataRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DescribeDomainRealTimeReqHitRateDataRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeDomainRealTimeReqHitRateDataRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

std::string DescribeDomainRealTimeReqHitRateDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDomainRealTimeReqHitRateDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

bool DescribeDomainRealTimeReqHitRateDataRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeDomainRealTimeReqHitRateDataRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DescribeDomainRealTimeReqHitRateDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDomainRealTimeReqHitRateDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeDomainRealTimeReqHitRateDataRequest::getRequestId()const
{
	return requestId_;
}

void DescribeDomainRealTimeReqHitRateDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string DescribeDomainRealTimeReqHitRateDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeDomainRealTimeReqHitRateDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string DescribeDomainRealTimeReqHitRateDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeDomainRealTimeReqHitRateDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeDomainRealTimeReqHitRateDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeDomainRealTimeReqHitRateDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeDomainRealTimeReqHitRateDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeDomainRealTimeReqHitRateDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

