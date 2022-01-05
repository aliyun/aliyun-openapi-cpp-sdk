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

#include <alibabacloud/ccc/model/GetRealtimeInstanceStatesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

GetRealtimeInstanceStatesResult::GetRealtimeInstanceStatesResult() :
	ServiceResult()
{}

GetRealtimeInstanceStatesResult::GetRealtimeInstanceStatesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetRealtimeInstanceStatesResult::~GetRealtimeInstanceStatesResult()
{}

void GetRealtimeInstanceStatesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["WorkingAgents"].isNull())
		data_.workingAgents = std::stol(dataNode["WorkingAgents"].asString());
	if(!dataNode["LongestWaitingTime"].isNull())
		data_.longestWaitingTime = std::stol(dataNode["LongestWaitingTime"].asString());
	if(!dataNode["LoggedInAgents"].isNull())
		data_.loggedInAgents = std::stol(dataNode["LoggedInAgents"].asString());
	if(!dataNode["TotalAgents"].isNull())
		data_.totalAgents = std::stol(dataNode["TotalAgents"].asString());
	if(!dataNode["WaitingCalls"].isNull())
		data_.waitingCalls = std::stol(dataNode["WaitingCalls"].asString());
	if(!dataNode["BreakingAgents"].isNull())
		data_.breakingAgents = std::stol(dataNode["BreakingAgents"].asString());
	if(!dataNode["TalkingAgents"].isNull())
		data_.talkingAgents = std::stol(dataNode["TalkingAgents"].asString());
	if(!dataNode["InteractiveCalls"].isNull())
		data_.interactiveCalls = std::stol(dataNode["InteractiveCalls"].asString());
	if(!dataNode["ReadyAgents"].isNull())
		data_.readyAgents = std::stol(dataNode["ReadyAgents"].asString());
	if(!dataNode["InstanceId"].isNull())
		data_.instanceId = dataNode["InstanceId"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetRealtimeInstanceStatesResult::getMessage()const
{
	return message_;
}

int GetRealtimeInstanceStatesResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetRealtimeInstanceStatesResult::Data GetRealtimeInstanceStatesResult::getData()const
{
	return data_;
}

std::string GetRealtimeInstanceStatesResult::getCode()const
{
	return code_;
}

