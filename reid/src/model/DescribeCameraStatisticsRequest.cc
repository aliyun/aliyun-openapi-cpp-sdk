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

#include <alibabacloud/reid/model/DescribeCameraStatisticsRequest.h>

using AlibabaCloud::Reid::Model::DescribeCameraStatisticsRequest;

DescribeCameraStatisticsRequest::DescribeCameraStatisticsRequest() :
	RpcServiceRequest("reid", "2019-09-28", "DescribeCameraStatistics")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeCameraStatisticsRequest::~DescribeCameraStatisticsRequest()
{}

long DescribeCameraStatisticsRequest::getStartTimestamp()const
{
	return startTimestamp_;
}

void DescribeCameraStatisticsRequest::setStartTimestamp(long startTimestamp)
{
	startTimestamp_ = startTimestamp;
	setBodyParameter("StartTimestamp", std::to_string(startTimestamp));
}

long DescribeCameraStatisticsRequest::getStoreId()const
{
	return storeId_;
}

void DescribeCameraStatisticsRequest::setStoreId(long storeId)
{
	storeId_ = storeId;
	setBodyParameter("StoreId", std::to_string(storeId));
}

long DescribeCameraStatisticsRequest::getEndTimestamp()const
{
	return endTimestamp_;
}

void DescribeCameraStatisticsRequest::setEndTimestamp(long endTimestamp)
{
	endTimestamp_ = endTimestamp;
	setBodyParameter("EndTimestamp", std::to_string(endTimestamp));
}

long DescribeCameraStatisticsRequest::getLocationId()const
{
	return locationId_;
}

void DescribeCameraStatisticsRequest::setLocationId(long locationId)
{
	locationId_ = locationId;
	setBodyParameter("LocationId", std::to_string(locationId));
}

