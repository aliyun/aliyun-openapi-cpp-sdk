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

#include <alibabacloud/ccc/model/ListAgentEventsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListAgentEventsResult::ListAgentEventsResult() :
	ServiceResult()
{}

ListAgentEventsResult::ListAgentEventsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAgentEventsResult::~ListAgentEventsResult()
{}

void ListAgentEventsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAgentEventList = value["AgentEventList"]["AgentEvent"];
	for (auto value : allAgentEventList)
	{
		AgentEvent agentEventListObject;
		if(!value["InstanceId"].isNull())
			agentEventListObject.instanceId = value["InstanceId"].asString();
		if(!value["RamId"].isNull())
			agentEventListObject.ramId = std::stol(value["RamId"].asString());
		if(!value["LoginName"].isNull())
			agentEventListObject.loginName = value["LoginName"].asString();
		if(!value["Event"].isNull())
			agentEventListObject.event = value["Event"].asString();
		if(!value["EventTime"].isNull())
			agentEventListObject.eventTime = std::stol(value["EventTime"].asString());
		auto allSkillGroupIds = value["SkillGroupIds"]["SkillGroup"];
		for (auto value : allSkillGroupIds)
		{
			AgentEvent::SkillGroup skillGroupIdsObject;
			if(!value["SkillGroupId"].isNull())
				skillGroupIdsObject.skillGroupId = value["SkillGroupId"].asString();
			if(!value["SkillGroupName"].isNull())
				skillGroupIdsObject.skillGroupName = value["SkillGroupName"].asString();
			agentEventListObject.skillGroupIds.push_back(skillGroupIdsObject);
		}
		agentEventList_.push_back(agentEventListObject);
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

std::vector<ListAgentEventsResult::AgentEvent> ListAgentEventsResult::getAgentEventList()const
{
	return agentEventList_;
}

std::string ListAgentEventsResult::getMessage()const
{
	return message_;
}

int ListAgentEventsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListAgentEventsResult::getCode()const
{
	return code_;
}

bool ListAgentEventsResult::getSuccess()const
{
	return success_;
}

