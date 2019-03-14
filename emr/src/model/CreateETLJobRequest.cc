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

#include <alibabacloud/emr/model/CreateETLJobRequest.h>

using AlibabaCloud::Emr::Model::CreateETLJobRequest;

CreateETLJobRequest::CreateETLJobRequest() :
	RpcServiceRequest("emr", "2016-04-08", "CreateETLJob")
{}

CreateETLJobRequest::~CreateETLJobRequest()
{}

long CreateETLJobRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateETLJobRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateETLJobRequest::getRegionId()const
{
	return regionId_;
}

void CreateETLJobRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateETLJobRequest::getNavParentId()const
{
	return navParentId_;
}

void CreateETLJobRequest::setNavParentId(const std::string& navParentId)
{
	navParentId_ = navParentId;
	setParameter("NavParentId", navParentId);
}

std::string CreateETLJobRequest::getName()const
{
	return name_;
}

void CreateETLJobRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string CreateETLJobRequest::getDescription()const
{
	return description_;
}

void CreateETLJobRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateETLJobRequest::getType()const
{
	return type_;
}

void CreateETLJobRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string CreateETLJobRequest::getProjectId()const
{
	return projectId_;
}

void CreateETLJobRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", projectId);
}

std::string CreateETLJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateETLJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

