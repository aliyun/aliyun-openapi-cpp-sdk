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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allData = value["Data"]["User"];
	for (auto value : allData)
	{
		User dataObject;
		if(!value["RamId"].isNull())
			dataObject.ramId = value["RamId"].asString();
		if(!value["DisplayName"].isNull())
			dataObject.displayName = value["DisplayName"].asString();
		if(!value["Phone"].isNull())
			dataObject.phone = value["Phone"].asString();
		if(!value["Dn"].isNull())
			dataObject.dn = value["Dn"].asString();
		if(!value["State"].isNull())
			dataObject.state = value["State"].asString();
		if(!value["StateDesc"].isNull())
			dataObject.stateDesc = value["StateDesc"].asString();
		auto allSkillLevels = value["SkillLevels"]["SkillLevel"];
		for (auto value : allSkillLevels)
		{
			User::SkillLevel skillLevelsObject;
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

