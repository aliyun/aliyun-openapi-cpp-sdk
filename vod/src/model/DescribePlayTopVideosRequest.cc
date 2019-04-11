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

#include <alibabacloud/vod/model/DescribePlayTopVideosRequest.h>

using AlibabaCloud::Vod::Model::DescribePlayTopVideosRequest;

DescribePlayTopVideosRequest::DescribePlayTopVideosRequest() :
	RpcServiceRequest("vod", "2017-03-21", "DescribePlayTopVideos")
{}

DescribePlayTopVideosRequest::~DescribePlayTopVideosRequest()
{}

long DescribePlayTopVideosRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribePlayTopVideosRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DescribePlayTopVideosRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribePlayTopVideosRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribePlayTopVideosRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribePlayTopVideosRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribePlayTopVideosRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribePlayTopVideosRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribePlayTopVideosRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribePlayTopVideosRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribePlayTopVideosRequest::getCallerType()const
{
	return callerType_;
}

void DescribePlayTopVideosRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribePlayTopVideosRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribePlayTopVideosRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribePlayTopVideosRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribePlayTopVideosRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribePlayTopVideosRequest::getRegionId()const
{
	return regionId_;
}

void DescribePlayTopVideosRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribePlayTopVideosRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribePlayTopVideosRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

long DescribePlayTopVideosRequest::getPageSize()const
{
	return pageSize_;
}

void DescribePlayTopVideosRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribePlayTopVideosRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribePlayTopVideosRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribePlayTopVideosRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribePlayTopVideosRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribePlayTopVideosRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribePlayTopVideosRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribePlayTopVideosRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribePlayTopVideosRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribePlayTopVideosRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribePlayTopVideosRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DescribePlayTopVideosRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribePlayTopVideosRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribePlayTopVideosRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribePlayTopVideosRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribePlayTopVideosRequest::getVersion()const
{
	return version_;
}

void DescribePlayTopVideosRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DescribePlayTopVideosRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribePlayTopVideosRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribePlayTopVideosRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribePlayTopVideosRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribePlayTopVideosRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribePlayTopVideosRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribePlayTopVideosRequest::getBizDate()const
{
	return bizDate_;
}

void DescribePlayTopVideosRequest::setBizDate(const std::string& bizDate)
{
	bizDate_ = bizDate;
	setCoreParameter("BizDate", bizDate);
}

std::string DescribePlayTopVideosRequest::getVideoType()const
{
	return videoType_;
}

void DescribePlayTopVideosRequest::setVideoType(const std::string& videoType)
{
	videoType_ = videoType;
	setCoreParameter("VideoType", videoType);
}

std::string DescribePlayTopVideosRequest::getRequestId()const
{
	return requestId_;
}

void DescribePlayTopVideosRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

long DescribePlayTopVideosRequest::getPageNo()const
{
	return pageNo_;
}

void DescribePlayTopVideosRequest::setPageNo(long pageNo)
{
	pageNo_ = pageNo;
	setCoreParameter("PageNo", std::to_string(pageNo));
}

