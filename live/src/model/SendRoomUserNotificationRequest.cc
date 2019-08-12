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

#include <alibabacloud/live/model/SendRoomUserNotificationRequest.h>

using AlibabaCloud::Live::Model::SendRoomUserNotificationRequest;

SendRoomUserNotificationRequest::SendRoomUserNotificationRequest() :
	RpcServiceRequest("live", "2016-11-01", "SendRoomUserNotification")
{}

SendRoomUserNotificationRequest::~SendRoomUserNotificationRequest()
{}

std::string SendRoomUserNotificationRequest::getData()const
{
	return data_;
}

void SendRoomUserNotificationRequest::setData(const std::string& data)
{
	data_ = data;
	setCoreParameter("Data", std::to_string(data));
}

long SendRoomUserNotificationRequest::getCallerParentId()const
{
	return callerParentId_;
}

void SendRoomUserNotificationRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool SendRoomUserNotificationRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void SendRoomUserNotificationRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string SendRoomUserNotificationRequest::getToAppUid()const
{
	return toAppUid_;
}

void SendRoomUserNotificationRequest::setToAppUid(const std::string& toAppUid)
{
	toAppUid_ = toAppUid;
	setCoreParameter("ToAppUid", std::to_string(toAppUid));
}

std::string SendRoomUserNotificationRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void SendRoomUserNotificationRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string SendRoomUserNotificationRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void SendRoomUserNotificationRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string SendRoomUserNotificationRequest::getCallerType()const
{
	return callerType_;
}

void SendRoomUserNotificationRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string SendRoomUserNotificationRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SendRoomUserNotificationRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string SendRoomUserNotificationRequest::getSecurityToken()const
{
	return securityToken_;
}

void SendRoomUserNotificationRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string SendRoomUserNotificationRequest::getRegionId()const
{
	return regionId_;
}

void SendRoomUserNotificationRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string SendRoomUserNotificationRequest::getRequestContent()const
{
	return requestContent_;
}

void SendRoomUserNotificationRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string SendRoomUserNotificationRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void SendRoomUserNotificationRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string SendRoomUserNotificationRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void SendRoomUserNotificationRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long SendRoomUserNotificationRequest::getCallerUid()const
{
	return callerUid_;
}

void SendRoomUserNotificationRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string SendRoomUserNotificationRequest::getApp_ip()const
{
	return app_ip_;
}

void SendRoomUserNotificationRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string SendRoomUserNotificationRequest::getPopProduct()const
{
	return popProduct_;
}

void SendRoomUserNotificationRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", std::to_string(popProduct));
}

std::string SendRoomUserNotificationRequest::getAppUid()const
{
	return appUid_;
}

void SendRoomUserNotificationRequest::setAppUid(const std::string& appUid)
{
	appUid_ = appUid;
	setCoreParameter("AppUid", std::to_string(appUid));
}

std::string SendRoomUserNotificationRequest::getCallerBid()const
{
	return callerBid_;
}

void SendRoomUserNotificationRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long SendRoomUserNotificationRequest::getOwnerId()const
{
	return ownerId_;
}

void SendRoomUserNotificationRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

int SendRoomUserNotificationRequest::getPriority()const
{
	return priority_;
}

void SendRoomUserNotificationRequest::setPriority(int priority)
{
	priority_ = priority;
	setCoreParameter("Priority", priority);
}

std::string SendRoomUserNotificationRequest::getVersion()const
{
	return version_;
}

void SendRoomUserNotificationRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", std::to_string(version));
}

bool SendRoomUserNotificationRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void SendRoomUserNotificationRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool SendRoomUserNotificationRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void SendRoomUserNotificationRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

std::string SendRoomUserNotificationRequest::getRoomId()const
{
	return roomId_;
}

void SendRoomUserNotificationRequest::setRoomId(const std::string& roomId)
{
	roomId_ = roomId;
	setCoreParameter("RoomId", std::to_string(roomId));
}

bool SendRoomUserNotificationRequest::getSecurity_transport()const
{
	return security_transport_;
}

void SendRoomUserNotificationRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string SendRoomUserNotificationRequest::getRequestId()const
{
	return requestId_;
}

void SendRoomUserNotificationRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string SendRoomUserNotificationRequest::getAppId()const
{
	return appId_;
}

void SendRoomUserNotificationRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", std::to_string(appId));
}

