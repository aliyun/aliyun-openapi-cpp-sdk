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
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int GetAuditLogsRequest::getPageCount()const
{
	return pageCount_;
}

void GetAuditLogsRequest::setPageCount(int pageCount)
{
	pageCount_ = pageCount;
	setCoreParameter("PageCount", std::to_string(pageCount));
}

std::string GetAuditLogsRequest::getOrderMode()const
{
	return orderMode_;
}

void GetAuditLogsRequest::setOrderMode(const std::string& orderMode)
{
	orderMode_ = orderMode;
	setCoreParameter("OrderMode", orderMode);
}

std::string GetAuditLogsRequest::getEntityId()const
{
	return entityId_;
}

void GetAuditLogsRequest::setEntityId(const std::string& entityId)
{
	entityId_ = entityId;
	setCoreParameter("EntityId", entityId);
}

int GetAuditLogsRequest::getPageNumber()const
{
	return pageNumber_;
}

void GetAuditLogsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string GetAuditLogsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetAuditLogsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string GetAuditLogsRequest::getRegionId()const
{
	return regionId_;
}

void GetAuditLogsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int GetAuditLogsRequest::getLimit()const
{
	return limit_;
}

void GetAuditLogsRequest::setLimit(int limit)
{
	limit_ = limit;
	setCoreParameter("Limit", std::to_string(limit));
}

int GetAuditLogsRequest::getPageSize()const
{
	return pageSize_;
}

void GetAuditLogsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

int GetAuditLogsRequest::getCurrentSize()const
{
	return currentSize_;
}

void GetAuditLogsRequest::setCurrentSize(int currentSize)
{
	currentSize_ = currentSize;
	setCoreParameter("CurrentSize", std::to_string(currentSize));
}

std::string GetAuditLogsRequest::getOrderField()const
{
	return orderField_;
}

void GetAuditLogsRequest::setOrderField(const std::string& orderField)
{
	orderField_ = orderField;
	setCoreParameter("OrderField", orderField);
}

std::string GetAuditLogsRequest::getOperation()const
{
	return operation_;
}

void GetAuditLogsRequest::setOperation(const std::string& operation)
{
	operation_ = operation;
	setCoreParameter("Operation", operation);
}

