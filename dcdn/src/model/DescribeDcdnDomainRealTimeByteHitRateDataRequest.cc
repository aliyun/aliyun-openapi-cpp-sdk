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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainRealTimeByteHitRateDataRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnDomainRealTimeByteHitRateDataRequest;

DescribeDcdnDomainRealTimeByteHitRateDataRequest::DescribeDcdnDomainRealTimeByteHitRateDataRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnDomainRealTimeByteHitRateData")
{}

DescribeDcdnDomainRealTimeByteHitRateDataRequest::~DescribeDcdnDomainRealTimeByteHitRateDataRequest()
{}

long DescribeDcdnDomainRealTimeByteHitRateDataRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDcdnDomainRealTimeByteHitRateDataRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DescribeDcdnDomainRealTimeByteHitRateDataRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeDcdnDomainRealTimeByteHitRateDataRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeDcdnDomainRealTimeByteHitRateDataRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeDcdnDomainRealTimeByteHitRateDataRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeDcdnDomainRealTimeByteHitRateDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDcdnDomainRealTimeByteHitRateDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeDcdnDomainRealTimeByteHitRateDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeDcdnDomainRealTimeByteHitRateDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeDcdnDomainRealTimeByteHitRateDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeDcdnDomainRealTimeByteHitRateDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeDcdnDomainRealTimeByteHitRateDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeDcdnDomainRealTimeByteHitRateDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeDcdnDomainRealTimeByteHitRateDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDcdnDomainRealTimeByteHitRateDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDcdnDomainRealTimeByteHitRateDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDcdnDomainRealTimeByteHitRateDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeDcdnDomainRealTimeByteHitRateDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeDcdnDomainRealTimeByteHitRateDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeDcdnDomainRealTimeByteHitRateDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeDcdnDomainRealTimeByteHitRateDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeDcdnDomainRealTimeByteHitRateDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeDcdnDomainRealTimeByteHitRateDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeDcdnDomainRealTimeByteHitRateDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeDcdnDomainRealTimeByteHitRateDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeDcdnDomainRealTimeByteHitRateDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeDcdnDomainRealTimeByteHitRateDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeDcdnDomainRealTimeByteHitRateDataRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeDcdnDomainRealTimeByteHitRateDataRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DescribeDcdnDomainRealTimeByteHitRateDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDcdnDomainRealTimeByteHitRateDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeDcdnDomainRealTimeByteHitRateDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDcdnDomainRealTimeByteHitRateDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeDcdnDomainRealTimeByteHitRateDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeDcdnDomainRealTimeByteHitRateDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeDcdnDomainRealTimeByteHitRateDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDcdnDomainRealTimeByteHitRateDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDcdnDomainRealTimeByteHitRateDataRequest::getVersion()const
{
	return version_;
}

void DescribeDcdnDomainRealTimeByteHitRateDataRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DescribeDcdnDomainRealTimeByteHitRateDataRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeDcdnDomainRealTimeByteHitRateDataRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeDcdnDomainRealTimeByteHitRateDataRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeDcdnDomainRealTimeByteHitRateDataRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeDcdnDomainRealTimeByteHitRateDataRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeDcdnDomainRealTimeByteHitRateDataRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeDcdnDomainRealTimeByteHitRateDataRequest::getRequestId()const
{
	return requestId_;
}

void DescribeDcdnDomainRealTimeByteHitRateDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeDcdnDomainRealTimeByteHitRateDataRequest::getInterval()const
{
	return interval_;
}

void DescribeDcdnDomainRealTimeByteHitRateDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setCoreParameter("Interval", interval);
}

std::string DescribeDcdnDomainRealTimeByteHitRateDataRequest::getFields()const
{
	return fields_;
}

void DescribeDcdnDomainRealTimeByteHitRateDataRequest::setFields(const std::string& fields)
{
	fields_ = fields;
	setCoreParameter("Fields", fields);
}

