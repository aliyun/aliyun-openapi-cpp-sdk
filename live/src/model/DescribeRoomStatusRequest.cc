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

long DescribeRoomStatusRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeRoomStatusRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeRoomStatusRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeRoomStatusRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DescribeRoomStatusRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeRoomStatusRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeRoomStatusRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeRoomStatusRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeRoomStatusRequest::getCallerType()const
{
	return callerType_;
}

void DescribeRoomStatusRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string DescribeRoomStatusRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeRoomStatusRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeRoomStatusRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeRoomStatusRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeRoomStatusRequest::getRegionId()const
{
	return regionId_;
}

void DescribeRoomStatusRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeRoomStatusRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeRoomStatusRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string DescribeRoomStatusRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeRoomStatusRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeRoomStatusRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeRoomStatusRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeRoomStatusRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeRoomStatusRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeRoomStatusRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeRoomStatusRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeRoomStatusRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeRoomStatusRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string DescribeRoomStatusRequest::getProduct()const
{
	return product_;
}

void DescribeRoomStatusRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

std::string DescribeRoomStatusRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeRoomStatusRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeRoomStatusRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRoomStatusRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeRoomStatusRequest::getVersion()const
{
	return version_;
}

void DescribeRoomStatusRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool DescribeRoomStatusRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeRoomStatusRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DescribeRoomStatusRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeRoomStatusRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

std::string DescribeRoomStatusRequest::getRoomId()const
{
	return roomId_;
}

void DescribeRoomStatusRequest::setRoomId(const std::string& roomId)
{
	roomId_ = roomId;
	setParameter("RoomId", roomId);
}

bool DescribeRoomStatusRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeRoomStatusRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DescribeRoomStatusRequest::getRequestId()const
{
	return requestId_;
}

void DescribeRoomStatusRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string DescribeRoomStatusRequest::getAppId()const
{
	return appId_;
}

void DescribeRoomStatusRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

