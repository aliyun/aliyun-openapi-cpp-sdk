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

#include <alibabacloud/iot/model/ListParserDataSourceRequest.h>

using AlibabaCloud::Iot::Model::ListParserDataSourceRequest;

ListParserDataSourceRequest::ListParserDataSourceRequest() :
	RpcServiceRequest("iot", "2018-01-20", "ListParserDataSource")
{
	setMethod(HttpRequest::Method::Post);
}

ListParserDataSourceRequest::~ListParserDataSourceRequest()
{}

std::string ListParserDataSourceRequest::getSearchName()const
{
	return searchName_;
}

void ListParserDataSourceRequest::setSearchName(const std::string& searchName)
{
	searchName_ = searchName;
	setParameter("SearchName", searchName);
}

std::string ListParserDataSourceRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void ListParserDataSourceRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

int ListParserDataSourceRequest::getPageSize()const
{
	return pageSize_;
}

void ListParserDataSourceRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListParserDataSourceRequest::getApiProduct()const
{
	return apiProduct_;
}

void ListParserDataSourceRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string ListParserDataSourceRequest::getApiRevision()const
{
	return apiRevision_;
}

void ListParserDataSourceRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

int ListParserDataSourceRequest::getPage()const
{
	return page_;
}

void ListParserDataSourceRequest::setPage(int page)
{
	page_ = page;
	setParameter("Page", std::to_string(page));
}

