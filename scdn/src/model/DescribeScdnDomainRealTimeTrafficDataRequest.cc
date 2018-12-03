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

#include <alibabacloud/scdn/model/DescribeScdnDomainRealTimeTrafficDataRequest.h>

using AlibabaCloud::Scdn::Model::DescribeScdnDomainRealTimeTrafficDataRequest;

DescribeScdnDomainRealTimeTrafficDataRequest::DescribeScdnDomainRealTimeTrafficDataRequest() :
	RpcServiceRequest("scdn", "2017-11-15", "DescribeScdnDomainRealTimeTrafficData")
{}

DescribeScdnDomainRealTimeTrafficDataRequest::~DescribeScdnDomainRealTimeTrafficDataRequest()
{}

long DescribeScdnDomainRealTimeTrafficDataRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeScdnDomainRealTimeTrafficDataRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeScdnDomainRealTimeTrafficDataRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeScdnDomainRealTimeTrafficDataRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DescribeScdnDomainRealTimeTrafficDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeScdnDomainRealTimeTrafficDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeScdnDomainRealTimeTrafficDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeScdnDomainRealTimeTrafficDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeScdnDomainRealTimeTrafficDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeScdnDomainRealTimeTrafficDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeScdnDomainRealTimeTrafficDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeScdnDomainRealTimeTrafficDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string DescribeScdnDomainRealTimeTrafficDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeScdnDomainRealTimeTrafficDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeScdnDomainRealTimeTrafficDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeScdnDomainRealTimeTrafficDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeScdnDomainRealTimeTrafficDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeScdnDomainRealTimeTrafficDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string DescribeScdnDomainRealTimeTrafficDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeScdnDomainRealTimeTrafficDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeScdnDomainRealTimeTrafficDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeScdnDomainRealTimeTrafficDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeScdnDomainRealTimeTrafficDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeScdnDomainRealTimeTrafficDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeScdnDomainRealTimeTrafficDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeScdnDomainRealTimeTrafficDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeScdnDomainRealTimeTrafficDataRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeScdnDomainRealTimeTrafficDataRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string DescribeScdnDomainRealTimeTrafficDataRequest::getProduct()const
{
	return product_;
}

void DescribeScdnDomainRealTimeTrafficDataRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

std::string DescribeScdnDomainRealTimeTrafficDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeScdnDomainRealTimeTrafficDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeScdnDomainRealTimeTrafficDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeScdnDomainRealTimeTrafficDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeScdnDomainRealTimeTrafficDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeScdnDomainRealTimeTrafficDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeScdnDomainRealTimeTrafficDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeScdnDomainRealTimeTrafficDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeScdnDomainRealTimeTrafficDataRequest::getVersion()const
{
	return version_;
}

void DescribeScdnDomainRealTimeTrafficDataRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool DescribeScdnDomainRealTimeTrafficDataRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeScdnDomainRealTimeTrafficDataRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DescribeScdnDomainRealTimeTrafficDataRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeScdnDomainRealTimeTrafficDataRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool DescribeScdnDomainRealTimeTrafficDataRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeScdnDomainRealTimeTrafficDataRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DescribeScdnDomainRealTimeTrafficDataRequest::getRequestId()const
{
	return requestId_;
}

void DescribeScdnDomainRealTimeTrafficDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string DescribeScdnDomainRealTimeTrafficDataRequest::getInterval()const
{
	return interval_;
}

void DescribeScdnDomainRealTimeTrafficDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setParameter("Interval", interval);
}

std::string DescribeScdnDomainRealTimeTrafficDataRequest::getFields()const
{
	return fields_;
}

void DescribeScdnDomainRealTimeTrafficDataRequest::setFields(const std::string& fields)
{
	fields_ = fields;
	setParameter("Fields", fields);
}

