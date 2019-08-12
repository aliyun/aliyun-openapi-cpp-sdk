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

#include <alibabacloud/vod/model/DescribeVodDomainLogRequest.h>

using AlibabaCloud::Vod::Model::DescribeVodDomainLogRequest;

DescribeVodDomainLogRequest::DescribeVodDomainLogRequest() :
	RpcServiceRequest("vod", "2017-03-21", "DescribeVodDomainLog")
{}

DescribeVodDomainLogRequest::~DescribeVodDomainLogRequest()
{}

long DescribeVodDomainLogRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeVodDomainLogRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DescribeVodDomainLogRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeVodDomainLogRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeVodDomainLogRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeVodDomainLogRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeVodDomainLogRequest::getStartTime()const
{
	return startTime_;
}

void DescribeVodDomainLogRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeVodDomainLogRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeVodDomainLogRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeVodDomainLogRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeVodDomainLogRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeVodDomainLogRequest::getCallerType()const
{
	return callerType_;
}

void DescribeVodDomainLogRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

long DescribeVodDomainLogRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeVodDomainLogRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeVodDomainLogRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeVodDomainLogRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeVodDomainLogRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeVodDomainLogRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeVodDomainLogRequest::getRegionId()const
{
	return regionId_;
}

void DescribeVodDomainLogRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeVodDomainLogRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeVodDomainLogRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

long DescribeVodDomainLogRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeVodDomainLogRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeVodDomainLogRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeVodDomainLogRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeVodDomainLogRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeVodDomainLogRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeVodDomainLogRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeVodDomainLogRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeVodDomainLogRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeVodDomainLogRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeVodDomainLogRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeVodDomainLogRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DescribeVodDomainLogRequest::getDomainName()const
{
	return domainName_;
}

void DescribeVodDomainLogRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeVodDomainLogRequest::getEndTime()const
{
	return endTime_;
}

void DescribeVodDomainLogRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeVodDomainLogRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeVodDomainLogRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeVodDomainLogRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeVodDomainLogRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeVodDomainLogRequest::getVersion()const
{
	return version_;
}

void DescribeVodDomainLogRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DescribeVodDomainLogRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeVodDomainLogRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeVodDomainLogRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeVodDomainLogRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeVodDomainLogRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeVodDomainLogRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeVodDomainLogRequest::getRequestId()const
{
	return requestId_;
}

void DescribeVodDomainLogRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

