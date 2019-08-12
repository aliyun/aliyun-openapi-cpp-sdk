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

#include <alibabacloud/live/model/ForbidPushStreamRequest.h>

using AlibabaCloud::Live::Model::ForbidPushStreamRequest;

ForbidPushStreamRequest::ForbidPushStreamRequest() :
	RpcServiceRequest("live", "2016-11-01", "ForbidPushStream")
{}

ForbidPushStreamRequest::~ForbidPushStreamRequest()
{}

long ForbidPushStreamRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ForbidPushStreamRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool ForbidPushStreamRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ForbidPushStreamRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string ForbidPushStreamRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ForbidPushStreamRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string ForbidPushStreamRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ForbidPushStreamRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string ForbidPushStreamRequest::getCallerType()const
{
	return callerType_;
}

void ForbidPushStreamRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string ForbidPushStreamRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ForbidPushStreamRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string ForbidPushStreamRequest::getUserData()const
{
	return userData_;
}

void ForbidPushStreamRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setCoreParameter("UserData", std::to_string(userData));
}

std::string ForbidPushStreamRequest::getSecurityToken()const
{
	return securityToken_;
}

void ForbidPushStreamRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string ForbidPushStreamRequest::getRegionId()const
{
	return regionId_;
}

void ForbidPushStreamRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string ForbidPushStreamRequest::getRequestContent()const
{
	return requestContent_;
}

void ForbidPushStreamRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string ForbidPushStreamRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ForbidPushStreamRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string ForbidPushStreamRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ForbidPushStreamRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long ForbidPushStreamRequest::getCallerUid()const
{
	return callerUid_;
}

void ForbidPushStreamRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string ForbidPushStreamRequest::getApp_ip()const
{
	return app_ip_;
}

void ForbidPushStreamRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string ForbidPushStreamRequest::getPopProduct()const
{
	return popProduct_;
}

void ForbidPushStreamRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", std::to_string(popProduct));
}

std::string ForbidPushStreamRequest::getEndTime()const
{
	return endTime_;
}

void ForbidPushStreamRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string ForbidPushStreamRequest::getCallerBid()const
{
	return callerBid_;
}

void ForbidPushStreamRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long ForbidPushStreamRequest::getOwnerId()const
{
	return ownerId_;
}

void ForbidPushStreamRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string ForbidPushStreamRequest::getVersion()const
{
	return version_;
}

void ForbidPushStreamRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", std::to_string(version));
}

bool ForbidPushStreamRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ForbidPushStreamRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool ForbidPushStreamRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ForbidPushStreamRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

std::string ForbidPushStreamRequest::getRoomId()const
{
	return roomId_;
}

void ForbidPushStreamRequest::setRoomId(const std::string& roomId)
{
	roomId_ = roomId;
	setCoreParameter("RoomId", std::to_string(roomId));
}

bool ForbidPushStreamRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ForbidPushStreamRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string ForbidPushStreamRequest::getRequestId()const
{
	return requestId_;
}

void ForbidPushStreamRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string ForbidPushStreamRequest::getAppId()const
{
	return appId_;
}

void ForbidPushStreamRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", std::to_string(appId));
}

