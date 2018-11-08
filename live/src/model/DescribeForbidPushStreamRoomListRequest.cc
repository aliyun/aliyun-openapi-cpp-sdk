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
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeForbidPushStreamRoomListRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeForbidPushStreamRoomListRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DescribeForbidPushStreamRoomListRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeForbidPushStreamRoomListRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

int DescribeForbidPushStreamRoomListRequest::getPageNum()const
{
	return pageNum_;
}

void DescribeForbidPushStreamRoomListRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

std::string DescribeForbidPushStreamRoomListRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeForbidPushStreamRoomListRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeForbidPushStreamRoomListRequest::getCallerType()const
{
	return callerType_;
}

void DescribeForbidPushStreamRoomListRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string DescribeForbidPushStreamRoomListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeForbidPushStreamRoomListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeForbidPushStreamRoomListRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeForbidPushStreamRoomListRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeForbidPushStreamRoomListRequest::getRegionId()const
{
	return regionId_;
}

void DescribeForbidPushStreamRoomListRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeForbidPushStreamRoomListRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeForbidPushStreamRoomListRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

int DescribeForbidPushStreamRoomListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeForbidPushStreamRoomListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeForbidPushStreamRoomListRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeForbidPushStreamRoomListRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeForbidPushStreamRoomListRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeForbidPushStreamRoomListRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeForbidPushStreamRoomListRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeForbidPushStreamRoomListRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeForbidPushStreamRoomListRequest::getOrder()const
{
	return order_;
}

void DescribeForbidPushStreamRoomListRequest::setOrder(const std::string& order)
{
	order_ = order;
	setParameter("Order", order);
}

std::string DescribeForbidPushStreamRoomListRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeForbidPushStreamRoomListRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeForbidPushStreamRoomListRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeForbidPushStreamRoomListRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string DescribeForbidPushStreamRoomListRequest::getProduct()const
{
	return product_;
}

void DescribeForbidPushStreamRoomListRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

std::string DescribeForbidPushStreamRoomListRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeForbidPushStreamRoomListRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeForbidPushStreamRoomListRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeForbidPushStreamRoomListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeForbidPushStreamRoomListRequest::getVersion()const
{
	return version_;
}

void DescribeForbidPushStreamRoomListRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool DescribeForbidPushStreamRoomListRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeForbidPushStreamRoomListRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DescribeForbidPushStreamRoomListRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeForbidPushStreamRoomListRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool DescribeForbidPushStreamRoomListRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeForbidPushStreamRoomListRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DescribeForbidPushStreamRoomListRequest::getRequestId()const
{
	return requestId_;
}

void DescribeForbidPushStreamRoomListRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string DescribeForbidPushStreamRoomListRequest::getAppId()const
{
	return appId_;
}

void DescribeForbidPushStreamRoomListRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

