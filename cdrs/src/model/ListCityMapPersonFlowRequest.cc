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

#include <alibabacloud/cdrs/model/ListCityMapPersonFlowRequest.h>

using AlibabaCloud::CDRS::Model::ListCityMapPersonFlowRequest;

ListCityMapPersonFlowRequest::ListCityMapPersonFlowRequest() :
	RpcServiceRequest("cdrs", "2020-11-01", "ListCityMapPersonFlow")
{
	setMethod(HttpRequest::Method::Post);
}

ListCityMapPersonFlowRequest::~ListCityMapPersonFlowRequest()
{}

std::string ListCityMapPersonFlowRequest::getEndTime()const
{
	return endTime_;
}

void ListCityMapPersonFlowRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setBodyParameter("EndTime", endTime);
}

std::string ListCityMapPersonFlowRequest::getRange()const
{
	return range_;
}

void ListCityMapPersonFlowRequest::setRange(const std::string& range)
{
	range_ = range;
	setBodyParameter("Range", range);
}

std::string ListCityMapPersonFlowRequest::getStartTime()const
{
	return startTime_;
}

void ListCityMapPersonFlowRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setBodyParameter("StartTime", startTime);
}

std::map<std::string, std::string> ListCityMapPersonFlowRequest::getOriginDataSourceIdList()const
{
	return originDataSourceIdList_;
}

void ListCityMapPersonFlowRequest::setOriginDataSourceIdList(const std::map<std::string, std::string>& originDataSourceIdList)
{
	originDataSourceIdList_ = originDataSourceIdList;
	setJsonParameters("OriginDataSourceIdList", originDataSourceIdList);
}

long ListCityMapPersonFlowRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListCityMapPersonFlowRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListCityMapPersonFlowRequest::getTargetDataSourceIdList()const
{
	return targetDataSourceIdList_;
}

void ListCityMapPersonFlowRequest::setTargetDataSourceIdList(const std::string& targetDataSourceIdList)
{
	targetDataSourceIdList_ = targetDataSourceIdList;
	setBodyParameter("TargetDataSourceIdList", targetDataSourceIdList);
}

long ListCityMapPersonFlowRequest::getPageSize()const
{
	return pageSize_;
}

void ListCityMapPersonFlowRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

