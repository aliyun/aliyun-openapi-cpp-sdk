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

#include <alibabacloud/vcs/model/ListBodyAlgorithmResultsRequest.h>

using AlibabaCloud::Vcs::Model::ListBodyAlgorithmResultsRequest;

ListBodyAlgorithmResultsRequest::ListBodyAlgorithmResultsRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "ListBodyAlgorithmResults")
{
	setMethod(HttpRequest::Method::Post);
}

ListBodyAlgorithmResultsRequest::~ListBodyAlgorithmResultsRequest()
{}

std::string ListBodyAlgorithmResultsRequest::getAlgorithmType()const
{
	return algorithmType_;
}

void ListBodyAlgorithmResultsRequest::setAlgorithmType(const std::string& algorithmType)
{
	algorithmType_ = algorithmType;
	setBodyParameter("AlgorithmType", algorithmType);
}

std::string ListBodyAlgorithmResultsRequest::getCorpId()const
{
	return corpId_;
}

void ListBodyAlgorithmResultsRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string ListBodyAlgorithmResultsRequest::getCapStyle()const
{
	return capStyle_;
}

void ListBodyAlgorithmResultsRequest::setCapStyle(const std::string& capStyle)
{
	capStyle_ = capStyle;
	setBodyParameter("CapStyle", capStyle);
}

std::string ListBodyAlgorithmResultsRequest::getEndTime()const
{
	return endTime_;
}

void ListBodyAlgorithmResultsRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setBodyParameter("EndTime", endTime);
}

std::string ListBodyAlgorithmResultsRequest::getStartTime()const
{
	return startTime_;
}

void ListBodyAlgorithmResultsRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setBodyParameter("StartTime", startTime);
}

std::string ListBodyAlgorithmResultsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListBodyAlgorithmResultsRequest::setPageNumber(const std::string& pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", pageNumber);
}

std::string ListBodyAlgorithmResultsRequest::getDataSourceId()const
{
	return dataSourceId_;
}

void ListBodyAlgorithmResultsRequest::setDataSourceId(const std::string& dataSourceId)
{
	dataSourceId_ = dataSourceId;
	setBodyParameter("DataSourceId", dataSourceId);
}

std::string ListBodyAlgorithmResultsRequest::getPageSize()const
{
	return pageSize_;
}

void ListBodyAlgorithmResultsRequest::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", pageSize);
}

