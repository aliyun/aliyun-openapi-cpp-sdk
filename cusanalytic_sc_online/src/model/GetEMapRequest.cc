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

#include <alibabacloud/cusanalytic_sc_online/model/GetEMapRequest.h>

using AlibabaCloud::Cusanalytic_sc_online::Model::GetEMapRequest;

GetEMapRequest::GetEMapRequest() :
	RpcServiceRequest("cusanalytic_sc_online", "2019-05-24", "GetEMap")
{
	setMethod(HttpRequest::Method::Post);
}

GetEMapRequest::~GetEMapRequest()
{}

long GetEMapRequest::getStoreId()const
{
	return storeId_;
}

void GetEMapRequest::setStoreId(long storeId)
{
	storeId_ = storeId;
	setBodyParameter("StoreId", std::to_string(storeId));
}

long GetEMapRequest::getLocationId()const
{
	return locationId_;
}

void GetEMapRequest::setLocationId(long locationId)
{
	locationId_ = locationId;
	setBodyParameter("LocationId", std::to_string(locationId));
}

