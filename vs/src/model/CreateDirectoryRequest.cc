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

#include <alibabacloud/vs/model/CreateDirectoryRequest.h>

using AlibabaCloud::Vs::Model::CreateDirectoryRequest;

CreateDirectoryRequest::CreateDirectoryRequest() :
	RpcServiceRequest("vs", "2018-12-12", "CreateDirectory")
{
	setMethod(HttpRequest::Method::Post);
}

CreateDirectoryRequest::~CreateDirectoryRequest()
{}

std::string CreateDirectoryRequest::getDescription()const
{
	return description_;
}

void CreateDirectoryRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateDirectoryRequest::getParentId()const
{
	return parentId_;
}

void CreateDirectoryRequest::setParentId(const std::string& parentId)
{
	parentId_ = parentId;
	setParameter("ParentId", parentId);
}

std::string CreateDirectoryRequest::getShowLog()const
{
	return showLog_;
}

void CreateDirectoryRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string CreateDirectoryRequest::getGroupId()const
{
	return groupId_;
}

void CreateDirectoryRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

long CreateDirectoryRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateDirectoryRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateDirectoryRequest::getName()const
{
	return name_;
}

void CreateDirectoryRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

