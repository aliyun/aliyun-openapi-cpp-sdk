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

#include <alibabacloud/live/model/DescribeForbidPushStreamRoomListRequest.h>

using AlibabaCloud::Live::Model::DescribeForbidPushStreamRoomListRequest;

DescribeForbidPushStreamRoomListRequest::DescribeForbidPushStreamRoomListRequest() :
	RpcServiceRequest("live", "2016-11-01", "DescribeForbidPushStreamRoomList")
{}

DescribeForbidPushStreamRoomListRequest::~DescribeForbidPushStreamRoomListRequest()
{}

long DescribeForbidPushStreamRoomListRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeForbidPushStreamRoomListRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeForbidPushStreamRoomListRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeForbidPushStreamRoomListRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeForbidPushStreamRoomListRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeForbidPushStreamRoomListRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

int DescribeForbidPushStreamRoomListRequest::getPageNum()const
{
	return pageNum_;
}

void DescribeForbidPushStreamRoomListRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setCoreParameter("PageNum", pageNum);
}

std::string DescribeForbidPushStreamRoomListRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeForbidPushStreamRoomListRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string DescribeForbidPushStreamRoomListRequest::getCallerType()const
{
	return callerType_;
}

void DescribeForbidPushStreamRoomListRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string DescribeForbidPushStreamRoomListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeForbidPushStreamRoomListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string DescribeForbidPushStreamRoomListRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeForbidPushStreamRoomListRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DescribeForbidPushStreamRoomListRequest::getRegionId()const
{
	return regionId_;
}

void DescribeForbidPushStreamRoomListRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DescribeForbidPushStreamRoomListRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeForbidPushStreamRoomListRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

int DescribeForbidPushStreamRoomListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeForbidPushStreamRoomListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeForbidPushStreamRoomListRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeForbidPushStreamRoomListRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string DescribeForbidPushStreamRoomListRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeForbidPushStreamRoomListRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long DescribeForbidPushStreamRoomListRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeForbidPushStreamRoomListRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeForbidPushStreamRoomListRequest::getOrder()const
{
	return order_;
}

void DescribeForbidPushStreamRoomListRequest::setOrder(const std::string& order)
{
	order_ = order;
	setCoreParameter("Order", std::to_string(order));
}

std::string DescribeForbidPushStreamRoomListRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeForbidPushStreamRoomListRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string DescribeForbidPushStreamRoomListRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeForbidPushStreamRoomListRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", std::to_string(popProduct));
}

std::string DescribeForbidPushStreamRoomListRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeForbidPushStreamRoomListRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long DescribeForbidPushStreamRoomListRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeForbidPushStreamRoomListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeForbidPushStreamRoomListRequest::getVersion()const
{
	return version_;
}

void DescribeForbidPushStreamRoomListRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", std::to_string(version));
}

bool DescribeForbidPushStreamRoomListRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeForbidPushStreamRoomListRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeForbidPushStreamRoomListRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeForbidPushStreamRoomListRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeForbidPushStreamRoomListRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeForbidPushStreamRoomListRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeForbidPushStreamRoomListRequest::getRequestId()const
{
	return requestId_;
}

void DescribeForbidPushStreamRoomListRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string DescribeForbidPushStreamRoomListRequest::getAppId()const
{
	return appId_;
}

void DescribeForbidPushStreamRoomListRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", std::to_string(appId));
}

