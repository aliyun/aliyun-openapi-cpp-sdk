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

#include <alibabacloud/cdrs/model/ListDeviceDetailRequest.h>

using AlibabaCloud::CDRS::Model::ListDeviceDetailRequest;

ListDeviceDetailRequest::ListDeviceDetailRequest() :
	RpcServiceRequest("cdrs", "2020-11-01", "ListDeviceDetail")
{
	setMethod(HttpRequest::Method::Post);
}

ListDeviceDetailRequest::~ListDeviceDetailRequest()
{}

std::string ListDeviceDetailRequest::getCorpId()const
{
	return corpId_;
}

void ListDeviceDetailRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

long ListDeviceDetailRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListDeviceDetailRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListDeviceDetailRequest::getDataSourceId()const
{
	return dataSourceId_;
}

void ListDeviceDetailRequest::setDataSourceId(const std::string& dataSourceId)
{
	dataSourceId_ = dataSourceId;
	setBodyParameter("DataSourceId", dataSourceId);
}

long ListDeviceDetailRequest::getPageSize()const
{
	return pageSize_;
}

void ListDeviceDetailRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

