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

#include <alibabacloud/dbfs/model/ListTaskRequest.h>

using AlibabaCloud::DBFS::Model::ListTaskRequest;

ListTaskRequest::ListTaskRequest() :
	RpcServiceRequest("dbfs", "2020-04-18", "ListTask")
{
	setMethod(HttpRequest::Method::Post);
}

ListTaskRequest::~ListTaskRequest()
{}

std::string ListTaskRequest::getSortType()const
{
	return sortType_;
}

void ListTaskRequest::setSortType(const std::string& sortType)
{
	sortType_ = sortType;
	setParameter("SortType", sortType);
}

std::string ListTaskRequest::getFilterValue()const
{
	return filterValue_;
}

void ListTaskRequest::setFilterValue(const std::string& filterValue)
{
	filterValue_ = filterValue;
	setParameter("FilterValue", filterValue);
}

int ListTaskRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListTaskRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListTaskRequest::getFilterKey()const
{
	return filterKey_;
}

void ListTaskRequest::setFilterKey(const std::string& filterKey)
{
	filterKey_ = filterKey;
	setParameter("FilterKey", filterKey);
}

std::string ListTaskRequest::getSortKey()const
{
	return sortKey_;
}

void ListTaskRequest::setSortKey(const std::string& sortKey)
{
	sortKey_ = sortKey;
	setParameter("SortKey", sortKey);
}

std::string ListTaskRequest::getRegionId()const
{
	return regionId_;
}

void ListTaskRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int ListTaskRequest::getPageSize()const
{
	return pageSize_;
}

void ListTaskRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

