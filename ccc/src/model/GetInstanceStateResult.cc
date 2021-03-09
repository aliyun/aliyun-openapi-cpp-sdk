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

#include <alibabacloud/ccc/model/GetInstanceStateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

GetInstanceStateResult::GetInstanceStateResult() :
	ServiceResult()
{}

GetInstanceStateResult::GetInstanceStateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetInstanceStateResult::~GetInstanceStateResult()
{}

void GetInstanceStateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto realTimeInstanceStateNode = value["RealTimeInstanceState"];
	auto allAgentStateDistributionsNode = realTimeInstanceStateNode["AgentStateDistributions"]["AgentStateCount"];
	for (auto realTimeInstanceStateNodeAgentStateDistributionsAgentStateCount : allAgentStateDistributionsNode)
	{
		RealTimeInstanceState::AgentStateCount agentStateCountObject;
		if(!realTimeInstanceStateNodeAgentStateDistributionsAgentStateCount["State"].isNull())
			agentStateCountObject.state = realTimeInstanceStateNodeAgentStateDistributionsAgentStateCount["State"].asString();
		if(!realTimeInstanceStateNodeAgentStateDistributionsAgentStateCount["Count"].isNull())
			agentStateCountObject.count = std::stol(realTimeInstanceStateNodeAgentStateDistributionsAgentStateCount["Count"].asString());
		realTimeInstanceState_.agentStateDistributions.push_back(agentStateCountObject);
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

std::string GetInstanceStateResult::getMessage()const
{
	return message_;
}

int GetInstanceStateResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string GetInstanceStateResult::getCode()const
{
	return code_;
}

GetInstanceStateResult::RealTimeInstanceState GetInstanceStateResult::getRealTimeInstanceState()const
{
	return realTimeInstanceState_;
}

bool GetInstanceStateResult::getSuccess()const
{
	return success_;
}

