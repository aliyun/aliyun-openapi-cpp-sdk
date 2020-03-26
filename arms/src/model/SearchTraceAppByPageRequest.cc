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

#include <alibabacloud/arms/model/SearchTraceAppByPageRequest.h>

using AlibabaCloud::ARMS::Model::SearchTraceAppByPageRequest;

SearchTraceAppByPageRequest::SearchTraceAppByPageRequest() :
	RpcServiceRequest("arms", "2019-08-08", "SearchTraceAppByPage")
{
	setMethod(HttpRequest::Method::Post);
}

SearchTraceAppByPageRequest::~SearchTraceAppByPageRequest()
{}

std::string SearchTraceAppByPageRequest::getRegionId()const
{
	return regionId_;
}

void SearchTraceAppByPageRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string SearchTraceAppByPageRequest::getTraceAppName()const
{
	return traceAppName_;
}

void SearchTraceAppByPageRequest::setTraceAppName(const std::string& traceAppName)
{
	traceAppName_ = traceAppName;
	setParameter("TraceAppName", traceAppName);
}

int SearchTraceAppByPageRequest::getPageSize()const
{
	return pageSize_;
}

void SearchTraceAppByPageRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int SearchTraceAppByPageRequest::getPageNumber()const
{
	return pageNumber_;
}

void SearchTraceAppByPageRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

