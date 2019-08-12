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

#include <alibabacloud/vod/model/DescribePlayUserTotalRequest.h>

using AlibabaCloud::Vod::Model::DescribePlayUserTotalRequest;

DescribePlayUserTotalRequest::DescribePlayUserTotalRequest() :
	RpcServiceRequest("vod", "2017-03-21", "DescribePlayUserTotal")
{}

DescribePlayUserTotalRequest::~DescribePlayUserTotalRequest()
{}

long DescribePlayUserTotalRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribePlayUserTotalRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long DescribePlayUserTotalRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribePlayUserTotalRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribePlayUserTotalRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribePlayUserTotalRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string DescribePlayUserTotalRequest::getStartTime()const
{
	return startTime_;
}

void DescribePlayUserTotalRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribePlayUserTotalRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribePlayUserTotalRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribePlayUserTotalRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribePlayUserTotalRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribePlayUserTotalRequest::getCallerType()const
{
	return callerType_;
}

void DescribePlayUserTotalRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribePlayUserTotalRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribePlayUserTotalRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribePlayUserTotalRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribePlayUserTotalRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribePlayUserTotalRequest::getRegionId()const
{
	return regionId_;
}

void DescribePlayUserTotalRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribePlayUserTotalRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribePlayUserTotalRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribePlayUserTotalRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribePlayUserTotalRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribePlayUserTotalRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribePlayUserTotalRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribePlayUserTotalRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribePlayUserTotalRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribePlayUserTotalRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribePlayUserTotalRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribePlayUserTotalRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribePlayUserTotalRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DescribePlayUserTotalRequest::getEndTime()const
{
	return endTime_;
}

void DescribePlayUserTotalRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribePlayUserTotalRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribePlayUserTotalRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribePlayUserTotalRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribePlayUserTotalRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribePlayUserTotalRequest::getVersion()const
{
	return version_;
}

void DescribePlayUserTotalRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DescribePlayUserTotalRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribePlayUserTotalRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

bool DescribePlayUserTotalRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribePlayUserTotalRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

bool DescribePlayUserTotalRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribePlayUserTotalRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string DescribePlayUserTotalRequest::getVideoType()const
{
	return videoType_;
}

void DescribePlayUserTotalRequest::setVideoType(const std::string& videoType)
{
	videoType_ = videoType;
	setCoreParameter("VideoType", videoType);
}

std::string DescribePlayUserTotalRequest::getRequestId()const
{
	return requestId_;
}

void DescribePlayUserTotalRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribePlayUserTotalRequest::getInterval()const
{
	return interval_;
}

void DescribePlayUserTotalRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setCoreParameter("Interval", interval);
}

