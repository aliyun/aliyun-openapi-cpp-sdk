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

#include <alibabacloud/emr/model/DeleteFlowProjectRequest.h>

using AlibabaCloud::Emr::Model::DeleteFlowProjectRequest;

DeleteFlowProjectRequest::DeleteFlowProjectRequest() :
	RpcServiceRequest("emr", "2016-04-08", "DeleteFlowProject")
{}

DeleteFlowProjectRequest::~DeleteFlowProjectRequest()
{}

std::string DeleteFlowProjectRequest::getRegionId()const
{
	return regionId_;
}

void DeleteFlowProjectRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DeleteFlowProjectRequest::getProjectId()const
{
	return projectId_;
}

void DeleteFlowProjectRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", std::to_string(projectId));
}

