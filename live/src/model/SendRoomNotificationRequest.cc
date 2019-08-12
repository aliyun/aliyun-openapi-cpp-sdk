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

#include <alibabacloud/live/model/SendRoomNotificationRequest.h>

using AlibabaCloud::Live::Model::SendRoomNotificationRequest;

SendRoomNotificationRequest::SendRoomNotificationRequest() :
	RpcServiceRequest("live", "2016-11-01", "SendRoomNotification")
{}

SendRoomNotificationRequest::~SendRoomNotificationRequest()
{}

std::string SendRoomNotificationRequest::getData()const
{
	return data_;
}

void SendRoomNotificationRequest::setData(const std::string& data)
{
	data_ = data;
	setCoreParameter("Data", std::to_string(data));
}

long SendRoomNotificationRequest::getCallerParentId()const
{
	return callerParentId_;
}

void SendRoomNotificationRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool SendRoomNotificationRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void SendRoomNotificationRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string SendRoomNotificationRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void SendRoomNotificationRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string SendRoomNotificationRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void SendRoomNotificationRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string SendRoomNotificationRequest::getCallerType()const
{
	return callerType_;
}

void SendRoomNotificationRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string SendRoomNotificationRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SendRoomNotificationRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string SendRoomNotificationRequest::getSecurityToken()const
{
	return securityToken_;
}

void SendRoomNotificationRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string SendRoomNotificationRequest::getRegionId()const
{
	return regionId_;
}

void SendRoomNotificationRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string SendRoomNotificationRequest::getRequestContent()const
{
	return requestContent_;
}

void SendRoomNotificationRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string SendRoomNotificationRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void SendRoomNotificationRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string SendRoomNotificationRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void SendRoomNotificationRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long SendRoomNotificationRequest::getCallerUid()const
{
	return callerUid_;
}

void SendRoomNotificationRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string SendRoomNotificationRequest::getApp_ip()const
{
	return app_ip_;
}

void SendRoomNotificationRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string SendRoomNotificationRequest::getPopProduct()const
{
	return popProduct_;
}

void SendRoomNotificationRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", std::to_string(popProduct));
}

std::string SendRoomNotificationRequest::getAppUid()const
{
	return appUid_;
}

void SendRoomNotificationRequest::setAppUid(const std::string& appUid)
{
	appUid_ = appUid;
	setCoreParameter("AppUid", std::to_string(appUid));
}

std::string SendRoomNotificationRequest::getCallerBid()const
{
	return callerBid_;
}

void SendRoomNotificationRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long SendRoomNotificationRequest::getOwnerId()const
{
	return ownerId_;
}

void SendRoomNotificationRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

int SendRoomNotificationRequest::getPriority()const
{
	return priority_;
}

void SendRoomNotificationRequest::setPriority(int priority)
{
	priority_ = priority;
	setCoreParameter("Priority", priority);
}

std::string SendRoomNotificationRequest::getVersion()const
{
	return version_;
}

void SendRoomNotificationRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", std::to_string(version));
}

bool SendRoomNotificationRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void SendRoomNotificationRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool SendRoomNotificationRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void SendRoomNotificationRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

std::string SendRoomNotificationRequest::getRoomId()const
{
	return roomId_;
}

void SendRoomNotificationRequest::setRoomId(const std::string& roomId)
{
	roomId_ = roomId;
	setCoreParameter("RoomId", std::to_string(roomId));
}

bool SendRoomNotificationRequest::getSecurity_transport()const
{
	return security_transport_;
}

void SendRoomNotificationRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string SendRoomNotificationRequest::getRequestId()const
{
	return requestId_;
}

void SendRoomNotificationRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string SendRoomNotificationRequest::getAppId()const
{
	return appId_;
}

void SendRoomNotificationRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", std::to_string(appId));
}

