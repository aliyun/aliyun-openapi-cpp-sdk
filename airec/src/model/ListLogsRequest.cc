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

#include <alibabacloud/airec/model/ListLogsRequest.h>

using AlibabaCloud::Airec::Model::ListLogsRequest;

ListLogsRequest::ListLogsRequest() :
	RoaServiceRequest("airec", "2020-11-26")
{
	setResourcePath("/v2/openapi/instances/[instanceId]/logs");
	setMethod(HttpRequest::Method::Get);
}

ListLogsRequest::~ListLogsRequest()
{}

std::string ListLogsRequest::getInstanceId()const
{
	return instanceId_;
}

void ListLogsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

int ListLogsRequest::getSize()const
{
	return size_;
}

void ListLogsRequest::setSize(int size)
{
	size_ = size;
	setParameter("Size", std::to_string(size));
}

std::string ListLogsRequest::getQueryParams()const
{
	return queryParams_;
}

void ListLogsRequest::setQueryParams(const std::string& queryParams)
{
	queryParams_ = queryParams;
	setParameter("QueryParams", queryParams);
}

int ListLogsRequest::getEndTime()const
{
	return endTime_;
}

void ListLogsRequest::setEndTime(int endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

int ListLogsRequest::getStartTime()const
{
	return startTime_;
}

void ListLogsRequest::setStartTime(int startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

int ListLogsRequest::getPage()const
{
	return page_;
}

void ListLogsRequest::setPage(int page)
{
	page_ = page;
	setParameter("Page", std::to_string(page));
}

