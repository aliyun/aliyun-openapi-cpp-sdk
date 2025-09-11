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

#include <alibabacloud/quickbi-public/model/ListWorkspaceUserRolesByUserIdResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quickbi_public;
using namespace AlibabaCloud::Quickbi_public::Model;

ListWorkspaceUserRolesByUserIdResult::ListWorkspaceUserRolesByUserIdResult() :
	ServiceResult()
{}

ListWorkspaceUserRolesByUserIdResult::ListWorkspaceUserRolesByUserIdResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListWorkspaceUserRolesByUserIdResult::~ListWorkspaceUserRolesByUserIdResult()
{}

void ListWorkspaceUserRolesByUserIdResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["Data"];
	for (auto valueResultData : allResultNode)
	{
		Data resultObject;
		if(!valueResultData["WorkspaceId"].isNull())
			resultObject.workspaceId = valueResultData["WorkspaceId"].asString();
		if(!valueResultData["WorkspaceName"].isNull())
			resultObject.workspaceName = valueResultData["WorkspaceName"].asString();
		auto roleModelNode = value["RoleModel"];
		if(!roleModelNode["RoleId"].isNull())
			resultObject.roleModel.roleId = roleModelNode["RoleId"].asString();
		if(!roleModelNode["RoleCode"].isNull())
			resultObject.roleModel.roleCode = roleModelNode["RoleCode"].asString();
		if(!roleModelNode["RoleName"].isNull())
			resultObject.roleModel.roleName = roleModelNode["RoleName"].asString();
		result_.push_back(resultObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool ListWorkspaceUserRolesByUserIdResult::getSuccess()const
{
	return success_;
}

std::vector<ListWorkspaceUserRolesByUserIdResult::Data> ListWorkspaceUserRolesByUserIdResult::getResult()const
{
	return result_;
}

