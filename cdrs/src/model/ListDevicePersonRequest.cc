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

#include <alibabacloud/cdrs/model/ListDevicePersonRequest.h>

using AlibabaCloud::CDRS::Model::ListDevicePersonRequest;

ListDevicePersonRequest::ListDevicePersonRequest() :
	RpcServiceRequest("cdrs", "2020-11-01", "ListDevicePerson")
{
	setMethod(HttpRequest::Method::Post);
}

ListDevicePersonRequest::~ListDevicePersonRequest()
{}

std::string ListDevicePersonRequest::getStatisticsType()const
{
	return statisticsType_;
}

void ListDevicePersonRequest::setStatisticsType(const std::string& statisticsType)
{
	statisticsType_ = statisticsType;
	setBodyParameter("StatisticsType", statisticsType);
}

std::string ListDevicePersonRequest::getCorpId()const
{
	return corpId_;
}

void ListDevicePersonRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string ListDevicePersonRequest::getEndTime()const
{
	return endTime_;
}

void ListDevicePersonRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setBodyParameter("EndTime", endTime);
}

std::string ListDevicePersonRequest::getStartTime()const
{
	return startTime_;
}

void ListDevicePersonRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setBodyParameter("StartTime", startTime);
}

long ListDevicePersonRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListDevicePersonRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListDevicePersonRequest::getDataSourceId()const
{
	return dataSourceId_;
}

void ListDevicePersonRequest::setDataSourceId(const std::string& dataSourceId)
{
	dataSourceId_ = dataSourceId;
	setBodyParameter("DataSourceId", dataSourceId);
}

long ListDevicePersonRequest::getPageSize()const
{
	return pageSize_;
}

void ListDevicePersonRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

