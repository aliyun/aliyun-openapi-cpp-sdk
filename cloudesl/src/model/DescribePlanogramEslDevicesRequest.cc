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

#include <alibabacloud/cloudesl/model/DescribePlanogramEslDevicesRequest.h>

using AlibabaCloud::Cloudesl::Model::DescribePlanogramEslDevicesRequest;

DescribePlanogramEslDevicesRequest::DescribePlanogramEslDevicesRequest() :
	RpcServiceRequest("cloudesl", "2020-02-01", "DescribePlanogramEslDevices")
{
	setMethod(HttpRequest::Method::Post);
}

DescribePlanogramEslDevicesRequest::~DescribePlanogramEslDevicesRequest()
{}

std::string DescribePlanogramEslDevicesRequest::getStoreId()const
{
	return storeId_;
}

void DescribePlanogramEslDevicesRequest::setStoreId(const std::string& storeId)
{
	storeId_ = storeId;
	setBodyParameter("StoreId", storeId);
}

int DescribePlanogramEslDevicesRequest::getLayer()const
{
	return layer_;
}

void DescribePlanogramEslDevicesRequest::setLayer(int layer)
{
	layer_ = layer;
	setBodyParameter("Layer", std::to_string(layer));
}

std::string DescribePlanogramEslDevicesRequest::getShelf()const
{
	return shelf_;
}

void DescribePlanogramEslDevicesRequest::setShelf(const std::string& shelf)
{
	shelf_ = shelf;
	setBodyParameter("Shelf", shelf);
}

