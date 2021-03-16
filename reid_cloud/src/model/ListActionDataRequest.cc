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

#include <alibabacloud/reid_cloud/model/ListActionDataRequest.h>

using AlibabaCloud::Reid_cloud::Model::ListActionDataRequest;

ListActionDataRequest::ListActionDataRequest() :
	RpcServiceRequest("reid_cloud", "2020-10-29", "ListActionData")
{
	setMethod(HttpRequest::Method::Post);
}

ListActionDataRequest::~ListActionDataRequest()
{}

long ListActionDataRequest::getEndTime()const
{
	return endTime_;
}

void ListActionDataRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setBodyParameter("EndTime", std::to_string(endTime));
}

long ListActionDataRequest::getStartTime()const
{
	return startTime_;
}

void ListActionDataRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setBodyParameter("StartTime", std::to_string(startTime));
}

long ListActionDataRequest::getStoreId()const
{
	return storeId_;
}

void ListActionDataRequest::setStoreId(long storeId)
{
	storeId_ = storeId;
	setBodyParameter("StoreId", std::to_string(storeId));
}

int ListActionDataRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListActionDataRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListActionDataRequest::getName()const
{
	return name_;
}

void ListActionDataRequest::setName(const std::string& name)
{
	name_ = name;
	setBodyParameter("Name", name);
}

int ListActionDataRequest::getPageSize()const
{
	return pageSize_;
}

void ListActionDataRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

bool ListActionDataRequest::getFilterInvalidData()const
{
	return filterInvalidData_;
}

void ListActionDataRequest::setFilterInvalidData(bool filterInvalidData)
{
	filterInvalidData_ = filterInvalidData;
	setBodyParameter("FilterInvalidData", filterInvalidData ? "true" : "false");
}

