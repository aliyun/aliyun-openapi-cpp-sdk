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

#include <alibabacloud/vod/model/DescribeVodDomainTrafficDataRequest.h>

using AlibabaCloud::Vod::Model::DescribeVodDomainTrafficDataRequest;

DescribeVodDomainTrafficDataRequest::DescribeVodDomainTrafficDataRequest() :
	RpcServiceRequest("vod", "2017-03-21", "DescribeVodDomainTrafficData")
{}

DescribeVodDomainTrafficDataRequest::~DescribeVodDomainTrafficDataRequest()
{}

long DescribeVodDomainTrafficDataRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeVodDomainTrafficDataRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DescribeVodDomainTrafficDataRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeVodDomainTrafficDataRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeVodDomainTrafficDataRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeVodDomainTrafficDataRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeVodDomainTrafficDataRequest::getLocationNameEn()const
{
	return locationNameEn_;
}

void DescribeVodDomainTrafficDataRequest::setLocationNameEn(const std::string& locationNameEn)
{
	locationNameEn_ = locationNameEn;
	setCoreParameter("LocationNameEn", locationNameEn);
}

std::string DescribeVodDomainTrafficDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeVodDomainTrafficDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeVodDomainTrafficDataRequest::getIspNameEn()const
{
	return ispNameEn_;
}

void DescribeVodDomainTrafficDataRequest::setIspNameEn(const std::string& ispNameEn)
{
	ispNameEn_ = ispNameEn;
	setCoreParameter("IspNameEn", ispNameEn);
}

std::string DescribeVodDomainTrafficDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeVodDomainTrafficDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeVodDomainTrafficDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeVodDomainTrafficDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeVodDomainTrafficDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeVodDomainTrafficDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeVodDomainTrafficDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeVodDomainTrafficDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeVodDomainTrafficDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeVodDomainTrafficDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeVodDomainTrafficDataRequest::getRegionId()const
{
	return regionId_;
}

void DescribeVodDomainTrafficDataRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeVodDomainTrafficDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeVodDomainTrafficDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeVodDomainTrafficDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeVodDomainTrafficDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeVodDomainTrafficDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeVodDomainTrafficDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeVodDomainTrafficDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeVodDomainTrafficDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeVodDomainTrafficDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeVodDomainTrafficDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeVodDomainTrafficDataRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeVodDomainTrafficDataRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DescribeVodDomainTrafficDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeVodDomainTrafficDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeVodDomainTrafficDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeVodDomainTrafficDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeVodDomainTrafficDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeVodDomainTrafficDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeVodDomainTrafficDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeVodDomainTrafficDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeVodDomainTrafficDataRequest::getVersion()const
{
	return version_;
}

void DescribeVodDomainTrafficDataRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DescribeVodDomainTrafficDataRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeVodDomainTrafficDataRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeVodDomainTrafficDataRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeVodDomainTrafficDataRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeVodDomainTrafficDataRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeVodDomainTrafficDataRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeVodDomainTrafficDataRequest::getRequestId()const
{
	return requestId_;
}

void DescribeVodDomainTrafficDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeVodDomainTrafficDataRequest::getInterval()const
{
	return interval_;
}

void DescribeVodDomainTrafficDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setCoreParameter("Interval", interval);
}

std::string DescribeVodDomainTrafficDataRequest::getFields()const
{
	return fields_;
}

void DescribeVodDomainTrafficDataRequest::setFields(const std::string& fields)
{
	fields_ = fields;
	setCoreParameter("Fields", fields);
}

