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

#include <alibabacloud/cloudesl/model/DescribePlanogramRailsRequest.h>

using AlibabaCloud::Cloudesl::Model::DescribePlanogramRailsRequest;

DescribePlanogramRailsRequest::DescribePlanogramRailsRequest() :
	RpcServiceRequest("cloudesl", "2020-02-01", "DescribePlanogramRails")
{
	setMethod(HttpRequest::Method::Post);
}

DescribePlanogramRailsRequest::~DescribePlanogramRailsRequest()
{}

std::string DescribePlanogramRailsRequest::getStoreId()const
{
	return storeId_;
}

void DescribePlanogramRailsRequest::setStoreId(const std::string& storeId)
{
	storeId_ = storeId;
	setBodyParameter("StoreId", storeId);
}

int DescribePlanogramRailsRequest::getLayer()const
{
	return layer_;
}

void DescribePlanogramRailsRequest::setLayer(int layer)
{
	layer_ = layer;
	setBodyParameter("Layer", std::to_string(layer));
}

int DescribePlanogramRailsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribePlanogramRailsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribePlanogramRailsRequest::getShelf()const
{
	return shelf_;
}

void DescribePlanogramRailsRequest::setShelf(const std::string& shelf)
{
	shelf_ = shelf;
	setBodyParameter("Shelf", shelf);
}

std::string DescribePlanogramRailsRequest::getRailCode()const
{
	return railCode_;
}

void DescribePlanogramRailsRequest::setRailCode(const std::string& railCode)
{
	railCode_ = railCode;
	setBodyParameter("RailCode", railCode);
}

int DescribePlanogramRailsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribePlanogramRailsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

