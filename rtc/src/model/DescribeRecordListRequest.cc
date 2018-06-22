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
	setParameter("SortType", sortType);
}

long DescribeRecordListRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeRecordListRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeRecordListRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeRecordListRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DescribeRecordListRequest::getStartTime()const
{
	return startTime_;
}

void DescribeRecordListRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeRecordListRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeRecordListRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeRecordListRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeRecordListRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeRecordListRequest::getCallerType()const
{
	return callerType_;
}

void DescribeRecordListRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string DescribeRecordListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeRecordListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeRecordListRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeRecordListRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeRecordListRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeRecordListRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string DescribeRecordListRequest::getServiceArea()const
{
	return serviceArea_;
}

void DescribeRecordListRequest::setServiceArea(const std::string& serviceArea)
{
	serviceArea_ = serviceArea;
	setParameter("ServiceArea", serviceArea);
}

long DescribeRecordListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeRecordListRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeRecordListRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeRecordListRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeRecordListRequest::getId()const
{
	return id_;
}

void DescribeRecordListRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::string DescribeRecordListRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeRecordListRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeRecordListRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeRecordListRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeRecordListRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeRecordListRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeRecordListRequest::getProduct()const
{
	return product_;
}

void DescribeRecordListRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

std::string DescribeRecordListRequest::getEndTime()const
{
	return endTime_;
}

void DescribeRecordListRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeRecordListRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeRecordListRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeRecordListRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRecordListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeRecordListRequest::getVersion()const
{
	return version_;
}

void DescribeRecordListRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool DescribeRecordListRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeRecordListRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DescribeRecordListRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeRecordListRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool DescribeRecordListRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeRecordListRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DescribeRecordListRequest::getIdType()const
{
	return idType_;
}

void DescribeRecordListRequest::setIdType(const std::string& idType)
{
	idType_ = idType;
	setParameter("IdType", idType);
}

std::string DescribeRecordListRequest::getRequestId()const
{
	return requestId_;
}

void DescribeRecordListRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

long DescribeRecordListRequest::getPageNo()const
{
	return pageNo_;
}

void DescribeRecordListRequest::setPageNo(long pageNo)
{
	pageNo_ = pageNo;
	setParameter("PageNo", std::to_string(pageNo));
}

std::string DescribeRecordListRequest::getAppId()const
{
	return appId_;
}

void DescribeRecordListRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

