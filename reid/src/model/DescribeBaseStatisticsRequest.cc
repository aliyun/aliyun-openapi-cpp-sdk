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

#include <alibabacloud/reid/model/DescribeBaseStatisticsRequest.h>

using AlibabaCloud::Reid::Model::DescribeBaseStatisticsRequest;

DescribeBaseStatisticsRequest::DescribeBaseStatisticsRequest() :
	RpcServiceRequest("reid", "2019-09-28", "DescribeBaseStatistics")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeBaseStatisticsRequest::~DescribeBaseStatisticsRequest()
{}

std::string DescribeBaseStatisticsRequest::getDate()const
{
	return date_;
}

void DescribeBaseStatisticsRequest::setDate(const std::string& date)
{
	date_ = date;
	setBodyParameter("Date", date);
}

std::string DescribeBaseStatisticsRequest::getExtraStatisticTypes()const
{
	return extraStatisticTypes_;
}

void DescribeBaseStatisticsRequest::setExtraStatisticTypes(const std::string& extraStatisticTypes)
{
	extraStatisticTypes_ = extraStatisticTypes;
	setBodyParameter("ExtraStatisticTypes", extraStatisticTypes);
}

long DescribeBaseStatisticsRequest::getStoreId()const
{
	return storeId_;
}

void DescribeBaseStatisticsRequest::setStoreId(long storeId)
{
	storeId_ = storeId;
	setBodyParameter("StoreId", std::to_string(storeId));
}

std::string DescribeBaseStatisticsRequest::getSummaryType()const
{
	return summaryType_;
}

void DescribeBaseStatisticsRequest::setSummaryType(const std::string& summaryType)
{
	summaryType_ = summaryType;
	setBodyParameter("SummaryType", summaryType);
}

long DescribeBaseStatisticsRequest::getLocationId()const
{
	return locationId_;
}

void DescribeBaseStatisticsRequest::setLocationId(long locationId)
{
	locationId_ = locationId;
	setBodyParameter("LocationId", std::to_string(locationId));
}

