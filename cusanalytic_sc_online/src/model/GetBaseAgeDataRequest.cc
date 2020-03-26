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

#include <alibabacloud/cusanalytic_sc_online/model/GetBaseAgeDataRequest.h>

using AlibabaCloud::Cusanalytic_sc_online::Model::GetBaseAgeDataRequest;

GetBaseAgeDataRequest::GetBaseAgeDataRequest() :
	RpcServiceRequest("cusanalytic_sc_online", "2019-05-24", "GetBaseAgeData")
{
	setMethod(HttpRequest::Method::Post);
}

GetBaseAgeDataRequest::~GetBaseAgeDataRequest()
{}

long GetBaseAgeDataRequest::getStoreId()const
{
	return storeId_;
}

void GetBaseAgeDataRequest::setStoreId(long storeId)
{
	storeId_ = storeId;
	setBodyParameter("StoreId", std::to_string(storeId));
}

std::string GetBaseAgeDataRequest::getHour()const
{
	return hour_;
}

void GetBaseAgeDataRequest::setHour(const std::string& hour)
{
	hour_ = hour;
	setBodyParameter("Hour", hour);
}

std::string GetBaseAgeDataRequest::getSummaryType()const
{
	return summaryType_;
}

void GetBaseAgeDataRequest::setSummaryType(const std::string& summaryType)
{
	summaryType_ = summaryType;
	setBodyParameter("SummaryType", summaryType);
}

long GetBaseAgeDataRequest::getLocationId()const
{
	return locationId_;
}

void GetBaseAgeDataRequest::setLocationId(long locationId)
{
	locationId_ = locationId;
	setBodyParameter("LocationId", std::to_string(locationId));
}

std::string GetBaseAgeDataRequest::getDay()const
{
	return day_;
}

void GetBaseAgeDataRequest::setDay(const std::string& day)
{
	day_ = day;
	setBodyParameter("Day", day);
}

