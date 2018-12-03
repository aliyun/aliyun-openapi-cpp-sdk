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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainLogRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnDomainLogRequest;

DescribeDcdnDomainLogRequest::DescribeDcdnDomainLogRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnDomainLog")
{}

DescribeDcdnDomainLogRequest::~DescribeDcdnDomainLogRequest()
{}

long DescribeDcdnDomainLogRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeDcdnDomainLogRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeDcdnDomainLogRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeDcdnDomainLogRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DescribeDcdnDomainLogRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDcdnDomainLogRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeDcdnDomainLogRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeDcdnDomainLogRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeDcdnDomainLogRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeDcdnDomainLogRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeDcdnDomainLogRequest::getCallerType()const
{
	return callerType_;
}

void DescribeDcdnDomainLogRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

long DescribeDcdnDomainLogRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeDcdnDomainLogRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeDcdnDomainLogRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDcdnDomainLogRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDcdnDomainLogRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDcdnDomainLogRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeDcdnDomainLogRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeDcdnDomainLogRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

long DescribeDcdnDomainLogRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDcdnDomainLogRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeDcdnDomainLogRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeDcdnDomainLogRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeDcdnDomainLogRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeDcdnDomainLogRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeDcdnDomainLogRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeDcdnDomainLogRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeDcdnDomainLogRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeDcdnDomainLogRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeDcdnDomainLogRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeDcdnDomainLogRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string DescribeDcdnDomainLogRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDcdnDomainLogRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeDcdnDomainLogRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDcdnDomainLogRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeDcdnDomainLogRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeDcdnDomainLogRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeDcdnDomainLogRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDcdnDomainLogRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDcdnDomainLogRequest::getVersion()const
{
	return version_;
}

void DescribeDcdnDomainLogRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool DescribeDcdnDomainLogRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeDcdnDomainLogRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DescribeDcdnDomainLogRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeDcdnDomainLogRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool DescribeDcdnDomainLogRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeDcdnDomainLogRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DescribeDcdnDomainLogRequest::getRequestId()const
{
	return requestId_;
}

void DescribeDcdnDomainLogRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

