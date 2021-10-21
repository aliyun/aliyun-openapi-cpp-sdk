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

#include <alibabacloud/dataworks-public/model/SetConnectionShareRequest.h>

using AlibabaCloud::Dataworks_public::Model::SetConnectionShareRequest;

SetConnectionShareRequest::SetConnectionShareRequest() :
	RpcServiceRequest("dataworks-public", "2020-05-18", "SetConnectionShare")
{
	setMethod(HttpRequest::Method::Post);
}

SetConnectionShareRequest::~SetConnectionShareRequest()
{}

std::string SetConnectionShareRequest::getProjectPermissions()const
{
	return projectPermissions_;
}

void SetConnectionShareRequest::setProjectPermissions(const std::string& projectPermissions)
{
	projectPermissions_ = projectPermissions;
	setParameter("ProjectPermissions", projectPermissions);
}

std::string SetConnectionShareRequest::getDatasourceName()const
{
	return datasourceName_;
}

void SetConnectionShareRequest::setDatasourceName(const std::string& datasourceName)
{
	datasourceName_ = datasourceName;
	setParameter("DatasourceName", datasourceName);
}

std::string SetConnectionShareRequest::getUserPermissions()const
{
	return userPermissions_;
}

void SetConnectionShareRequest::setUserPermissions(const std::string& userPermissions)
{
	userPermissions_ = userPermissions;
	setParameter("UserPermissions", userPermissions);
}

std::string SetConnectionShareRequest::getEnvType()const
{
	return envType_;
}

void SetConnectionShareRequest::setEnvType(const std::string& envType)
{
	envType_ = envType;
	setParameter("EnvType", envType);
}

long SetConnectionShareRequest::getProjectId()const
{
	return projectId_;
}

void SetConnectionShareRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", std::to_string(projectId));
}

