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

#include <alibabacloud/rtc/model/DescribeRecordListRequest.h>

using AlibabaCloud::Rtc::Model::DescribeRecordListRequest;

DescribeRecordListRequest::DescribeRecordListRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "DescribeRecordList")
{}

DescribeRecordListRequest::~DescribeRecordListRequest()
{}

std::string DescribeRecordListRequest::getSortType()const
{
	return sortType_;
}

void DescribeRecordListRequest::setSortType(const std::string& sortType)
{
	sortType_ = sortType;
	setCoreParameter("SortType", std::to_string(sortType));
}

long DescribeRecordListRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeRecordListRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeRecordListRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeRecordListRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeRecordListRequest::getStartTime()const
{
	return startTime_;
}

void DescribeRecordListRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

std::string DescribeRecordListRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeRecordListRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string DescribeRecordListRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeRecordListRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string DescribeRecordListRequest::getCallerType()const
{
	return callerType_;
}

void DescribeRecordListRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string DescribeRecordListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeRecordListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string DescribeRecordListRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeRecordListRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DescribeRecordListRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeRecordListRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string DescribeRecordListRequest::getServiceArea()const
{
	return serviceArea_;
}

void DescribeRecordListRequest::setServiceArea(const std::string& serviceArea)
{
	serviceArea_ = serviceArea;
	setCoreParameter("ServiceArea", std::to_string(serviceArea));
}

long DescribeRecordListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeRecordListRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeRecordListRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeRecordListRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string DescribeRecordListRequest::getId()const
{
	return id_;
}

void DescribeRecordListRequest::setId(const std::string& id)
{
	id_ = id;
	setCoreParameter("Id", std::to_string(id));
}

std::string DescribeRecordListRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeRecordListRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long DescribeRecordListRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeRecordListRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeRecordListRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeRecordListRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string DescribeRecordListRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeRecordListRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", std::to_string(popProduct));
}

std::string DescribeRecordListRequest::getEndTime()const
{
	return endTime_;
}

void DescribeRecordListRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string DescribeRecordListRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeRecordListRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long DescribeRecordListRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRecordListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeRecordListRequest::getVersion()const
{
	return version_;
}

void DescribeRecordListRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", std::to_string(version));
}

bool DescribeRecordListRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeRecordListRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeRecordListRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeRecordListRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeRecordListRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeRecordListRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeRecordListRequest::getIdType()const
{
	return idType_;
}

void DescribeRecordListRequest::setIdType(const std::string& idType)
{
	idType_ = idType;
	setCoreParameter("IdType", std::to_string(idType));
}

std::string DescribeRecordListRequest::getRequestId()const
{
	return requestId_;
}

void DescribeRecordListRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

long DescribeRecordListRequest::getPageNo()const
{
	return pageNo_;
}

void DescribeRecordListRequest::setPageNo(long pageNo)
{
	pageNo_ = pageNo;
	setCoreParameter("PageNo", pageNo);
}

std::string DescribeRecordListRequest::getAppId()const
{
	return appId_;
}

void DescribeRecordListRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", std::to_string(appId));
}

