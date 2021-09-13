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

#include <alibabacloud/linkwan/model/ListNodesByOwnedJoinPermissionIdRequest.h>

using AlibabaCloud::LinkWAN::Model::ListNodesByOwnedJoinPermissionIdRequest;

ListNodesByOwnedJoinPermissionIdRequest::ListNodesByOwnedJoinPermissionIdRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "ListNodesByOwnedJoinPermissionId")
{
	setMethod(HttpRequest::Method::Post);
}

ListNodesByOwnedJoinPermissionIdRequest::~ListNodesByOwnedJoinPermissionIdRequest()
{}

std::string ListNodesByOwnedJoinPermissionIdRequest::getJoinPermissionId()const
{
	return joinPermissionId_;
}

void ListNodesByOwnedJoinPermissionIdRequest::setJoinPermissionId(const std::string& joinPermissionId)
{
	joinPermissionId_ = joinPermissionId;
	setParameter("JoinPermissionId", joinPermissionId);
}

std::string ListNodesByOwnedJoinPermissionIdRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void ListNodesByOwnedJoinPermissionIdRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string ListNodesByOwnedJoinPermissionIdRequest::getFuzzyDevEui()const
{
	return fuzzyDevEui_;
}

void ListNodesByOwnedJoinPermissionIdRequest::setFuzzyDevEui(const std::string& fuzzyDevEui)
{
	fuzzyDevEui_ = fuzzyDevEui;
	setParameter("FuzzyDevEui", fuzzyDevEui);
}

long ListNodesByOwnedJoinPermissionIdRequest::getLimit()const
{
	return limit_;
}

void ListNodesByOwnedJoinPermissionIdRequest::setLimit(long limit)
{
	limit_ = limit;
	setParameter("Limit", std::to_string(limit));
}

long ListNodesByOwnedJoinPermissionIdRequest::getOffset()const
{
	return offset_;
}

void ListNodesByOwnedJoinPermissionIdRequest::setOffset(long offset)
{
	offset_ = offset;
	setParameter("Offset", std::to_string(offset));
}

bool ListNodesByOwnedJoinPermissionIdRequest::getAscending()const
{
	return ascending_;
}

void ListNodesByOwnedJoinPermissionIdRequest::setAscending(bool ascending)
{
	ascending_ = ascending;
	setParameter("Ascending", ascending ? "true" : "false");
}

std::string ListNodesByOwnedJoinPermissionIdRequest::getApiProduct()const
{
	return apiProduct_;
}

void ListNodesByOwnedJoinPermissionIdRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string ListNodesByOwnedJoinPermissionIdRequest::getApiRevision()const
{
	return apiRevision_;
}

void ListNodesByOwnedJoinPermissionIdRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string ListNodesByOwnedJoinPermissionIdRequest::getSortingField()const
{
	return sortingField_;
}

void ListNodesByOwnedJoinPermissionIdRequest::setSortingField(const std::string& sortingField)
{
	sortingField_ = sortingField;
	setParameter("SortingField", sortingField);
}

