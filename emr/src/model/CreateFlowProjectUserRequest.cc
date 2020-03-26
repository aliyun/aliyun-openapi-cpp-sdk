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
{
	setMethod(HttpRequest::Method::Post);
}

CreateFlowProjectUserRequest::~CreateFlowProjectUserRequest()
{}

std::string CreateFlowProjectUserRequest::getRegionId()const
{
	return regionId_;
}

void CreateFlowProjectUserRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateFlowProjectUserRequest::getProjectId()const
{
	return projectId_;
}

void CreateFlowProjectUserRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", projectId);
}

std::vector<CreateFlowProjectUserRequest::User> CreateFlowProjectUserRequest::getUser()const
{
	return user_;
}

void CreateFlowProjectUserRequest::setUser(const std::vector<User>& user)
{
	user_ = user;
	for(int dep1 = 0; dep1!= user.size(); dep1++) {
		auto userObj = user.at(dep1);
		std::string userObjStr = "User." + std::to_string(dep1 + 1);
		setParameter(userObjStr + ".UserId", userObj.userId);
		setParameter(userObjStr + ".UserName", userObj.userName);
	}
}

