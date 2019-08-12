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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainWebsocketBpsDataRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnDomainWebsocketBpsDataRequest;

DescribeDcdnDomainWebsocketBpsDataRequest::DescribeDcdnDomainWebsocketBpsDataRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnDomainWebsocketBpsData")
{}

DescribeDcdnDomainWebsocketBpsDataRequest::~DescribeDcdnDomainWebsocketBpsDataRequest()
{}

long DescribeDcdnDomainWebsocketBpsDataRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeDcdnDomainWebsocketBpsDataRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeDcdnDomainWebsocketBpsDataRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeDcdnDomainWebsocketBpsDataRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string DescribeDcdnDomainWebsocketBpsDataRequest::getLocationNameEn()const
{
	return locationNameEn_;
}

void DescribeDcdnDomainWebsocketBpsDataRequest::setLocationNameEn(const std::string& locationNameEn)
{
	locationNameEn_ = locationNameEn;
	setCoreParameter("LocationNameEn", locationNameEn);
}

std::string DescribeDcdnDomainWebsocketBpsDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDcdnDomainWebsocketBpsDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeDcdnDomainWebsocketBpsDataRequest::getIspNameEn()const
{
	return ispNameEn_;
}

void DescribeDcdnDomainWebsocketBpsDataRequest::setIspNameEn(const std::string& ispNameEn)
{
	ispNameEn_ = ispNameEn;
	setCoreParameter("IspNameEn", ispNameEn);
}

std::string DescribeDcdnDomainWebsocketBpsDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeDcdnDomainWebsocketBpsDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeDcdnDomainWebsocketBpsDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeDcdnDomainWebsocketBpsDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeDcdnDomainWebsocketBpsDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeDcdnDomainWebsocketBpsDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeDcdnDomainWebsocketBpsDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDcdnDomainWebsocketBpsDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDcdnDomainWebsocketBpsDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDcdnDomainWebsocketBpsDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeDcdnDomainWebsocketBpsDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeDcdnDomainWebsocketBpsDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeDcdnDomainWebsocketBpsDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeDcdnDomainWebsocketBpsDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeDcdnDomainWebsocketBpsDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeDcdnDomainWebsocketBpsDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeDcdnDomainWebsocketBpsDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeDcdnDomainWebsocketBpsDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeDcdnDomainWebsocketBpsDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeDcdnDomainWebsocketBpsDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeDcdnDomainWebsocketBpsDataRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeDcdnDomainWebsocketBpsDataRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DescribeDcdnDomainWebsocketBpsDataRequest::getFixTimeGap()const
{
	return fixTimeGap_;
}

void DescribeDcdnDomainWebsocketBpsDataRequest::setFixTimeGap(const std::string& fixTimeGap)
{
	fixTimeGap_ = fixTimeGap;
	setCoreParameter("FixTimeGap", fixTimeGap);
}

std::string DescribeDcdnDomainWebsocketBpsDataRequest::getTimeMerge()const
{
	return timeMerge_;
}

void DescribeDcdnDomainWebsocketBpsDataRequest::setTimeMerge(const std::string& timeMerge)
{
	timeMerge_ = timeMerge;
	setCoreParameter("TimeMerge", timeMerge);
}

std::string DescribeDcdnDomainWebsocketBpsDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDcdnDomainWebsocketBpsDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeDcdnDomainWebsocketBpsDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDcdnDomainWebsocketBpsDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeDcdnDomainWebsocketBpsDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeDcdnDomainWebsocketBpsDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeDcdnDomainWebsocketBpsDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDcdnDomainWebsocketBpsDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeDcdnDomainWebsocketBpsDataRequest::getVersion()const
{
	return version_;
}

void DescribeDcdnDomainWebsocketBpsDataRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DescribeDcdnDomainWebsocketBpsDataRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeDcdnDomainWebsocketBpsDataRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

bool DescribeDcdnDomainWebsocketBpsDataRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeDcdnDomainWebsocketBpsDataRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

bool DescribeDcdnDomainWebsocketBpsDataRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeDcdnDomainWebsocketBpsDataRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string DescribeDcdnDomainWebsocketBpsDataRequest::getRequestId()const
{
	return requestId_;
}

void DescribeDcdnDomainWebsocketBpsDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeDcdnDomainWebsocketBpsDataRequest::getInterval()const
{
	return interval_;
}

void DescribeDcdnDomainWebsocketBpsDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setCoreParameter("Interval", interval);
}

std::string DescribeDcdnDomainWebsocketBpsDataRequest::getFields()const
{
	return fields_;
}

void DescribeDcdnDomainWebsocketBpsDataRequest::setFields(const std::string& fields)
{
	fields_ = fields;
	setCoreParameter("Fields", fields);
}

