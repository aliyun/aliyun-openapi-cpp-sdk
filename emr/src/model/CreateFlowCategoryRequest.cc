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

#include <alibabacloud/emr/model/CreateFlowCategoryRequest.h>

using AlibabaCloud::Emr::Model::CreateFlowCategoryRequest;

CreateFlowCategoryRequest::CreateFlowCategoryRequest() :
	RpcServiceRequest("emr", "2016-04-08", "CreateFlowCategory")
{}

CreateFlowCategoryRequest::~CreateFlowCategoryRequest()
{}

std::string CreateFlowCategoryRequest::getRegionId()const
{
	return regionId_;
}

void CreateFlowCategoryRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateFlowCategoryRequest::getName()const
{
	return name_;
}

void CreateFlowCategoryRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string CreateFlowCategoryRequest::getType()const
{
	return type_;
}

void CreateFlowCategoryRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::string CreateFlowCategoryRequest::getProjectId()const
{
	return projectId_;
}

void CreateFlowCategoryRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", projectId);
}

std::string CreateFlowCategoryRequest::getParentId()const
{
	return parentId_;
}

void CreateFlowCategoryRequest::setParentId(const std::string& parentId)
{
	parentId_ = parentId;
	setCoreParameter("ParentId", parentId);
}

