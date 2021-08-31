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

#include <alibabacloud/edas/model/ListRoleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

ListRoleResult::ListRoleResult() :
	ServiceResult()
{}

ListRoleResult::ListRoleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRoleResult::~ListRoleResult()
{}

void ListRoleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRoleListNode = value["RoleList"]["RoleItem"];
	for (auto valueRoleListRoleItem : allRoleListNode)
	{
		RoleItem roleListObject;
		auto allActionListNode = valueRoleListRoleItem["ActionList"]["Action"];
		for (auto valueRoleListRoleItemActionListAction : allActionListNode)
		{
			RoleItem::Action actionListObject;
			if(!valueRoleListRoleItemActionListAction["GroupId"].isNull())
				actionListObject.groupId = valueRoleListRoleItemActionListAction["GroupId"].asString();
			if(!valueRoleListRoleItemActionListAction["Code"].isNull())
				actionListObject.code = valueRoleListRoleItemActionListAction["Code"].asString();
			if(!valueRoleListRoleItemActionListAction["Name"].isNull())
				actionListObject.name = valueRoleListRoleItemActionListAction["Name"].asString();
			if(!valueRoleListRoleItemActionListAction["Description"].isNull())
				actionListObject.description = valueRoleListRoleItemActionListAction["Description"].asString();
			roleListObject.actionList.push_back(actionListObject);
		}
		auto roleNode = value["Role"];
		if(!roleNode["Id"].isNull())
			roleListObject.role.id = std::stoi(roleNode["Id"].asString());
		if(!roleNode["AdminUserId"].isNull())
			roleListObject.role.adminUserId = roleNode["AdminUserId"].asString();
		if(!roleNode["Name"].isNull())
			roleListObject.role.name = roleNode["Name"].asString();
		if(!roleNode["CreateTime"].isNull())
			roleListObject.role.createTime = std::stol(roleNode["CreateTime"].asString());
		if(!roleNode["UpdateTime"].isNull())
			roleListObject.role.updateTime = std::stol(roleNode["UpdateTime"].asString());
		if(!roleNode["IsDefault"].isNull())
			roleListObject.role.isDefault = roleNode["IsDefault"].asString() == "true";
		roleList_.push_back(roleListObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListRoleResult::getMessage()const
{
	return message_;
}

std::vector<ListRoleResult::RoleItem> ListRoleResult::getRoleList()const
{
	return roleList_;
}

int ListRoleResult::getCode()const
{
	return code_;
}

