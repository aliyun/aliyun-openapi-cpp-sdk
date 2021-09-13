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

#include <alibabacloud/linkwan/model/ListNodeGroupTransferPacketsRequest.h>

using AlibabaCloud::LinkWAN::Model::ListNodeGroupTransferPacketsRequest;

ListNodeGroupTransferPacketsRequest::ListNodeGroupTransferPacketsRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "ListNodeGroupTransferPackets")
{
	setMethod(HttpRequest::Method::Post);
}

ListNodeGroupTransferPacketsRequest::~ListNodeGroupTransferPacketsRequest()
{}

long ListNodeGroupTransferPacketsRequest::getEndMillis()const
{
	return endMillis_;
}

void ListNodeGroupTransferPacketsRequest::setEndMillis(long endMillis)
{
	endMillis_ = endMillis;
	setParameter("EndMillis", std::to_string(endMillis));
}

int ListNodeGroupTransferPacketsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListNodeGroupTransferPacketsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListNodeGroupTransferPacketsRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void ListNodeGroupTransferPacketsRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

int ListNodeGroupTransferPacketsRequest::getPageSize()const
{
	return pageSize_;
}

void ListNodeGroupTransferPacketsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

bool ListNodeGroupTransferPacketsRequest::getAscending()const
{
	return ascending_;
}

void ListNodeGroupTransferPacketsRequest::setAscending(bool ascending)
{
	ascending_ = ascending;
	setParameter("Ascending", ascending ? "true" : "false");
}

std::string ListNodeGroupTransferPacketsRequest::getDevEui()const
{
	return devEui_;
}

void ListNodeGroupTransferPacketsRequest::setDevEui(const std::string& devEui)
{
	devEui_ = devEui;
	setParameter("DevEui", devEui);
}

std::string ListNodeGroupTransferPacketsRequest::getNodeGroupId()const
{
	return nodeGroupId_;
}

void ListNodeGroupTransferPacketsRequest::setNodeGroupId(const std::string& nodeGroupId)
{
	nodeGroupId_ = nodeGroupId;
	setParameter("NodeGroupId", nodeGroupId);
}

std::string ListNodeGroupTransferPacketsRequest::getApiProduct()const
{
	return apiProduct_;
}

void ListNodeGroupTransferPacketsRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string ListNodeGroupTransferPacketsRequest::getApiRevision()const
{
	return apiRevision_;
}

void ListNodeGroupTransferPacketsRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string ListNodeGroupTransferPacketsRequest::getCategory()const
{
	return category_;
}

void ListNodeGroupTransferPacketsRequest::setCategory(const std::string& category)
{
	category_ = category;
	setParameter("Category", category);
}

long ListNodeGroupTransferPacketsRequest::getBeginMillis()const
{
	return beginMillis_;
}

void ListNodeGroupTransferPacketsRequest::setBeginMillis(long beginMillis)
{
	beginMillis_ = beginMillis;
	setParameter("BeginMillis", std::to_string(beginMillis));
}

std::string ListNodeGroupTransferPacketsRequest::getSortingField()const
{
	return sortingField_;
}

void ListNodeGroupTransferPacketsRequest::setSortingField(const std::string& sortingField)
{
	sortingField_ = sortingField;
	setParameter("SortingField", sortingField);
}

