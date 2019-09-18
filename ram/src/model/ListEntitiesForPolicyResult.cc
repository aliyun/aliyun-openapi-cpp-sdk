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
	auto allGroups = value["Groups"]["Group"];
	for (auto value : allGroups)
	{
		Group groupsObject;
		if(!value["GroupName"].isNull())
			groupsObject.groupName = value["GroupName"].asString();
		if(!value["Comments"].isNull())
			groupsObject.comments = value["Comments"].asString();
		if(!value["AttachDate"].isNull())
			groupsObject.attachDate = value["AttachDate"].asString();
		groups_.push_back(groupsObject);
	}
	auto allUsers = value["Users"]["User"];
	for (auto value : allUsers)
	{
		User usersObject;
		if(!value["UserId"].isNull())
			usersObject.userId = value["UserId"].asString();
		if(!value["UserName"].isNull())
			usersObject.userName = value["UserName"].asString();
		if(!value["DisplayName"].isNull())
			usersObject.displayName = value["DisplayName"].asString();
		if(!value["AttachDate"].isNull())
			usersObject.attachDate = value["AttachDate"].asString();
		users_.push_back(usersObject);
	}
	auto allRoles = value["Roles"]["Role"];
	for (auto value : allRoles)
	{
		Role rolesObject;
		if(!value["RoleId"].isNull())
			rolesObject.roleId = value["RoleId"].asString();
		if(!value["RoleName"].isNull())
			rolesObject.roleName = value["RoleName"].asString();
		if(!value["Arn"].isNull())
			rolesObject.arn = value["Arn"].asString();
		if(!value["Description"].isNull())
			rolesObject.description = value["Description"].asString();
		if(!value["AttachDate"].isNull())
			rolesObject.attachDate = value["AttachDate"].asString();
		roles_.push_back(rolesObject);
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

