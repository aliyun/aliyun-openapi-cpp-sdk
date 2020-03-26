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

#include <alibabacloud/emr/model/ModifyFlowProjectRequest.h>

using AlibabaCloud::Emr::Model::ModifyFlowProjectRequest;

ModifyFlowProjectRequest::ModifyFlowProjectRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ModifyFlowProject")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyFlowProjectRequest::~ModifyFlowProjectRequest()
{}

std::string ModifyFlowProjectRequest::getDescription()const
{
	return description_;
}

void ModifyFlowProjectRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string ModifyFlowProjectRequest::getRegionId()const
{
	return regionId_;
}

void ModifyFlowProjectRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyFlowProjectRequest::getName()const
{
	return name_;
}

void ModifyFlowProjectRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string ModifyFlowProjectRequest::getProjectId()const
{
	return projectId_;
}

void ModifyFlowProjectRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", projectId);
}

