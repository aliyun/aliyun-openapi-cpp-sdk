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

#include <alibabacloud/ga/model/ListBandwidthPackagesRequest.h>

using AlibabaCloud::Ga::Model::ListBandwidthPackagesRequest;

ListBandwidthPackagesRequest::ListBandwidthPackagesRequest() :
	RpcServiceRequest("ga", "2019-11-20", "ListBandwidthPackages")
{
	setMethod(HttpRequest::Method::Post);
}

ListBandwidthPackagesRequest::~ListBandwidthPackagesRequest()
{}

std::string ListBandwidthPackagesRequest::getBandwidthPackageId()const
{
	return bandwidthPackageId_;
}

void ListBandwidthPackagesRequest::setBandwidthPackageId(const std::string& bandwidthPackageId)
{
	bandwidthPackageId_ = bandwidthPackageId;
	setParameter("BandwidthPackageId", bandwidthPackageId);
}

std::string ListBandwidthPackagesRequest::getType()const
{
	return type_;
}

void ListBandwidthPackagesRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

int ListBandwidthPackagesRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListBandwidthPackagesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListBandwidthPackagesRequest::getRegionId()const
{
	return regionId_;
}

void ListBandwidthPackagesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int ListBandwidthPackagesRequest::getPageSize()const
{
	return pageSize_;
}

void ListBandwidthPackagesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListBandwidthPackagesRequest::getState()const
{
	return state_;
}

void ListBandwidthPackagesRequest::setState(const std::string& state)
{
	state_ = state;
	setParameter("State", state);
}

