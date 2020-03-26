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

#include <alibabacloud/cusanalytic_sc_online/model/GetCameraStatisticRequest.h>

using AlibabaCloud::Cusanalytic_sc_online::Model::GetCameraStatisticRequest;

GetCameraStatisticRequest::GetCameraStatisticRequest() :
	RpcServiceRequest("cusanalytic_sc_online", "2019-05-24", "GetCameraStatistic")
{
	setMethod(HttpRequest::Method::Post);
}

GetCameraStatisticRequest::~GetCameraStatisticRequest()
{}

long GetCameraStatisticRequest::getStartTs()const
{
	return startTs_;
}

void GetCameraStatisticRequest::setStartTs(long startTs)
{
	startTs_ = startTs;
	setBodyParameter("StartTs", std::to_string(startTs));
}

long GetCameraStatisticRequest::getStoreId()const
{
	return storeId_;
}

void GetCameraStatisticRequest::setStoreId(long storeId)
{
	storeId_ = storeId;
	setBodyParameter("StoreId", std::to_string(storeId));
}

long GetCameraStatisticRequest::getEndTs()const
{
	return endTs_;
}

void GetCameraStatisticRequest::setEndTs(long endTs)
{
	endTs_ = endTs;
	setBodyParameter("EndTs", std::to_string(endTs));
}

