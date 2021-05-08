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

#include <alibabacloud/dataworks-public/model/CreatePermissionApplyOrderRequest.h>

using AlibabaCloud::Dataworks_public::Model::CreatePermissionApplyOrderRequest;

CreatePermissionApplyOrderRequest::CreatePermissionApplyOrderRequest() :
	RpcServiceRequest("dataworks-public", "2020-05-18", "CreatePermissionApplyOrder")
{
	setMethod(HttpRequest::Method::Post);
}

CreatePermissionApplyOrderRequest::~CreatePermissionApplyOrderRequest()
{}

std::string CreatePermissionApplyOrderRequest::getApplyReason()const
{
	return applyReason_;
}

void CreatePermissionApplyOrderRequest::setApplyReason(const std::string& applyReason)
{
	applyReason_ = applyReason;
	setParameter("ApplyReason", applyReason);
}

std::string CreatePermissionApplyOrderRequest::getMaxComputeProjectName()const
{
	return maxComputeProjectName_;
}

void CreatePermissionApplyOrderRequest::setMaxComputeProjectName(const std::string& maxComputeProjectName)
{
	maxComputeProjectName_ = maxComputeProjectName;
	setParameter("MaxComputeProjectName", maxComputeProjectName);
}

std::vector<CreatePermissionApplyOrderRequest::ApplyObject> CreatePermissionApplyOrderRequest::getApplyObject()const
{
	return applyObject_;
}

void CreatePermissionApplyOrderRequest::setApplyObject(const std::vector<ApplyObject>& applyObject)
{
	applyObject_ = applyObject;
	for(int dep1 = 0; dep1!= applyObject.size(); dep1++) {
		auto applyObjectObj = applyObject.at(dep1);
		std::string applyObjectObjStr = "ApplyObject." + std::to_string(dep1 + 1);
		for(int dep2 = 0; dep2!= applyObjectObj.columnMetaList.size(); dep2++) {
			auto columnMetaListObj = applyObjectObj.columnMetaList.at(dep2);
			std::string columnMetaListObjStr = applyObjectObjStr + "ColumnMetaList." + std::to_string(dep2 + 1);
			setParameter(columnMetaListObjStr + ".Name", columnMetaListObj.name);
		}
		setParameter(applyObjectObjStr + ".Name", applyObjectObj.name);
		setParameter(applyObjectObjStr + ".Actions", applyObjectObj.actions);
	}
}

std::string CreatePermissionApplyOrderRequest::getApplyUserIds()const
{
	return applyUserIds_;
}

void CreatePermissionApplyOrderRequest::setApplyUserIds(const std::string& applyUserIds)
{
	applyUserIds_ = applyUserIds;
	setParameter("ApplyUserIds", applyUserIds);
}

long CreatePermissionApplyOrderRequest::getDeadline()const
{
	return deadline_;
}

void CreatePermissionApplyOrderRequest::setDeadline(long deadline)
{
	deadline_ = deadline;
	setParameter("Deadline", std::to_string(deadline));
}

int CreatePermissionApplyOrderRequest::getWorkspaceId()const
{
	return workspaceId_;
}

void CreatePermissionApplyOrderRequest::setWorkspaceId(int workspaceId)
{
	workspaceId_ = workspaceId;
	setParameter("WorkspaceId", std::to_string(workspaceId));
}

int CreatePermissionApplyOrderRequest::getOrderType()const
{
	return orderType_;
}

void CreatePermissionApplyOrderRequest::setOrderType(int orderType)
{
	orderType_ = orderType;
	setParameter("OrderType", std::to_string(orderType));
}

std::string CreatePermissionApplyOrderRequest::getEngineType()const
{
	return engineType_;
}

void CreatePermissionApplyOrderRequest::setEngineType(const std::string& engineType)
{
	engineType_ = engineType;
	setParameter("EngineType", engineType);
}

