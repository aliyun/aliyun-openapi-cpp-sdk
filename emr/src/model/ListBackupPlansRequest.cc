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
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int ListBackupPlansRequest::getPageCount()const
{
	return pageCount_;
}

void ListBackupPlansRequest::setPageCount(int pageCount)
{
	pageCount_ = pageCount;
	setCoreParameter("PageCount", std::to_string(pageCount));
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

int ListBackupPlansRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListBackupPlansRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
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
	setCoreParameter("Limit", std::to_string(limit));
}

int ListBackupPlansRequest::getPageSize()const
{
	return pageSize_;
}

void ListBackupPlansRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

long ListBackupPlansRequest::getId()const
{
	return id_;
}

void ListBackupPlansRequest::setId(long id)
{
	id_ = id;
	setCoreParameter("Id", std::to_string(id));
}

int ListBackupPlansRequest::getCurrentSize()const
{
	return currentSize_;
}

void ListBackupPlansRequest::setCurrentSize(int currentSize)
{
	currentSize_ = currentSize;
	setCoreParameter("CurrentSize", std::to_string(currentSize));
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

std::string ListBackupPlansRequest::getClusterId()const
{
	return clusterId_;
}

void ListBackupPlansRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
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

