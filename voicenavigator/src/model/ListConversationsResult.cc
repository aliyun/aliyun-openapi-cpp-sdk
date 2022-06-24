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

#include <alibabacloud/voicenavigator/model/ListConversationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::VoiceNavigator;
using namespace AlibabaCloud::VoiceNavigator::Model;

ListConversationsResult::ListConversationsResult() :
	ServiceResult()
{}

ListConversationsResult::ListConversationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListConversationsResult::~ListConversationsResult()
{}

void ListConversationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allConversationsNode = value["Conversations"]["Conversation"];
	for (auto valueConversationsConversation : allConversationsNode)
	{
		Conversation conversationsObject;
		if(!valueConversationsConversation["EndTime"].isNull())
			conversationsObject.endTime = std::stol(valueConversationsConversation["EndTime"].asString());
		if(!valueConversationsConversation["HasToAgent"].isNull())
			conversationsObject.hasToAgent = valueConversationsConversation["HasToAgent"].asString() == "true";
		if(!valueConversationsConversation["StartTime"].isNull())
			conversationsObject.startTime = std::stol(valueConversationsConversation["StartTime"].asString());
		if(!valueConversationsConversation["SkillGroup"].isNull())
			conversationsObject.skillGroup = valueConversationsConversation["SkillGroup"].asString();
		if(!valueConversationsConversation["ConversationId"].isNull())
			conversationsObject.conversationId = valueConversationsConversation["ConversationId"].asString();
		if(!valueConversationsConversation["CallingNumber"].isNull())
			conversationsObject.callingNumber = valueConversationsConversation["CallingNumber"].asString();
		if(!valueConversationsConversation["EndReason"].isNull())
			conversationsObject.endReason = std::stoi(valueConversationsConversation["EndReason"].asString());
		if(!valueConversationsConversation["Rounds"].isNull())
			conversationsObject.rounds = std::stoi(valueConversationsConversation["Rounds"].asString());
		if(!valueConversationsConversation["HasLastPlaybackCompleted"].isNull())
			conversationsObject.hasLastPlaybackCompleted = valueConversationsConversation["HasLastPlaybackCompleted"].asString() == "true";
		if(!valueConversationsConversation["SandBox"].isNull())
			conversationsObject.sandBox = valueConversationsConversation["SandBox"].asString() == "true";
		if(!valueConversationsConversation["CalledNumber"].isNull())
			conversationsObject.calledNumber = valueConversationsConversation["CalledNumber"].asString();
		conversations_.push_back(conversationsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

long ListConversationsResult::getTotalCount()const
{
	return totalCount_;
}

int ListConversationsResult::getPageSize()const
{
	return pageSize_;
}

int ListConversationsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListConversationsResult::Conversation> ListConversationsResult::getConversations()const
{
	return conversations_;
}

