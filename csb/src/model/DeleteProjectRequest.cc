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

#include <alibabacloud/csb/model/DeleteProjectRequest.h>

using AlibabaCloud::CSB::Model::DeleteProjectRequest;

DeleteProjectRequest::DeleteProjectRequest() :
	RpcServiceRequest("csb", "2017-11-18", "DeleteProject")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteProjectRequest::~DeleteProjectRequest()
{}

long DeleteProjectRequest::getCsbId()const
{
	return csbId_;
}

void DeleteProjectRequest::setCsbId(long csbId)
{
	csbId_ = csbId;
	setParameter("CsbId", std::to_string(csbId));
}

long DeleteProjectRequest::getProjectId()const
{
	return projectId_;
}

void DeleteProjectRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", std::to_string(projectId));
}

