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

#include <alibabacloud/vod/model/DescribePlayVideoStatisRequest.h>

using AlibabaCloud::Vod::Model::DescribePlayVideoStatisRequest;

DescribePlayVideoStatisRequest::DescribePlayVideoStatisRequest() :
	RpcServiceRequest("vod", "2017-03-21", "DescribePlayVideoStatis")
{}

DescribePlayVideoStatisRequest::~DescribePlayVideoStatisRequest()
{}

long DescribePlayVideoStatisRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribePlayVideoStatisRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DescribePlayVideoStatisRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribePlayVideoStatisRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribePlayVideoStatisRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribePlayVideoStatisRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribePlayVideoStatisRequest::getStartTime()const
{
	return startTime_;
}

void DescribePlayVideoStatisRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribePlayVideoStatisRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribePlayVideoStatisRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribePlayVideoStatisRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribePlayVideoStatisRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribePlayVideoStatisRequest::getCallerType()const
{
	return callerType_;
}

void DescribePlayVideoStatisRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribePlayVideoStatisRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribePlayVideoStatisRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribePlayVideoStatisRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribePlayVideoStatisRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribePlayVideoStatisRequest::getRegionId()const
{
	return regionId_;
}

void DescribePlayVideoStatisRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribePlayVideoStatisRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribePlayVideoStatisRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribePlayVideoStatisRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribePlayVideoStatisRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribePlayVideoStatisRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribePlayVideoStatisRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribePlayVideoStatisRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribePlayVideoStatisRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribePlayVideoStatisRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribePlayVideoStatisRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribePlayVideoStatisRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribePlayVideoStatisRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DescribePlayVideoStatisRequest::getEndTime()const
{
	return endTime_;
}

void DescribePlayVideoStatisRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribePlayVideoStatisRequest::getVideoId()const
{
	return videoId_;
}

void DescribePlayVideoStatisRequest::setVideoId(const std::string& videoId)
{
	videoId_ = videoId;
	setCoreParameter("VideoId", videoId);
}

std::string DescribePlayVideoStatisRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribePlayVideoStatisRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribePlayVideoStatisRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribePlayVideoStatisRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribePlayVideoStatisRequest::getVersion()const
{
	return version_;
}

void DescribePlayVideoStatisRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DescribePlayVideoStatisRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribePlayVideoStatisRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribePlayVideoStatisRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribePlayVideoStatisRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribePlayVideoStatisRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribePlayVideoStatisRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribePlayVideoStatisRequest::getVideoType()const
{
	return videoType_;
}

void DescribePlayVideoStatisRequest::setVideoType(const std::string& videoType)
{
	videoType_ = videoType;
	setCoreParameter("VideoType", videoType);
}

std::string DescribePlayVideoStatisRequest::getRequestId()const
{
	return requestId_;
}

void DescribePlayVideoStatisRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribePlayVideoStatisRequest::getInterval()const
{
	return interval_;
}

void DescribePlayVideoStatisRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setCoreParameter("Interval", interval);
}

