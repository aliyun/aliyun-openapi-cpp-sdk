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

#include <alibabacloud/teambition-aliyun/model/DeleteProjectMembersRequest.h>

using AlibabaCloud::Teambition_aliyun::Model::DeleteProjectMembersRequest;

DeleteProjectMembersRequest::DeleteProjectMembersRequest() :
	RpcServiceRequest("teambition-aliyun", "2020-02-26", "DeleteProjectMembers")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteProjectMembersRequest::~DeleteProjectMembersRequest()
{}

std::string DeleteProjectMembersRequest::getUserIds()const
{
	return userIds_;
}

void DeleteProjectMembersRequest::setUserIds(const std::string& userIds)
{
	userIds_ = userIds;
	setBodyParameter("UserIds", userIds);
}

std::string DeleteProjectMembersRequest::getProjectId()const
{
	return projectId_;
}

void DeleteProjectMembersRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setBodyParameter("ProjectId", projectId);
}

std::string DeleteProjectMembersRequest::getOrgId()const
{
	return orgId_;
}

void DeleteProjectMembersRequest::setOrgId(const std::string& orgId)
{
	orgId_ = orgId;
	setBodyParameter("OrgId", orgId);
}

