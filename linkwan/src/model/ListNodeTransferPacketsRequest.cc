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

#include <alibabacloud/linkwan/model/ListNodeTransferPacketsRequest.h>

using AlibabaCloud::LinkWAN::Model::ListNodeTransferPacketsRequest;

ListNodeTransferPacketsRequest::ListNodeTransferPacketsRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "ListNodeTransferPackets")
{
	setMethod(HttpRequest::Method::Post);
}

ListNodeTransferPacketsRequest::~ListNodeTransferPacketsRequest()
{}

long ListNodeTransferPacketsRequest::getEndMillis()const
{
	return endMillis_;
}

void ListNodeTransferPacketsRequest::setEndMillis(long endMillis)
{
	endMillis_ = endMillis;
	setParameter("EndMillis", std::to_string(endMillis));
}

int ListNodeTransferPacketsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListNodeTransferPacketsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

int ListNodeTransferPacketsRequest::getPageSize()const
{
	return pageSize_;
}

void ListNodeTransferPacketsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListNodeTransferPacketsRequest::getGwEui()const
{
	return gwEui_;
}

void ListNodeTransferPacketsRequest::setGwEui(const std::string& gwEui)
{
	gwEui_ = gwEui;
	setParameter("GwEui", gwEui);
}

bool ListNodeTransferPacketsRequest::getAscending()const
{
	return ascending_;
}

void ListNodeTransferPacketsRequest::setAscending(bool ascending)
{
	ascending_ = ascending;
	setParameter("Ascending", ascending ? "true" : "false");
}

std::string ListNodeTransferPacketsRequest::getDevEui()const
{
	return devEui_;
}

void ListNodeTransferPacketsRequest::setDevEui(const std::string& devEui)
{
	devEui_ = devEui;
	setParameter("DevEui", devEui);
}

std::string ListNodeTransferPacketsRequest::getApiProduct()const
{
	return apiProduct_;
}

void ListNodeTransferPacketsRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string ListNodeTransferPacketsRequest::getApiRevision()const
{
	return apiRevision_;
}

void ListNodeTransferPacketsRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string ListNodeTransferPacketsRequest::getCategory()const
{
	return category_;
}

void ListNodeTransferPacketsRequest::setCategory(const std::string& category)
{
	category_ = category;
	setParameter("Category", category);
}

long ListNodeTransferPacketsRequest::getBeginMillis()const
{
	return beginMillis_;
}

void ListNodeTransferPacketsRequest::setBeginMillis(long beginMillis)
{
	beginMillis_ = beginMillis;
	setParameter("BeginMillis", std::to_string(beginMillis));
}

std::string ListNodeTransferPacketsRequest::getSortingField()const
{
	return sortingField_;
}

void ListNodeTransferPacketsRequest::setSortingField(const std::string& sortingField)
{
	sortingField_ = sortingField;
	setParameter("SortingField", sortingField);
}

