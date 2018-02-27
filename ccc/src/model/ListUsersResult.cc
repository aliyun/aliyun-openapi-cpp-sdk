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

#include <alibabacloud/ccc/model/ListUsersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListUsersResult::ListUsersResult() :
	ServiceResult()
{}

ListUsersResult::ListUsersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListUsersResult::~ListUsersResult()
{}

void ListUsersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allUsers = value["Users"];
	for (auto value : allUsers)
	{
		Users usersObject;
		if(!value["TotalCount"].isNull())
			usersObject.totalCount = std::stoi(value["TotalCount"].asString());
		if(!value["PageNumber"].isNull())
			usersObject.pageNumber = std::stoi(value["PageNumber"].asString());
		if(!value["PageSize"].isNull())
			usersObject.pageSize = std::stoi(value["PageSize"].asString());
		auto allList = value["List"]["User"];
		for (auto value : allList)
		{
			Users::User userObject;
			if(!value["UserId"].isNull())
				userObject.userId = value["UserId"].asString();
			if(!value["RamId"].isNull())
				userObject.ramId = value["RamId"].asString();
			if(!value["InstanceId"].isNull())
				userObject.instanceId = value["InstanceId"].asString();
			if(!value["Primary"].isNull())
				userObject.primary = value["Primary"].asString() == "true";
			auto allRoles = value["Roles"]["Role"];
			for (auto value : allRoles)
			{
				Users::User::Role rolesObject;
				if(!value["RoleId"].isNull())
					rolesObject.roleId = value["RoleId"].asString();
				if(!value["InstanceId"].isNull())
					rolesObject.instanceId = value["InstanceId"].asString();
				if(!value["RoleName"].isNull())
					rolesObject.roleName = value["RoleName"].asString();
				if(!value["RoleDescription"].isNull())
					rolesObject.roleDescription = value["RoleDescription"].asString();
				userObject.roles.push_back(rolesObject);
			}
			auto allSkillLevels = value["SkillLevels"]["SkillLevel"];
			for (auto value : allSkillLevels)
			{
				Users::User::SkillLevel skillLevelsObject;
				if(!value["SkillLevelId"].isNull())
					skillLevelsObject.skillLevelId = value["SkillLevelId"].asString();
				if(!value["Level"].isNull())
					skillLevelsObject.level = std::stoi(value["Level"].asString());
				auto allSkill = value["Skill"];
				for (auto value : allSkill)
				{
					Users::User::SkillLevel::Skill skillObject;
					if(!value["SkillGroupId"].isNull())
						skillObject.skillGroupId = value["SkillGroupId"].asString();
					if(!value["InstanceId"].isNull())
						skillObject.instanceId = value["InstanceId"].asString();
					if(!value["SkillGroupName"].isNull())
						skillObject.skillGroupName = value["SkillGroupName"].asString();
					if(!value["SkillGroupDescription"].isNull())
						skillObject.skillGroupDescription = value["SkillGroupDescription"].asString();
					skillLevelsObject.skill.push_back(skillObject);
				}
				userObject.skillLevels.push_back(skillLevelsObject);
			}
			auto allDetail = value["Detail"];
			for (auto value : allDetail)
			{
				Users::User::Detail detailObject;
				if(!value["LoginName"].isNull())
					detailObject.loginName = value["LoginName"].asString();
				if(!value["DisplayName"].isNull())
					detailObject.displayName = value["DisplayName"].asString();
				if(!value["Phone"].isNull())
					detailObject.phone = value["Phone"].asString();
				if(!value["Email"].isNull())
					detailObject.email = value["Email"].asString();
				if(!value["Department"].isNull())
					detailObject.department = value["Department"].asString();
				userObject.detail.push_back(detailObject);
			}
			usersObject.list.push_back(userObject);
		}
		users_.push_back(usersObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string ListUsersResult::getMessage()const
{
	return message_;
}

int ListUsersResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<ListUsersResult::Users> ListUsersResult::getUsers()const
{
	return users_;
}

std::string ListUsersResult::getCode()const
{
	return code_;
}

bool ListUsersResult::getSuccess()const
{
	return success_;
}

