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

#include <alibabacloud/cusanalytic_sc_online/model/GetPortrayalRequest.h>

using AlibabaCloud::Cusanalytic_sc_online::Model::GetPortrayalRequest;

GetPortrayalRequest::GetPortrayalRequest() :
	RpcServiceRequest("cusanalytic_sc_online", "2019-05-24", "GetPortrayal")
{
	setMethod(HttpRequest::Method::Post);
}

GetPortrayalRequest::~GetPortrayalRequest()
{}

std::string GetPortrayalRequest::getDate()const
{
	return date_;
}

void GetPortrayalRequest::setDate(const std::string& date)
{
	date_ = date;
	setBodyParameter("Date", date);
}

std::string GetPortrayalRequest::getLocationIds()const
{
	return locationIds_;
}

void GetPortrayalRequest::setLocationIds(const std::string& locationIds)
{
	locationIds_ = locationIds;
	setBodyParameter("LocationIds", locationIds);
}

std::string GetPortrayalRequest::getStoreIds()const
{
	return storeIds_;
}

void GetPortrayalRequest::setStoreIds(const std::string& storeIds)
{
	storeIds_ = storeIds;
	setBodyParameter("StoreIds", storeIds);
}

