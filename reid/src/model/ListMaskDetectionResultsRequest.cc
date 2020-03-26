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

#include <alibabacloud/reid/model/ListMaskDetectionResultsRequest.h>

using AlibabaCloud::Reid::Model::ListMaskDetectionResultsRequest;

ListMaskDetectionResultsRequest::ListMaskDetectionResultsRequest() :
	RpcServiceRequest("reid", "2019-09-28", "ListMaskDetectionResults")
{
	setMethod(HttpRequest::Method::Post);
}

ListMaskDetectionResultsRequest::~ListMaskDetectionResultsRequest()
{}

long ListMaskDetectionResultsRequest::getEndTime()const
{
	return endTime_;
}

void ListMaskDetectionResultsRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setBodyParameter("EndTime", std::to_string(endTime));
}

long ListMaskDetectionResultsRequest::getStartTime()const
{
	return startTime_;
}

void ListMaskDetectionResultsRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setBodyParameter("StartTime", std::to_string(startTime));
}

long ListMaskDetectionResultsRequest::getStoreId()const
{
	return storeId_;
}

void ListMaskDetectionResultsRequest::setStoreId(long storeId)
{
	storeId_ = storeId;
	setBodyParameter("StoreId", std::to_string(storeId));
}

int ListMaskDetectionResultsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListMaskDetectionResultsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

int ListMaskDetectionResultsRequest::getPageSize()const
{
	return pageSize_;
}

void ListMaskDetectionResultsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

