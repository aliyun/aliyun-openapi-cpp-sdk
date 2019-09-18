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

#include <alibabacloud/ivision/model/CreateProjectRequest.h>

using AlibabaCloud::Ivision::Model::CreateProjectRequest;

CreateProjectRequest::CreateProjectRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "CreateProject")
{}

CreateProjectRequest::~CreateProjectRequest()
{}

std::string CreateProjectRequest::getDescription()const
{
	return description_;
}

void CreateProjectRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreateProjectRequest::getShowLog()const
{
	return showLog_;
}

void CreateProjectRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", showLog);
}

std::string CreateProjectRequest::getModelId()const
{
	return modelId_;
}

void CreateProjectRequest::setModelId(const std::string& modelId)
{
	modelId_ = modelId;
	setCoreParameter("ModelId", modelId);
}

long CreateProjectRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateProjectRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateProjectRequest::getProType()const
{
	return proType_;
}

void CreateProjectRequest::setProType(const std::string& proType)
{
	proType_ = proType;
	setCoreParameter("ProType", proType);
}

std::string CreateProjectRequest::getName()const
{
	return name_;
}

void CreateProjectRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

