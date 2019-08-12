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

long DescribeDcdnDomainLogRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDcdnDomainLogRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long DescribeDcdnDomainLogRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeDcdnDomainLogRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeDcdnDomainLogRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeDcdnDomainLogRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeDcdnDomainLogRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDcdnDomainLogRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

std::string DescribeDcdnDomainLogRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeDcdnDomainLogRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string DescribeDcdnDomainLogRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeDcdnDomainLogRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string DescribeDcdnDomainLogRequest::getCallerType()const
{
	return callerType_;
}

void DescribeDcdnDomainLogRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

long DescribeDcdnDomainLogRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeDcdnDomainLogRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string DescribeDcdnDomainLogRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDcdnDomainLogRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string DescribeDcdnDomainLogRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDcdnDomainLogRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DescribeDcdnDomainLogRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeDcdnDomainLogRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

long DescribeDcdnDomainLogRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDcdnDomainLogRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeDcdnDomainLogRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeDcdnDomainLogRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string DescribeDcdnDomainLogRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeDcdnDomainLogRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long DescribeDcdnDomainLogRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeDcdnDomainLogRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeDcdnDomainLogRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeDcdnDomainLogRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string DescribeDcdnDomainLogRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeDcdnDomainLogRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", std::to_string(popProduct));
}

std::string DescribeDcdnDomainLogRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDcdnDomainLogRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", std::to_string(domainName));
}

std::string DescribeDcdnDomainLogRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDcdnDomainLogRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string DescribeDcdnDomainLogRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeDcdnDomainLogRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long DescribeDcdnDomainLogRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDcdnDomainLogRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeDcdnDomainLogRequest::getVersion()const
{
	return version_;
}

void DescribeDcdnDomainLogRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", std::to_string(version));
}

bool DescribeDcdnDomainLogRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeDcdnDomainLogRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeDcdnDomainLogRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeDcdnDomainLogRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeDcdnDomainLogRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeDcdnDomainLogRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeDcdnDomainLogRequest::getRequestId()const
{
	return requestId_;
}

void DescribeDcdnDomainLogRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

