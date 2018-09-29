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

#include <alibabacloud/cdn/model/DescribeDomainSlowRatioRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainSlowRatioRequest;

DescribeDomainSlowRatioRequest::DescribeDomainSlowRatioRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeDomainSlowRatio")
{}

DescribeDomainSlowRatioRequest::~DescribeDomainSlowRatioRequest()
{}

long DescribeDomainSlowRatioRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeDomainSlowRatioRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeDomainSlowRatioRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeDomainSlowRatioRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DescribeDomainSlowRatioRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainSlowRatioRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeDomainSlowRatioRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeDomainSlowRatioRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeDomainSlowRatioRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeDomainSlowRatioRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeDomainSlowRatioRequest::getCallerType()const
{
	return callerType_;
}

void DescribeDomainSlowRatioRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

int DescribeDomainSlowRatioRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeDomainSlowRatioRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeDomainSlowRatioRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDomainSlowRatioRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDomainSlowRatioRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDomainSlowRatioRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeDomainSlowRatioRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeDomainSlowRatioRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

int DescribeDomainSlowRatioRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDomainSlowRatioRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeDomainSlowRatioRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeDomainSlowRatioRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeDomainSlowRatioRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeDomainSlowRatioRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeDomainSlowRatioRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeDomainSlowRatioRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeDomainSlowRatioRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeDomainSlowRatioRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeDomainSlowRatioRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeDomainSlowRatioRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string DescribeDomainSlowRatioRequest::getProduct()const
{
	return product_;
}

void DescribeDomainSlowRatioRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

std::string DescribeDomainSlowRatioRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainSlowRatioRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeDomainSlowRatioRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDomainSlowRatioRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeDomainSlowRatioRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeDomainSlowRatioRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeDomainSlowRatioRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainSlowRatioRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDomainSlowRatioRequest::getVersion()const
{
	return version_;
}

void DescribeDomainSlowRatioRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool DescribeDomainSlowRatioRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeDomainSlowRatioRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DescribeDomainSlowRatioRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeDomainSlowRatioRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool DescribeDomainSlowRatioRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeDomainSlowRatioRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DescribeDomainSlowRatioRequest::getRequestId()const
{
	return requestId_;
}

void DescribeDomainSlowRatioRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

