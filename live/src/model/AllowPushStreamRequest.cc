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

#include <alibabacloud/live/model/AllowPushStreamRequest.h>

using AlibabaCloud::Live::Model::AllowPushStreamRequest;

AllowPushStreamRequest::AllowPushStreamRequest() :
	RpcServiceRequest("live", "2016-11-01", "AllowPushStream")
{}

AllowPushStreamRequest::~AllowPushStreamRequest()
{}

long AllowPushStreamRequest::getCallerParentId()const
{
	return callerParentId_;
}

void AllowPushStreamRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool AllowPushStreamRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void AllowPushStreamRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string AllowPushStreamRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void AllowPushStreamRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string AllowPushStreamRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void AllowPushStreamRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string AllowPushStreamRequest::getCallerType()const
{
	return callerType_;
}

void AllowPushStreamRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string AllowPushStreamRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AllowPushStreamRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string AllowPushStreamRequest::getSecurityToken()const
{
	return securityToken_;
}

void AllowPushStreamRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string AllowPushStreamRequest::getRegionId()const
{
	return regionId_;
}

void AllowPushStreamRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string AllowPushStreamRequest::getRequestContent()const
{
	return requestContent_;
}

void AllowPushStreamRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string AllowPushStreamRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void AllowPushStreamRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string AllowPushStreamRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void AllowPushStreamRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long AllowPushStreamRequest::getCallerUid()const
{
	return callerUid_;
}

void AllowPushStreamRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string AllowPushStreamRequest::getApp_ip()const
{
	return app_ip_;
}

void AllowPushStreamRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string AllowPushStreamRequest::getPopProduct()const
{
	return popProduct_;
}

void AllowPushStreamRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string AllowPushStreamRequest::getProduct()const
{
	return product_;
}

void AllowPushStreamRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

std::string AllowPushStreamRequest::getCallerBid()const
{
	return callerBid_;
}

void AllowPushStreamRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long AllowPushStreamRequest::getOwnerId()const
{
	return ownerId_;
}

void AllowPushStreamRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string AllowPushStreamRequest::getVersion()const
{
	return version_;
}

void AllowPushStreamRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool AllowPushStreamRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void AllowPushStreamRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool AllowPushStreamRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void AllowPushStreamRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

std::string AllowPushStreamRequest::getRoomId()const
{
	return roomId_;
}

void AllowPushStreamRequest::setRoomId(const std::string& roomId)
{
	roomId_ = roomId;
	setParameter("RoomId", roomId);
}

bool AllowPushStreamRequest::getSecurity_transport()const
{
	return security_transport_;
}

void AllowPushStreamRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string AllowPushStreamRequest::getRequestId()const
{
	return requestId_;
}

void AllowPushStreamRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string AllowPushStreamRequest::getAppId()const
{
	return appId_;
}

void AllowPushStreamRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

