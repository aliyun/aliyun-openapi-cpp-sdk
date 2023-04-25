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

#include <alibabacloud/ccc/model/ListUserLevelsOfSkillGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListUserLevelsOfSkillGroupResult::ListUserLevelsOfSkillGroupResult() :
	ServiceResult()
{}

ListUserLevelsOfSkillGroupResult::ListUserLevelsOfSkillGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListUserLevelsOfSkillGroupResult::~ListUserLevelsOfSkillGroupResult()
{}

void ListUserLevelsOfSkillGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	auto allListNode = dataNode["List"]["UserSkillLevel"];
	for (auto dataNodeListUserSkillLevel : allListNode)
	{
		Data::UserSkillLevel userSkillLevelObject;
		if(!dataNodeListUserSkillLevel["DisplayName"].isNull())
			userSkillLevelObject.displayName = dataNodeListUserSkillLevel["DisplayName"].asString();
		if(!dataNodeListUserSkillLevel["SkillLevel"].isNull())
			userSkillLevelObject.skillLevel = std::stoi(dataNodeListUserSkillLevel["SkillLevel"].asString());
		if(!dataNodeListUserSkillLevel["LoginName"].isNull())
			userSkillLevelObject.loginName = dataNodeListUserSkillLevel["LoginName"].asString();
		if(!dataNodeListUserSkillLevel["UserId"].isNull())
			userSkillLevelObject.userId = dataNodeListUserSkillLevel["UserId"].asString();
		if(!dataNodeListUserSkillLevel["SkillGroupId"].isNull())
			userSkillLevelObject.skillGroupId = dataNodeListUserSkillLevel["SkillGroupId"].asString();
		if(!dataNodeListUserSkillLevel["SkillGroupName"].isNull())
			userSkillLevelObject.skillGroupName = dataNodeListUserSkillLevel["SkillGroupName"].asString();
		if(!dataNodeListUserSkillLevel["RoleName"].isNull())
			userSkillLevelObject.roleName = dataNodeListUserSkillLevel["RoleName"].asString();
		if(!dataNodeListUserSkillLevel["RoleId"].isNull())
			userSkillLevelObject.roleId = dataNodeListUserSkillLevel["RoleId"].asString();
		if(!dataNodeListUserSkillLevel["RamId"].isNull())
			userSkillLevelObject.ramId = dataNodeListUserSkillLevel["RamId"].asString();
		data_.list.push_back(userSkillLevelObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListUserLevelsOfSkillGroupResult::getMessage()const
{
	return message_;
}

int ListUserLevelsOfSkillGroupResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListUserLevelsOfSkillGroupResult::Data ListUserLevelsOfSkillGroupResult::getData()const
{
	return data_;
}

std::string ListUserLevelsOfSkillGroupResult::getCode()const
{
	return code_;
}

