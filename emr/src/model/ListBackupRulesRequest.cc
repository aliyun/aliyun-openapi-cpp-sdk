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

#include <alibabacloud/emr/model/ListBackupRulesRequest.h>

using AlibabaCloud::Emr::Model::ListBackupRulesRequest;

ListBackupRulesRequest::ListBackupRulesRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListBackupRules")
{}

ListBackupRulesRequest::~ListBackupRulesRequest()
{}

long ListBackupRulesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListBackupRulesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

int ListBackupRulesRequest::getPageCount()const
{
	return pageCount_;
}

void ListBackupRulesRequest::setPageCount(int pageCount)
{
	pageCount_ = pageCount;
	setCoreParameter("PageCount", pageCount);
}

std::string ListBackupRulesRequest::getOrderMode()const
{
	return orderMode_;
}

void ListBackupRulesRequest::setOrderMode(const std::string& orderMode)
{
	orderMode_ = orderMode;
	setCoreParameter("OrderMode", std::to_string(orderMode));
}

long ListBackupRulesRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ListBackupRulesRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool ListBackupRulesRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ListBackupRulesRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string ListBackupRulesRequest::getBackupPlanId()const
{
	return backupPlanId_;
}

void ListBackupRulesRequest::setBackupPlanId(const std::string& backupPlanId)
{
	backupPlanId_ = backupPlanId;
	setCoreParameter("BackupPlanId", std::to_string(backupPlanId));
}

std::string ListBackupRulesRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ListBackupRulesRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string ListBackupRulesRequest::getCallerType()const
{
	return callerType_;
}

void ListBackupRulesRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

int ListBackupRulesRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListBackupRulesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string ListBackupRulesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListBackupRulesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string ListBackupRulesRequest::getSecurityToken()const
{
	return securityToken_;
}

void ListBackupRulesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string ListBackupRulesRequest::getRegionId()const
{
	return regionId_;
}

void ListBackupRulesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

int ListBackupRulesRequest::getLimit()const
{
	return limit_;
}

void ListBackupRulesRequest::setLimit(int limit)
{
	limit_ = limit;
	setCoreParameter("Limit", limit);
}

int ListBackupRulesRequest::getPageSize()const
{
	return pageSize_;
}

void ListBackupRulesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

long ListBackupRulesRequest::getId()const
{
	return id_;
}

void ListBackupRulesRequest::setId(long id)
{
	id_ = id;
	setCoreParameter("Id", id);
}

int ListBackupRulesRequest::getCurrentSize()const
{
	return currentSize_;
}

void ListBackupRulesRequest::setCurrentSize(int currentSize)
{
	currentSize_ = currentSize;
	setCoreParameter("CurrentSize", currentSize);
}

long ListBackupRulesRequest::getCallerUid()const
{
	return callerUid_;
}

void ListBackupRulesRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string ListBackupRulesRequest::getOrderField()const
{
	return orderField_;
}

void ListBackupRulesRequest::setOrderField(const std::string& orderField)
{
	orderField_ = orderField;
	setCoreParameter("OrderField", std::to_string(orderField));
}

std::string ListBackupRulesRequest::getApp_ip()const
{
	return app_ip_;
}

void ListBackupRulesRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string ListBackupRulesRequest::getCallerBid()const
{
	return callerBid_;
}

void ListBackupRulesRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

bool ListBackupRulesRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ListBackupRulesRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool ListBackupRulesRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ListBackupRulesRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool ListBackupRulesRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ListBackupRulesRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string ListBackupRulesRequest::getRequestId()const
{
	return requestId_;
}

void ListBackupRulesRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string ListBackupRulesRequest::getBizId()const
{
	return bizId_;
}

void ListBackupRulesRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setCoreParameter("BizId", std::to_string(bizId));
}

std::string ListBackupRulesRequest::getStatus()const
{
	return status_;
}

void ListBackupRulesRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", std::to_string(status));
}

