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

#include <alibabacloud/emr/model/DeleteFlowProjectUserRequest.h>

using AlibabaCloud::Emr::Model::DeleteFlowProjectUserRequest;

DeleteFlowProjectUserRequest::DeleteFlowProjectUserRequest() :
	RpcServiceRequest("emr", "2016-04-08", "DeleteFlowProjectUser")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteFlowProjectUserRequest::~DeleteFlowProjectUserRequest()
{}

std::string DeleteFlowProjectUserRequest::getRegionId()const
{
	return regionId_;
}

void DeleteFlowProjectUserRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DeleteFlowProjectUserRequest::getProjectId()const
{
	return projectId_;
}

void DeleteFlowProjectUserRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", projectId);
}

std::string DeleteFlowProjectUserRequest::getUserName()const
{
	return userName_;
}

void DeleteFlowProjectUserRequest::setUserName(const std::string& userName)
{
	userName_ = userName;
	setParameter("UserName", userName);
}

