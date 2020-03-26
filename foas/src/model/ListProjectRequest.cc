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

#include <alibabacloud/foas/model/ListProjectRequest.h>

using AlibabaCloud::Foas::Model::ListProjectRequest;

ListProjectRequest::ListProjectRequest() :
	RoaServiceRequest("foas", "2018-11-11")
{
	setResourcePath("/api/v2/projects");
	setMethod(HttpRequest::Method::Get);
}

ListProjectRequest::~ListProjectRequest()
{}

std::string ListProjectRequest::getRegionId()const
{
	return regionId_;
}

void ListProjectRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setHeader("RegionId", regionId);
}

std::string ListProjectRequest::getName()const
{
	return name_;
}

void ListProjectRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

int ListProjectRequest::getPageSize()const
{
	return pageSize_;
}

void ListProjectRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int ListProjectRequest::getPageIndex()const
{
	return pageIndex_;
}

void ListProjectRequest::setPageIndex(int pageIndex)
{
	pageIndex_ = pageIndex;
	setParameter("PageIndex", std::to_string(pageIndex));
}

std::string ListProjectRequest::getClusterId()const
{
	return clusterId_;
}

void ListProjectRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ListProjectRequest::getRegion()const
{
	return region_;
}

void ListProjectRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

std::string ListProjectRequest::getDeployType()const
{
	return deployType_;
}

void ListProjectRequest::setDeployType(const std::string& deployType)
{
	deployType_ = deployType;
	setParameter("DeployType", deployType);
}

