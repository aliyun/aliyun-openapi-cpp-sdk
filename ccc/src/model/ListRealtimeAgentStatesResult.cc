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

#include <alibabacloud/ccc/model/ListRealtimeAgentStatesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListRealtimeAgentStatesResult::ListRealtimeAgentStatesResult() :
	ServiceResult()
{}

ListRealtimeAgentStatesResult::ListRealtimeAgentStatesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRealtimeAgentStatesResult::~ListRealtimeAgentStatesResult()
{}

void ListRealtimeAgentStatesResult::parse(const std::string &payload)
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
	auto allListNode = dataNode["List"]["AgentState"];
	for (auto dataNodeListAgentState : allListNode)
	{
		Data::AgentState agentStateObject;
		if(!dataNodeListAgentState["Extension"].isNull())
			agentStateObject.extension = dataNodeListAgentState["Extension"].asString();
		if(!dataNodeListAgentState["StateCode"].isNull())
			agentStateObject.stateCode = dataNodeListAgentState["StateCode"].asString();
		if(!dataNodeListAgentState["State"].isNull())
			agentStateObject.state = dataNodeListAgentState["State"].asString();
		if(!dataNodeListAgentState["AgentId"].isNull())
			agentStateObject.agentId = dataNodeListAgentState["AgentId"].asString();
		if(!dataNodeListAgentState["StateTime"].isNull())
			agentStateObject.stateTime = std::stol(dataNodeListAgentState["StateTime"].asString());
		if(!dataNodeListAgentState["AgentName"].isNull())
			agentStateObject.agentName = dataNodeListAgentState["AgentName"].asString();
		if(!dataNodeListAgentState["InstanceId"].isNull())
			agentStateObject.instanceId = dataNodeListAgentState["InstanceId"].asString();
		if(!dataNodeListAgentState["CounterParty"].isNull())
			agentStateObject.counterParty = dataNodeListAgentState["CounterParty"].asString();
		if(!dataNodeListAgentState["WorkMode"].isNull())
			agentStateObject.workMode = dataNodeListAgentState["WorkMode"].asString();
		if(!dataNodeListAgentState["OutboundScenario"].isNull())
			agentStateObject.outboundScenario = dataNodeListAgentState["OutboundScenario"].asString() == "true";
		if(!dataNodeListAgentState["Mobile"].isNull())
			agentStateObject.mobile = dataNodeListAgentState["Mobile"].asString();
		if(!dataNodeListAgentState["CallType"].isNull())
			agentStateObject.callType = dataNodeListAgentState["CallType"].asString();
		if(!dataNodeListAgentState["Duration"].isNull())
			agentStateObject.duration = std::stol(dataNodeListAgentState["Duration"].asString());
		auto allSkillGroupIdList = value["SkillGroupIdList"]["SkillGroupId"];
		for (auto value : allSkillGroupIdList)
			agentStateObject.skillGroupIdList.push_back(value.asString());
		auto allSkillGroupNameList = value["SkillGroupNameList"]["SkillGroupId"];
		for (auto value : allSkillGroupNameList)
			agentStateObject.skillGroupNameList.push_back(value.asString());
		data_.list.push_back(agentStateObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListRealtimeAgentStatesResult::getMessage()const
{
	return message_;
}

int ListRealtimeAgentStatesResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListRealtimeAgentStatesResult::Data ListRealtimeAgentStatesResult::getData()const
{
	return data_;
}

std::string ListRealtimeAgentStatesResult::getCode()const
{
	return code_;
}

