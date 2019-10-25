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

#include <alibabacloud/aliyuncvc/model/ListCommoditiesRequest.h>

using AlibabaCloud::Aliyuncvc::Model::ListCommoditiesRequest;

ListCommoditiesRequest::ListCommoditiesRequest() :
	RpcServiceRequest("aliyuncvc", "2019-09-19", "ListCommodities")
{
	setMethod(HttpRequest::Method::Post);
}

ListCommoditiesRequest::~ListCommoditiesRequest()
{}

int ListCommoditiesRequest::getPageSize()const
{
	return pageSize_;
}

void ListCommoditiesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string ListCommoditiesRequest::getEndTime()const
{
	return endTime_;
}

void ListCommoditiesRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string ListCommoditiesRequest::getStartTime()const
{
	return startTime_;
}

void ListCommoditiesRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

int ListCommoditiesRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListCommoditiesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

