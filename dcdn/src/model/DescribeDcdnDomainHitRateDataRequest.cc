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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainHitRateDataRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnDomainHitRateDataRequest;

DescribeDcdnDomainHitRateDataRequest::DescribeDcdnDomainHitRateDataRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnDomainHitRateData")
{}

DescribeDcdnDomainHitRateDataRequest::~DescribeDcdnDomainHitRateDataRequest()
{}

long DescribeDcdnDomainHitRateDataRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeDcdnDomainHitRateDataRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeDcdnDomainHitRateDataRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeDcdnDomainHitRateDataRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DescribeDcdnDomainHitRateDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDcdnDomainHitRateDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeDcdnDomainHitRateDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeDcdnDomainHitRateDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeDcdnDomainHitRateDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeDcdnDomainHitRateDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeDcdnDomainHitRateDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeDcdnDomainHitRateDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string DescribeDcdnDomainHitRateDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDcdnDomainHitRateDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDcdnDomainHitRateDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDcdnDomainHitRateDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeDcdnDomainHitRateDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeDcdnDomainHitRateDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string DescribeDcdnDomainHitRateDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeDcdnDomainHitRateDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeDcdnDomainHitRateDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeDcdnDomainHitRateDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeDcdnDomainHitRateDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeDcdnDomainHitRateDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeDcdnDomainHitRateDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeDcdnDomainHitRateDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeDcdnDomainHitRateDataRequest::getProduct()const
{
	return product_;
}

void DescribeDcdnDomainHitRateDataRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

std::string DescribeDcdnDomainHitRateDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDcdnDomainHitRateDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeDcdnDomainHitRateDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDcdnDomainHitRateDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeDcdnDomainHitRateDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeDcdnDomainHitRateDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeDcdnDomainHitRateDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDcdnDomainHitRateDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDcdnDomainHitRateDataRequest::getVersion()const
{
	return version_;
}

void DescribeDcdnDomainHitRateDataRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool DescribeDcdnDomainHitRateDataRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeDcdnDomainHitRateDataRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DescribeDcdnDomainHitRateDataRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeDcdnDomainHitRateDataRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool DescribeDcdnDomainHitRateDataRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeDcdnDomainHitRateDataRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DescribeDcdnDomainHitRateDataRequest::getRequestId()const
{
	return requestId_;
}

void DescribeDcdnDomainHitRateDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string DescribeDcdnDomainHitRateDataRequest::getInterval()const
{
	return interval_;
}

void DescribeDcdnDomainHitRateDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setParameter("Interval", interval);
}

std::string DescribeDcdnDomainHitRateDataRequest::getFields()const
{
	return fields_;
}

void DescribeDcdnDomainHitRateDataRequest::setFields(const std::string& fields)
{
	fields_ = fields;
	setParameter("Fields", fields);
}

