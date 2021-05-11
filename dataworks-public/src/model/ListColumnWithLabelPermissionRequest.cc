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

#include <alibabacloud/dataworks-public/model/ListColumnWithLabelPermissionRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListColumnWithLabelPermissionRequest;

ListColumnWithLabelPermissionRequest::ListColumnWithLabelPermissionRequest() :
	RpcServiceRequest("dataworks-public", "2020-05-18", "ListColumnWithLabelPermission")
{
	setMethod(HttpRequest::Method::Post);
}

ListColumnWithLabelPermissionRequest::~ListColumnWithLabelPermissionRequest()
{}

std::string ListColumnWithLabelPermissionRequest::getMaxComputeProjectName()const
{
	return maxComputeProjectName_;
}

void ListColumnWithLabelPermissionRequest::setMaxComputeProjectName(const std::string& maxComputeProjectName)
{
	maxComputeProjectName_ = maxComputeProjectName;
	setParameter("MaxComputeProjectName", maxComputeProjectName);
}

std::string ListColumnWithLabelPermissionRequest::getTableName()const
{
	return tableName_;
}

void ListColumnWithLabelPermissionRequest::setTableName(const std::string& tableName)
{
	tableName_ = tableName;
	setParameter("TableName", tableName);
}

std::string ListColumnWithLabelPermissionRequest::getUserId()const
{
	return userId_;
}

void ListColumnWithLabelPermissionRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setParameter("UserId", userId);
}

int ListColumnWithLabelPermissionRequest::getWorkspaceId()const
{
	return workspaceId_;
}

void ListColumnWithLabelPermissionRequest::setWorkspaceId(int workspaceId)
{
	workspaceId_ = workspaceId;
	setParameter("WorkspaceId", std::to_string(workspaceId));
}

std::string ListColumnWithLabelPermissionRequest::getEngineType()const
{
	return engineType_;
}

void ListColumnWithLabelPermissionRequest::setEngineType(const std::string& engineType)
{
	engineType_ = engineType;
	setParameter("EngineType", engineType);
}

