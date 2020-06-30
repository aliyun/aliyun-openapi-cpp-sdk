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

#include <alibabacloud/vcs/model/ListMetricsRequest.h>

using AlibabaCloud::Vcs::Model::ListMetricsRequest;

ListMetricsRequest::ListMetricsRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "ListMetrics")
{
	setMethod(HttpRequest::Method::Post);
}

ListMetricsRequest::~ListMetricsRequest()
{}

std::string ListMetricsRequest::getCorpId()const
{
	return corpId_;
}

void ListMetricsRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string ListMetricsRequest::getEndTime()const
{
	return endTime_;
}

void ListMetricsRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setBodyParameter("EndTime", endTime);
}

std::string ListMetricsRequest::getStartTime()const
{
	return startTime_;
}

void ListMetricsRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setBodyParameter("StartTime", startTime);
}

std::string ListMetricsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListMetricsRequest::setPageNumber(const std::string& pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", pageNumber);
}

std::string ListMetricsRequest::getTagCode()const
{
	return tagCode_;
}

void ListMetricsRequest::setTagCode(const std::string& tagCode)
{
	tagCode_ = tagCode;
	setBodyParameter("TagCode", tagCode);
}

std::string ListMetricsRequest::getPageSize()const
{
	return pageSize_;
}

void ListMetricsRequest::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", pageSize);
}

std::string ListMetricsRequest::getAggregateType()const
{
	return aggregateType_;
}

void ListMetricsRequest::setAggregateType(const std::string& aggregateType)
{
	aggregateType_ = aggregateType;
	setBodyParameter("AggregateType", aggregateType);
}

