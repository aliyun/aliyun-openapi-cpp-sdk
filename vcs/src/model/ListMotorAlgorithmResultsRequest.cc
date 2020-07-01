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

#include <alibabacloud/vcs/model/ListMotorAlgorithmResultsRequest.h>

using AlibabaCloud::Vcs::Model::ListMotorAlgorithmResultsRequest;

ListMotorAlgorithmResultsRequest::ListMotorAlgorithmResultsRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "ListMotorAlgorithmResults")
{
	setMethod(HttpRequest::Method::Post);
}

ListMotorAlgorithmResultsRequest::~ListMotorAlgorithmResultsRequest()
{}

std::string ListMotorAlgorithmResultsRequest::getAlgorithmType()const
{
	return algorithmType_;
}

void ListMotorAlgorithmResultsRequest::setAlgorithmType(const std::string& algorithmType)
{
	algorithmType_ = algorithmType;
	setBodyParameter("AlgorithmType", algorithmType);
}

std::string ListMotorAlgorithmResultsRequest::getCorpId()const
{
	return corpId_;
}

void ListMotorAlgorithmResultsRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string ListMotorAlgorithmResultsRequest::getEndTime()const
{
	return endTime_;
}

void ListMotorAlgorithmResultsRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setBodyParameter("EndTime", endTime);
}

std::string ListMotorAlgorithmResultsRequest::getStartTime()const
{
	return startTime_;
}

void ListMotorAlgorithmResultsRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setBodyParameter("StartTime", startTime);
}

std::string ListMotorAlgorithmResultsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListMotorAlgorithmResultsRequest::setPageNumber(const std::string& pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", pageNumber);
}

std::string ListMotorAlgorithmResultsRequest::getPlateNumber()const
{
	return plateNumber_;
}

void ListMotorAlgorithmResultsRequest::setPlateNumber(const std::string& plateNumber)
{
	plateNumber_ = plateNumber;
	setBodyParameter("PlateNumber", plateNumber);
}

std::string ListMotorAlgorithmResultsRequest::getDataSourceId()const
{
	return dataSourceId_;
}

void ListMotorAlgorithmResultsRequest::setDataSourceId(const std::string& dataSourceId)
{
	dataSourceId_ = dataSourceId;
	setBodyParameter("DataSourceId", dataSourceId);
}

std::string ListMotorAlgorithmResultsRequest::getPageSize()const
{
	return pageSize_;
}

void ListMotorAlgorithmResultsRequest::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", pageSize);
}

