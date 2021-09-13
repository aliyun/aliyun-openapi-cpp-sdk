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

#include <alibabacloud/linkwan/model/ListGatewayOnlineRecordsRequest.h>

using AlibabaCloud::LinkWAN::Model::ListGatewayOnlineRecordsRequest;

ListGatewayOnlineRecordsRequest::ListGatewayOnlineRecordsRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "ListGatewayOnlineRecords")
{
	setMethod(HttpRequest::Method::Post);
}

ListGatewayOnlineRecordsRequest::~ListGatewayOnlineRecordsRequest()
{}

long ListGatewayOnlineRecordsRequest::getLimit()const
{
	return limit_;
}

void ListGatewayOnlineRecordsRequest::setLimit(long limit)
{
	limit_ = limit;
	setParameter("Limit", std::to_string(limit));
}

long ListGatewayOnlineRecordsRequest::getOffSet()const
{
	return offSet_;
}

void ListGatewayOnlineRecordsRequest::setOffSet(long offSet)
{
	offSet_ = offSet;
	setParameter("OffSet", std::to_string(offSet));
}

std::string ListGatewayOnlineRecordsRequest::getGwEui()const
{
	return gwEui_;
}

void ListGatewayOnlineRecordsRequest::setGwEui(const std::string& gwEui)
{
	gwEui_ = gwEui;
	setParameter("GwEui", gwEui);
}

bool ListGatewayOnlineRecordsRequest::getAscending()const
{
	return ascending_;
}

void ListGatewayOnlineRecordsRequest::setAscending(bool ascending)
{
	ascending_ = ascending;
	setParameter("Ascending", ascending ? "true" : "false");
}

std::string ListGatewayOnlineRecordsRequest::getApiProduct()const
{
	return apiProduct_;
}

void ListGatewayOnlineRecordsRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string ListGatewayOnlineRecordsRequest::getApiRevision()const
{
	return apiRevision_;
}

void ListGatewayOnlineRecordsRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string ListGatewayOnlineRecordsRequest::getSortingField()const
{
	return sortingField_;
}

void ListGatewayOnlineRecordsRequest::setSortingField(const std::string& sortingField)
{
	sortingField_ = sortingField;
	setParameter("SortingField", sortingField);
}

