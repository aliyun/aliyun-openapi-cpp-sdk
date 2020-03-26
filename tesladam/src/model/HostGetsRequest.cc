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

#include <alibabacloud/tesladam/model/HostGetsRequest.h>

using AlibabaCloud::TeslaDam::Model::HostGetsRequest;

HostGetsRequest::HostGetsRequest() :
	RpcServiceRequest("tesladam", "2018-01-18", "HostGets")
{
	setMethod(HttpRequest::Method::Get);
}

HostGetsRequest::~HostGetsRequest()
{}

std::string HostGetsRequest::getQuery()const
{
	return query_;
}

void HostGetsRequest::setQuery(const std::string& query)
{
	query_ = query;
	setParameter("Query", query);
}

int HostGetsRequest::getEndTime()const
{
	return endTime_;
}

void HostGetsRequest::setEndTime(int endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

int HostGetsRequest::getStartTime()const
{
	return startTime_;
}

void HostGetsRequest::setStartTime(int startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

std::string HostGetsRequest::getQueryType()const
{
	return queryType_;
}

void HostGetsRequest::setQueryType(const std::string& queryType)
{
	queryType_ = queryType;
	setParameter("QueryType", queryType);
}

