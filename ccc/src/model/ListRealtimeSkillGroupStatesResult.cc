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

#include <alibabacloud/ccc/model/ListRealtimeSkillGroupStatesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListRealtimeSkillGroupStatesResult::ListRealtimeSkillGroupStatesResult() :
	ServiceResult()
{}

ListRealtimeSkillGroupStatesResult::ListRealtimeSkillGroupStatesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRealtimeSkillGroupStatesResult::~ListRealtimeSkillGroupStatesResult()
{}

void ListRealtimeSkillGroupStatesResult::parse(const std::string &payload)
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
	auto allListNode = dataNode["List"]["SkillGroupState"];
	for (auto dataNodeListSkillGroupState : allListNode)
	{
		Data::SkillGroupState skillGroupStateObject;
		if(!dataNodeListSkillGroupState["WorkingAgents"].isNull())
			skillGroupStateObject.workingAgents = std::stol(dataNodeListSkillGroupState["WorkingAgents"].asString());
		if(!dataNodeListSkillGroupState["LongestWaitingTime"].isNull())
			skillGroupStateObject.longestWaitingTime = std::stol(dataNodeListSkillGroupState["LongestWaitingTime"].asString());
		if(!dataNodeListSkillGroupState["LoggedInAgents"].isNull())
			skillGroupStateObject.loggedInAgents = std::stol(dataNodeListSkillGroupState["LoggedInAgents"].asString());
		if(!dataNodeListSkillGroupState["WaitingCalls"].isNull())
			skillGroupStateObject.waitingCalls = std::stol(dataNodeListSkillGroupState["WaitingCalls"].asString());
		if(!dataNodeListSkillGroupState["BreakingAgents"].isNull())
			skillGroupStateObject.breakingAgents = std::stol(dataNodeListSkillGroupState["BreakingAgents"].asString());
		if(!dataNodeListSkillGroupState["TalkingAgents"].isNull())
			skillGroupStateObject.talkingAgents = std::stol(dataNodeListSkillGroupState["TalkingAgents"].asString());
		if(!dataNodeListSkillGroupState["SkillGroupName"].isNull())
			skillGroupStateObject.skillGroupName = dataNodeListSkillGroupState["SkillGroupName"].asString();
		if(!dataNodeListSkillGroupState["SkillGroupId"].isNull())
			skillGroupStateObject.skillGroupId = dataNodeListSkillGroupState["SkillGroupId"].asString();
		if(!dataNodeListSkillGroupState["ReadyAgents"].isNull())
			skillGroupStateObject.readyAgents = std::stol(dataNodeListSkillGroupState["ReadyAgents"].asString());
		if(!dataNodeListSkillGroupState["InstanceId"].isNull())
			skillGroupStateObject.instanceId = dataNodeListSkillGroupState["InstanceId"].asString();
		if(!dataNodeListSkillGroupState["OutboundScenarioReadyAgents"].isNull())
			skillGroupStateObject.outboundScenarioReadyAgents = std::stol(dataNodeListSkillGroupState["OutboundScenarioReadyAgents"].asString());
		data_.list.push_back(skillGroupStateObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListRealtimeSkillGroupStatesResult::getMessage()const
{
	return message_;
}

int ListRealtimeSkillGroupStatesResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListRealtimeSkillGroupStatesResult::Data ListRealtimeSkillGroupStatesResult::getData()const
{
	return data_;
}

std::string ListRealtimeSkillGroupStatesResult::getCode()const
{
	return code_;
}

