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

#include <alibabacloud/quickbi-public/model/ListWorkspaceRolesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quickbi_public;
using namespace AlibabaCloud::Quickbi_public::Model;

ListWorkspaceRolesResult::ListWorkspaceRolesResult() :
	ServiceResult()
{}

ListWorkspaceRolesResult::ListWorkspaceRolesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListWorkspaceRolesResult::~ListWorkspaceRolesResult()
{}

void ListWorkspaceRolesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["Data"];
	for (auto valueResultData : allResultNode)
	{
		Data resultObject;
		if(!valueResultData["IsSystemRole"].isNull())
			resultObject.isSystemRole = valueResultData["IsSystemRole"].asString() == "true";
		if(!valueResultData["RoleId"].isNull())
			resultObject.roleId = std::stol(valueResultData["RoleId"].asString());
		if(!valueResultData["RoleName"].isNull())
			resultObject.roleName = valueResultData["RoleName"].asString();
		auto allAuthConfigListNode = valueResultData["AuthConfigList"]["authConfigListItem"];
		for (auto valueResultDataAuthConfigListauthConfigListItem : allAuthConfigListNode)
		{
			Data::AuthConfigListItem authConfigListObject;
			if(!valueResultDataAuthConfigListauthConfigListItem["AuthKey"].isNull())
				authConfigListObject.authKey = valueResultDataAuthConfigListauthConfigListItem["AuthKey"].asString();
			auto allActionAuthKeys = value["ActionAuthKeys"]["actionAuthKeys"];
			for (auto value : allActionAuthKeys)
				authConfigListObject.actionAuthKeys.push_back(value.asString());
			resultObject.authConfigList.push_back(authConfigListObject);
		}
		result_.push_back(resultObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool ListWorkspaceRolesResult::getSuccess()const
{
	return success_;
}

std::vector<ListWorkspaceRolesResult::Data> ListWorkspaceRolesResult::getResult()const
{
	return result_;
}

