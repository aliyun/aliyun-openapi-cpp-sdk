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

#include <alibabacloud/vcs/model/ListPersonTraceRequest.h>

using AlibabaCloud::Vcs::Model::ListPersonTraceRequest;

ListPersonTraceRequest::ListPersonTraceRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "ListPersonTrace")
{
	setMethod(HttpRequest::Method::Post);
}

ListPersonTraceRequest::~ListPersonTraceRequest()
{}

std::string ListPersonTraceRequest::getCorpId()const
{
	return corpId_;
}

void ListPersonTraceRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string ListPersonTraceRequest::getGroupId()const
{
	return groupId_;
}

void ListPersonTraceRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setBodyParameter("GroupId", groupId);
}

std::string ListPersonTraceRequest::getEndTime()const
{
	return endTime_;
}

void ListPersonTraceRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setBodyParameter("EndTime", endTime);
}

std::string ListPersonTraceRequest::getStartTime()const
{
	return startTime_;
}

void ListPersonTraceRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setBodyParameter("StartTime", startTime);
}

std::string ListPersonTraceRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListPersonTraceRequest::setPageNumber(const std::string& pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", pageNumber);
}

std::string ListPersonTraceRequest::getPageSize()const
{
	return pageSize_;
}

void ListPersonTraceRequest::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", pageSize);
}

std::string ListPersonTraceRequest::getDataSourceId()const
{
	return dataSourceId_;
}

void ListPersonTraceRequest::setDataSourceId(const std::string& dataSourceId)
{
	dataSourceId_ = dataSourceId;
	setBodyParameter("DataSourceId", dataSourceId);
}

std::string ListPersonTraceRequest::getPersonId()const
{
	return personId_;
}

void ListPersonTraceRequest::setPersonId(const std::string& personId)
{
	personId_ = personId;
	setBodyParameter("PersonId", personId);
}

