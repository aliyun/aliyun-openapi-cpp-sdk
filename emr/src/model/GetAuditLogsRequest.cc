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

#include <alibabacloud/emr/model/GetAuditLogsRequest.h>

using AlibabaCloud::Emr::Model::GetAuditLogsRequest;

GetAuditLogsRequest::GetAuditLogsRequest() :
	RpcServiceRequest("emr", "2016-04-08", "GetAuditLogs")
{}

GetAuditLogsRequest::~GetAuditLogsRequest()
{}

long GetAuditLogsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetAuditLogsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

int GetAuditLogsRequest::getPageCount()const
{
	return pageCount_;
}

void GetAuditLogsRequest::setPageCount(int pageCount)
{
	pageCount_ = pageCount;
	setCoreParameter("PageCount", pageCount);
}

std::string GetAuditLogsRequest::getOrderMode()const
{
	return orderMode_;
}

void GetAuditLogsRequest::setOrderMode(const std::string& orderMode)
{
	orderMode_ = orderMode;
	setCoreParameter("OrderMode", std::to_string(orderMode));
}

long GetAuditLogsRequest::getCallerParentId()const
{
	return callerParentId_;
}

void GetAuditLogsRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool GetAuditLogsRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void GetAuditLogsRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string GetAuditLogsRequest::getEntityId()const
{
	return entityId_;
}

void GetAuditLogsRequest::setEntityId(const std::string& entityId)
{
	entityId_ = entityId;
	setCoreParameter("EntityId", std::to_string(entityId));
}

std::string GetAuditLogsRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void GetAuditLogsRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string GetAuditLogsRequest::getCallerType()const
{
	return callerType_;
}

void GetAuditLogsRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

int GetAuditLogsRequest::getPageNumber()const
{
	return pageNumber_;
}

void GetAuditLogsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string GetAuditLogsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetAuditLogsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string GetAuditLogsRequest::getSecurityToken()const
{
	return securityToken_;
}

void GetAuditLogsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string GetAuditLogsRequest::getRegionId()const
{
	return regionId_;
}

void GetAuditLogsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

int GetAuditLogsRequest::getLimit()const
{
	return limit_;
}

void GetAuditLogsRequest::setLimit(int limit)
{
	limit_ = limit;
	setCoreParameter("Limit", limit);
}

int GetAuditLogsRequest::getPageSize()const
{
	return pageSize_;
}

void GetAuditLogsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

int GetAuditLogsRequest::getCurrentSize()const
{
	return currentSize_;
}

void GetAuditLogsRequest::setCurrentSize(int currentSize)
{
	currentSize_ = currentSize;
	setCoreParameter("CurrentSize", currentSize);
}

long GetAuditLogsRequest::getCallerUid()const
{
	return callerUid_;
}

void GetAuditLogsRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string GetAuditLogsRequest::getOrderField()const
{
	return orderField_;
}

void GetAuditLogsRequest::setOrderField(const std::string& orderField)
{
	orderField_ = orderField;
	setCoreParameter("OrderField", std::to_string(orderField));
}

std::string GetAuditLogsRequest::getApp_ip()const
{
	return app_ip_;
}

void GetAuditLogsRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string GetAuditLogsRequest::getCallerBid()const
{
	return callerBid_;
}

void GetAuditLogsRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

bool GetAuditLogsRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void GetAuditLogsRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool GetAuditLogsRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void GetAuditLogsRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool GetAuditLogsRequest::getSecurity_transport()const
{
	return security_transport_;
}

void GetAuditLogsRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string GetAuditLogsRequest::getRequestId()const
{
	return requestId_;
}

void GetAuditLogsRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string GetAuditLogsRequest::getOperation()const
{
	return operation_;
}

void GetAuditLogsRequest::setOperation(const std::string& operation)
{
	operation_ = operation;
	setCoreParameter("Operation", std::to_string(operation));
}

