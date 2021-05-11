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

#include <alibabacloud/dataworks-public/model/ListTableWithPermissionRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListTableWithPermissionRequest;

ListTableWithPermissionRequest::ListTableWithPermissionRequest() :
	RpcServiceRequest("dataworks-public", "2020-05-18", "ListTableWithPermission")
{
	setMethod(HttpRequest::Method::Post);
}

ListTableWithPermissionRequest::~ListTableWithPermissionRequest()
{}

std::string ListTableWithPermissionRequest::getMaxComputeProjectName()const
{
	return maxComputeProjectName_;
}

void ListTableWithPermissionRequest::setMaxComputeProjectName(const std::string& maxComputeProjectName)
{
	maxComputeProjectName_ = maxComputeProjectName;
	setParameter("MaxComputeProjectName", maxComputeProjectName);
}

int ListTableWithPermissionRequest::getPageNum()const
{
	return pageNum_;
}

void ListTableWithPermissionRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

std::string ListTableWithPermissionRequest::getUserId()const
{
	return userId_;
}

void ListTableWithPermissionRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setParameter("UserId", userId);
}

int ListTableWithPermissionRequest::getPageSize()const
{
	return pageSize_;
}

void ListTableWithPermissionRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListTableWithPermissionRequest::getKeyword()const
{
	return keyword_;
}

void ListTableWithPermissionRequest::setKeyword(const std::string& keyword)
{
	keyword_ = keyword;
	setParameter("Keyword", keyword);
}

int ListTableWithPermissionRequest::getWorkspaceId()const
{
	return workspaceId_;
}

void ListTableWithPermissionRequest::setWorkspaceId(int workspaceId)
{
	workspaceId_ = workspaceId;
	setParameter("WorkspaceId", std::to_string(workspaceId));
}

std::string ListTableWithPermissionRequest::getEngineType()const
{
	return engineType_;
}

void ListTableWithPermissionRequest::setEngineType(const std::string& engineType)
{
	engineType_ = engineType;
	setParameter("EngineType", engineType);
}

