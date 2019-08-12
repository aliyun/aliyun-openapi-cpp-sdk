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

#include <alibabacloud/rtc/model/DescribeAppsRequest.h>

using AlibabaCloud::Rtc::Model::DescribeAppsRequest;

DescribeAppsRequest::DescribeAppsRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "DescribeApps")
{}

DescribeAppsRequest::~DescribeAppsRequest()
{}

long DescribeAppsRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeAppsRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeAppsRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeAppsRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string DescribeAppsRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeAppsRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

int DescribeAppsRequest::getPageNum()const
{
	return pageNum_;
}

void DescribeAppsRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setCoreParameter("PageNum", pageNum);
}

std::string DescribeAppsRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeAppsRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeAppsRequest::getCallerType()const
{
	return callerType_;
}

void DescribeAppsRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeAppsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeAppsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeAppsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeAppsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeAppsRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeAppsRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

int DescribeAppsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeAppsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeAppsRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeAppsRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeAppsRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeAppsRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeAppsRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeAppsRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeAppsRequest::getOrder()const
{
	return order_;
}

void DescribeAppsRequest::setOrder(const std::string& order)
{
	order_ = order;
	setCoreParameter("Order", order);
}

std::string DescribeAppsRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeAppsRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeAppsRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeAppsRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DescribeAppsRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeAppsRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeAppsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeAppsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeAppsRequest::getVersion()const
{
	return version_;
}

void DescribeAppsRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DescribeAppsRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeAppsRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

bool DescribeAppsRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeAppsRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

bool DescribeAppsRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeAppsRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string DescribeAppsRequest::getRequestId()const
{
	return requestId_;
}

void DescribeAppsRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeAppsRequest::getAppId()const
{
	return appId_;
}

void DescribeAppsRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", appId);
}

std::string DescribeAppsRequest::getStatus()const
{
	return status_;
}

void DescribeAppsRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", status);
}

