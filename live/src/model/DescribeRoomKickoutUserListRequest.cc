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

#include <alibabacloud/live/model/DescribeRoomKickoutUserListRequest.h>

using AlibabaCloud::Live::Model::DescribeRoomKickoutUserListRequest;

DescribeRoomKickoutUserListRequest::DescribeRoomKickoutUserListRequest() :
	RpcServiceRequest("live", "2016-11-01", "DescribeRoomKickoutUserList")
{}

DescribeRoomKickoutUserListRequest::~DescribeRoomKickoutUserListRequest()
{}

long DescribeRoomKickoutUserListRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeRoomKickoutUserListRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeRoomKickoutUserListRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeRoomKickoutUserListRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeRoomKickoutUserListRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeRoomKickoutUserListRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

int DescribeRoomKickoutUserListRequest::getPageNum()const
{
	return pageNum_;
}

void DescribeRoomKickoutUserListRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setCoreParameter("PageNum", std::to_string(pageNum));
}

std::string DescribeRoomKickoutUserListRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeRoomKickoutUserListRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeRoomKickoutUserListRequest::getCallerType()const
{
	return callerType_;
}

void DescribeRoomKickoutUserListRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeRoomKickoutUserListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeRoomKickoutUserListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeRoomKickoutUserListRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeRoomKickoutUserListRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeRoomKickoutUserListRequest::getRegionId()const
{
	return regionId_;
}

void DescribeRoomKickoutUserListRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeRoomKickoutUserListRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeRoomKickoutUserListRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

int DescribeRoomKickoutUserListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeRoomKickoutUserListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeRoomKickoutUserListRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeRoomKickoutUserListRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeRoomKickoutUserListRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeRoomKickoutUserListRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeRoomKickoutUserListRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeRoomKickoutUserListRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeRoomKickoutUserListRequest::getOrder()const
{
	return order_;
}

void DescribeRoomKickoutUserListRequest::setOrder(const std::string& order)
{
	order_ = order;
	setCoreParameter("Order", order);
}

std::string DescribeRoomKickoutUserListRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeRoomKickoutUserListRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeRoomKickoutUserListRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeRoomKickoutUserListRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DescribeRoomKickoutUserListRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeRoomKickoutUserListRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeRoomKickoutUserListRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRoomKickoutUserListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeRoomKickoutUserListRequest::getVersion()const
{
	return version_;
}

void DescribeRoomKickoutUserListRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DescribeRoomKickoutUserListRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeRoomKickoutUserListRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeRoomKickoutUserListRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeRoomKickoutUserListRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

std::string DescribeRoomKickoutUserListRequest::getRoomId()const
{
	return roomId_;
}

void DescribeRoomKickoutUserListRequest::setRoomId(const std::string& roomId)
{
	roomId_ = roomId;
	setCoreParameter("RoomId", roomId);
}

bool DescribeRoomKickoutUserListRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeRoomKickoutUserListRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeRoomKickoutUserListRequest::getRequestId()const
{
	return requestId_;
}

void DescribeRoomKickoutUserListRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeRoomKickoutUserListRequest::getAppId()const
{
	return appId_;
}

void DescribeRoomKickoutUserListRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", appId);
}

