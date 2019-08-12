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

#include <alibabacloud/live/model/DescribeRoomListRequest.h>

using AlibabaCloud::Live::Model::DescribeRoomListRequest;

DescribeRoomListRequest::DescribeRoomListRequest() :
	RpcServiceRequest("live", "2016-11-01", "DescribeRoomList")
{}

DescribeRoomListRequest::~DescribeRoomListRequest()
{}

long DescribeRoomListRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeRoomListRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeRoomListRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeRoomListRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeRoomListRequest::getStartTime()const
{
	return startTime_;
}

void DescribeRoomListRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

std::string DescribeRoomListRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeRoomListRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string DescribeRoomListRequest::getAnchorId()const
{
	return anchorId_;
}

void DescribeRoomListRequest::setAnchorId(const std::string& anchorId)
{
	anchorId_ = anchorId;
	setCoreParameter("AnchorId", std::to_string(anchorId));
}

int DescribeRoomListRequest::getPageNum()const
{
	return pageNum_;
}

void DescribeRoomListRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setCoreParameter("PageNum", pageNum);
}

std::string DescribeRoomListRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeRoomListRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string DescribeRoomListRequest::getCallerType()const
{
	return callerType_;
}

void DescribeRoomListRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string DescribeRoomListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeRoomListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string DescribeRoomListRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeRoomListRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DescribeRoomListRequest::getRegionId()const
{
	return regionId_;
}

void DescribeRoomListRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

int DescribeRoomListRequest::getRoomStatus()const
{
	return roomStatus_;
}

void DescribeRoomListRequest::setRoomStatus(int roomStatus)
{
	roomStatus_ = roomStatus;
	setCoreParameter("RoomStatus", roomStatus);
}

std::string DescribeRoomListRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeRoomListRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

int DescribeRoomListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeRoomListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeRoomListRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeRoomListRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string DescribeRoomListRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeRoomListRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long DescribeRoomListRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeRoomListRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeRoomListRequest::getOrder()const
{
	return order_;
}

void DescribeRoomListRequest::setOrder(const std::string& order)
{
	order_ = order;
	setCoreParameter("Order", std::to_string(order));
}

std::string DescribeRoomListRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeRoomListRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string DescribeRoomListRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeRoomListRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", std::to_string(popProduct));
}

std::string DescribeRoomListRequest::getEndTime()const
{
	return endTime_;
}

void DescribeRoomListRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string DescribeRoomListRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeRoomListRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long DescribeRoomListRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRoomListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeRoomListRequest::getVersion()const
{
	return version_;
}

void DescribeRoomListRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", std::to_string(version));
}

bool DescribeRoomListRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeRoomListRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeRoomListRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeRoomListRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

std::string DescribeRoomListRequest::getRoomId()const
{
	return roomId_;
}

void DescribeRoomListRequest::setRoomId(const std::string& roomId)
{
	roomId_ = roomId;
	setCoreParameter("RoomId", std::to_string(roomId));
}

bool DescribeRoomListRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeRoomListRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeRoomListRequest::getRequestId()const
{
	return requestId_;
}

void DescribeRoomListRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string DescribeRoomListRequest::getAppId()const
{
	return appId_;
}

void DescribeRoomListRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", std::to_string(appId));
}

