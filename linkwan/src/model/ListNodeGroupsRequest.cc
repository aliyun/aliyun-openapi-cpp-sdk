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

#include <alibabacloud/linkwan/model/ListNodeGroupsRequest.h>

using AlibabaCloud::LinkWAN::Model::ListNodeGroupsRequest;

ListNodeGroupsRequest::ListNodeGroupsRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "ListNodeGroups")
{
	setMethod(HttpRequest::Method::Post);
}

ListNodeGroupsRequest::~ListNodeGroupsRequest()
{}

std::string ListNodeGroupsRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void ListNodeGroupsRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string ListNodeGroupsRequest::getFuzzyJoinEui()const
{
	return fuzzyJoinEui_;
}

void ListNodeGroupsRequest::setFuzzyJoinEui(const std::string& fuzzyJoinEui)
{
	fuzzyJoinEui_ = fuzzyJoinEui;
	setParameter("FuzzyJoinEui", fuzzyJoinEui);
}

std::string ListNodeGroupsRequest::getFuzzyDevEui()const
{
	return fuzzyDevEui_;
}

void ListNodeGroupsRequest::setFuzzyDevEui(const std::string& fuzzyDevEui)
{
	fuzzyDevEui_ = fuzzyDevEui;
	setParameter("FuzzyDevEui", fuzzyDevEui);
}

long ListNodeGroupsRequest::getLimit()const
{
	return limit_;
}

void ListNodeGroupsRequest::setLimit(long limit)
{
	limit_ = limit;
	setParameter("Limit", std::to_string(limit));
}

std::string ListNodeGroupsRequest::getFuzzyName()const
{
	return fuzzyName_;
}

void ListNodeGroupsRequest::setFuzzyName(const std::string& fuzzyName)
{
	fuzzyName_ = fuzzyName;
	setParameter("FuzzyName", fuzzyName);
}

long ListNodeGroupsRequest::getOffset()const
{
	return offset_;
}

void ListNodeGroupsRequest::setOffset(long offset)
{
	offset_ = offset;
	setParameter("Offset", std::to_string(offset));
}

bool ListNodeGroupsRequest::getAscending()const
{
	return ascending_;
}

void ListNodeGroupsRequest::setAscending(bool ascending)
{
	ascending_ = ascending;
	setParameter("Ascending", ascending ? "true" : "false");
}

std::string ListNodeGroupsRequest::getApiProduct()const
{
	return apiProduct_;
}

void ListNodeGroupsRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string ListNodeGroupsRequest::getApiRevision()const
{
	return apiRevision_;
}

void ListNodeGroupsRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string ListNodeGroupsRequest::getSortingField()const
{
	return sortingField_;
}

void ListNodeGroupsRequest::setSortingField(const std::string& sortingField)
{
	sortingField_ = sortingField;
	setParameter("SortingField", sortingField);
}

