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

#include <alibabacloud/edas/model/GetServiceListRequest.h>

using AlibabaCloud::Edas::Model::GetServiceListRequest;

GetServiceListRequest::GetServiceListRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/sp/api/mseForOam/getServiceList");
	setMethod(HttpRequest::Method::Post);
}

GetServiceListRequest::~GetServiceListRequest()
{}

std::string GetServiceListRequest::getServiceType()const
{
	return serviceType_;
}

void GetServiceListRequest::setServiceType(const std::string& serviceType)
{
	serviceType_ = serviceType;
	setParameter("ServiceType", serviceType);
}

std::string GetServiceListRequest::getSide()const
{
	return side_;
}

void GetServiceListRequest::setSide(const std::string& side)
{
	side_ = side;
	setParameter("Side", side);
}

std::string GetServiceListRequest::getOrigin()const
{
	return origin_;
}

void GetServiceListRequest::setOrigin(const std::string& origin)
{
	origin_ = origin;
	setParameter("Origin", origin);
}

std::string GetServiceListRequest::getSearchType()const
{
	return searchType_;
}

void GetServiceListRequest::setSearchType(const std::string& searchType)
{
	searchType_ = searchType;
	setParameter("SearchType", searchType);
}

std::string GetServiceListRequest::get_Namespace()const
{
	return _namespace_;
}

void GetServiceListRequest::set_Namespace(const std::string& _namespace)
{
	_namespace_ = _namespace;
	setParameter("_Namespace", _namespace);
}

std::string GetServiceListRequest::getRegion()const
{
	return region_;
}

void GetServiceListRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

std::string GetServiceListRequest::getSearchValue()const
{
	return searchValue_;
}

void GetServiceListRequest::setSearchValue(const std::string& searchValue)
{
	searchValue_ = searchValue;
	setParameter("SearchValue", searchValue);
}

