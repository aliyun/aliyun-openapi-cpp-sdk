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

#include <alibabacloud/vcs/model/ListPersonTraceDetailsRequest.h>

using AlibabaCloud::Vcs::Model::ListPersonTraceDetailsRequest;

ListPersonTraceDetailsRequest::ListPersonTraceDetailsRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "ListPersonTraceDetails")
{
	setMethod(HttpRequest::Method::Post);
}

ListPersonTraceDetailsRequest::~ListPersonTraceDetailsRequest()
{}

std::string ListPersonTraceDetailsRequest::getCorpId()const
{
	return corpId_;
}

void ListPersonTraceDetailsRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string ListPersonTraceDetailsRequest::getEndTime()const
{
	return endTime_;
}

void ListPersonTraceDetailsRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setBodyParameter("EndTime", endTime);
}

std::string ListPersonTraceDetailsRequest::getStartTime()const
{
	return startTime_;
}

void ListPersonTraceDetailsRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setBodyParameter("StartTime", startTime);
}

long ListPersonTraceDetailsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListPersonTraceDetailsRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListPersonTraceDetailsRequest::getSubId()const
{
	return subId_;
}

void ListPersonTraceDetailsRequest::setSubId(const std::string& subId)
{
	subId_ = subId;
	setBodyParameter("SubId", subId);
}

long ListPersonTraceDetailsRequest::getPageSize()const
{
	return pageSize_;
}

void ListPersonTraceDetailsRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::string ListPersonTraceDetailsRequest::getDataSourceId()const
{
	return dataSourceId_;
}

void ListPersonTraceDetailsRequest::setDataSourceId(const std::string& dataSourceId)
{
	dataSourceId_ = dataSourceId;
	setBodyParameter("DataSourceId", dataSourceId);
}

std::string ListPersonTraceDetailsRequest::getPersonId()const
{
	return personId_;
}

void ListPersonTraceDetailsRequest::setPersonId(const std::string& personId)
{
	personId_ = personId;
	setBodyParameter("PersonId", personId);
}

