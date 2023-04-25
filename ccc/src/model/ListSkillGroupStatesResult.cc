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

#include <alibabacloud/ccc/model/ListSkillGroupStatesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListSkillGroupStatesResult::ListSkillGroupStatesResult() :
	ServiceResult()
{}

ListSkillGroupStatesResult::ListSkillGroupStatesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSkillGroupStatesResult::~ListSkillGroupStatesResult()
{}

void ListSkillGroupStatesResult::parse(const std::string &payload)
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
	auto allListNode = dataNode["List"]["RealTimeSkillGroupState"];
	for (auto dataNodeListRealTimeSkillGroupState : allListNode)
	{
		Data::RealTimeSkillGroupState realTimeSkillGroupStateObject;
		if(!dataNodeListRealTimeSkillGroupState["WorkingAgents"].isNull())
			realTimeSkillGroupStateObject.workingAgents = std::stol(dataNodeListRealTimeSkillGroupState["WorkingAgents"].asString());
		if(!dataNodeListRealTimeSkillGroupState["LoggedInAgents"].isNull())
			realTimeSkillGroupStateObject.loggedInAgents = std::stol(dataNodeListRealTimeSkillGroupState["LoggedInAgents"].asString());
		if(!dataNodeListRealTimeSkillGroupState["BreakingAgents"].isNull())
			realTimeSkillGroupStateObject.breakingAgents = std::stol(dataNodeListRealTimeSkillGroupState["BreakingAgents"].asString());
		if(!dataNodeListRealTimeSkillGroupState["LongestCall"].isNull())
			realTimeSkillGroupStateObject.longestCall = std::stol(dataNodeListRealTimeSkillGroupState["LongestCall"].asString());
		if(!dataNodeListRealTimeSkillGroupState["WaitingCalls"].isNull())
			realTimeSkillGroupStateObject.waitingCalls = std::stol(dataNodeListRealTimeSkillGroupState["WaitingCalls"].asString());
		if(!dataNodeListRealTimeSkillGroupState["TalkingAgents"].isNull())
			realTimeSkillGroupStateObject.talkingAgents = std::stol(dataNodeListRealTimeSkillGroupState["TalkingAgents"].asString());
		if(!dataNodeListRealTimeSkillGroupState["SkillGroupName"].isNull())
			realTimeSkillGroupStateObject.skillGroupName = dataNodeListRealTimeSkillGroupState["SkillGroupName"].asString();
		if(!dataNodeListRealTimeSkillGroupState["SkillGroupId"].isNull())
			realTimeSkillGroupStateObject.skillGroupId = dataNodeListRealTimeSkillGroupState["SkillGroupId"].asString();
		if(!dataNodeListRealTimeSkillGroupState["ReadyAgents"].isNull())
			realTimeSkillGroupStateObject.readyAgents = std::stol(dataNodeListRealTimeSkillGroupState["ReadyAgents"].asString());
		if(!dataNodeListRealTimeSkillGroupState["InstanceId"].isNull())
			realTimeSkillGroupStateObject.instanceId = dataNodeListRealTimeSkillGroupState["InstanceId"].asString();
		if(!dataNodeListRealTimeSkillGroupState["AverageWaitingTime"].isNull())
			realTimeSkillGroupStateObject.averageWaitingTime = std::stol(dataNodeListRealTimeSkillGroupState["AverageWaitingTime"].asString());
		if(!dataNodeListRealTimeSkillGroupState["WaitingCallsLevel10"].isNull())
			realTimeSkillGroupStateObject.waitingCallsLevel10 = std::stol(dataNodeListRealTimeSkillGroupState["WaitingCallsLevel10"].asString());
		if(!dataNodeListRealTimeSkillGroupState["WaitingCallsLevel20"].isNull())
			realTimeSkillGroupStateObject.waitingCallsLevel20 = std::stol(dataNodeListRealTimeSkillGroupState["WaitingCallsLevel20"].asString());
		if(!dataNodeListRealTimeSkillGroupState["WaitingCallsLevel30"].isNull())
			realTimeSkillGroupStateObject.waitingCallsLevel30 = std::stol(dataNodeListRealTimeSkillGroupState["WaitingCallsLevel30"].asString());
		if(!dataNodeListRealTimeSkillGroupState["OutboundScenarioReadyAgents"].isNull())
			realTimeSkillGroupStateObject.outboundScenarioReadyAgents = std::stol(dataNodeListRealTimeSkillGroupState["OutboundScenarioReadyAgents"].asString());
		if(!dataNodeListRealTimeSkillGroupState["InboundTalkingAgents"].isNull())
			realTimeSkillGroupStateObject.inboundTalkingAgents = std::stol(dataNodeListRealTimeSkillGroupState["InboundTalkingAgents"].asString());
		if(!dataNodeListRealTimeSkillGroupState["OutboundTalkingAgents"].isNull())
			realTimeSkillGroupStateObject.outboundTalkingAgents = std::stol(dataNodeListRealTimeSkillGroupState["OutboundTalkingAgents"].asString());
		data_.list.push_back(realTimeSkillGroupStateObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListSkillGroupStatesResult::getMessage()const
{
	return message_;
}

int ListSkillGroupStatesResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListSkillGroupStatesResult::Data ListSkillGroupStatesResult::getData()const
{
	return data_;
}

std::string ListSkillGroupStatesResult::getCode()const
{
	return code_;
}

bool ListSkillGroupStatesResult::getSuccess()const
{
	return success_;
}

