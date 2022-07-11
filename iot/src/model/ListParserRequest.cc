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

#include <alibabacloud/iot/model/ListParserRequest.h>

using AlibabaCloud::Iot::Model::ListParserRequest;

ListParserRequest::ListParserRequest() :
	RpcServiceRequest("iot", "2018-01-20", "ListParser")
{
	setMethod(HttpRequest::Method::Post);
}

ListParserRequest::~ListParserRequest()
{}

std::string ListParserRequest::getSearchName()const
{
	return searchName_;
}

void ListParserRequest::setSearchName(const std::string& searchName)
{
	searchName_ = searchName;
	setParameter("SearchName", searchName);
}

std::string ListParserRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void ListParserRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

int ListParserRequest::getPageSize()const
{
	return pageSize_;
}

void ListParserRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int ListParserRequest::getCurrentPage()const
{
	return currentPage_;
}

void ListParserRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string ListParserRequest::getApiProduct()const
{
	return apiProduct_;
}

void ListParserRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string ListParserRequest::getApiRevision()const
{
	return apiRevision_;
}

void ListParserRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

