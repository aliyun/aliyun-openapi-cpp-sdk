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

#include <alibabacloud/emr/model/ListNavSubTreeRequest.h>

using AlibabaCloud::Emr::Model::ListNavSubTreeRequest;

ListNavSubTreeRequest::ListNavSubTreeRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListNavSubTree")
{}

ListNavSubTreeRequest::~ListNavSubTreeRequest()
{}

long ListNavSubTreeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListNavSubTreeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int ListNavSubTreeRequest::getDepth()const
{
	return depth_;
}

void ListNavSubTreeRequest::setDepth(int depth)
{
	depth_ = depth;
	setCoreParameter("Depth", std::to_string(depth));
}

std::string ListNavSubTreeRequest::getRegionId()const
{
	return regionId_;
}

void ListNavSubTreeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ListNavSubTreeRequest::getName()const
{
	return name_;
}

void ListNavSubTreeRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

int ListNavSubTreeRequest::getPageSize()const
{
	return pageSize_;
}

void ListNavSubTreeRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string ListNavSubTreeRequest::getType()const
{
	return type_;
}

void ListNavSubTreeRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::string ListNavSubTreeRequest::getProjectId()const
{
	return projectId_;
}

void ListNavSubTreeRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", projectId);
}

std::string ListNavSubTreeRequest::getParentId()const
{
	return parentId_;
}

void ListNavSubTreeRequest::setParentId(const std::string& parentId)
{
	parentId_ = parentId;
	setCoreParameter("ParentId", parentId);
}

int ListNavSubTreeRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListNavSubTreeRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListNavSubTreeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListNavSubTreeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

