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

#include <alibabacloud/ccc/model/ListRealTimeAgentResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListRealTimeAgentResult::ListRealTimeAgentResult() :
	ServiceResult()
{}

ListRealTimeAgentResult::ListRealTimeAgentResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRealTimeAgentResult::~ListRealTimeAgentResult()
{}

void ListRealTimeAgentResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["User"];
	for (auto valueDataUser : allDataNode)
	{
		User dataObject;
		if(!valueDataUser["RamId"].isNull())
			dataObject.ramId = valueDataUser["RamId"].asString();
		if(!valueDataUser["DisplayName"].isNull())
			dataObject.displayName = valueDataUser["DisplayName"].asString();
		if(!valueDataUser["Phone"].isNull())
			dataObject.phone = valueDataUser["Phone"].asString();
		if(!valueDataUser["Dn"].isNull())
			dataObject.dn = valueDataUser["Dn"].asString();
		if(!valueDataUser["State"].isNull())
			dataObject.state = valueDataUser["State"].asString();
		if(!valueDataUser["StateDesc"].isNull())
			dataObject.stateDesc = valueDataUser["StateDesc"].asString();
		auto allSkillLevelsNode = allDataNode["SkillLevels"]["SkillLevel"];
		for (auto allDataNodeSkillLevelsSkillLevel : allSkillLevelsNode)
		{
			User::SkillLevel skillLevelsObject;
			if(!allDataNodeSkillLevelsSkillLevel["SkillLevelId"].isNull())
				skillLevelsObject.skillLevelId = allDataNodeSkillLevelsSkillLevel["SkillLevelId"].asString();
			if(!allDataNodeSkillLevelsSkillLevel["Level"].isNull())
				skillLevelsObject.level = std::stoi(allDataNodeSkillLevelsSkillLevel["Level"].asString());
			auto skillNode = value["Skill"];
			if(!skillNode["SkillGroupId"].isNull())
				skillLevelsObject.skill.skillGroupId = skillNode["SkillGroupId"].asString();
			if(!skillNode["InstanceId"].isNull())
				skillLevelsObject.skill.instanceId = skillNode["InstanceId"].asString();
			if(!skillNode["SkillGroupName"].isNull())
				skillLevelsObject.skill.skillGroupName = skillNode["SkillGroupName"].asString();
			if(!skillNode["SkillGroupDescription"].isNull())
				skillLevelsObject.skill.skillGroupDescription = skillNode["SkillGroupDescription"].asString();
			dataObject.skillLevels.push_back(skillLevelsObject);
		}
		data_.push_back(dataObject);
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

std::string ListRealTimeAgentResult::getMessage()const
{
	return message_;
}

int ListRealTimeAgentResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<ListRealTimeAgentResult::User> ListRealTimeAgentResult::getData()const
{
	return data_;
}

std::string ListRealTimeAgentResult::getCode()const
{
	return code_;
}

bool ListRealTimeAgentResult::getSuccess()const
{
	return success_;
}

