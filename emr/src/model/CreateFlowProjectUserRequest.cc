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

#include <alibabacloud/emr/model/CreateFlowProjectUserRequest.h>

using AlibabaCloud::Emr::Model::CreateFlowProjectUserRequest;

CreateFlowProjectUserRequest::CreateFlowProjectUserRequest() :
	RpcServiceRequest("emr", "2016-04-08", "CreateFlowProjectUser")
{}

CreateFlowProjectUserRequest::~CreateFlowProjectUserRequest()
{}

std::string CreateFlowProjectUserRequest::getRegionId()const
{
	return regionId_;
}

void CreateFlowProjectUserRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateFlowProjectUserRequest::getProjectId()const
{
	return projectId_;
}

void CreateFlowProjectUserRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", projectId);
}

std::vector<CreateFlowProjectUserRequest::User> CreateFlowProjectUserRequest::getUser()const
{
	return user_;
}

void CreateFlowProjectUserRequest::setUser(const std::vector<User>& user)
{
	user_ = user;
	int i = 0;
	for(int i = 0; i!= user.size(); i++)	{
		auto obj = user.at(i);
		std::string str ="User."+ std::to_string(i);
		setCoreParameter(str + ".UserId", std::to_string(obj.userId));
		setCoreParameter(str + ".UserName", std::to_string(obj.userName));
	}
}

