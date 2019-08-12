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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainWebsocketTrafficDataRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnDomainWebsocketTrafficDataRequest;

DescribeDcdnDomainWebsocketTrafficDataRequest::DescribeDcdnDomainWebsocketTrafficDataRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnDomainWebsocketTrafficData")
{}

DescribeDcdnDomainWebsocketTrafficDataRequest::~DescribeDcdnDomainWebsocketTrafficDataRequest()
{}

long DescribeDcdnDomainWebsocketTrafficDataRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeDcdnDomainWebsocketTrafficDataRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeDcdnDomainWebsocketTrafficDataRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeDcdnDomainWebsocketTrafficDataRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string DescribeDcdnDomainWebsocketTrafficDataRequest::getLocationNameEn()const
{
	return locationNameEn_;
}

void DescribeDcdnDomainWebsocketTrafficDataRequest::setLocationNameEn(const std::string& locationNameEn)
{
	locationNameEn_ = locationNameEn;
	setCoreParameter("LocationNameEn", locationNameEn);
}

std::string DescribeDcdnDomainWebsocketTrafficDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDcdnDomainWebsocketTrafficDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeDcdnDomainWebsocketTrafficDataRequest::getIspNameEn()const
{
	return ispNameEn_;
}

void DescribeDcdnDomainWebsocketTrafficDataRequest::setIspNameEn(const std::string& ispNameEn)
{
	ispNameEn_ = ispNameEn;
	setCoreParameter("IspNameEn", ispNameEn);
}

std::string DescribeDcdnDomainWebsocketTrafficDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeDcdnDomainWebsocketTrafficDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeDcdnDomainWebsocketTrafficDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeDcdnDomainWebsocketTrafficDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeDcdnDomainWebsocketTrafficDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeDcdnDomainWebsocketTrafficDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeDcdnDomainWebsocketTrafficDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDcdnDomainWebsocketTrafficDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDcdnDomainWebsocketTrafficDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDcdnDomainWebsocketTrafficDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeDcdnDomainWebsocketTrafficDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeDcdnDomainWebsocketTrafficDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeDcdnDomainWebsocketTrafficDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeDcdnDomainWebsocketTrafficDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeDcdnDomainWebsocketTrafficDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeDcdnDomainWebsocketTrafficDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeDcdnDomainWebsocketTrafficDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeDcdnDomainWebsocketTrafficDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeDcdnDomainWebsocketTrafficDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeDcdnDomainWebsocketTrafficDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeDcdnDomainWebsocketTrafficDataRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeDcdnDomainWebsocketTrafficDataRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DescribeDcdnDomainWebsocketTrafficDataRequest::getFixTimeGap()const
{
	return fixTimeGap_;
}

void DescribeDcdnDomainWebsocketTrafficDataRequest::setFixTimeGap(const std::string& fixTimeGap)
{
	fixTimeGap_ = fixTimeGap;
	setCoreParameter("FixTimeGap", fixTimeGap);
}

std::string DescribeDcdnDomainWebsocketTrafficDataRequest::getTimeMerge()const
{
	return timeMerge_;
}

void DescribeDcdnDomainWebsocketTrafficDataRequest::setTimeMerge(const std::string& timeMerge)
{
	timeMerge_ = timeMerge;
	setCoreParameter("TimeMerge", timeMerge);
}

std::string DescribeDcdnDomainWebsocketTrafficDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDcdnDomainWebsocketTrafficDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeDcdnDomainWebsocketTrafficDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDcdnDomainWebsocketTrafficDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeDcdnDomainWebsocketTrafficDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeDcdnDomainWebsocketTrafficDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeDcdnDomainWebsocketTrafficDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDcdnDomainWebsocketTrafficDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeDcdnDomainWebsocketTrafficDataRequest::getVersion()const
{
	return version_;
}

void DescribeDcdnDomainWebsocketTrafficDataRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DescribeDcdnDomainWebsocketTrafficDataRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeDcdnDomainWebsocketTrafficDataRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

bool DescribeDcdnDomainWebsocketTrafficDataRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeDcdnDomainWebsocketTrafficDataRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

bool DescribeDcdnDomainWebsocketTrafficDataRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeDcdnDomainWebsocketTrafficDataRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string DescribeDcdnDomainWebsocketTrafficDataRequest::getRequestId()const
{
	return requestId_;
}

void DescribeDcdnDomainWebsocketTrafficDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeDcdnDomainWebsocketTrafficDataRequest::getInterval()const
{
	return interval_;
}

void DescribeDcdnDomainWebsocketTrafficDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setCoreParameter("Interval", interval);
}

std::string DescribeDcdnDomainWebsocketTrafficDataRequest::getFields()const
{
	return fields_;
}

void DescribeDcdnDomainWebsocketTrafficDataRequest::setFields(const std::string& fields)
{
	fields_ = fields;
	setCoreParameter("Fields", fields);
}

