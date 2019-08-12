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

#include <alibabacloud/live/model/DeleteRoomRequest.h>

using AlibabaCloud::Live::Model::DeleteRoomRequest;

DeleteRoomRequest::DeleteRoomRequest() :
	RpcServiceRequest("live", "2016-11-01", "DeleteRoom")
{}

DeleteRoomRequest::~DeleteRoomRequest()
{}

std::string DeleteRoomRequest::getApp_ip()const
{
	return app_ip_;
}

void DeleteRoomRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DeleteRoomRequest::getPopProduct()const
{
	return popProduct_;
}

void DeleteRoomRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

long DeleteRoomRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DeleteRoomRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DeleteRoomRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DeleteRoomRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DeleteRoomRequest::getCallerBid()const
{
	return callerBid_;
}

void DeleteRoomRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DeleteRoomRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteRoomRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteRoomRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DeleteRoomRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DeleteRoomRequest::getVersion()const
{
	return version_;
}

void DeleteRoomRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

std::string DeleteRoomRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DeleteRoomRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DeleteRoomRequest::getCallerType()const
{
	return callerType_;
}

void DeleteRoomRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

bool DeleteRoomRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DeleteRoomRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DeleteRoomRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DeleteRoomRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

std::string DeleteRoomRequest::getRoomId()const
{
	return roomId_;
}

void DeleteRoomRequest::setRoomId(const std::string& roomId)
{
	roomId_ = roomId;
	setCoreParameter("RoomId", roomId);
}

std::string DeleteRoomRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteRoomRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

bool DeleteRoomRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DeleteRoomRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DeleteRoomRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteRoomRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DeleteRoomRequest::getRegionId()const
{
	return regionId_;
}

void DeleteRoomRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteRoomRequest::getRequestId()const
{
	return requestId_;
}

void DeleteRoomRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DeleteRoomRequest::getRequestContent()const
{
	return requestContent_;
}

void DeleteRoomRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DeleteRoomRequest::getAppId()const
{
	return appId_;
}

void DeleteRoomRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", appId);
}

std::string DeleteRoomRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DeleteRoomRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DeleteRoomRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DeleteRoomRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DeleteRoomRequest::getCallerUid()const
{
	return callerUid_;
}

void DeleteRoomRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

