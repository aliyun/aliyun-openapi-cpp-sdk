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

#include <alibabacloud/emr/model/ListLibraryInstallTasksRequest.h>

using AlibabaCloud::Emr::Model::ListLibraryInstallTasksRequest;

ListLibraryInstallTasksRequest::ListLibraryInstallTasksRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListLibraryInstallTasks")
{
	setMethod(HttpRequest::Method::Post);
}

ListLibraryInstallTasksRequest::~ListLibraryInstallTasksRequest()
{}

long ListLibraryInstallTasksRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListLibraryInstallTasksRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int ListLibraryInstallTasksRequest::getPageCount()const
{
	return pageCount_;
}

void ListLibraryInstallTasksRequest::setPageCount(int pageCount)
{
	pageCount_ = pageCount;
	setParameter("PageCount", std::to_string(pageCount));
}

std::string ListLibraryInstallTasksRequest::getOrderMode()const
{
	return orderMode_;
}

void ListLibraryInstallTasksRequest::setOrderMode(const std::string& orderMode)
{
	orderMode_ = orderMode;
	setParameter("OrderMode", orderMode);
}

std::string ListLibraryInstallTasksRequest::getClusterBizId()const
{
	return clusterBizId_;
}

void ListLibraryInstallTasksRequest::setClusterBizId(const std::string& clusterBizId)
{
	clusterBizId_ = clusterBizId;
	setParameter("ClusterBizId", clusterBizId);
}

int ListLibraryInstallTasksRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListLibraryInstallTasksRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListLibraryInstallTasksRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListLibraryInstallTasksRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListLibraryInstallTasksRequest::getRegionId()const
{
	return regionId_;
}

void ListLibraryInstallTasksRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int ListLibraryInstallTasksRequest::getLimit()const
{
	return limit_;
}

void ListLibraryInstallTasksRequest::setLimit(int limit)
{
	limit_ = limit;
	setParameter("Limit", std::to_string(limit));
}

int ListLibraryInstallTasksRequest::getPageSize()const
{
	return pageSize_;
}

void ListLibraryInstallTasksRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int ListLibraryInstallTasksRequest::getCurrentSize()const
{
	return currentSize_;
}

void ListLibraryInstallTasksRequest::setCurrentSize(int currentSize)
{
	currentSize_ = currentSize;
	setParameter("CurrentSize", std::to_string(currentSize));
}

std::string ListLibraryInstallTasksRequest::getOrderField()const
{
	return orderField_;
}

void ListLibraryInstallTasksRequest::setOrderField(const std::string& orderField)
{
	orderField_ = orderField;
	setParameter("OrderField", orderField);
}

std::string ListLibraryInstallTasksRequest::getLibraryBizId()const
{
	return libraryBizId_;
}

void ListLibraryInstallTasksRequest::setLibraryBizId(const std::string& libraryBizId)
{
	libraryBizId_ = libraryBizId;
	setParameter("LibraryBizId", libraryBizId);
}

