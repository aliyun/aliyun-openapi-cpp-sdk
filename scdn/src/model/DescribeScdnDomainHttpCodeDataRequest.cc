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

#include <alibabacloud/scdn/model/DescribeScdnDomainHttpCodeDataRequest.h>

using AlibabaCloud::Scdn::Model::DescribeScdnDomainHttpCodeDataRequest;

DescribeScdnDomainHttpCodeDataRequest::DescribeScdnDomainHttpCodeDataRequest() :
	RpcServiceRequest("scdn", "2017-11-15", "DescribeScdnDomainHttpCodeData")
{}

DescribeScdnDomainHttpCodeDataRequest::~DescribeScdnDomainHttpCodeDataRequest()
{}

long DescribeScdnDomainHttpCodeDataRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeScdnDomainHttpCodeDataRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeScdnDomainHttpCodeDataRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeScdnDomainHttpCodeDataRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DescribeScdnDomainHttpCodeDataRequest::getLocationNameEn()const
{
	return locationNameEn_;
}

void DescribeScdnDomainHttpCodeDataRequest::setLocationNameEn(const std::string& locationNameEn)
{
	locationNameEn_ = locationNameEn;
	setParameter("LocationNameEn", locationNameEn);
}

std::string DescribeScdnDomainHttpCodeDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeScdnDomainHttpCodeDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeScdnDomainHttpCodeDataRequest::getIspNameEn()const
{
	return ispNameEn_;
}

void DescribeScdnDomainHttpCodeDataRequest::setIspNameEn(const std::string& ispNameEn)
{
	ispNameEn_ = ispNameEn;
	setParameter("IspNameEn", ispNameEn);
}

std::string DescribeScdnDomainHttpCodeDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeScdnDomainHttpCodeDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeScdnDomainHttpCodeDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeScdnDomainHttpCodeDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeScdnDomainHttpCodeDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeScdnDomainHttpCodeDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string DescribeScdnDomainHttpCodeDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeScdnDomainHttpCodeDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeScdnDomainHttpCodeDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeScdnDomainHttpCodeDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeScdnDomainHttpCodeDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeScdnDomainHttpCodeDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string DescribeScdnDomainHttpCodeDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeScdnDomainHttpCodeDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeScdnDomainHttpCodeDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeScdnDomainHttpCodeDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeScdnDomainHttpCodeDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeScdnDomainHttpCodeDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeScdnDomainHttpCodeDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeScdnDomainHttpCodeDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeScdnDomainHttpCodeDataRequest::getProduct()const
{
	return product_;
}

void DescribeScdnDomainHttpCodeDataRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

std::string DescribeScdnDomainHttpCodeDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeScdnDomainHttpCodeDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeScdnDomainHttpCodeDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeScdnDomainHttpCodeDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeScdnDomainHttpCodeDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeScdnDomainHttpCodeDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeScdnDomainHttpCodeDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeScdnDomainHttpCodeDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeScdnDomainHttpCodeDataRequest::getVersion()const
{
	return version_;
}

void DescribeScdnDomainHttpCodeDataRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool DescribeScdnDomainHttpCodeDataRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeScdnDomainHttpCodeDataRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DescribeScdnDomainHttpCodeDataRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeScdnDomainHttpCodeDataRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool DescribeScdnDomainHttpCodeDataRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeScdnDomainHttpCodeDataRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DescribeScdnDomainHttpCodeDataRequest::getRequestId()const
{
	return requestId_;
}

void DescribeScdnDomainHttpCodeDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string DescribeScdnDomainHttpCodeDataRequest::getInterval()const
{
	return interval_;
}

void DescribeScdnDomainHttpCodeDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setParameter("Interval", interval);
}

std::string DescribeScdnDomainHttpCodeDataRequest::getFields()const
{
	return fields_;
}

void DescribeScdnDomainHttpCodeDataRequest::setFields(const std::string& fields)
{
	fields_ = fields;
	setParameter("Fields", fields);
}

