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

#include <alibabacloud/opensearch/model/ListStatisticLogsRequest.h>

using AlibabaCloud::OpenSearch::Model::ListStatisticLogsRequest;

ListStatisticLogsRequest::ListStatisticLogsRequest() :
	RoaServiceRequest("opensearch", "2017-12-25")
{
	setResourcePath("/v4/openapi/app-groups/[appGroupIdentity]/statistic-logs/[moduleName]");
	setMethod(HttpRequest::Method::Get);
}

ListStatisticLogsRequest::~ListStatisticLogsRequest()
{}

std::string ListStatisticLogsRequest::getColumns()const
{
	return columns_;
}

void ListStatisticLogsRequest::setColumns(const std::string& columns)
{
	columns_ = columns;
	setParameter("Columns", columns);
}

std::string ListStatisticLogsRequest::getQuery()const
{
	return query_;
}

void ListStatisticLogsRequest::setQuery(const std::string& query)
{
	query_ = query;
	setParameter("Query", query);
}

int ListStatisticLogsRequest::getPageSize()const
{
	return pageSize_;
}

void ListStatisticLogsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListStatisticLogsRequest::getModuleName()const
{
	return moduleName_;
}

void ListStatisticLogsRequest::setModuleName(const std::string& moduleName)
{
	moduleName_ = moduleName;
	setParameter("ModuleName", moduleName);
}

bool ListStatisticLogsRequest::getDistinct()const
{
	return distinct_;
}

void ListStatisticLogsRequest::setDistinct(bool distinct)
{
	distinct_ = distinct;
	setParameter("Distinct", distinct ? "true" : "false");
}

std::string ListStatisticLogsRequest::getSortBy()const
{
	return sortBy_;
}

void ListStatisticLogsRequest::setSortBy(const std::string& sortBy)
{
	sortBy_ = sortBy;
	setParameter("SortBy", sortBy);
}

int ListStatisticLogsRequest::getStartTime()const
{
	return startTime_;
}

void ListStatisticLogsRequest::setStartTime(int startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

int ListStatisticLogsRequest::getStopTime()const
{
	return stopTime_;
}

void ListStatisticLogsRequest::setStopTime(int stopTime)
{
	stopTime_ = stopTime;
	setParameter("StopTime", std::to_string(stopTime));
}

std::string ListStatisticLogsRequest::getAppGroupIdentity()const
{
	return appGroupIdentity_;
}

void ListStatisticLogsRequest::setAppGroupIdentity(const std::string& appGroupIdentity)
{
	appGroupIdentity_ = appGroupIdentity;
	setParameter("AppGroupIdentity", appGroupIdentity);
}

int ListStatisticLogsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListStatisticLogsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

