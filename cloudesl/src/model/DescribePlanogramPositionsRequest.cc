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

#include <alibabacloud/cloudesl/model/DescribePlanogramPositionsRequest.h>

using AlibabaCloud::Cloudesl::Model::DescribePlanogramPositionsRequest;

DescribePlanogramPositionsRequest::DescribePlanogramPositionsRequest() :
	RpcServiceRequest("cloudesl", "2020-02-01", "DescribePlanogramPositions")
{
	setMethod(HttpRequest::Method::Post);
}

DescribePlanogramPositionsRequest::~DescribePlanogramPositionsRequest()
{}

std::string DescribePlanogramPositionsRequest::getStoreId()const
{
	return storeId_;
}

void DescribePlanogramPositionsRequest::setStoreId(const std::string& storeId)
{
	storeId_ = storeId;
	setBodyParameter("StoreId", storeId);
}

int DescribePlanogramPositionsRequest::getLayer()const
{
	return layer_;
}

void DescribePlanogramPositionsRequest::setLayer(int layer)
{
	layer_ = layer;
	setBodyParameter("Layer", std::to_string(layer));
}

std::string DescribePlanogramPositionsRequest::getShelf()const
{
	return shelf_;
}

void DescribePlanogramPositionsRequest::setShelf(const std::string& shelf)
{
	shelf_ = shelf;
	setBodyParameter("Shelf", shelf);
}

