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

#include <alibabacloud/emr/model/ListDataSourceRequest.h>

using AlibabaCloud::Emr::Model::ListDataSourceRequest;

ListDataSourceRequest::ListDataSourceRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListDataSource")
{}

ListDataSourceRequest::~ListDataSourceRequest()
{}

long ListDataSourceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListDataSourceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListDataSourceRequest::getCreateFrom()const
{
	return createFrom_;
}

void ListDataSourceRequest::setCreateFrom(const std::string& createFrom)
{
	createFrom_ = createFrom;
	setCoreParameter("CreateFrom", createFrom);
}

int ListDataSourceRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListDataSourceRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListDataSourceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListDataSourceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ListDataSourceRequest::getRegionId()const
{
	return regionId_;
}

void ListDataSourceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int ListDataSourceRequest::getPageSize()const
{
	return pageSize_;
}

void ListDataSourceRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string ListDataSourceRequest::getName()const
{
	return name_;
}

void ListDataSourceRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string ListDataSourceRequest::getSourceType()const
{
	return sourceType_;
}

void ListDataSourceRequest::setSourceType(const std::string& sourceType)
{
	sourceType_ = sourceType;
	setCoreParameter("SourceType", sourceType);
}

std::string ListDataSourceRequest::getId()const
{
	return id_;
}

void ListDataSourceRequest::setId(const std::string& id)
{
	id_ = id;
	setCoreParameter("Id", id);
}

std::string ListDataSourceRequest::getProjectId()const
{
	return projectId_;
}

void ListDataSourceRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", projectId);
}

