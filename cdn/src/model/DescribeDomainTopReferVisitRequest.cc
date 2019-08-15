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

#include <alibabacloud/cdn/model/DescribeDomainTopReferVisitRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainTopReferVisitRequest;

DescribeDomainTopReferVisitRequest::DescribeDomainTopReferVisitRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "DescribeDomainTopReferVisit")
{}

DescribeDomainTopReferVisitRequest::~DescribeDomainTopReferVisitRequest()
{}

long DescribeDomainTopReferVisitRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDomainTopReferVisitRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DescribeDomainTopReferVisitRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeDomainTopReferVisitRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeDomainTopReferVisitRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeDomainTopReferVisitRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeDomainTopReferVisitRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainTopReferVisitRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeDomainTopReferVisitRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeDomainTopReferVisitRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeDomainTopReferVisitRequest::getPercent()const
{
	return percent_;
}

void DescribeDomainTopReferVisitRequest::setPercent(const std::string& percent)
{
	percent_ = percent;
	setCoreParameter("Percent", percent);
}

std::string DescribeDomainTopReferVisitRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeDomainTopReferVisitRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeDomainTopReferVisitRequest::getCallerType()const
{
	return callerType_;
}

void DescribeDomainTopReferVisitRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeDomainTopReferVisitRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDomainTopReferVisitRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDomainTopReferVisitRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDomainTopReferVisitRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeDomainTopReferVisitRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeDomainTopReferVisitRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeDomainTopReferVisitRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeDomainTopReferVisitRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeDomainTopReferVisitRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeDomainTopReferVisitRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeDomainTopReferVisitRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeDomainTopReferVisitRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeDomainTopReferVisitRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeDomainTopReferVisitRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeDomainTopReferVisitRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeDomainTopReferVisitRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DescribeDomainTopReferVisitRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainTopReferVisitRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeDomainTopReferVisitRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeDomainTopReferVisitRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeDomainTopReferVisitRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainTopReferVisitRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDomainTopReferVisitRequest::getVersion()const
{
	return version_;
}

void DescribeDomainTopReferVisitRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DescribeDomainTopReferVisitRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeDomainTopReferVisitRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeDomainTopReferVisitRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeDomainTopReferVisitRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeDomainTopReferVisitRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeDomainTopReferVisitRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeDomainTopReferVisitRequest::getRequestId()const
{
	return requestId_;
}

void DescribeDomainTopReferVisitRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeDomainTopReferVisitRequest::getSortBy()const
{
	return sortBy_;
}

void DescribeDomainTopReferVisitRequest::setSortBy(const std::string& sortBy)
{
	sortBy_ = sortBy;
	setCoreParameter("SortBy", sortBy);
}

