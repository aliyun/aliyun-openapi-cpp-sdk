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
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int ListBackupRulesRequest::getPageCount()const
{
	return pageCount_;
}

void ListBackupRulesRequest::setPageCount(int pageCount)
{
	pageCount_ = pageCount;
	setCoreParameter("PageCount", std::to_string(pageCount));
}

std::string ListBackupRulesRequest::getOrderMode()const
{
	return orderMode_;
}

void ListBackupRulesRequest::setOrderMode(const std::string& orderMode)
{
	orderMode_ = orderMode;
	setCoreParameter("OrderMode", orderMode);
}

std::string ListBackupRulesRequest::getBackupPlanId()const
{
	return backupPlanId_;
}

void ListBackupRulesRequest::setBackupPlanId(const std::string& backupPlanId)
{
	backupPlanId_ = backupPlanId;
	setCoreParameter("BackupPlanId", backupPlanId);
}

int ListBackupRulesRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListBackupRulesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListBackupRulesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListBackupRulesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ListBackupRulesRequest::getRegionId()const
{
	return regionId_;
}

void ListBackupRulesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int ListBackupRulesRequest::getLimit()const
{
	return limit_;
}

void ListBackupRulesRequest::setLimit(int limit)
{
	limit_ = limit;
	setCoreParameter("Limit", std::to_string(limit));
}

int ListBackupRulesRequest::getPageSize()const
{
	return pageSize_;
}

void ListBackupRulesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

long ListBackupRulesRequest::getId()const
{
	return id_;
}

void ListBackupRulesRequest::setId(long id)
{
	id_ = id;
	setCoreParameter("Id", std::to_string(id));
}

int ListBackupRulesRequest::getCurrentSize()const
{
	return currentSize_;
}

void ListBackupRulesRequest::setCurrentSize(int currentSize)
{
	currentSize_ = currentSize;
	setCoreParameter("CurrentSize", std::to_string(currentSize));
}

std::string ListBackupRulesRequest::getOrderField()const
{
	return orderField_;
}

void ListBackupRulesRequest::setOrderField(const std::string& orderField)
{
	orderField_ = orderField;
	setCoreParameter("OrderField", orderField);
}

std::string ListBackupRulesRequest::getBizId()const
{
	return bizId_;
}

void ListBackupRulesRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setCoreParameter("BizId", bizId);
}

std::string ListBackupRulesRequest::getStatus()const
{
	return status_;
}

void ListBackupRulesRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", status);
}

