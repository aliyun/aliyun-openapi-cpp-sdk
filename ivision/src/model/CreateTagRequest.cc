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

#include <alibabacloud/ivision/model/CreateTagRequest.h>

using AlibabaCloud::Ivision::Model::CreateTagRequest;

CreateTagRequest::CreateTagRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "CreateTag")
{}

CreateTagRequest::~CreateTagRequest()
{}

std::string CreateTagRequest::getDescription()const
{
	return description_;
}

void CreateTagRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreateTagRequest::getProjectId()const
{
	return projectId_;
}

void CreateTagRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", projectId);
}

std::string CreateTagRequest::getShowLog()const
{
	return showLog_;
}

void CreateTagRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", showLog);
}

long CreateTagRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateTagRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateTagRequest::getName()const
{
	return name_;
}

void CreateTagRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

