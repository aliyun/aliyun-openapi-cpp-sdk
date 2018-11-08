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
	auto usersNode = value["Users"];
	if(!usersNode["TotalCount"].isNull())
		users_.totalCount = std::stoi(usersNode["TotalCount"].asString());
	if(!usersNode["PageNumber"].isNull())
		users_.pageNumber = std::stoi(usersNode["PageNumber"].asString());
	if(!usersNode["PageSize"].isNull())
		users_.pageSize = std::stoi(usersNode["PageSize"].asString());
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
			auto skillNode = value["Skill"];
			if(!skillNode["SkillGroupId"].isNull())
				skillLevelsObject.skill.skillGroupId = skillNode["SkillGroupId"].asString();
			if(!skillNode["InstanceId"].isNull())
				skillLevelsObject.skill.instanceId = skillNode["InstanceId"].asString();
			if(!skillNode["SkillGroupName"].isNull())
				skillLevelsObject.skill.skillGroupName = skillNode["SkillGroupName"].asString();
			if(!skillNode["SkillGroupDescription"].isNull())
				skillLevelsObject.skill.skillGroupDescription = skillNode["SkillGroupDescription"].asString();
			userObject.skillLevels.push_back(skillLevelsObject);
		}
		auto detailNode = value["Detail"];
		if(!detailNode["LoginName"].isNull())
			userObject.detail.loginName = detailNode["LoginName"].asString();
		if(!detailNode["DisplayName"].isNull())
			userObject.detail.displayName = detailNode["DisplayName"].asString();
		if(!detailNode["Phone"].isNull())
			userObject.detail.phone = detailNode["Phone"].asString();
		if(!detailNode["Email"].isNull())
			userObject.detail.email = detailNode["Email"].asString();
		if(!detailNode["Department"].isNull())
			userObject.detail.department = detailNode["Department"].asString();
		users_.list.push_back(userObject);
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

ListUsersResult::Users ListUsersResult::getUsers()const
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

