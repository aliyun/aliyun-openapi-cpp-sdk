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

#include <alibabacloud/emr/model/ListBackupPlansRequest.h>

using AlibabaCloud::Emr::Model::ListBackupPlansRequest;

ListBackupPlansRequest::ListBackupPlansRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListBackupPlans")
{}

ListBackupPlansRequest::~ListBackupPlansRequest()
{}

long ListBackupPlansRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListBackupPlansRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

int ListBackupPlansRequest::getPageCount()const
{
	return pageCount_;
}

void ListBackupPlansRequest::setPageCount(int pageCount)
{
	pageCount_ = pageCount;
	setCoreParameter("PageCount", pageCount);
}

std::string ListBackupPlansRequest::getOrderMode()const
{
	return orderMode_;
}

void ListBackupPlansRequest::setOrderMode(const std::string& orderMode)
{
	orderMode_ = orderMode;
	setCoreParameter("OrderMode", orderMode);
}

long ListBackupPlansRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ListBackupPlansRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool ListBackupPlansRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ListBackupPlansRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string ListBackupPlansRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ListBackupPlansRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string ListBackupPlansRequest::getCallerType()const
{
	return callerType_;
}

void ListBackupPlansRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

int ListBackupPlansRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListBackupPlansRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string ListBackupPlansRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListBackupPlansRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ListBackupPlansRequest::getSecurityToken()const
{
	return securityToken_;
}

void ListBackupPlansRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ListBackupPlansRequest::getRegionId()const
{
	return regionId_;
}

void ListBackupPlansRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int ListBackupPlansRequest::getLimit()const
{
	return limit_;
}

void ListBackupPlansRequest::setLimit(int limit)
{
	limit_ = limit;
	setCoreParameter("Limit", limit);
}

int ListBackupPlansRequest::getPageSize()const
{
	return pageSize_;
}

void ListBackupPlansRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

long ListBackupPlansRequest::getId()const
{
	return id_;
}

void ListBackupPlansRequest::setId(long id)
{
	id_ = id;
	setCoreParameter("Id", id);
}

int ListBackupPlansRequest::getCurrentSize()const
{
	return currentSize_;
}

void ListBackupPlansRequest::setCurrentSize(int currentSize)
{
	currentSize_ = currentSize;
	setCoreParameter("CurrentSize", currentSize);
}

long ListBackupPlansRequest::getCallerUid()const
{
	return callerUid_;
}

void ListBackupPlansRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string ListBackupPlansRequest::getOrderField()const
{
	return orderField_;
}

void ListBackupPlansRequest::setOrderField(const std::string& orderField)
{
	orderField_ = orderField;
	setCoreParameter("OrderField", orderField);
}

std::string ListBackupPlansRequest::getApp_ip()const
{
	return app_ip_;
}

void ListBackupPlansRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string ListBackupPlansRequest::getCallerBid()const
{
	return callerBid_;
}

void ListBackupPlansRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

std::string ListBackupPlansRequest::getClusterId()const
{
	return clusterId_;
}

void ListBackupPlansRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

bool ListBackupPlansRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ListBackupPlansRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

bool ListBackupPlansRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ListBackupPlansRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

bool ListBackupPlansRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ListBackupPlansRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string ListBackupPlansRequest::getRequestId()const
{
	return requestId_;
}

void ListBackupPlansRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string ListBackupPlansRequest::getBizId()const
{
	return bizId_;
}

void ListBackupPlansRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setCoreParameter("BizId", bizId);
}

std::string ListBackupPlansRequest::getStatus()const
{
	return status_;
}

void ListBackupPlansRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", status);
}

