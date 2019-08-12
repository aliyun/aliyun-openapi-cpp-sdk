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

#include <alibabacloud/emr/model/CreateNavNodeRequest.h>

using AlibabaCloud::Emr::Model::CreateNavNodeRequest;

CreateNavNodeRequest::CreateNavNodeRequest() :
	RpcServiceRequest("emr", "2016-04-08", "CreateNavNode")
{}

CreateNavNodeRequest::~CreateNavNodeRequest()
{}

long CreateNavNodeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateNavNodeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string CreateNavNodeRequest::getRegionId()const
{
	return regionId_;
}

void CreateNavNodeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string CreateNavNodeRequest::getName()const
{
	return name_;
}

void CreateNavNodeRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

std::string CreateNavNodeRequest::getType()const
{
	return type_;
}

void CreateNavNodeRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", std::to_string(type));
}

std::string CreateNavNodeRequest::getProjectId()const
{
	return projectId_;
}

void CreateNavNodeRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", std::to_string(projectId));
}

std::string CreateNavNodeRequest::getCategoryType()const
{
	return categoryType_;
}

void CreateNavNodeRequest::setCategoryType(const std::string& categoryType)
{
	categoryType_ = categoryType;
	setCoreParameter("CategoryType", std::to_string(categoryType));
}

std::string CreateNavNodeRequest::getObjectId()const
{
	return objectId_;
}

void CreateNavNodeRequest::setObjectId(const std::string& objectId)
{
	objectId_ = objectId;
	setCoreParameter("ObjectId", std::to_string(objectId));
}

std::string CreateNavNodeRequest::getParentId()const
{
	return parentId_;
}

void CreateNavNodeRequest::setParentId(const std::string& parentId)
{
	parentId_ = parentId;
	setCoreParameter("ParentId", std::to_string(parentId));
}

std::string CreateNavNodeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateNavNodeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

