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

#include <alibabacloud/linkwan/model/ListNodeTupleOrdersRequest.h>

using AlibabaCloud::LinkWAN::Model::ListNodeTupleOrdersRequest;

ListNodeTupleOrdersRequest::ListNodeTupleOrdersRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "ListNodeTupleOrders")
{
	setMethod(HttpRequest::Method::Post);
}

ListNodeTupleOrdersRequest::~ListNodeTupleOrdersRequest()
{}

bool ListNodeTupleOrdersRequest::getIsKpm()const
{
	return isKpm_;
}

void ListNodeTupleOrdersRequest::setIsKpm(bool isKpm)
{
	isKpm_ = isKpm;
	setParameter("IsKpm", isKpm ? "true" : "false");
}

long ListNodeTupleOrdersRequest::getLimit()const
{
	return limit_;
}

void ListNodeTupleOrdersRequest::setLimit(long limit)
{
	limit_ = limit;
	setParameter("Limit", std::to_string(limit));
}

std::vector<std::string> ListNodeTupleOrdersRequest::getState()const
{
	return state_;
}

void ListNodeTupleOrdersRequest::setState(const std::vector<std::string>& state)
{
	state_ = state;
	for(int dep1 = 0; dep1!= state.size(); dep1++) {
		setParameter("State."+ std::to_string(dep1), state.at(dep1));
	}
}

long ListNodeTupleOrdersRequest::getOffset()const
{
	return offset_;
}

void ListNodeTupleOrdersRequest::setOffset(long offset)
{
	offset_ = offset;
	setParameter("Offset", std::to_string(offset));
}

bool ListNodeTupleOrdersRequest::getAscending()const
{
	return ascending_;
}

void ListNodeTupleOrdersRequest::setAscending(bool ascending)
{
	ascending_ = ascending;
	setParameter("Ascending", ascending ? "true" : "false");
}

std::string ListNodeTupleOrdersRequest::getApiProduct()const
{
	return apiProduct_;
}

void ListNodeTupleOrdersRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string ListNodeTupleOrdersRequest::getApiRevision()const
{
	return apiRevision_;
}

void ListNodeTupleOrdersRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string ListNodeTupleOrdersRequest::getSortingField()const
{
	return sortingField_;
}

void ListNodeTupleOrdersRequest::setSortingField(const std::string& sortingField)
{
	sortingField_ = sortingField;
	setParameter("SortingField", sortingField);
}

