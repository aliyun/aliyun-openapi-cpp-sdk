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

#include <alibabacloud/linkwan/model/ListGatewayTupleOrdersRequest.h>

using AlibabaCloud::LinkWAN::Model::ListGatewayTupleOrdersRequest;

ListGatewayTupleOrdersRequest::ListGatewayTupleOrdersRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "ListGatewayTupleOrders")
{
	setMethod(HttpRequest::Method::Post);
}

ListGatewayTupleOrdersRequest::~ListGatewayTupleOrdersRequest()
{}

long ListGatewayTupleOrdersRequest::getLimit()const
{
	return limit_;
}

void ListGatewayTupleOrdersRequest::setLimit(long limit)
{
	limit_ = limit;
	setParameter("Limit", std::to_string(limit));
}

std::vector<std::string> ListGatewayTupleOrdersRequest::getState()const
{
	return state_;
}

void ListGatewayTupleOrdersRequest::setState(const std::vector<std::string>& state)
{
	state_ = state;
	for(int dep1 = 0; dep1!= state.size(); dep1++) {
		setParameter("State."+ std::to_string(dep1), state.at(dep1));
	}
}

long ListGatewayTupleOrdersRequest::getOffset()const
{
	return offset_;
}

void ListGatewayTupleOrdersRequest::setOffset(long offset)
{
	offset_ = offset;
	setParameter("Offset", std::to_string(offset));
}

bool ListGatewayTupleOrdersRequest::getAscending()const
{
	return ascending_;
}

void ListGatewayTupleOrdersRequest::setAscending(bool ascending)
{
	ascending_ = ascending;
	setParameter("Ascending", ascending ? "true" : "false");
}

std::string ListGatewayTupleOrdersRequest::getApiProduct()const
{
	return apiProduct_;
}

void ListGatewayTupleOrdersRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string ListGatewayTupleOrdersRequest::getApiRevision()const
{
	return apiRevision_;
}

void ListGatewayTupleOrdersRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string ListGatewayTupleOrdersRequest::getSortingField()const
{
	return sortingField_;
}

void ListGatewayTupleOrdersRequest::setSortingField(const std::string& sortingField)
{
	sortingField_ = sortingField;
	setParameter("SortingField", sortingField);
}

