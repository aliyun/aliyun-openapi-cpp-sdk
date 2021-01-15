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

#include <alibabacloud/cdrs/model/ListPersonDetailsRequest.h>

using AlibabaCloud::CDRS::Model::ListPersonDetailsRequest;

ListPersonDetailsRequest::ListPersonDetailsRequest() :
	RpcServiceRequest("cdrs", "2020-11-01", "ListPersonDetails")
{
	setMethod(HttpRequest::Method::Post);
}

ListPersonDetailsRequest::~ListPersonDetailsRequest()
{}

std::string ListPersonDetailsRequest::getSchema()const
{
	return schema_;
}

void ListPersonDetailsRequest::setSchema(const std::string& schema)
{
	schema_ = schema;
	setBodyParameter("Schema", schema);
}

std::string ListPersonDetailsRequest::getCorpId()const
{
	return corpId_;
}

void ListPersonDetailsRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string ListPersonDetailsRequest::getEndTime()const
{
	return endTime_;
}

void ListPersonDetailsRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setBodyParameter("EndTime", endTime);
}

std::string ListPersonDetailsRequest::getStartTime()const
{
	return startTime_;
}

void ListPersonDetailsRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setBodyParameter("StartTime", startTime);
}

long ListPersonDetailsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListPersonDetailsRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

long ListPersonDetailsRequest::getPageSize()const
{
	return pageSize_;
}

void ListPersonDetailsRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::string ListPersonDetailsRequest::getPersonId()const
{
	return personId_;
}

void ListPersonDetailsRequest::setPersonId(const std::string& personId)
{
	personId_ = personId;
	setBodyParameter("PersonId", personId);
}

