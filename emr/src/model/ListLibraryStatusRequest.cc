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

#include <alibabacloud/emr/model/ListLibraryStatusRequest.h>

using AlibabaCloud::Emr::Model::ListLibraryStatusRequest;

ListLibraryStatusRequest::ListLibraryStatusRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListLibraryStatus")
{
	setMethod(HttpRequest::Method::Post);
}

ListLibraryStatusRequest::~ListLibraryStatusRequest()
{}

long ListLibraryStatusRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListLibraryStatusRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int ListLibraryStatusRequest::getPageCount()const
{
	return pageCount_;
}

void ListLibraryStatusRequest::setPageCount(int pageCount)
{
	pageCount_ = pageCount;
	setParameter("PageCount", std::to_string(pageCount));
}

std::string ListLibraryStatusRequest::getOrderMode()const
{
	return orderMode_;
}

void ListLibraryStatusRequest::setOrderMode(const std::string& orderMode)
{
	orderMode_ = orderMode;
	setParameter("OrderMode", orderMode);
}

std::string ListLibraryStatusRequest::getClusterBizId()const
{
	return clusterBizId_;
}

void ListLibraryStatusRequest::setClusterBizId(const std::string& clusterBizId)
{
	clusterBizId_ = clusterBizId;
	setParameter("ClusterBizId", clusterBizId);
}

int ListLibraryStatusRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListLibraryStatusRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListLibraryStatusRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListLibraryStatusRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListLibraryStatusRequest::getRegionId()const
{
	return regionId_;
}

void ListLibraryStatusRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int ListLibraryStatusRequest::getLimit()const
{
	return limit_;
}

void ListLibraryStatusRequest::setLimit(int limit)
{
	limit_ = limit;
	setParameter("Limit", std::to_string(limit));
}

int ListLibraryStatusRequest::getPageSize()const
{
	return pageSize_;
}

void ListLibraryStatusRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int ListLibraryStatusRequest::getCurrentSize()const
{
	return currentSize_;
}

void ListLibraryStatusRequest::setCurrentSize(int currentSize)
{
	currentSize_ = currentSize;
	setParameter("CurrentSize", std::to_string(currentSize));
}

std::string ListLibraryStatusRequest::getOrderField()const
{
	return orderField_;
}

void ListLibraryStatusRequest::setOrderField(const std::string& orderField)
{
	orderField_ = orderField;
	setParameter("OrderField", orderField);
}

std::string ListLibraryStatusRequest::getLibraryBizId()const
{
	return libraryBizId_;
}

void ListLibraryStatusRequest::setLibraryBizId(const std::string& libraryBizId)
{
	libraryBizId_ = libraryBizId;
	setParameter("LibraryBizId", libraryBizId);
}

