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
	auto allAgentEventListNode = value["AgentEventList"]["AgentEvent"];
	for (auto valueAgentEventListAgentEvent : allAgentEventListNode)
	{
		AgentEvent agentEventListObject;
		if(!valueAgentEventListAgentEvent["InstanceId"].isNull())
			agentEventListObject.instanceId = valueAgentEventListAgentEvent["InstanceId"].asString();
		if(!valueAgentEventListAgentEvent["RamId"].isNull())
			agentEventListObject.ramId = std::stol(valueAgentEventListAgentEvent["RamId"].asString());
		if(!valueAgentEventListAgentEvent["LoginName"].isNull())
			agentEventListObject.loginName = valueAgentEventListAgentEvent["LoginName"].asString();
		if(!valueAgentEventListAgentEvent["Event"].isNull())
			agentEventListObject.event = valueAgentEventListAgentEvent["Event"].asString();
		if(!valueAgentEventListAgentEvent["EventTime"].isNull())
			agentEventListObject.eventTime = std::stol(valueAgentEventListAgentEvent["EventTime"].asString());
		auto allSkillGroupIdsNode = valueAgentEventListAgentEvent["SkillGroupIds"]["SkillGroup"];
		for (auto valueAgentEventListAgentEventSkillGroupIdsSkillGroup : allSkillGroupIdsNode)
		{
			AgentEvent::SkillGroup skillGroupIdsObject;
			if(!valueAgentEventListAgentEventSkillGroupIdsSkillGroup["SkillGroupId"].isNull())
				skillGroupIdsObject.skillGroupId = valueAgentEventListAgentEventSkillGroupIdsSkillGroup["SkillGroupId"].asString();
			if(!valueAgentEventListAgentEventSkillGroupIdsSkillGroup["SkillGroupName"].isNull())
				skillGroupIdsObject.skillGroupName = valueAgentEventListAgentEventSkillGroupIdsSkillGroup["SkillGroupName"].asString();
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

