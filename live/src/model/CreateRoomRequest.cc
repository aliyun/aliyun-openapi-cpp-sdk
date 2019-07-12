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

#include <alibabacloud/live/model/CreateRoomRequest.h>

using AlibabaCloud::Live::Model::CreateRoomRequest;

CreateRoomRequest::CreateRoomRequest() :
	RpcServiceRequest("live", "2016-11-01", "CreateRoom")
{}

CreateRoomRequest::~CreateRoomRequest()
{}

std::string CreateRoomRequest::getTemplateIds()const
{
	return templateIds_;
}

void CreateRoomRequest::setTemplateIds(const std::string& templateIds)
{
	templateIds_ = templateIds;
	setCoreParameter("TemplateIds", templateIds);
}

long CreateRoomRequest::getCallerParentId()const
{
	return callerParentId_;
}

void CreateRoomRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool CreateRoomRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void CreateRoomRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string CreateRoomRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void CreateRoomRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string CreateRoomRequest::getAnchorId()const
{
	return anchorId_;
}

void CreateRoomRequest::setAnchorId(const std::string& anchorId)
{
	anchorId_ = anchorId;
	setCoreParameter("AnchorId", anchorId);
}

bool CreateRoomRequest::getUseAppTranscode()const
{
	return useAppTranscode_;
}

void CreateRoomRequest::setUseAppTranscode(bool useAppTranscode)
{
	useAppTranscode_ = useAppTranscode;
	setCoreParameter("UseAppTranscode", useAppTranscode ? "true" : "false");
}

std::string CreateRoomRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void CreateRoomRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string CreateRoomRequest::getCallerType()const
{
	return callerType_;
}

void CreateRoomRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string CreateRoomRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateRoomRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateRoomRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateRoomRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string CreateRoomRequest::getRegionId()const
{
	return regionId_;
}

void CreateRoomRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateRoomRequest::getRequestContent()const
{
	return requestContent_;
}

void CreateRoomRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string CreateRoomRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void CreateRoomRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string CreateRoomRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void CreateRoomRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long CreateRoomRequest::getCallerUid()const
{
	return callerUid_;
}

void CreateRoomRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string CreateRoomRequest::getApp_ip()const
{
	return app_ip_;
}

void CreateRoomRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string CreateRoomRequest::getPopProduct()const
{
	return popProduct_;
}

void CreateRoomRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string CreateRoomRequest::getCallerBid()const
{
	return callerBid_;
}

void CreateRoomRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long CreateRoomRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateRoomRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateRoomRequest::getVersion()const
{
	return version_;
}

void CreateRoomRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool CreateRoomRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void CreateRoomRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool CreateRoomRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void CreateRoomRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

std::string CreateRoomRequest::getRoomId()const
{
	return roomId_;
}

void CreateRoomRequest::setRoomId(const std::string& roomId)
{
	roomId_ = roomId;
	setCoreParameter("RoomId", roomId);
}

bool CreateRoomRequest::getSecurity_transport()const
{
	return security_transport_;
}

void CreateRoomRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string CreateRoomRequest::getRequestId()const
{
	return requestId_;
}

void CreateRoomRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string CreateRoomRequest::getAppId()const
{
	return appId_;
}

void CreateRoomRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", appId);
}

