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

#include <alibabacloud/vcs/model/ListEventAlgorithmResultsRequest.h>

using AlibabaCloud::Vcs::Model::ListEventAlgorithmResultsRequest;

ListEventAlgorithmResultsRequest::ListEventAlgorithmResultsRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "ListEventAlgorithmResults")
{
	setMethod(HttpRequest::Method::Post);
}

ListEventAlgorithmResultsRequest::~ListEventAlgorithmResultsRequest()
{}

std::string ListEventAlgorithmResultsRequest::getCorpId()const
{
	return corpId_;
}

void ListEventAlgorithmResultsRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string ListEventAlgorithmResultsRequest::getExtendValue()const
{
	return extendValue_;
}

void ListEventAlgorithmResultsRequest::setExtendValue(const std::string& extendValue)
{
	extendValue_ = extendValue;
	setBodyParameter("ExtendValue", extendValue);
}

std::string ListEventAlgorithmResultsRequest::getEndTime()const
{
	return endTime_;
}

void ListEventAlgorithmResultsRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setBodyParameter("EndTime", endTime);
}

std::string ListEventAlgorithmResultsRequest::getStartTime()const
{
	return startTime_;
}

void ListEventAlgorithmResultsRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setBodyParameter("StartTime", startTime);
}

std::string ListEventAlgorithmResultsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListEventAlgorithmResultsRequest::setPageNumber(const std::string& pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", pageNumber);
}

std::string ListEventAlgorithmResultsRequest::getDataSourceId()const
{
	return dataSourceId_;
}

void ListEventAlgorithmResultsRequest::setDataSourceId(const std::string& dataSourceId)
{
	dataSourceId_ = dataSourceId;
	setBodyParameter("DataSourceId", dataSourceId);
}

std::string ListEventAlgorithmResultsRequest::getPageSize()const
{
	return pageSize_;
}

void ListEventAlgorithmResultsRequest::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", pageSize);
}

std::string ListEventAlgorithmResultsRequest::getEventType()const
{
	return eventType_;
}

void ListEventAlgorithmResultsRequest::setEventType(const std::string& eventType)
{
	eventType_ = eventType;
	setBodyParameter("EventType", eventType);
}

