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
	auto allUser = value["User"];
	for (auto value : allUser)
	{
		User userObject;
		if(!value["UserId"].isNull())
			userObject.userId = value["UserId"].asString();
		if(!value["RamId"].isNull())
			userObject.ramId = value["RamId"].asString();
		if(!value["InstanceId"].isNull())
			userObject.instanceId = value["InstanceId"].asString();
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
			userObject.roles.push_back(roleObject);
		}
		auto allSkillLevels = value["SkillLevels"]["SkillLevel"];
		for (auto value : allSkillLevels)
		{
			User::SkillLevel skillLevelObject;
			if(!value["SkillLevelId"].isNull())
				skillLevelObject.skillLevelId = value["SkillLevelId"].asString();
			if(!value["Level"].isNull())
				skillLevelObject.level = std::stoi(value["Level"].asString());
			auto allSkill = value["Skill"];
			for (auto value : allSkill)
			{
				User::SkillLevel::Skill skillObject;
				if(!value["SkillGroupId"].isNull())
					skillObject.skillGroupId = value["SkillGroupId"].asString();
				if(!value["InstanceId"].isNull())
					skillObject.instanceId = value["InstanceId"].asString();
				if(!value["SkillGroupName"].isNull())
					skillObject.skillGroupName = value["SkillGroupName"].asString();
				if(!value["SkillGroupDescription"].isNull())
					skillObject.skillGroupDescription = value["SkillGroupDescription"].asString();
				skillLevelObject.skill.push_back(skillObject);
			}
			userObject.skillLevels.push_back(skillLevelObject);
		}
		auto allDetail = value["Detail"];
		for (auto value : allDetail)
		{
			User::Detail detailObject;
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
		user_.push_back(userObject);
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

std::vector<GetUserResult::User> GetUserResult::getUser()const
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

