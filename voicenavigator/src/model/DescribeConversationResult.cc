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

#include <alibabacloud/voicenavigator/model/DescribeConversationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::VoiceNavigator;
using namespace AlibabaCloud::VoiceNavigator::Model;

DescribeConversationResult::DescribeConversationResult() :
	ServiceResult()
{}

DescribeConversationResult::DescribeConversationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeConversationResult::~DescribeConversationResult()
{}

void DescribeConversationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["EffectiveAnswerCount"].isNull())
		effectiveAnswerCount_ = std::stoi(value["EffectiveAnswerCount"].asString());
	if(!value["ConversationId"].isNull())
		conversationId_ = value["ConversationId"].asString();
	if(!value["TransferredToAgent"].isNull())
		transferredToAgent_ = value["TransferredToAgent"].asString() == "true";
	if(!value["EndTime"].isNull())
		endTime_ = std::stol(value["EndTime"].asString());
	if(!value["BeginTime"].isNull())
		beginTime_ = std::stol(value["BeginTime"].asString());
	if(!value["SkillGroupId"].isNull())
		skillGroupId_ = value["SkillGroupId"].asString();
	if(!value["CallingNumber"].isNull())
		callingNumber_ = value["CallingNumber"].asString();
	if(!value["UserUtteranceCount"].isNull())
		userUtteranceCount_ = std::stoi(value["UserUtteranceCount"].asString());

}

int DescribeConversationResult::getEffectiveAnswerCount()const
{
	return effectiveAnswerCount_;
}

std::string DescribeConversationResult::getConversationId()const
{
	return conversationId_;
}

bool DescribeConversationResult::getTransferredToAgent()const
{
	return transferredToAgent_;
}

long DescribeConversationResult::getEndTime()const
{
	return endTime_;
}

long DescribeConversationResult::getBeginTime()const
{
	return beginTime_;
}

std::string DescribeConversationResult::getSkillGroupId()const
{
	return skillGroupId_;
}

std::string DescribeConversationResult::getCallingNumber()const
{
	return callingNumber_;
}

int DescribeConversationResult::getUserUtteranceCount()const
{
	return userUtteranceCount_;
}

