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

#include <alibabacloud/live/model/DescribeRoomStatusRequest.h>

using AlibabaCloud::Live::Model::DescribeRoomStatusRequest;

DescribeRoomStatusRequest::DescribeRoomStatusRequest() :
	RpcServiceRequest("live", "2016-11-01", "DescribeRoomStatus")
{}

DescribeRoomStatusRequest::~DescribeRoomStatusRequest()
{}

std::string DescribeRoomStatusRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeRoomStatusRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeRoomStatusRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeRoomStatusRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

long DescribeRoomStatusRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeRoomStatusRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeRoomStatusRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeRoomStatusRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeRoomStatusRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeRoomStatusRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeRoomStatusRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRoomStatusRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeRoomStatusRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeRoomStatusRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeRoomStatusRequest::getVersion()const
{
	return version_;
}

void DescribeRoomStatusRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

std::string DescribeRoomStatusRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeRoomStatusRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeRoomStatusRequest::getCallerType()const
{
	return callerType_;
}

void DescribeRoomStatusRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

bool DescribeRoomStatusRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeRoomStatusRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeRoomStatusRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeRoomStatusRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

std::string DescribeRoomStatusRequest::getRoomId()const
{
	return roomId_;
}

void DescribeRoomStatusRequest::setRoomId(const std::string& roomId)
{
	roomId_ = roomId;
	setCoreParameter("RoomId", roomId);
}

std::string DescribeRoomStatusRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeRoomStatusRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

bool DescribeRoomStatusRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeRoomStatusRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeRoomStatusRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeRoomStatusRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeRoomStatusRequest::getRegionId()const
{
	return regionId_;
}

void DescribeRoomStatusRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeRoomStatusRequest::getRequestId()const
{
	return requestId_;
}

void DescribeRoomStatusRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeRoomStatusRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeRoomStatusRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeRoomStatusRequest::getAppId()const
{
	return appId_;
}

void DescribeRoomStatusRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", appId);
}

std::string DescribeRoomStatusRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeRoomStatusRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeRoomStatusRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeRoomStatusRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeRoomStatusRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeRoomStatusRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

