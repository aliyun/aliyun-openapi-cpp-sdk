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

#include <alibabacloud/cdn/model/DescribeDomainQpsDataRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainQpsDataRequest;

DescribeDomainQpsDataRequest::DescribeDomainQpsDataRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeDomainQpsData")
{}

DescribeDomainQpsDataRequest::~DescribeDomainQpsDataRequest()
{}

long DescribeDomainQpsDataRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeDomainQpsDataRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeDomainQpsDataRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeDomainQpsDataRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string DescribeDomainQpsDataRequest::getLocationNameEn()const
{
	return locationNameEn_;
}

void DescribeDomainQpsDataRequest::setLocationNameEn(const std::string& locationNameEn)
{
	locationNameEn_ = locationNameEn;
	setCoreParameter("LocationNameEn", locationNameEn);
}

std::string DescribeDomainQpsDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainQpsDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeDomainQpsDataRequest::getIspNameEn()const
{
	return ispNameEn_;
}

void DescribeDomainQpsDataRequest::setIspNameEn(const std::string& ispNameEn)
{
	ispNameEn_ = ispNameEn;
	setCoreParameter("IspNameEn", ispNameEn);
}

std::string DescribeDomainQpsDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeDomainQpsDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeDomainQpsDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeDomainQpsDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeDomainQpsDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeDomainQpsDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeDomainQpsDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDomainQpsDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDomainQpsDataRequest::getDomainType()const
{
	return domainType_;
}

void DescribeDomainQpsDataRequest::setDomainType(const std::string& domainType)
{
	domainType_ = domainType;
	setCoreParameter("DomainType", domainType);
}

std::string DescribeDomainQpsDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDomainQpsDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeDomainQpsDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeDomainQpsDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeDomainQpsDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeDomainQpsDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeDomainQpsDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeDomainQpsDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeDomainQpsDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeDomainQpsDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeDomainQpsDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeDomainQpsDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeDomainQpsDataRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeDomainQpsDataRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DescribeDomainQpsDataRequest::getTimeMerge()const
{
	return timeMerge_;
}

void DescribeDomainQpsDataRequest::setTimeMerge(const std::string& timeMerge)
{
	timeMerge_ = timeMerge;
	setCoreParameter("TimeMerge", timeMerge);
}

std::string DescribeDomainQpsDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainQpsDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeDomainQpsDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDomainQpsDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeDomainQpsDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeDomainQpsDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeDomainQpsDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainQpsDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeDomainQpsDataRequest::getVersion()const
{
	return version_;
}

void DescribeDomainQpsDataRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DescribeDomainQpsDataRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeDomainQpsDataRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

bool DescribeDomainQpsDataRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeDomainQpsDataRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

bool DescribeDomainQpsDataRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeDomainQpsDataRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string DescribeDomainQpsDataRequest::getRequestId()const
{
	return requestId_;
}

void DescribeDomainQpsDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeDomainQpsDataRequest::getInterval()const
{
	return interval_;
}

void DescribeDomainQpsDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setCoreParameter("Interval", interval);
}

