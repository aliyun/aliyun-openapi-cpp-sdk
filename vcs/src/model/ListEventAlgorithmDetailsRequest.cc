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

#include <alibabacloud/vcs/model/ListEventAlgorithmDetailsRequest.h>

using AlibabaCloud::Vcs::Model::ListEventAlgorithmDetailsRequest;

ListEventAlgorithmDetailsRequest::ListEventAlgorithmDetailsRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "ListEventAlgorithmDetails")
{
	setMethod(HttpRequest::Method::Post);
}

ListEventAlgorithmDetailsRequest::~ListEventAlgorithmDetailsRequest()
{}

std::string ListEventAlgorithmDetailsRequest::getSourceId()const
{
	return sourceId_;
}

void ListEventAlgorithmDetailsRequest::setSourceId(const std::string& sourceId)
{
	sourceId_ = sourceId;
	setBodyParameter("SourceId", sourceId);
}

std::string ListEventAlgorithmDetailsRequest::getCorpId()const
{
	return corpId_;
}

void ListEventAlgorithmDetailsRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string ListEventAlgorithmDetailsRequest::getExtendValue()const
{
	return extendValue_;
}

void ListEventAlgorithmDetailsRequest::setExtendValue(const std::string& extendValue)
{
	extendValue_ = extendValue;
	setBodyParameter("ExtendValue", extendValue);
}

std::string ListEventAlgorithmDetailsRequest::getEndTime()const
{
	return endTime_;
}

void ListEventAlgorithmDetailsRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setBodyParameter("EndTime", endTime);
}

std::string ListEventAlgorithmDetailsRequest::getStartTime()const
{
	return startTime_;
}

void ListEventAlgorithmDetailsRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setBodyParameter("StartTime", startTime);
}

int ListEventAlgorithmDetailsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListEventAlgorithmDetailsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListEventAlgorithmDetailsRequest::getRecordId()const
{
	return recordId_;
}

void ListEventAlgorithmDetailsRequest::setRecordId(const std::string& recordId)
{
	recordId_ = recordId;
	setBodyParameter("RecordId", recordId);
}

std::string ListEventAlgorithmDetailsRequest::getEventValue()const
{
	return eventValue_;
}

void ListEventAlgorithmDetailsRequest::setEventValue(const std::string& eventValue)
{
	eventValue_ = eventValue;
	setBodyParameter("EventValue", eventValue);
}

std::string ListEventAlgorithmDetailsRequest::getDataSourceId()const
{
	return dataSourceId_;
}

void ListEventAlgorithmDetailsRequest::setDataSourceId(const std::string& dataSourceId)
{
	dataSourceId_ = dataSourceId;
	setBodyParameter("DataSourceId", dataSourceId);
}

int ListEventAlgorithmDetailsRequest::getPageSize()const
{
	return pageSize_;
}

void ListEventAlgorithmDetailsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::string ListEventAlgorithmDetailsRequest::getEventType()const
{
	return eventType_;
}

void ListEventAlgorithmDetailsRequest::setEventType(const std::string& eventType)
{
	eventType_ = eventType;
	setBodyParameter("EventType", eventType);
}

