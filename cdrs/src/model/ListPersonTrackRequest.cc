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

#include <alibabacloud/cdrs/model/ListPersonTrackRequest.h>

using AlibabaCloud::CDRS::Model::ListPersonTrackRequest;

ListPersonTrackRequest::ListPersonTrackRequest() :
	RpcServiceRequest("cdrs", "2020-11-01", "ListPersonTrack")
{
	setMethod(HttpRequest::Method::Post);
}

ListPersonTrackRequest::~ListPersonTrackRequest()
{}

std::string ListPersonTrackRequest::getSchema()const
{
	return schema_;
}

void ListPersonTrackRequest::setSchema(const std::string& schema)
{
	schema_ = schema;
	setBodyParameter("Schema", schema);
}

std::string ListPersonTrackRequest::getCorpId()const
{
	return corpId_;
}

void ListPersonTrackRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string ListPersonTrackRequest::getAggregateDimension()const
{
	return aggregateDimension_;
}

void ListPersonTrackRequest::setAggregateDimension(const std::string& aggregateDimension)
{
	aggregateDimension_ = aggregateDimension;
	setBodyParameter("AggregateDimension", aggregateDimension);
}

std::string ListPersonTrackRequest::getImageSourceType()const
{
	return imageSourceType_;
}

void ListPersonTrackRequest::setImageSourceType(const std::string& imageSourceType)
{
	imageSourceType_ = imageSourceType;
	setBodyParameter("ImageSourceType", imageSourceType);
}

std::string ListPersonTrackRequest::getEndTime()const
{
	return endTime_;
}

void ListPersonTrackRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setBodyParameter("EndTime", endTime);
}

std::string ListPersonTrackRequest::getStartTime()const
{
	return startTime_;
}

void ListPersonTrackRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setBodyParameter("StartTime", startTime);
}

long ListPersonTrackRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListPersonTrackRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

long ListPersonTrackRequest::getPageSize()const
{
	return pageSize_;
}

void ListPersonTrackRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::string ListPersonTrackRequest::getPersonId()const
{
	return personId_;
}

void ListPersonTrackRequest::setPersonId(const std::string& personId)
{
	personId_ = personId;
	setBodyParameter("PersonId", personId);
}

