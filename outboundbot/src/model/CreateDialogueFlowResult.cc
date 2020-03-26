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

#include <alibabacloud/outboundbot/model/CreateDialogueFlowResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

CreateDialogueFlowResult::CreateDialogueFlowResult() :
	ServiceResult()
{}

CreateDialogueFlowResult::CreateDialogueFlowResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateDialogueFlowResult::~CreateDialogueFlowResult()
{}

void CreateDialogueFlowResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["DialogueFlowId"].isNull())
		dialogueFlowId_ = value["DialogueFlowId"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string CreateDialogueFlowResult::getMessage()const
{
	return message_;
}

int CreateDialogueFlowResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string CreateDialogueFlowResult::getDialogueFlowId()const
{
	return dialogueFlowId_;
}

std::string CreateDialogueFlowResult::getCode()const
{
	return code_;
}

bool CreateDialogueFlowResult::getSuccess()const
{
	return success_;
}

