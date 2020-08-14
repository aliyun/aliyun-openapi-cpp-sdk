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

#include <alibabacloud/teambition-aliyun/model/ListProjectTasksRequest.h>

using AlibabaCloud::Teambition_aliyun::Model::ListProjectTasksRequest;

ListProjectTasksRequest::ListProjectTasksRequest() :
	RpcServiceRequest("teambition-aliyun", "2020-02-26", "ListProjectTasks")
{
	setMethod(HttpRequest::Method::Post);
}

ListProjectTasksRequest::~ListProjectTasksRequest()
{}

std::string ListProjectTasksRequest::getProjectIds()const
{
	return projectIds_;
}

void ListProjectTasksRequest::setProjectIds(const std::string& projectIds)
{
	projectIds_ = projectIds;
	setBodyParameter("ProjectIds", projectIds);
}

std::string ListProjectTasksRequest::getOrgId()const
{
	return orgId_;
}

void ListProjectTasksRequest::setOrgId(const std::string& orgId)
{
	orgId_ = orgId;
	setBodyParameter("OrgId", orgId);
}

