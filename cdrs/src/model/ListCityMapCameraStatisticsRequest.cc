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

#include <alibabacloud/cdrs/model/ListCityMapCameraStatisticsRequest.h>

using AlibabaCloud::CDRS::Model::ListCityMapCameraStatisticsRequest;

ListCityMapCameraStatisticsRequest::ListCityMapCameraStatisticsRequest() :
	RpcServiceRequest("cdrs", "2020-11-01", "ListCityMapCameraStatistics")
{
	setMethod(HttpRequest::Method::Post);
}

ListCityMapCameraStatisticsRequest::~ListCityMapCameraStatisticsRequest()
{}

std::string ListCityMapCameraStatisticsRequest::getEndTime()const
{
	return endTime_;
}

void ListCityMapCameraStatisticsRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setBodyParameter("EndTime", endTime);
}

std::string ListCityMapCameraStatisticsRequest::getStartTime()const
{
	return startTime_;
}

void ListCityMapCameraStatisticsRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setBodyParameter("StartTime", startTime);
}

long ListCityMapCameraStatisticsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListCityMapCameraStatisticsRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListCityMapCameraStatisticsRequest::getDataSourceIdList()const
{
	return dataSourceIdList_;
}

void ListCityMapCameraStatisticsRequest::setDataSourceIdList(const std::string& dataSourceIdList)
{
	dataSourceIdList_ = dataSourceIdList;
	setBodyParameter("DataSourceIdList", dataSourceIdList);
}

long ListCityMapCameraStatisticsRequest::getPageSize()const
{
	return pageSize_;
}

void ListCityMapCameraStatisticsRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

