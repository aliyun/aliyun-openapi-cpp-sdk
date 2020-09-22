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

#include <alibabacloud/vs/model/ModifyDirectoryRequest.h>

using AlibabaCloud::Vs::Model::ModifyDirectoryRequest;

ModifyDirectoryRequest::ModifyDirectoryRequest() :
	RpcServiceRequest("vs", "2018-12-12", "ModifyDirectory")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyDirectoryRequest::~ModifyDirectoryRequest()
{}

std::string ModifyDirectoryRequest::getDescription()const
{
	return description_;
}

void ModifyDirectoryRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string ModifyDirectoryRequest::getId()const
{
	return id_;
}

void ModifyDirectoryRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::string ModifyDirectoryRequest::getShowLog()const
{
	return showLog_;
}

void ModifyDirectoryRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

long ModifyDirectoryRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDirectoryRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyDirectoryRequest::getName()const
{
	return name_;
}

void ModifyDirectoryRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

