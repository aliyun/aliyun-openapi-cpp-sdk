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

#include <alibabacloud/ccc/model/ListAgentStateLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListAgentStateLogsResult::ListAgentStateLogsResult() :
	ServiceResult()
{}

ListAgentStateLogsResult::ListAgentStateLogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAgentStateLogsResult::~ListAgentStateLogsResult()
{}

void ListAgentStateLogsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto agentStateLogPageNode = value["AgentStateLogPage"];
	if(!agentStateLogPageNode["TotalCount"].isNull())
		agentStateLogPage_.totalCount = std::stoi(agentStateLogPageNode["TotalCount"].asString());
	if(!agentStateLogPageNode["PageNumber"].isNull())
		agentStateLogPage_.pageNumber = std::stoi(agentStateLogPageNode["PageNumber"].asString());
	if(!agentStateLogPageNode["PageSize"].isNull())
		agentStateLogPage_.pageSize = std::stoi(agentStateLogPageNode["PageSize"].asString());
	auto allListNode = agentStateLogPageNode["List"]["AgentStateLog"];
	for (auto agentStateLogPageNodeListAgentStateLog : allListNode)
	{
		AgentStateLogPage::AgentStateLog agentStateLogObject;
		if(!agentStateLogPageNodeListAgentStateLog["InstanceId"].isNull())
			agentStateLogObject.instanceId = agentStateLogPageNodeListAgentStateLog["InstanceId"].asString();
		if(!agentStateLogPageNodeListAgentStateLog["RamId"].isNull())
			agentStateLogObject.ramId = std::stol(agentStateLogPageNodeListAgentStateLog["RamId"].asString());
		if(!agentStateLogPageNodeListAgentStateLog["State"].isNull())
			agentStateLogObject.state = agentStateLogPageNodeListAgentStateLog["State"].asString();
		if(!agentStateLogPageNodeListAgentStateLog["StateCode"].isNull())
			agentStateLogObject.stateCode = agentStateLogPageNodeListAgentStateLog["StateCode"].asString();
		if(!agentStateLogPageNodeListAgentStateLog["StateTime"].isNull())
			agentStateLogObject.stateTime = std::stol(agentStateLogPageNodeListAgentStateLog["StateTime"].asString());
		if(!agentStateLogPageNodeListAgentStateLog["ContactId"].isNull())
			agentStateLogObject.contactId = agentStateLogPageNodeListAgentStateLog["ContactId"].asString();
		if(!agentStateLogPageNodeListAgentStateLog["ConnectId"].isNull())
			agentStateLogObject.connectId = agentStateLogPageNodeListAgentStateLog["ConnectId"].asString();
		if(!agentStateLogPageNodeListAgentStateLog["SkillGroupIds"].isNull())
			agentStateLogObject.skillGroupIds = agentStateLogPageNodeListAgentStateLog["SkillGroupIds"].asString();
		if(!agentStateLogPageNodeListAgentStateLog["CounterParty"].isNull())
			agentStateLogObject.counterParty = agentStateLogPageNodeListAgentStateLog["CounterParty"].asString();
		agentStateLogPage_.list.push_back(agentStateLogObject);
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

std::string ListAgentStateLogsResult::getMessage()const
{
	return message_;
}

int ListAgentStateLogsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListAgentStateLogsResult::getCode()const
{
	return code_;
}

ListAgentStateLogsResult::AgentStateLogPage ListAgentStateLogsResult::getAgentStateLogPage()const
{
	return agentStateLogPage_;
}

bool ListAgentStateLogsResult::getSuccess()const
{
	return success_;
}

