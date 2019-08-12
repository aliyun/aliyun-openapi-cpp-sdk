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

#include <alibabacloud/emr/model/CreateFlowProjectRequest.h>

using AlibabaCloud::Emr::Model::CreateFlowProjectRequest;

CreateFlowProjectRequest::CreateFlowProjectRequest() :
	RpcServiceRequest("emr", "2016-04-08", "CreateFlowProject")
{}

CreateFlowProjectRequest::~CreateFlowProjectRequest()
{}

std::string CreateFlowProjectRequest::getRegionId()const
{
	return regionId_;
}

void CreateFlowProjectRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateFlowProjectRequest::getName()const
{
	return name_;
}

void CreateFlowProjectRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string CreateFlowProjectRequest::getDescription()const
{
	return description_;
}

void CreateFlowProjectRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

