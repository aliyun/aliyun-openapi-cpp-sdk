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

#include <alibabacloud/cdrs/model/ListCityMapRangeStatisticRequest.h>

using AlibabaCloud::CDRS::Model::ListCityMapRangeStatisticRequest;

ListCityMapRangeStatisticRequest::ListCityMapRangeStatisticRequest() :
	RpcServiceRequest("cdrs", "2020-11-01", "ListCityMapRangeStatistic")
{
	setMethod(HttpRequest::Method::Post);
}

ListCityMapRangeStatisticRequest::~ListCityMapRangeStatisticRequest()
{}

std::string ListCityMapRangeStatisticRequest::getLatitude()const
{
	return latitude_;
}

void ListCityMapRangeStatisticRequest::setLatitude(const std::string& latitude)
{
	latitude_ = latitude;
	setBodyParameter("Latitude", latitude);
}

std::string ListCityMapRangeStatisticRequest::getEndTime()const
{
	return endTime_;
}

void ListCityMapRangeStatisticRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setBodyParameter("EndTime", endTime);
}

long ListCityMapRangeStatisticRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListCityMapRangeStatisticRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

long ListCityMapRangeStatisticRequest::getPageSize()const
{
	return pageSize_;
}

void ListCityMapRangeStatisticRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

int ListCityMapRangeStatisticRequest::getRadius()const
{
	return radius_;
}

void ListCityMapRangeStatisticRequest::setRadius(int radius)
{
	radius_ = radius;
	setBodyParameter("Radius", std::to_string(radius));
}

std::string ListCityMapRangeStatisticRequest::getLongitude()const
{
	return longitude_;
}

void ListCityMapRangeStatisticRequest::setLongitude(const std::string& longitude)
{
	longitude_ = longitude;
	setBodyParameter("Longitude", longitude);
}

