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

#include <alibabacloud/cdrs/model/ListTagMetricsRequest.h>

using AlibabaCloud::CDRS::Model::ListTagMetricsRequest;

ListTagMetricsRequest::ListTagMetricsRequest() :
	RpcServiceRequest("cdrs", "2020-11-01", "ListTagMetrics")
{
	setMethod(HttpRequest::Method::Post);
}

ListTagMetricsRequest::~ListTagMetricsRequest()
{}

std::string ListTagMetricsRequest::getSchema()const
{
	return schema_;
}

void ListTagMetricsRequest::setSchema(const std::string& schema)
{
	schema_ = schema;
	setBodyParameter("Schema", schema);
}

std::string ListTagMetricsRequest::getCorpId()const
{
	return corpId_;
}

void ListTagMetricsRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string ListTagMetricsRequest::getEndTime()const
{
	return endTime_;
}

void ListTagMetricsRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setBodyParameter("EndTime", endTime);
}

std::string ListTagMetricsRequest::getStartTime()const
{
	return startTime_;
}

void ListTagMetricsRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setBodyParameter("StartTime", startTime);
}

std::string ListTagMetricsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListTagMetricsRequest::setPageNumber(const std::string& pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", pageNumber);
}

std::string ListTagMetricsRequest::getTagCode()const
{
	return tagCode_;
}

void ListTagMetricsRequest::setTagCode(const std::string& tagCode)
{
	tagCode_ = tagCode;
	setBodyParameter("TagCode", tagCode);
}

std::string ListTagMetricsRequest::getPageSize()const
{
	return pageSize_;
}

void ListTagMetricsRequest::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", pageSize);
}

std::string ListTagMetricsRequest::getAggregateType()const
{
	return aggregateType_;
}

void ListTagMetricsRequest::setAggregateType(const std::string& aggregateType)
{
	aggregateType_ = aggregateType;
	setBodyParameter("AggregateType", aggregateType);
}

