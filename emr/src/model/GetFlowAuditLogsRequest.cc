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

#include <alibabacloud/emr/model/GetFlowAuditLogsRequest.h>

using AlibabaCloud::Emr::Model::GetFlowAuditLogsRequest;

GetFlowAuditLogsRequest::GetFlowAuditLogsRequest() :
	RpcServiceRequest("emr", "2016-04-08", "GetFlowAuditLogs")
{}

GetFlowAuditLogsRequest::~GetFlowAuditLogsRequest()
{}

long GetFlowAuditLogsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetFlowAuditLogsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int GetFlowAuditLogsRequest::getPageCount()const
{
	return pageCount_;
}

void GetFlowAuditLogsRequest::setPageCount(int pageCount)
{
	pageCount_ = pageCount;
	setCoreParameter("PageCount", std::to_string(pageCount));
}

std::string GetFlowAuditLogsRequest::getOrderMode()const
{
	return orderMode_;
}

void GetFlowAuditLogsRequest::setOrderMode(const std::string& orderMode)
{
	orderMode_ = orderMode;
	setCoreParameter("OrderMode", orderMode);
}

long GetFlowAuditLogsRequest::getCallerParentId()const
{
	return callerParentId_;
}

void GetFlowAuditLogsRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool GetFlowAuditLogsRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void GetFlowAuditLogsRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string GetFlowAuditLogsRequest::getEntityId()const
{
	return entityId_;
}

void GetFlowAuditLogsRequest::setEntityId(const std::string& entityId)
{
	entityId_ = entityId;
	setCoreParameter("EntityId", entityId);
}

std::string GetFlowAuditLogsRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void GetFlowAuditLogsRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string GetFlowAuditLogsRequest::getCallerType()const
{
	return callerType_;
}

void GetFlowAuditLogsRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

int GetFlowAuditLogsRequest::getPageNumber()const
{
	return pageNumber_;
}

void GetFlowAuditLogsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string GetFlowAuditLogsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetFlowAuditLogsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string GetFlowAuditLogsRequest::getSecurityToken()const
{
	return securityToken_;
}

void GetFlowAuditLogsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string GetFlowAuditLogsRequest::getRegionId()const
{
	return regionId_;
}

void GetFlowAuditLogsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int GetFlowAuditLogsRequest::getLimit()const
{
	return limit_;
}

void GetFlowAuditLogsRequest::setLimit(int limit)
{
	limit_ = limit;
	setCoreParameter("Limit", std::to_string(limit));
}

int GetFlowAuditLogsRequest::getPageSize()const
{
	return pageSize_;
}

void GetFlowAuditLogsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

int GetFlowAuditLogsRequest::getCurrentSize()const
{
	return currentSize_;
}

void GetFlowAuditLogsRequest::setCurrentSize(int currentSize)
{
	currentSize_ = currentSize;
	setCoreParameter("CurrentSize", std::to_string(currentSize));
}

long GetFlowAuditLogsRequest::getCallerUid()const
{
	return callerUid_;
}

void GetFlowAuditLogsRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string GetFlowAuditLogsRequest::getOrderField()const
{
	return orderField_;
}

void GetFlowAuditLogsRequest::setOrderField(const std::string& orderField)
{
	orderField_ = orderField;
	setCoreParameter("OrderField", orderField);
}

std::string GetFlowAuditLogsRequest::getApp_ip()const
{
	return app_ip_;
}

void GetFlowAuditLogsRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string GetFlowAuditLogsRequest::getEntityGroupId()const
{
	return entityGroupId_;
}

void GetFlowAuditLogsRequest::setEntityGroupId(const std::string& entityGroupId)
{
	entityGroupId_ = entityGroupId;
	setCoreParameter("EntityGroupId", entityGroupId);
}

std::string GetFlowAuditLogsRequest::getCallerBid()const
{
	return callerBid_;
}

void GetFlowAuditLogsRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

bool GetFlowAuditLogsRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void GetFlowAuditLogsRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool GetFlowAuditLogsRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void GetFlowAuditLogsRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool GetFlowAuditLogsRequest::getSecurity_transport()const
{
	return security_transport_;
}

void GetFlowAuditLogsRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string GetFlowAuditLogsRequest::getEntityType()const
{
	return entityType_;
}

void GetFlowAuditLogsRequest::setEntityType(const std::string& entityType)
{
	entityType_ = entityType;
	setCoreParameter("EntityType", entityType);
}

std::string GetFlowAuditLogsRequest::getRequestId()const
{
	return requestId_;
}

void GetFlowAuditLogsRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string GetFlowAuditLogsRequest::getOperatorId()const
{
	return operatorId_;
}

void GetFlowAuditLogsRequest::setOperatorId(const std::string& operatorId)
{
	operatorId_ = operatorId;
	setCoreParameter("OperatorId", operatorId);
}

std::string GetFlowAuditLogsRequest::getOperation()const
{
	return operation_;
}

void GetFlowAuditLogsRequest::setOperation(const std::string& operation)
{
	operation_ = operation;
	setCoreParameter("Operation", operation);
}

std::string GetFlowAuditLogsRequest::getStatus()const
{
	return status_;
}

void GetFlowAuditLogsRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", status);
}

