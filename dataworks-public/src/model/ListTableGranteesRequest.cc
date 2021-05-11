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

#include <alibabacloud/dataworks-public/model/ListTableGranteesRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListTableGranteesRequest;

ListTableGranteesRequest::ListTableGranteesRequest() :
	RpcServiceRequest("dataworks-public", "2020-05-18", "ListTableGrantees")
{
	setMethod(HttpRequest::Method::Post);
}

ListTableGranteesRequest::~ListTableGranteesRequest()
{}

std::string ListTableGranteesRequest::getMaxComputeProjectName()const
{
	return maxComputeProjectName_;
}

void ListTableGranteesRequest::setMaxComputeProjectName(const std::string& maxComputeProjectName)
{
	maxComputeProjectName_ = maxComputeProjectName;
	setParameter("MaxComputeProjectName", maxComputeProjectName);
}

std::string ListTableGranteesRequest::getTableName()const
{
	return tableName_;
}

void ListTableGranteesRequest::setTableName(const std::string& tableName)
{
	tableName_ = tableName;
	setParameter("TableName", tableName);
}

int ListTableGranteesRequest::getWorkspaceId()const
{
	return workspaceId_;
}

void ListTableGranteesRequest::setWorkspaceId(int workspaceId)
{
	workspaceId_ = workspaceId;
	setParameter("WorkspaceId", std::to_string(workspaceId));
}

std::string ListTableGranteesRequest::getEngineType()const
{
	return engineType_;
}

void ListTableGranteesRequest::setEngineType(const std::string& engineType)
{
	engineType_ = engineType;
	setParameter("EngineType", engineType);
}

