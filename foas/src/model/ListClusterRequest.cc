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

#include <alibabacloud/foas/model/ListClusterRequest.h>

using AlibabaCloud::Foas::Model::ListClusterRequest;

ListClusterRequest::ListClusterRequest() :
	RoaServiceRequest("foas", "2018-11-11")
{
	setResourcePath("/api/v2/clusters");
	setMethod(HttpRequest::Method::Get);
}

ListClusterRequest::~ListClusterRequest()
{}

std::string ListClusterRequest::getRegionId()const
{
	return regionId_;
}

void ListClusterRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setHeader("RegionId", regionId);
}

std::string ListClusterRequest::getDisplayName()const
{
	return displayName_;
}

void ListClusterRequest::setDisplayName(const std::string& displayName)
{
	displayName_ = displayName;
	setParameter("DisplayName", displayName);
}

int ListClusterRequest::getPageSize()const
{
	return pageSize_;
}

void ListClusterRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int ListClusterRequest::getPageIndex()const
{
	return pageIndex_;
}

void ListClusterRequest::setPageIndex(int pageIndex)
{
	pageIndex_ = pageIndex;
	setParameter("PageIndex", std::to_string(pageIndex));
}

std::string ListClusterRequest::getClusterId()const
{
	return clusterId_;
}

void ListClusterRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ListClusterRequest::getState()const
{
	return state_;
}

void ListClusterRequest::setState(const std::string& state)
{
	state_ = state;
	setParameter("State", state);
}

std::string ListClusterRequest::getRegion()const
{
	return region_;
}

void ListClusterRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

