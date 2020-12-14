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

#include <alibabacloud/cdrs/model/ListRangeDeviceRequest.h>

using AlibabaCloud::CDRS::Model::ListRangeDeviceRequest;

ListRangeDeviceRequest::ListRangeDeviceRequest() :
	RpcServiceRequest("cdrs", "2020-11-01", "ListRangeDevice")
{
	setMethod(HttpRequest::Method::Post);
}

ListRangeDeviceRequest::~ListRangeDeviceRequest()
{}

std::string ListRangeDeviceRequest::getCorpId()const
{
	return corpId_;
}

void ListRangeDeviceRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

long ListRangeDeviceRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListRangeDeviceRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListRangeDeviceRequest::getDataSourceId()const
{
	return dataSourceId_;
}

void ListRangeDeviceRequest::setDataSourceId(const std::string& dataSourceId)
{
	dataSourceId_ = dataSourceId;
	setBodyParameter("DataSourceId", dataSourceId);
}

long ListRangeDeviceRequest::getPageSize()const
{
	return pageSize_;
}

void ListRangeDeviceRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

int ListRangeDeviceRequest::getRadius()const
{
	return radius_;
}

void ListRangeDeviceRequest::setRadius(int radius)
{
	radius_ = radius;
	setBodyParameter("Radius", std::to_string(radius));
}

