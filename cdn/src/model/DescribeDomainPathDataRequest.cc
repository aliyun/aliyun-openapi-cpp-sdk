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

#include <alibabacloud/cdn/model/DescribeDomainPathDataRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainPathDataRequest;

DescribeDomainPathDataRequest::DescribeDomainPathDataRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeDomainPathData")
{}

DescribeDomainPathDataRequest::~DescribeDomainPathDataRequest()
{}

long DescribeDomainPathDataRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeDomainPathDataRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeDomainPathDataRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeDomainPathDataRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeDomainPathDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainPathDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

std::string DescribeDomainPathDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeDomainPathDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string DescribeDomainPathDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeDomainPathDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string DescribeDomainPathDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeDomainPathDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

int DescribeDomainPathDataRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeDomainPathDataRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string DescribeDomainPathDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDomainPathDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string DescribeDomainPathDataRequest::getPath()const
{
	return path_;
}

void DescribeDomainPathDataRequest::setPath(const std::string& path)
{
	path_ = path;
	setCoreParameter("Path", std::to_string(path));
}

std::string DescribeDomainPathDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDomainPathDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DescribeDomainPathDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeDomainPathDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

int DescribeDomainPathDataRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDomainPathDataRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeDomainPathDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeDomainPathDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string DescribeDomainPathDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeDomainPathDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long DescribeDomainPathDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeDomainPathDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeDomainPathDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeDomainPathDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string DescribeDomainPathDataRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeDomainPathDataRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", std::to_string(popProduct));
}

std::string DescribeDomainPathDataRequest::getProduct()const
{
	return product_;
}

void DescribeDomainPathDataRequest::setProduct(const std::string& product)
{
	product_ = product;
	setCoreParameter("Product", std::to_string(product));
}

std::string DescribeDomainPathDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainPathDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", std::to_string(domainName));
}

std::string DescribeDomainPathDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDomainPathDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string DescribeDomainPathDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeDomainPathDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long DescribeDomainPathDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainPathDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeDomainPathDataRequest::getVersion()const
{
	return version_;
}

void DescribeDomainPathDataRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", std::to_string(version));
}

bool DescribeDomainPathDataRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeDomainPathDataRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeDomainPathDataRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeDomainPathDataRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeDomainPathDataRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeDomainPathDataRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeDomainPathDataRequest::getRequestId()const
{
	return requestId_;
}

void DescribeDomainPathDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

