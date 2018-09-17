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

#include <alibabacloud/live/model/DescribeBoardsRequest.h>

using AlibabaCloud::Live::Model::DescribeBoardsRequest;

DescribeBoardsRequest::DescribeBoardsRequest() :
	RpcServiceRequest("live", "2016-11-01", "DescribeBoards")
{}

DescribeBoardsRequest::~DescribeBoardsRequest()
{}

long DescribeBoardsRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeBoardsRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeBoardsRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeBoardsRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DescribeBoardsRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeBoardsRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

int DescribeBoardsRequest::getPageNum()const
{
	return pageNum_;
}

void DescribeBoardsRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

std::string DescribeBoardsRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeBoardsRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeBoardsRequest::getCallerType()const
{
	return callerType_;
}

void DescribeBoardsRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string DescribeBoardsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeBoardsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeBoardsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeBoardsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeBoardsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeBoardsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeBoardsRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeBoardsRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

int DescribeBoardsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeBoardsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeBoardsRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeBoardsRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeBoardsRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeBoardsRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeBoardsRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeBoardsRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeBoardsRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeBoardsRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeBoardsRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeBoardsRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string DescribeBoardsRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeBoardsRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeBoardsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeBoardsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeBoardsRequest::getVersion()const
{
	return version_;
}

void DescribeBoardsRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool DescribeBoardsRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeBoardsRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DescribeBoardsRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeBoardsRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool DescribeBoardsRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeBoardsRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DescribeBoardsRequest::getRequestId()const
{
	return requestId_;
}

void DescribeBoardsRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string DescribeBoardsRequest::getAppId()const
{
	return appId_;
}

void DescribeBoardsRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

