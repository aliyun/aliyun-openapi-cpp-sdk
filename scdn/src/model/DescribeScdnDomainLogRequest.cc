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

#include <alibabacloud/scdn/model/DescribeScdnDomainLogRequest.h>

using AlibabaCloud::Scdn::Model::DescribeScdnDomainLogRequest;

DescribeScdnDomainLogRequest::DescribeScdnDomainLogRequest() :
	RpcServiceRequest("scdn", "2017-11-15", "DescribeScdnDomainLog")
{}

DescribeScdnDomainLogRequest::~DescribeScdnDomainLogRequest()
{}

long DescribeScdnDomainLogRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeScdnDomainLogRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeScdnDomainLogRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeScdnDomainLogRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DescribeScdnDomainLogRequest::getStartTime()const
{
	return startTime_;
}

void DescribeScdnDomainLogRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeScdnDomainLogRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeScdnDomainLogRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeScdnDomainLogRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeScdnDomainLogRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeScdnDomainLogRequest::getCallerType()const
{
	return callerType_;
}

void DescribeScdnDomainLogRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

long DescribeScdnDomainLogRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeScdnDomainLogRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeScdnDomainLogRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeScdnDomainLogRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeScdnDomainLogRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeScdnDomainLogRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeScdnDomainLogRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeScdnDomainLogRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

long DescribeScdnDomainLogRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeScdnDomainLogRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeScdnDomainLogRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeScdnDomainLogRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeScdnDomainLogRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeScdnDomainLogRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeScdnDomainLogRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeScdnDomainLogRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeScdnDomainLogRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeScdnDomainLogRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeScdnDomainLogRequest::getProduct()const
{
	return product_;
}

void DescribeScdnDomainLogRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

std::string DescribeScdnDomainLogRequest::getDomainName()const
{
	return domainName_;
}

void DescribeScdnDomainLogRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeScdnDomainLogRequest::getEndTime()const
{
	return endTime_;
}

void DescribeScdnDomainLogRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeScdnDomainLogRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeScdnDomainLogRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeScdnDomainLogRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeScdnDomainLogRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeScdnDomainLogRequest::getVersion()const
{
	return version_;
}

void DescribeScdnDomainLogRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool DescribeScdnDomainLogRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeScdnDomainLogRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DescribeScdnDomainLogRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeScdnDomainLogRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool DescribeScdnDomainLogRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeScdnDomainLogRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DescribeScdnDomainLogRequest::getRequestId()const
{
	return requestId_;
}

void DescribeScdnDomainLogRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

