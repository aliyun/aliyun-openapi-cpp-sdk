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

#include <alibabacloud/iqa/model/ModifiyProjectRequest.h>

using AlibabaCloud::Iqa::Model::ModifiyProjectRequest;

ModifiyProjectRequest::ModifiyProjectRequest() :
	RpcServiceRequest("iqa", "2019-08-13", "ModifiyProject")
{
	setMethod(HttpRequest::Method::Post);
}

ModifiyProjectRequest::~ModifiyProjectRequest()
{}

std::string ModifiyProjectRequest::getProjectName()const
{
	return projectName_;
}

void ModifiyProjectRequest::setProjectName(const std::string& projectName)
{
	projectName_ = projectName;
	setBodyParameter("ProjectName", projectName);
}

std::string ModifiyProjectRequest::getModelId()const
{
	return modelId_;
}

void ModifiyProjectRequest::setModelId(const std::string& modelId)
{
	modelId_ = modelId;
	setBodyParameter("ModelId", modelId);
}

std::string ModifiyProjectRequest::getProjectId()const
{
	return projectId_;
}

void ModifiyProjectRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setBodyParameter("ProjectId", projectId);
}

