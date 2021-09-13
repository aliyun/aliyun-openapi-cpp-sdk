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

#include <alibabacloud/linkwan/model/ListGatewayTransferPacketsRequest.h>

using AlibabaCloud::LinkWAN::Model::ListGatewayTransferPacketsRequest;

ListGatewayTransferPacketsRequest::ListGatewayTransferPacketsRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "ListGatewayTransferPackets")
{
	setMethod(HttpRequest::Method::Post);
}

ListGatewayTransferPacketsRequest::~ListGatewayTransferPacketsRequest()
{}

long ListGatewayTransferPacketsRequest::getEndMillis()const
{
	return endMillis_;
}

void ListGatewayTransferPacketsRequest::setEndMillis(long endMillis)
{
	endMillis_ = endMillis;
	setParameter("EndMillis", std::to_string(endMillis));
}

int ListGatewayTransferPacketsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListGatewayTransferPacketsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListGatewayTransferPacketsRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void ListGatewayTransferPacketsRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

int ListGatewayTransferPacketsRequest::getPageSize()const
{
	return pageSize_;
}

void ListGatewayTransferPacketsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListGatewayTransferPacketsRequest::getGwEui()const
{
	return gwEui_;
}

void ListGatewayTransferPacketsRequest::setGwEui(const std::string& gwEui)
{
	gwEui_ = gwEui;
	setParameter("GwEui", gwEui);
}

bool ListGatewayTransferPacketsRequest::getAscending()const
{
	return ascending_;
}

void ListGatewayTransferPacketsRequest::setAscending(bool ascending)
{
	ascending_ = ascending;
	setParameter("Ascending", ascending ? "true" : "false");
}

std::string ListGatewayTransferPacketsRequest::getDevEui()const
{
	return devEui_;
}

void ListGatewayTransferPacketsRequest::setDevEui(const std::string& devEui)
{
	devEui_ = devEui;
	setParameter("DevEui", devEui);
}

std::string ListGatewayTransferPacketsRequest::getApiProduct()const
{
	return apiProduct_;
}

void ListGatewayTransferPacketsRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string ListGatewayTransferPacketsRequest::getApiRevision()const
{
	return apiRevision_;
}

void ListGatewayTransferPacketsRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string ListGatewayTransferPacketsRequest::getCategory()const
{
	return category_;
}

void ListGatewayTransferPacketsRequest::setCategory(const std::string& category)
{
	category_ = category;
	setParameter("Category", category);
}

long ListGatewayTransferPacketsRequest::getBeginMillis()const
{
	return beginMillis_;
}

void ListGatewayTransferPacketsRequest::setBeginMillis(long beginMillis)
{
	beginMillis_ = beginMillis;
	setParameter("BeginMillis", std::to_string(beginMillis));
}

std::string ListGatewayTransferPacketsRequest::getSortingField()const
{
	return sortingField_;
}

void ListGatewayTransferPacketsRequest::setSortingField(const std::string& sortingField)
{
	sortingField_ = sortingField;
	setParameter("SortingField", sortingField);
}

