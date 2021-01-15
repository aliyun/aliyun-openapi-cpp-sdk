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

#include <alibabacloud/cdrs/model/ListPersonTopRequest.h>

using AlibabaCloud::CDRS::Model::ListPersonTopRequest;

ListPersonTopRequest::ListPersonTopRequest() :
	RpcServiceRequest("cdrs", "2020-11-01", "ListPersonTop")
{
	setMethod(HttpRequest::Method::Post);
}

ListPersonTopRequest::~ListPersonTopRequest()
{}

std::string ListPersonTopRequest::getSchema()const
{
	return schema_;
}

void ListPersonTopRequest::setSchema(const std::string& schema)
{
	schema_ = schema;
	setBodyParameter("Schema", schema);
}

std::string ListPersonTopRequest::getCorpId()const
{
	return corpId_;
}

void ListPersonTopRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string ListPersonTopRequest::getEndTime()const
{
	return endTime_;
}

void ListPersonTopRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setBodyParameter("EndTime", endTime);
}

std::string ListPersonTopRequest::getStartTime()const
{
	return startTime_;
}

void ListPersonTopRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setBodyParameter("StartTime", startTime);
}

std::string ListPersonTopRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListPersonTopRequest::setPageNumber(const std::string& pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", pageNumber);
}

std::string ListPersonTopRequest::getPageSize()const
{
	return pageSize_;
}

void ListPersonTopRequest::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", pageSize);
}

std::string ListPersonTopRequest::getPersonId()const
{
	return personId_;
}

void ListPersonTopRequest::setPersonId(const std::string& personId)
{
	personId_ = personId;
	setBodyParameter("PersonId", personId);
}

