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

#include <alibabacloud/edas/model/GetServiceListPageRequest.h>

using AlibabaCloud::Edas::Model::GetServiceListPageRequest;

GetServiceListPageRequest::GetServiceListPageRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/sp/api/mseForOam/getServiceListPage");
	setMethod(HttpRequest::Method::Post);
}

GetServiceListPageRequest::~GetServiceListPageRequest()
{}

std::string GetServiceListPageRequest::getServiceType()const
{
	return serviceType_;
}

void GetServiceListPageRequest::setServiceType(const std::string& serviceType)
{
	serviceType_ = serviceType;
	setParameter("ServiceType", serviceType);
}

std::string GetServiceListPageRequest::getSide()const
{
	return side_;
}

void GetServiceListPageRequest::setSide(const std::string& side)
{
	side_ = side;
	setParameter("Side", side);
}

int GetServiceListPageRequest::getSize()const
{
	return size_;
}

void GetServiceListPageRequest::setSize(int size)
{
	size_ = size;
	setParameter("Size", std::to_string(size));
}

std::string GetServiceListPageRequest::getOrigin()const
{
	return origin_;
}

void GetServiceListPageRequest::setOrigin(const std::string& origin)
{
	origin_ = origin;
	setParameter("Origin", origin);
}

std::string GetServiceListPageRequest::getSearchType()const
{
	return searchType_;
}

void GetServiceListPageRequest::setSearchType(const std::string& searchType)
{
	searchType_ = searchType;
	setParameter("SearchType", searchType);
}

std::string GetServiceListPageRequest::get_Namespace()const
{
	return _namespace_;
}

void GetServiceListPageRequest::set_Namespace(const std::string& _namespace)
{
	_namespace_ = _namespace;
	setParameter("_Namespace", _namespace);
}

int GetServiceListPageRequest::getPage()const
{
	return page_;
}

void GetServiceListPageRequest::setPage(int page)
{
	page_ = page;
	setParameter("Page", std::to_string(page));
}

std::string GetServiceListPageRequest::getRegion()const
{
	return region_;
}

void GetServiceListPageRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

std::string GetServiceListPageRequest::getSearchValue()const
{
	return searchValue_;
}

void GetServiceListPageRequest::setSearchValue(const std::string& searchValue)
{
	searchValue_ = searchValue;
	setParameter("SearchValue", searchValue);
}

