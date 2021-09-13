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

#include <alibabacloud/linkwan/model/ListNotificationsRequest.h>

using AlibabaCloud::LinkWAN::Model::ListNotificationsRequest;

ListNotificationsRequest::ListNotificationsRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "ListNotifications")
{
	setMethod(HttpRequest::Method::Post);
}

ListNotificationsRequest::~ListNotificationsRequest()
{}

long ListNotificationsRequest::getEndMillis()const
{
	return endMillis_;
}

void ListNotificationsRequest::setEndMillis(long endMillis)
{
	endMillis_ = endMillis;
	setParameter("EndMillis", std::to_string(endMillis));
}

long ListNotificationsRequest::getLimit()const
{
	return limit_;
}

void ListNotificationsRequest::setLimit(long limit)
{
	limit_ = limit;
	setParameter("Limit", std::to_string(limit));
}

long ListNotificationsRequest::getOffset()const
{
	return offset_;
}

void ListNotificationsRequest::setOffset(long offset)
{
	offset_ = offset;
	setParameter("Offset", std::to_string(offset));
}

bool ListNotificationsRequest::getAscending()const
{
	return ascending_;
}

void ListNotificationsRequest::setAscending(bool ascending)
{
	ascending_ = ascending;
	setParameter("Ascending", ascending ? "true" : "false");
}

std::string ListNotificationsRequest::getHandleState()const
{
	return handleState_;
}

void ListNotificationsRequest::setHandleState(const std::string& handleState)
{
	handleState_ = handleState;
	setParameter("HandleState", handleState);
}

std::string ListNotificationsRequest::getApiProduct()const
{
	return apiProduct_;
}

void ListNotificationsRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string ListNotificationsRequest::getApiRevision()const
{
	return apiRevision_;
}

void ListNotificationsRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::vector<std::string> ListNotificationsRequest::getCategory()const
{
	return category_;
}

void ListNotificationsRequest::setCategory(const std::vector<std::string>& category)
{
	category_ = category;
	for(int dep1 = 0; dep1!= category.size(); dep1++) {
		setParameter("Category."+ std::to_string(dep1), category.at(dep1));
	}
}

long ListNotificationsRequest::getBeginMillis()const
{
	return beginMillis_;
}

void ListNotificationsRequest::setBeginMillis(long beginMillis)
{
	beginMillis_ = beginMillis;
	setParameter("BeginMillis", std::to_string(beginMillis));
}

std::string ListNotificationsRequest::getSortingField()const
{
	return sortingField_;
}

void ListNotificationsRequest::setSortingField(const std::string& sortingField)
{
	sortingField_ = sortingField;
	setParameter("SortingField", sortingField);
}

