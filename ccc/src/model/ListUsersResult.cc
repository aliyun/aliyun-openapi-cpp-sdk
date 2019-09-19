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
	auto allListNode = usersNode["List"]["User"];
	for (auto usersNodeListUser : allListNode)
	{
		Users::User userObject;
		if(!usersNodeListUser["UserId"].isNull())
			userObject.userId = usersNodeListUser["UserId"].asString();
		if(!usersNodeListUser["RamId"].isNull())
			userObject.ramId = usersNodeListUser["RamId"].asString();
		if(!usersNodeListUser["InstanceId"].isNull())
			userObject.instanceId = usersNodeListUser["InstanceId"].asString();
		if(!usersNodeListUser["Primary"].isNull())
			userObject.primary = usersNodeListUser["Primary"].asString() == "true";
		if(!usersNodeListUser["PrivateOutboundNumberId"].isNull())
			userObject.privateOutboundNumberId = usersNodeListUser["PrivateOutboundNumberId"].asString();
		auto allRolesNode = allListNode["Roles"]["Role"];
		for (auto allListNodeRolesRole : allRolesNode)
		{
			Users::User::Role rolesObject;
			if(!allListNodeRolesRole["RoleId"].isNull())
				rolesObject.roleId = allListNodeRolesRole["RoleId"].asString();
			if(!allListNodeRolesRole["InstanceId"].isNull())
				rolesObject.instanceId = allListNodeRolesRole["InstanceId"].asString();
			if(!allListNodeRolesRole["RoleName"].isNull())
				rolesObject.roleName = allListNodeRolesRole["RoleName"].asString();
			if(!allListNodeRolesRole["RoleDescription"].isNull())
				rolesObject.roleDescription = allListNodeRolesRole["RoleDescription"].asString();
			userObject.roles.push_back(rolesObject);
		}
		auto allSkillLevelsNode = allListNode["SkillLevels"]["SkillLevel"];
		for (auto allListNodeSkillLevelsSkillLevel : allSkillLevelsNode)
		{
			Users::User::SkillLevel skillLevelsObject;
			if(!allListNodeSkillLevelsSkillLevel["SkillLevelId"].isNull())
				skillLevelsObject.skillLevelId = allListNodeSkillLevelsSkillLevel["SkillLevelId"].asString();
			if(!allListNodeSkillLevelsSkillLevel["Level"].isNull())
				skillLevelsObject.level = std::stoi(allListNodeSkillLevelsSkillLevel["Level"].asString());
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

