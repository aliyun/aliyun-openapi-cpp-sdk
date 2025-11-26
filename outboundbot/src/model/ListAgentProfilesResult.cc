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

#include <alibabacloud/outboundbot/model/ListAgentProfilesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

ListAgentProfilesResult::ListAgentProfilesResult() :
	ServiceResult()
{}

ListAgentProfilesResult::ListAgentProfilesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAgentProfilesResult::~ListAgentProfilesResult()
{}

void ListAgentProfilesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["CreateTime"].isNull())
			dataObject.createTime = valueDataDataItem["CreateTime"].asString();
		if(!valueDataDataItem["UpdateTime"].isNull())
			dataObject.updateTime = valueDataDataItem["UpdateTime"].asString();
		if(!valueDataDataItem["AgentProfileId"].isNull())
			dataObject.agentProfileId = valueDataDataItem["AgentProfileId"].asString();
		if(!valueDataDataItem["InstanceId"].isNull())
			dataObject.instanceId = valueDataDataItem["InstanceId"].asString();
		if(!valueDataDataItem["ScriptId"].isNull())
			dataObject.scriptId = valueDataDataItem["ScriptId"].asString();
		if(!valueDataDataItem["AgentType"].isNull())
			dataObject.agentType = valueDataDataItem["AgentType"].asString();
		if(!valueDataDataItem["PromptJson"].isNull())
			dataObject.promptJson = valueDataDataItem["PromptJson"].asString();
		if(!valueDataDataItem["Prompt"].isNull())
			dataObject.prompt = valueDataDataItem["Prompt"].asString();
		if(!valueDataDataItem["AgentProfileTemplateId"].isNull())
			dataObject.agentProfileTemplateId = valueDataDataItem["AgentProfileTemplateId"].asString();
		if(!valueDataDataItem["Model"].isNull())
			dataObject.model = valueDataDataItem["Model"].asString();
		if(!valueDataDataItem["ModelConfig"].isNull())
			dataObject.modelConfig = valueDataDataItem["ModelConfig"].asString();
		if(!valueDataDataItem["System"].isNull())
			dataObject.system = valueDataDataItem["System"].asString() == "true";
		if(!valueDataDataItem["LabelsJson"].isNull())
			dataObject.labelsJson = valueDataDataItem["LabelsJson"].asString();
		if(!valueDataDataItem["VariablesJson"].isNull())
			dataObject.variablesJson = valueDataDataItem["VariablesJson"].asString();
		if(!valueDataDataItem["Scenario"].isNull())
			dataObject.scenario = valueDataDataItem["Scenario"].asString();
		if(!valueDataDataItem["Description"].isNull())
			dataObject.description = valueDataDataItem["Description"].asString();
		if(!valueDataDataItem["InstructionJson"].isNull())
			dataObject.instructionJson = valueDataDataItem["InstructionJson"].asString();
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

std::string ListAgentProfilesResult::getMessage()const
{
	return message_;
}

int ListAgentProfilesResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<ListAgentProfilesResult::DataItem> ListAgentProfilesResult::getData()const
{
	return data_;
}

std::string ListAgentProfilesResult::getCode()const
{
	return code_;
}

bool ListAgentProfilesResult::getSuccess()const
{
	return success_;
}

