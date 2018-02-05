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

#include <alibabacloud/cdn/model/BatchDescribeDomainBpsDataRequest.h>

using AlibabaCloud::Cdn::Model::BatchDescribeDomainBpsDataRequest;

BatchDescribeDomainBpsDataRequest::BatchDescribeDomainBpsDataRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "BatchDescribeDomainBpsData")
{}

BatchDescribeDomainBpsDataRequest::~BatchDescribeDomainBpsDataRequest()
{}

long BatchDescribeDomainBpsDataRequest::getCallerParentId()const
{
	return callerParentId_;
}

void BatchDescribeDomainBpsDataRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool BatchDescribeDomainBpsDataRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void BatchDescribeDomainBpsDataRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string BatchDescribeDomainBpsDataRequest::getStartTime()const
{
	return startTime_;
}

void BatchDescribeDomainBpsDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string BatchDescribeDomainBpsDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void BatchDescribeDomainBpsDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string BatchDescribeDomainBpsDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void BatchDescribeDomainBpsDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string BatchDescribeDomainBpsDataRequest::getCallerType()const
{
	return callerType_;
}

void BatchDescribeDomainBpsDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

int BatchDescribeDomainBpsDataRequest::getPageNumber()const
{
	return pageNumber_;
}

void BatchDescribeDomainBpsDataRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string BatchDescribeDomainBpsDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void BatchDescribeDomainBpsDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string BatchDescribeDomainBpsDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void BatchDescribeDomainBpsDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string BatchDescribeDomainBpsDataRequest::getRequestContent()const
{
	return requestContent_;
}

void BatchDescribeDomainBpsDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

int BatchDescribeDomainBpsDataRequest::getPageSize()const
{
	return pageSize_;
}

void BatchDescribeDomainBpsDataRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string BatchDescribeDomainBpsDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void BatchDescribeDomainBpsDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string BatchDescribeDomainBpsDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void BatchDescribeDomainBpsDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long BatchDescribeDomainBpsDataRequest::getCallerUid()const
{
	return callerUid_;
}

void BatchDescribeDomainBpsDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string BatchDescribeDomainBpsDataRequest::getApp_ip()const
{
	return app_ip_;
}

void BatchDescribeDomainBpsDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string BatchDescribeDomainBpsDataRequest::getProduct()const
{
	return product_;
}

void BatchDescribeDomainBpsDataRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

std::string BatchDescribeDomainBpsDataRequest::getDomainName()const
{
	return domainName_;
}

void BatchDescribeDomainBpsDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string BatchDescribeDomainBpsDataRequest::getEndTime()const
{
	return endTime_;
}

void BatchDescribeDomainBpsDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string BatchDescribeDomainBpsDataRequest::getCallerBid()const
{
	return callerBid_;
}

void BatchDescribeDomainBpsDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

std::string BatchDescribeDomainBpsDataRequest::getCls()const
{
	return cls_;
}

void BatchDescribeDomainBpsDataRequest::setCls(const std::string& cls)
{
	cls_ = cls;
	setParameter("Cls", cls);
}

long BatchDescribeDomainBpsDataRequest::getOwnerId()const
{
	return ownerId_;
}

void BatchDescribeDomainBpsDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string BatchDescribeDomainBpsDataRequest::getVersion()const
{
	return version_;
}

void BatchDescribeDomainBpsDataRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool BatchDescribeDomainBpsDataRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void BatchDescribeDomainBpsDataRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool BatchDescribeDomainBpsDataRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void BatchDescribeDomainBpsDataRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool BatchDescribeDomainBpsDataRequest::getSecurity_transport()const
{
	return security_transport_;
}

void BatchDescribeDomainBpsDataRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string BatchDescribeDomainBpsDataRequest::getRequestId()const
{
	return requestId_;
}

void BatchDescribeDomainBpsDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string BatchDescribeDomainBpsDataRequest::getWithTotalCount()const
{
	return withTotalCount_;
}

void BatchDescribeDomainBpsDataRequest::setWithTotalCount(const std::string& withTotalCount)
{
	withTotalCount_ = withTotalCount;
	setParameter("WithTotalCount", withTotalCount);
}

