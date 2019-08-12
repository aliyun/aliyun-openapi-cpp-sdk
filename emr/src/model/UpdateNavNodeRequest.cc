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

#include <alibabacloud/emr/model/UpdateNavNodeRequest.h>

using AlibabaCloud::Emr::Model::UpdateNavNodeRequest;

UpdateNavNodeRequest::UpdateNavNodeRequest() :
	RpcServiceRequest("emr", "2016-04-08", "UpdateNavNode")
{}

UpdateNavNodeRequest::~UpdateNavNodeRequest()
{}

long UpdateNavNodeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpdateNavNodeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string UpdateNavNodeRequest::getRegionId()const
{
	return regionId_;
}

void UpdateNavNodeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string UpdateNavNodeRequest::getName()const
{
	return name_;
}

void UpdateNavNodeRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

std::string UpdateNavNodeRequest::getId()const
{
	return id_;
}

void UpdateNavNodeRequest::setId(const std::string& id)
{
	id_ = id;
	setCoreParameter("Id", std::to_string(id));
}

std::string UpdateNavNodeRequest::getProjectId()const
{
	return projectId_;
}

void UpdateNavNodeRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", std::to_string(projectId));
}

std::string UpdateNavNodeRequest::getParentId()const
{
	return parentId_;
}

void UpdateNavNodeRequest::setParentId(const std::string& parentId)
{
	parentId_ = parentId;
	setCoreParameter("ParentId", std::to_string(parentId));
}

std::string UpdateNavNodeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateNavNodeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

