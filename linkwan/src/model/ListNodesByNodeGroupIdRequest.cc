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

#include <alibabacloud/linkwan/model/ListNodesByNodeGroupIdRequest.h>

using AlibabaCloud::LinkWAN::Model::ListNodesByNodeGroupIdRequest;

ListNodesByNodeGroupIdRequest::ListNodesByNodeGroupIdRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "ListNodesByNodeGroupId")
{
	setMethod(HttpRequest::Method::Post);
}

ListNodesByNodeGroupIdRequest::~ListNodesByNodeGroupIdRequest()
{}

std::string ListNodesByNodeGroupIdRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void ListNodesByNodeGroupIdRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string ListNodesByNodeGroupIdRequest::getFuzzyDevEui()const
{
	return fuzzyDevEui_;
}

void ListNodesByNodeGroupIdRequest::setFuzzyDevEui(const std::string& fuzzyDevEui)
{
	fuzzyDevEui_ = fuzzyDevEui;
	setParameter("FuzzyDevEui", fuzzyDevEui);
}

long ListNodesByNodeGroupIdRequest::getLimit()const
{
	return limit_;
}

void ListNodesByNodeGroupIdRequest::setLimit(long limit)
{
	limit_ = limit;
	setParameter("Limit", std::to_string(limit));
}

long ListNodesByNodeGroupIdRequest::getOffset()const
{
	return offset_;
}

void ListNodesByNodeGroupIdRequest::setOffset(long offset)
{
	offset_ = offset;
	setParameter("Offset", std::to_string(offset));
}

bool ListNodesByNodeGroupIdRequest::getAscending()const
{
	return ascending_;
}

void ListNodesByNodeGroupIdRequest::setAscending(bool ascending)
{
	ascending_ = ascending;
	setParameter("Ascending", ascending ? "true" : "false");
}

std::string ListNodesByNodeGroupIdRequest::getNodeGroupId()const
{
	return nodeGroupId_;
}

void ListNodesByNodeGroupIdRequest::setNodeGroupId(const std::string& nodeGroupId)
{
	nodeGroupId_ = nodeGroupId;
	setParameter("NodeGroupId", nodeGroupId);
}

std::string ListNodesByNodeGroupIdRequest::getApiProduct()const
{
	return apiProduct_;
}

void ListNodesByNodeGroupIdRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string ListNodesByNodeGroupIdRequest::getApiRevision()const
{
	return apiRevision_;
}

void ListNodesByNodeGroupIdRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string ListNodesByNodeGroupIdRequest::getSortingField()const
{
	return sortingField_;
}

void ListNodesByNodeGroupIdRequest::setSortingField(const std::string& sortingField)
{
	sortingField_ = sortingField;
	setParameter("SortingField", sortingField);
}

