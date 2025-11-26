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

#include <alibabacloud/outboundbot/model/GetAgentProfileResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

GetAgentProfileResult::GetAgentProfileResult() :
	ServiceResult()
{}

GetAgentProfileResult::GetAgentProfileResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAgentProfileResult::~GetAgentProfileResult()
{}

void GetAgentProfileResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["CreateTime"].isNull())
		data_.createTime = dataNode["CreateTime"].asString();
	if(!dataNode["UpdateTime"].isNull())
		data_.updateTime = dataNode["UpdateTime"].asString();
	if(!dataNode["AgentProfileId"].isNull())
		data_.agentProfileId = dataNode["AgentProfileId"].asString();
	if(!dataNode["InstanceId"].isNull())
		data_.instanceId = dataNode["InstanceId"].asString();
	if(!dataNode["ScriptId"].isNull())
		data_.scriptId = dataNode["ScriptId"].asString();
	if(!dataNode["AgentType"].isNull())
		data_.agentType = dataNode["AgentType"].asString();
	if(!dataNode["PromptJson"].isNull())
		data_.promptJson = dataNode["PromptJson"].asString();
	if(!dataNode["Prompt"].isNull())
		data_.prompt = dataNode["Prompt"].asString();
	if(!dataNode["AgentProfileTemplateId"].isNull())
		data_.agentProfileTemplateId = dataNode["AgentProfileTemplateId"].asString();
	if(!dataNode["Model"].isNull())
		data_.model = dataNode["Model"].asString();
	if(!dataNode["ModelConfig"].isNull())
		data_.modelConfig = dataNode["ModelConfig"].asString();
	if(!dataNode["System"].isNull())
		data_.system = dataNode["System"].asString() == "true";
	if(!dataNode["LabelsJson"].isNull())
		data_.labelsJson = dataNode["LabelsJson"].asString();
	if(!dataNode["VariablesJson"].isNull())
		data_.variablesJson = dataNode["VariablesJson"].asString();
	if(!dataNode["Scenario"].isNull())
		data_.scenario = dataNode["Scenario"].asString();
	if(!dataNode["Description"].isNull())
		data_.description = dataNode["Description"].asString();
	if(!dataNode["InstructionJson"].isNull())
		data_.instructionJson = dataNode["InstructionJson"].asString();
	if(!dataNode["ApiPluginJson"].isNull())
		data_.apiPluginJson = dataNode["ApiPluginJson"].asString();
	if(!dataNode["NluConfigJson"].isNull())
		data_.nluConfigJson = dataNode["NluConfigJson"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string GetAgentProfileResult::getMessage()const
{
	return message_;
}

int GetAgentProfileResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetAgentProfileResult::Data GetAgentProfileResult::getData()const
{
	return data_;
}

std::string GetAgentProfileResult::getCode()const
{
	return code_;
}

bool GetAgentProfileResult::getSuccess()const
{
	return success_;
}

