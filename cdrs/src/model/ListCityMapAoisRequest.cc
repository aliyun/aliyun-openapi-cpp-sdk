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

#include <alibabacloud/cdrs/model/ListCityMapAoisRequest.h>

using AlibabaCloud::CDRS::Model::ListCityMapAoisRequest;

ListCityMapAoisRequest::ListCityMapAoisRequest() :
	RpcServiceRequest("cdrs", "2020-11-01", "ListCityMapAois")
{
	setMethod(HttpRequest::Method::Post);
}

ListCityMapAoisRequest::~ListCityMapAoisRequest()
{}

std::string ListCityMapAoisRequest::getLatitude()const
{
	return latitude_;
}

void ListCityMapAoisRequest::setLatitude(const std::string& latitude)
{
	latitude_ = latitude;
	setBodyParameter("Latitude", latitude);
}

int ListCityMapAoisRequest::getRadius()const
{
	return radius_;
}

void ListCityMapAoisRequest::setRadius(int radius)
{
	radius_ = radius;
	setBodyParameter("Radius", std::to_string(radius));
}

std::string ListCityMapAoisRequest::getLongitude()const
{
	return longitude_;
}

void ListCityMapAoisRequest::setLongitude(const std::string& longitude)
{
	longitude_ = longitude;
	setBodyParameter("Longitude", longitude);
}

