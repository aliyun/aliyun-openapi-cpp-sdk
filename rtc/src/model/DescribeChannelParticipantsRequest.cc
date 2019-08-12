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

#include <alibabacloud/rtc/model/DescribeChannelParticipantsRequest.h>

using AlibabaCloud::Rtc::Model::DescribeChannelParticipantsRequest;

DescribeChannelParticipantsRequest::DescribeChannelParticipantsRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "DescribeChannelParticipants")
{}

DescribeChannelParticipantsRequest::~DescribeChannelParticipantsRequest()
{}

long DescribeChannelParticipantsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeChannelParticipantsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long DescribeChannelParticipantsRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeChannelParticipantsRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeChannelParticipantsRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeChannelParticipantsRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeChannelParticipantsRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeChannelParticipantsRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

int DescribeChannelParticipantsRequest::getPageNum()const
{
	return pageNum_;
}

void DescribeChannelParticipantsRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setCoreParameter("PageNum", pageNum);
}

std::string DescribeChannelParticipantsRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeChannelParticipantsRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string DescribeChannelParticipantsRequest::getCallerType()const
{
	return callerType_;
}

void DescribeChannelParticipantsRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string DescribeChannelParticipantsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeChannelParticipantsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string DescribeChannelParticipantsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeChannelParticipantsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DescribeChannelParticipantsRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeChannelParticipantsRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

int DescribeChannelParticipantsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeChannelParticipantsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeChannelParticipantsRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeChannelParticipantsRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string DescribeChannelParticipantsRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeChannelParticipantsRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long DescribeChannelParticipantsRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeChannelParticipantsRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeChannelParticipantsRequest::getOrder()const
{
	return order_;
}

void DescribeChannelParticipantsRequest::setOrder(const std::string& order)
{
	order_ = order;
	setCoreParameter("Order", std::to_string(order));
}

std::string DescribeChannelParticipantsRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeChannelParticipantsRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string DescribeChannelParticipantsRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeChannelParticipantsRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", std::to_string(popProduct));
}

std::string DescribeChannelParticipantsRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeChannelParticipantsRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long DescribeChannelParticipantsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeChannelParticipantsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeChannelParticipantsRequest::getVersion()const
{
	return version_;
}

void DescribeChannelParticipantsRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", std::to_string(version));
}

bool DescribeChannelParticipantsRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeChannelParticipantsRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeChannelParticipantsRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeChannelParticipantsRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeChannelParticipantsRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeChannelParticipantsRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeChannelParticipantsRequest::getServiceCode()const
{
	return serviceCode_;
}

void DescribeChannelParticipantsRequest::setServiceCode(const std::string& serviceCode)
{
	serviceCode_ = serviceCode;
	setCoreParameter("ServiceCode", std::to_string(serviceCode));
}

std::string DescribeChannelParticipantsRequest::getRequestId()const
{
	return requestId_;
}

void DescribeChannelParticipantsRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string DescribeChannelParticipantsRequest::getAppId()const
{
	return appId_;
}

void DescribeChannelParticipantsRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", std::to_string(appId));
}

std::string DescribeChannelParticipantsRequest::getChannelId()const
{
	return channelId_;
}

void DescribeChannelParticipantsRequest::setChannelId(const std::string& channelId)
{
	channelId_ = channelId;
	setCoreParameter("ChannelId", std::to_string(channelId));
}

