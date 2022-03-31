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

#include <alibabacloud/iot/model/ListDataSourceItemRequest.h>

using AlibabaCloud::Iot::Model::ListDataSourceItemRequest;

ListDataSourceItemRequest::ListDataSourceItemRequest() :
	RpcServiceRequest("iot", "2018-01-20", "ListDataSourceItem")
{
	setMethod(HttpRequest::Method::Post);
}

ListDataSourceItemRequest::~ListDataSourceItemRequest()
{}

std::string ListDataSourceItemRequest::getSearchName()const
{
	return searchName_;
}

void ListDataSourceItemRequest::setSearchName(const std::string& searchName)
{
	searchName_ = searchName;
	setParameter("SearchName", searchName);
}

std::string ListDataSourceItemRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void ListDataSourceItemRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

int ListDataSourceItemRequest::getPageSize()const
{
	return pageSize_;
}

void ListDataSourceItemRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListDataSourceItemRequest::getApiProduct()const
{
	return apiProduct_;
}

void ListDataSourceItemRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

long ListDataSourceItemRequest::getDataSourceId()const
{
	return dataSourceId_;
}

void ListDataSourceItemRequest::setDataSourceId(long dataSourceId)
{
	dataSourceId_ = dataSourceId;
	setParameter("DataSourceId", std::to_string(dataSourceId));
}

std::string ListDataSourceItemRequest::getApiRevision()const
{
	return apiRevision_;
}

void ListDataSourceItemRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

int ListDataSourceItemRequest::getPage()const
{
	return page_;
}

void ListDataSourceItemRequest::setPage(int page)
{
	page_ = page;
	setParameter("Page", std::to_string(page));
}

