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

#include <alibabacloud/outboundbot/model/ListDialogueFlowsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

ListDialogueFlowsResult::ListDialogueFlowsResult() :
	ServiceResult()
{}

ListDialogueFlowsResult::ListDialogueFlowsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDialogueFlowsResult::~ListDialogueFlowsResult()
{}

void ListDialogueFlowsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDialogueFlowsNode = value["DialogueFlows"]["DialogueFlow"];
	for (auto valueDialogueFlowsDialogueFlow : allDialogueFlowsNode)
	{
		DialogueFlow dialogueFlowsObject;
		if(!valueDialogueFlowsDialogueFlow["DialogueFlowDefinition"].isNull())
			dialogueFlowsObject.dialogueFlowDefinition = valueDialogueFlowsDialogueFlow["DialogueFlowDefinition"].asString();
		if(!valueDialogueFlowsDialogueFlow["DialogueFlowType"].isNull())
			dialogueFlowsObject.dialogueFlowType = valueDialogueFlowsDialogueFlow["DialogueFlowType"].asString();
		if(!valueDialogueFlowsDialogueFlow["DialogueFlowId"].isNull())
			dialogueFlowsObject.dialogueFlowId = valueDialogueFlowsDialogueFlow["DialogueFlowId"].asString();
		if(!valueDialogueFlowsDialogueFlow["DialogueFlowName"].isNull())
			dialogueFlowsObject.dialogueFlowName = valueDialogueFlowsDialogueFlow["DialogueFlowName"].asString();
		if(!valueDialogueFlowsDialogueFlow["ScriptId"].isNull())
			dialogueFlowsObject.scriptId = valueDialogueFlowsDialogueFlow["ScriptId"].asString();
		if(!valueDialogueFlowsDialogueFlow["ScriptVersion"].isNull())
			dialogueFlowsObject.scriptVersion = valueDialogueFlowsDialogueFlow["ScriptVersion"].asString();
		dialogueFlows_.push_back(dialogueFlowsObject);
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

std::string ListDialogueFlowsResult::getMessage()const
{
	return message_;
}

int ListDialogueFlowsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListDialogueFlowsResult::getCode()const
{
	return code_;
}

bool ListDialogueFlowsResult::getSuccess()const
{
	return success_;
}

std::vector<ListDialogueFlowsResult::DialogueFlow> ListDialogueFlowsResult::getDialogueFlows()const
{
	return dialogueFlows_;
}

