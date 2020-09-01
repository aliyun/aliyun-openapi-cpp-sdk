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

#include <alibabacloud/vcs/model/ListPersonVisitCountRequest.h>

using AlibabaCloud::Vcs::Model::ListPersonVisitCountRequest;

ListPersonVisitCountRequest::ListPersonVisitCountRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "ListPersonVisitCount")
{
	setMethod(HttpRequest::Method::Post);
}

ListPersonVisitCountRequest::~ListPersonVisitCountRequest()
{}

std::string ListPersonVisitCountRequest::getCorpId()const
{
	return corpId_;
}

void ListPersonVisitCountRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string ListPersonVisitCountRequest::getEndTime()const
{
	return endTime_;
}

void ListPersonVisitCountRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setBodyParameter("EndTime", endTime);
}

std::string ListPersonVisitCountRequest::getCountType()const
{
	return countType_;
}

void ListPersonVisitCountRequest::setCountType(const std::string& countType)
{
	countType_ = countType;
	setBodyParameter("CountType", countType);
}

std::string ListPersonVisitCountRequest::getStartTime()const
{
	return startTime_;
}

void ListPersonVisitCountRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setBodyParameter("StartTime", startTime);
}

int ListPersonVisitCountRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListPersonVisitCountRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListPersonVisitCountRequest::getTimeAggregateType()const
{
	return timeAggregateType_;
}

void ListPersonVisitCountRequest::setTimeAggregateType(const std::string& timeAggregateType)
{
	timeAggregateType_ = timeAggregateType;
	setBodyParameter("TimeAggregateType", timeAggregateType);
}

int ListPersonVisitCountRequest::getMaxVal()const
{
	return maxVal_;
}

void ListPersonVisitCountRequest::setMaxVal(int maxVal)
{
	maxVal_ = maxVal;
	setBodyParameter("MaxVal", std::to_string(maxVal));
}

std::string ListPersonVisitCountRequest::getTagCode()const
{
	return tagCode_;
}

void ListPersonVisitCountRequest::setTagCode(const std::string& tagCode)
{
	tagCode_ = tagCode;
	setBodyParameter("TagCode", tagCode);
}

int ListPersonVisitCountRequest::getMinVal()const
{
	return minVal_;
}

void ListPersonVisitCountRequest::setMinVal(int minVal)
{
	minVal_ = minVal;
	setBodyParameter("MinVal", std::to_string(minVal));
}

int ListPersonVisitCountRequest::getPageSize()const
{
	return pageSize_;
}

void ListPersonVisitCountRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::string ListPersonVisitCountRequest::getAggregateType()const
{
	return aggregateType_;
}

void ListPersonVisitCountRequest::setAggregateType(const std::string& aggregateType)
{
	aggregateType_ = aggregateType;
	setBodyParameter("AggregateType", aggregateType);
}

