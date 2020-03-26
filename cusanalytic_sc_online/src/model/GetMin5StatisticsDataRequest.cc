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

#include <alibabacloud/cusanalytic_sc_online/model/GetMin5StatisticsDataRequest.h>

using AlibabaCloud::Cusanalytic_sc_online::Model::GetMin5StatisticsDataRequest;

GetMin5StatisticsDataRequest::GetMin5StatisticsDataRequest() :
	RpcServiceRequest("cusanalytic_sc_online", "2019-05-24", "GetMin5StatisticsData")
{
	setMethod(HttpRequest::Method::Post);
}

GetMin5StatisticsDataRequest::~GetMin5StatisticsDataRequest()
{}

long GetMin5StatisticsDataRequest::getStoreId()const
{
	return storeId_;
}

void GetMin5StatisticsDataRequest::setStoreId(long storeId)
{
	storeId_ = storeId;
	setBodyParameter("StoreId", std::to_string(storeId));
}

long GetMin5StatisticsDataRequest::getTime()const
{
	return time_;
}

void GetMin5StatisticsDataRequest::setTime(long time)
{
	time_ = time;
	setBodyParameter("Time", std::to_string(time));
}

