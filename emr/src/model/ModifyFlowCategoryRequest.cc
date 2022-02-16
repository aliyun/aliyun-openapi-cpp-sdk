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

#include <alibabacloud/emr/model/ModifyFlowCategoryRequest.h>

using AlibabaCloud::Emr::Model::ModifyFlowCategoryRequest;

ModifyFlowCategoryRequest::ModifyFlowCategoryRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ModifyFlowCategory")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyFlowCategoryRequest::~ModifyFlowCategoryRequest()
{}

std::string ModifyFlowCategoryRequest::getParentId()const
{
	return parentId_;
}

void ModifyFlowCategoryRequest::setParentId(const std::string& parentId)
{
	parentId_ = parentId;
	setParameter("ParentId", parentId);
}

std::string ModifyFlowCategoryRequest::getRegionId()const
{
	return regionId_;
}

void ModifyFlowCategoryRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyFlowCategoryRequest::getName()const
{
	return name_;
}

void ModifyFlowCategoryRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string ModifyFlowCategoryRequest::getId()const
{
	return id_;
}

void ModifyFlowCategoryRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::string ModifyFlowCategoryRequest::getProjectId()const
{
	return projectId_;
}

void ModifyFlowCategoryRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", projectId);
}

