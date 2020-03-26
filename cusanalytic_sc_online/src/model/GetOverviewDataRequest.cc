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

#include <alibabacloud/cusanalytic_sc_online/model/GetOverviewDataRequest.h>

using AlibabaCloud::Cusanalytic_sc_online::Model::GetOverviewDataRequest;

GetOverviewDataRequest::GetOverviewDataRequest() :
	RpcServiceRequest("cusanalytic_sc_online", "2019-05-24", "GetOverviewData")
{
	setMethod(HttpRequest::Method::Post);
}

GetOverviewDataRequest::~GetOverviewDataRequest()
{}

std::string GetOverviewDataRequest::getDate()const
{
	return date_;
}

void GetOverviewDataRequest::setDate(const std::string& date)
{
	date_ = date;
	setBodyParameter("Date", date);
}

std::string GetOverviewDataRequest::getStoreIds()const
{
	return storeIds_;
}

void GetOverviewDataRequest::setStoreIds(const std::string& storeIds)
{
	storeIds_ = storeIds;
	setBodyParameter("StoreIds", storeIds);
}

