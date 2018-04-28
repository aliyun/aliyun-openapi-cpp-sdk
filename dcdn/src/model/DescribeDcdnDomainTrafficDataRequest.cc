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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainTrafficDataRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnDomainTrafficDataRequest;

DescribeDcdnDomainTrafficDataRequest::DescribeDcdnDomainTrafficDataRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnDomainTrafficData")
{}

DescribeDcdnDomainTrafficDataRequest::~DescribeDcdnDomainTrafficDataRequest()
{}

long DescribeDcdnDomainTrafficDataRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeDcdnDomainTrafficDataRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeDcdnDomainTrafficDataRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeDcdnDomainTrafficDataRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DescribeDcdnDomainTrafficDataRequest::getLocationNameEn()const
{
	return locationNameEn_;
}

void DescribeDcdnDomainTrafficDataRequest::setLocationNameEn(const std::string& locationNameEn)
{
	locationNameEn_ = locationNameEn;
	setParameter("LocationNameEn", locationNameEn);
}

std::string DescribeDcdnDomainTrafficDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDcdnDomainTrafficDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeDcdnDomainTrafficDataRequest::getIspNameEn()const
{
	return ispNameEn_;
}

void DescribeDcdnDomainTrafficDataRequest::setIspNameEn(const std::string& ispNameEn)
{
	ispNameEn_ = ispNameEn;
	setParameter("IspNameEn", ispNameEn);
}

std::string DescribeDcdnDomainTrafficDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeDcdnDomainTrafficDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeDcdnDomainTrafficDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeDcdnDomainTrafficDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeDcdnDomainTrafficDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeDcdnDomainTrafficDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string DescribeDcdnDomainTrafficDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDcdnDomainTrafficDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDcdnDomainTrafficDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDcdnDomainTrafficDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeDcdnDomainTrafficDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeDcdnDomainTrafficDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string DescribeDcdnDomainTrafficDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeDcdnDomainTrafficDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeDcdnDomainTrafficDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeDcdnDomainTrafficDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeDcdnDomainTrafficDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeDcdnDomainTrafficDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeDcdnDomainTrafficDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeDcdnDomainTrafficDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeDcdnDomainTrafficDataRequest::getProduct()const
{
	return product_;
}

void DescribeDcdnDomainTrafficDataRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

std::string DescribeDcdnDomainTrafficDataRequest::getFixTimeGap()const
{
	return fixTimeGap_;
}

void DescribeDcdnDomainTrafficDataRequest::setFixTimeGap(const std::string& fixTimeGap)
{
	fixTimeGap_ = fixTimeGap;
	setParameter("FixTimeGap", fixTimeGap);
}

std::string DescribeDcdnDomainTrafficDataRequest::getTimeMerge()const
{
	return timeMerge_;
}

void DescribeDcdnDomainTrafficDataRequest::setTimeMerge(const std::string& timeMerge)
{
	timeMerge_ = timeMerge;
	setParameter("TimeMerge", timeMerge);
}

std::string DescribeDcdnDomainTrafficDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDcdnDomainTrafficDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeDcdnDomainTrafficDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDcdnDomainTrafficDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeDcdnDomainTrafficDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeDcdnDomainTrafficDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeDcdnDomainTrafficDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDcdnDomainTrafficDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDcdnDomainTrafficDataRequest::getVersion()const
{
	return version_;
}

void DescribeDcdnDomainTrafficDataRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool DescribeDcdnDomainTrafficDataRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeDcdnDomainTrafficDataRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DescribeDcdnDomainTrafficDataRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeDcdnDomainTrafficDataRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool DescribeDcdnDomainTrafficDataRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeDcdnDomainTrafficDataRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DescribeDcdnDomainTrafficDataRequest::getRequestId()const
{
	return requestId_;
}

void DescribeDcdnDomainTrafficDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string DescribeDcdnDomainTrafficDataRequest::getInterval()const
{
	return interval_;
}

void DescribeDcdnDomainTrafficDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setParameter("Interval", interval);
}

std::string DescribeDcdnDomainTrafficDataRequest::getFields()const
{
	return fields_;
}

void DescribeDcdnDomainTrafficDataRequest::setFields(const std::string& fields)
{
	fields_ = fields;
	setParameter("Fields", fields);
}

