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

#include <alibabacloud/rtc/model/DescribeRtcChannelUserListRequest.h>

using AlibabaCloud::Rtc::Model::DescribeRtcChannelUserListRequest;

DescribeRtcChannelUserListRequest::DescribeRtcChannelUserListRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "DescribeRtcChannelUserList")
{}

DescribeRtcChannelUserListRequest::~DescribeRtcChannelUserListRequest()
{}

long DescribeRtcChannelUserListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeRtcChannelUserListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long DescribeRtcChannelUserListRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeRtcChannelUserListRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeRtcChannelUserListRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeRtcChannelUserListRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeRtcChannelUserListRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeRtcChannelUserListRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string DescribeRtcChannelUserListRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeRtcChannelUserListRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string DescribeRtcChannelUserListRequest::getCallerType()const
{
	return callerType_;
}

void DescribeRtcChannelUserListRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string DescribeRtcChannelUserListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeRtcChannelUserListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string DescribeRtcChannelUserListRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeRtcChannelUserListRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DescribeRtcChannelUserListRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeRtcChannelUserListRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

long DescribeRtcChannelUserListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeRtcChannelUserListRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeRtcChannelUserListRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeRtcChannelUserListRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string DescribeRtcChannelUserListRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeRtcChannelUserListRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long DescribeRtcChannelUserListRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeRtcChannelUserListRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeRtcChannelUserListRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeRtcChannelUserListRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string DescribeRtcChannelUserListRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeRtcChannelUserListRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", std::to_string(popProduct));
}

std::string DescribeRtcChannelUserListRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeRtcChannelUserListRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long DescribeRtcChannelUserListRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRtcChannelUserListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeRtcChannelUserListRequest::getVersion()const
{
	return version_;
}

void DescribeRtcChannelUserListRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", std::to_string(version));
}

bool DescribeRtcChannelUserListRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeRtcChannelUserListRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeRtcChannelUserListRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeRtcChannelUserListRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeRtcChannelUserListRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeRtcChannelUserListRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeRtcChannelUserListRequest::getServiceCode()const
{
	return serviceCode_;
}

void DescribeRtcChannelUserListRequest::setServiceCode(const std::string& serviceCode)
{
	serviceCode_ = serviceCode;
	setCoreParameter("ServiceCode", std::to_string(serviceCode));
}

std::string DescribeRtcChannelUserListRequest::getRequestId()const
{
	return requestId_;
}

void DescribeRtcChannelUserListRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

long DescribeRtcChannelUserListRequest::getPageNo()const
{
	return pageNo_;
}

void DescribeRtcChannelUserListRequest::setPageNo(long pageNo)
{
	pageNo_ = pageNo;
	setCoreParameter("PageNo", pageNo);
}

std::string DescribeRtcChannelUserListRequest::getAppId()const
{
	return appId_;
}

void DescribeRtcChannelUserListRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", std::to_string(appId));
}

std::string DescribeRtcChannelUserListRequest::getChannelId()const
{
	return channelId_;
}

void DescribeRtcChannelUserListRequest::setChannelId(const std::string& channelId)
{
	channelId_ = channelId;
	setCoreParameter("ChannelId", std::to_string(channelId));
}

std::string DescribeRtcChannelUserListRequest::getTimePoint()const
{
	return timePoint_;
}

void DescribeRtcChannelUserListRequest::setTimePoint(const std::string& timePoint)
{
	timePoint_ = timePoint;
	setCoreParameter("TimePoint", std::to_string(timePoint));
}

