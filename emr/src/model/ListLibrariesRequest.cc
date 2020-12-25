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

#include <alibabacloud/emr/model/ListLibrariesRequest.h>

using AlibabaCloud::Emr::Model::ListLibrariesRequest;

ListLibrariesRequest::ListLibrariesRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListLibraries")
{
	setMethod(HttpRequest::Method::Post);
}

ListLibrariesRequest::~ListLibrariesRequest()
{}

long ListLibrariesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListLibrariesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int ListLibrariesRequest::getPageCount()const
{
	return pageCount_;
}

void ListLibrariesRequest::setPageCount(int pageCount)
{
	pageCount_ = pageCount;
	setParameter("PageCount", std::to_string(pageCount));
}

std::string ListLibrariesRequest::getOrderMode()const
{
	return orderMode_;
}

void ListLibrariesRequest::setOrderMode(const std::string& orderMode)
{
	orderMode_ = orderMode;
	setParameter("OrderMode", orderMode);
}

std::string ListLibrariesRequest::getClusterBizId()const
{
	return clusterBizId_;
}

void ListLibrariesRequest::setClusterBizId(const std::string& clusterBizId)
{
	clusterBizId_ = clusterBizId;
	setParameter("ClusterBizId", clusterBizId);
}

int ListLibrariesRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListLibrariesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListLibrariesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListLibrariesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListLibrariesRequest::getRegionId()const
{
	return regionId_;
}

void ListLibrariesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int ListLibrariesRequest::getLimit()const
{
	return limit_;
}

void ListLibrariesRequest::setLimit(int limit)
{
	limit_ = limit;
	setParameter("Limit", std::to_string(limit));
}

int ListLibrariesRequest::getPageSize()const
{
	return pageSize_;
}

void ListLibrariesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int ListLibrariesRequest::getCurrentSize()const
{
	return currentSize_;
}

void ListLibrariesRequest::setCurrentSize(int currentSize)
{
	currentSize_ = currentSize;
	setParameter("CurrentSize", std::to_string(currentSize));
}

std::string ListLibrariesRequest::getOrderField()const
{
	return orderField_;
}

void ListLibrariesRequest::setOrderField(const std::string& orderField)
{
	orderField_ = orderField;
	setParameter("OrderField", orderField);
}

