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

#include <alibabacloud/linkwan/model/ListTransferPacketRequest.h>

using AlibabaCloud::LinkWAN::Model::ListTransferPacketRequest;

ListTransferPacketRequest::ListTransferPacketRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "ListTransferPacket")
{
	setMethod(HttpRequest::Method::Post);
}

ListTransferPacketRequest::~ListTransferPacketRequest()
{}

long ListTransferPacketRequest::getEndMillis()const
{
	return endMillis_;
}

void ListTransferPacketRequest::setEndMillis(long endMillis)
{
	endMillis_ = endMillis;
	setParameter("EndMillis", std::to_string(endMillis));
}

int ListTransferPacketRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListTransferPacketRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

int ListTransferPacketRequest::getPageSize()const
{
	return pageSize_;
}

void ListTransferPacketRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

bool ListTransferPacketRequest::getAscending()const
{
	return ascending_;
}

void ListTransferPacketRequest::setAscending(bool ascending)
{
	ascending_ = ascending;
	setParameter("Ascending", ascending ? "true" : "false");
}

std::string ListTransferPacketRequest::getApiProduct()const
{
	return apiProduct_;
}

void ListTransferPacketRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string ListTransferPacketRequest::getApiRevision()const
{
	return apiRevision_;
}

void ListTransferPacketRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

long ListTransferPacketRequest::getBeginMillis()const
{
	return beginMillis_;
}

void ListTransferPacketRequest::setBeginMillis(long beginMillis)
{
	beginMillis_ = beginMillis;
	setParameter("BeginMillis", std::to_string(beginMillis));
}

std::string ListTransferPacketRequest::getSortingField()const
{
	return sortingField_;
}

void ListTransferPacketRequest::setSortingField(const std::string& sortingField)
{
	sortingField_ = sortingField;
	setParameter("SortingField", sortingField);
}

