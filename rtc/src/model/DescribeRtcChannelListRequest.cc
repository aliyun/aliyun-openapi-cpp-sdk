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

#include <alibabacloud/rtc/model/DescribeRtcChannelListRequest.h>

using AlibabaCloud::Rtc::Model::DescribeRtcChannelListRequest;

DescribeRtcChannelListRequest::DescribeRtcChannelListRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "DescribeRtcChannelList")
{}

DescribeRtcChannelListRequest::~DescribeRtcChannelListRequest()
{}

long DescribeRtcChannelListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeRtcChannelListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeRtcChannelListRequest::getSortType()const
{
	return sortType_;
}

void DescribeRtcChannelListRequest::setSortType(const std::string& sortType)
{
	sortType_ = sortType;
	setCoreParameter("SortType", std::to_string(sortType));
}

long DescribeRtcChannelListRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeRtcChannelListRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeRtcChannelListRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeRtcChannelListRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeRtcChannelListRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeRtcChannelListRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string DescribeRtcChannelListRequest::getUserId()const
{
	return userId_;
}

void DescribeRtcChannelListRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setCoreParameter("UserId", std::to_string(userId));
}

std::string DescribeRtcChannelListRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeRtcChannelListRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string DescribeRtcChannelListRequest::getCallerType()const
{
	return callerType_;
}

void DescribeRtcChannelListRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string DescribeRtcChannelListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeRtcChannelListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string DescribeRtcChannelListRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeRtcChannelListRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DescribeRtcChannelListRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeRtcChannelListRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string DescribeRtcChannelListRequest::getServiceArea()const
{
	return serviceArea_;
}

void DescribeRtcChannelListRequest::setServiceArea(const std::string& serviceArea)
{
	serviceArea_ = serviceArea;
	setCoreParameter("ServiceArea", std::to_string(serviceArea));
}

long DescribeRtcChannelListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeRtcChannelListRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeRtcChannelListRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeRtcChannelListRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string DescribeRtcChannelListRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeRtcChannelListRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long DescribeRtcChannelListRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeRtcChannelListRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeRtcChannelListRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeRtcChannelListRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string DescribeRtcChannelListRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeRtcChannelListRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", std::to_string(popProduct));
}

std::string DescribeRtcChannelListRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeRtcChannelListRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long DescribeRtcChannelListRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRtcChannelListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeRtcChannelListRequest::getVersion()const
{
	return version_;
}

void DescribeRtcChannelListRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", std::to_string(version));
}

bool DescribeRtcChannelListRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeRtcChannelListRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeRtcChannelListRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeRtcChannelListRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeRtcChannelListRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeRtcChannelListRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeRtcChannelListRequest::getServiceCode()const
{
	return serviceCode_;
}

void DescribeRtcChannelListRequest::setServiceCode(const std::string& serviceCode)
{
	serviceCode_ = serviceCode;
	setCoreParameter("ServiceCode", std::to_string(serviceCode));
}

std::string DescribeRtcChannelListRequest::getRequestId()const
{
	return requestId_;
}

void DescribeRtcChannelListRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

long DescribeRtcChannelListRequest::getPageNo()const
{
	return pageNo_;
}

void DescribeRtcChannelListRequest::setPageNo(long pageNo)
{
	pageNo_ = pageNo;
	setCoreParameter("PageNo", pageNo);
}

std::string DescribeRtcChannelListRequest::getAppId()const
{
	return appId_;
}

void DescribeRtcChannelListRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", std::to_string(appId));
}

std::string DescribeRtcChannelListRequest::getChannelId()const
{
	return channelId_;
}

void DescribeRtcChannelListRequest::setChannelId(const std::string& channelId)
{
	channelId_ = channelId;
	setCoreParameter("ChannelId", std::to_string(channelId));
}

std::string DescribeRtcChannelListRequest::getTimePoint()const
{
	return timePoint_;
}

void DescribeRtcChannelListRequest::setTimePoint(const std::string& timePoint)
{
	timePoint_ = timePoint;
	setCoreParameter("TimePoint", std::to_string(timePoint));
}

