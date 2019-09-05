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

#include <alibabacloud/ccc/model/GetUserResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

GetUserResult::GetUserResult() :
	ServiceResult()
{}

GetUserResult::GetUserResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetUserResult::~GetUserResult()
{}

void GetUserResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto userNode = value["User"];
	if(!userNode["UserId"].isNull())
		user_.userId = userNode["UserId"].asString();
	if(!userNode["RamId"].isNull())
		user_.ramId = userNode["RamId"].asString();
	if(!userNode["InstanceId"].isNull())
		user_.instanceId = userNode["InstanceId"].asString();
	auto allRoles = value["Roles"]["Role"];
	for (auto value : allRoles)
	{
		User::Role roleObject;
		if(!value["RoleId"].isNull())
			roleObject.roleId = value["RoleId"].asString();
		if(!value["InstanceId"].isNull())
			roleObject.instanceId = value["InstanceId"].asString();
		if(!value["RoleName"].isNull())
			roleObject.roleName = value["RoleName"].asString();
		if(!value["RoleDescription"].isNull())
			roleObject.roleDescription = value["RoleDescription"].asString();
		user_.roles.push_back(roleObject);
	}
	auto allSkillLevels = value["SkillLevels"]["SkillLevel"];
	for (auto value : allSkillLevels)
	{
		User::SkillLevel skillLevelObject;
		if(!value["SkillLevelId"].isNull())
			skillLevelObject.skillLevelId = value["SkillLevelId"].asString();
		if(!value["Level"].isNull())
			skillLevelObject.level = std::stoi(value["Level"].asString());
		auto skillNode = value["Skill"];
		if(!skillNode["SkillGroupId"].isNull())
			skillLevelObject.skill.skillGroupId = skillNode["SkillGroupId"].asString();
		if(!skillNode["InstanceId"].isNull())
			skillLevelObject.skill.instanceId = skillNode["InstanceId"].asString();
		if(!skillNode["SkillGroupName"].isNull())
			skillLevelObject.skill.skillGroupName = skillNode["SkillGroupName"].asString();
		if(!skillNode["SkillGroupDescription"].isNull())
			skillLevelObject.skill.skillGroupDescription = skillNode["SkillGroupDescription"].asString();
		user_.skillLevels.push_back(skillLevelObject);
	}
	auto detailNode = userNode["Detail"];
	if(!detailNode["LoginName"].isNull())
		user_.detail.loginName = detailNode["LoginName"].asString();
	if(!detailNode["DisplayName"].isNull())
		user_.detail.displayName = detailNode["DisplayName"].asString();
	if(!detailNode["Phone"].isNull())
		user_.detail.phone = detailNode["Phone"].asString();
	if(!detailNode["Email"].isNull())
		user_.detail.email = detailNode["Email"].asString();
	if(!detailNode["Department"].isNull())
		user_.detail.department = detailNode["Department"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

GetUserResult::User GetUserResult::getUser()const
{
	return user_;
}

std::string GetUserResult::getMessage()const
{
	return message_;
}

int GetUserResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string GetUserResult::getCode()const
{
	return code_;
}

bool GetUserResult::getSuccess()const
{
	return success_;
}

