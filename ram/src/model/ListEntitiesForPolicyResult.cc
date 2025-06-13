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

#include <alibabacloud/ram/model/ListEntitiesForPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ram;
using namespace AlibabaCloud::Ram::Model;

ListEntitiesForPolicyResult::ListEntitiesForPolicyResult() :
	ServiceResult()
{}

ListEntitiesForPolicyResult::ListEntitiesForPolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListEntitiesForPolicyResult::~ListEntitiesForPolicyResult()
{}

void ListEntitiesForPolicyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allGroupsNode = value["Groups"]["Group"];
	for (auto valueGroupsGroup : allGroupsNode)
	{
		Group groupsObject;
		if(!valueGroupsGroup["GroupName"].isNull())
			groupsObject.groupName = valueGroupsGroup["GroupName"].asString();
		if(!valueGroupsGroup["Comments"].isNull())
			groupsObject.comments = valueGroupsGroup["Comments"].asString();
		if(!valueGroupsGroup["AttachDate"].isNull())
			groupsObject.attachDate = valueGroupsGroup["AttachDate"].asString();
		groups_.push_back(groupsObject);
	}
	auto allRolesNode = value["Roles"]["Role"];
	for (auto valueRolesRole : allRolesNode)
	{
		Role rolesObject;
		if(!valueRolesRole["Description"].isNull())
			rolesObject.description = valueRolesRole["Description"].asString();
		if(!valueRolesRole["RoleName"].isNull())
			rolesObject.roleName = valueRolesRole["RoleName"].asString();
		if(!valueRolesRole["AttachDate"].isNull())
			rolesObject.attachDate = valueRolesRole["AttachDate"].asString();
		if(!valueRolesRole["Arn"].isNull())
			rolesObject.arn = valueRolesRole["Arn"].asString();
		if(!valueRolesRole["RoleId"].isNull())
			rolesObject.roleId = valueRolesRole["RoleId"].asString();
		roles_.push_back(rolesObject);
	}
	auto allUsersNode = value["Users"]["User"];
	for (auto valueUsersUser : allUsersNode)
	{
		User usersObject;
		if(!valueUsersUser["DisplayName"].isNull())
			usersObject.displayName = valueUsersUser["DisplayName"].asString();
		if(!valueUsersUser["UserId"].isNull())
			usersObject.userId = valueUsersUser["UserId"].asString();
		if(!valueUsersUser["UserName"].isNull())
			usersObject.userName = valueUsersUser["UserName"].asString();
		if(!valueUsersUser["AttachDate"].isNull())
			usersObject.attachDate = valueUsersUser["AttachDate"].asString();
		users_.push_back(usersObject);
	}

}

std::vector<ListEntitiesForPolicyResult::Group> ListEntitiesForPolicyResult::getGroups()const
{
	return groups_;
}

std::vector<ListEntitiesForPolicyResult::Role> ListEntitiesForPolicyResult::getRoles()const
{
	return roles_;
}

std::vector<ListEntitiesForPolicyResult::User> ListEntitiesForPolicyResult::getUsers()const
{
	return users_;
}

