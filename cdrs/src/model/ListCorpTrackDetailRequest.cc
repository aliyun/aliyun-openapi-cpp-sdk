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

#include <alibabacloud/cdrs/model/ListCorpTrackDetailRequest.h>

using AlibabaCloud::CDRS::Model::ListCorpTrackDetailRequest;

ListCorpTrackDetailRequest::ListCorpTrackDetailRequest() :
	RpcServiceRequest("cdrs", "2020-11-01", "ListCorpTrackDetail")
{
	setMethod(HttpRequest::Method::Post);
}

ListCorpTrackDetailRequest::~ListCorpTrackDetailRequest()
{}

std::string ListCorpTrackDetailRequest::getSchema()const
{
	return schema_;
}

void ListCorpTrackDetailRequest::setSchema(const std::string& schema)
{
	schema_ = schema;
	setBodyParameter("Schema", schema);
}

std::string ListCorpTrackDetailRequest::getCorpId()const
{
	return corpId_;
}

void ListCorpTrackDetailRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string ListCorpTrackDetailRequest::getEndTime()const
{
	return endTime_;
}

void ListCorpTrackDetailRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setBodyParameter("EndTime", endTime);
}

std::string ListCorpTrackDetailRequest::getStartTime()const
{
	return startTime_;
}

void ListCorpTrackDetailRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setBodyParameter("StartTime", startTime);
}

std::string ListCorpTrackDetailRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListCorpTrackDetailRequest::setPageNumber(const std::string& pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", pageNumber);
}

std::string ListCorpTrackDetailRequest::getPageSize()const
{
	return pageSize_;
}

void ListCorpTrackDetailRequest::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", pageSize);
}

std::string ListCorpTrackDetailRequest::getDataSourceId()const
{
	return dataSourceId_;
}

void ListCorpTrackDetailRequest::setDataSourceId(const std::string& dataSourceId)
{
	dataSourceId_ = dataSourceId;
	setBodyParameter("DataSourceId", dataSourceId);
}

std::string ListCorpTrackDetailRequest::getPersonId()const
{
	return personId_;
}

void ListCorpTrackDetailRequest::setPersonId(const std::string& personId)
{
	personId_ = personId;
	setBodyParameter("PersonId", personId);
}

