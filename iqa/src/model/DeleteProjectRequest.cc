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

#include <alibabacloud/iqa/model/DeleteProjectRequest.h>

using AlibabaCloud::Iqa::Model::DeleteProjectRequest;

DeleteProjectRequest::DeleteProjectRequest() :
	RpcServiceRequest("iqa", "2019-08-13", "DeleteProject")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteProjectRequest::~DeleteProjectRequest()
{}

std::string DeleteProjectRequest::getProjectId()const
{
	return projectId_;
}

void DeleteProjectRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", projectId);
}

