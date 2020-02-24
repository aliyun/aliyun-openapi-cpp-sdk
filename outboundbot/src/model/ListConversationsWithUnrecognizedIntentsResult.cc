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

#include <alibabacloud/outboundbot/model/ListConversationsWithUnrecognizedIntentsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

ListConversationsWithUnrecognizedIntentsResult::ListConversationsWithUnrecognizedIntentsResult() :
	ServiceResult()
{}

ListConversationsWithUnrecognizedIntentsResult::ListConversationsWithUnrecognizedIntentsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListConversationsWithUnrecognizedIntentsResult::~ListConversationsWithUnrecognizedIntentsResult()
{}

void ListConversationsWithUnrecognizedIntentsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allConversationsWithUnrecognizedIntentsNode = value["ConversationsWithUnrecognizedIntents"]["ConversationsWithUnrecognizedIntent"];
	for (auto valueConversationsWithUnrecognizedIntentsConversationsWithUnrecognizedIntent : allConversationsWithUnrecognizedIntentsNode)
	{
		ConversationsWithUnrecognizedIntent conversationsWithUnrecognizedIntentsObject;
		if(!valueConversationsWithUnrecognizedIntentsConversationsWithUnrecognizedIntent["ConversationsWithUnrecognizedIntentId"].isNull())
			conversationsWithUnrecognizedIntentsObject.conversationsWithUnrecognizedIntentId = valueConversationsWithUnrecognizedIntentsConversationsWithUnrecognizedIntent["ConversationsWithUnrecognizedIntentId"].asString();
		if(!valueConversationsWithUnrecognizedIntentsConversationsWithUnrecognizedIntent["JobId"].isNull())
			conversationsWithUnrecognizedIntentsObject.jobId = valueConversationsWithUnrecognizedIntentsConversationsWithUnrecognizedIntent["JobId"].asString();
		auto allConversationNode = allConversationsWithUnrecognizedIntentsNode["Conversation"]["ConversationDetail"];
		for (auto allConversationsWithUnrecognizedIntentsNodeConversationConversationDetail : allConversationNode)
		{
			ConversationsWithUnrecognizedIntent::ConversationDetail conversationObject;
			if(!allConversationsWithUnrecognizedIntentsNodeConversationConversationDetail["Id"].isNull())
				conversationObject.id = allConversationsWithUnrecognizedIntentsNodeConversationConversationDetail["Id"].asString();
			if(!allConversationsWithUnrecognizedIntentsNodeConversationConversationDetail["Timestamp"].isNull())
				conversationObject.timestamp = std::stol(allConversationsWithUnrecognizedIntentsNodeConversationConversationDetail["Timestamp"].asString());
			if(!allConversationsWithUnrecognizedIntentsNodeConversationConversationDetail["Speaker"].isNull())
				conversationObject.speaker = allConversationsWithUnrecognizedIntentsNodeConversationConversationDetail["Speaker"].asString();
			if(!allConversationsWithUnrecognizedIntentsNodeConversationConversationDetail["Script"].isNull())
				conversationObject.script = allConversationsWithUnrecognizedIntentsNodeConversationConversationDetail["Script"].asString();
			if(!allConversationsWithUnrecognizedIntentsNodeConversationConversationDetail["NodeId"].isNull())
				conversationObject.nodeId = allConversationsWithUnrecognizedIntentsNodeConversationConversationDetail["NodeId"].asString();
			conversationsWithUnrecognizedIntentsObject.conversation.push_back(conversationObject);
		}
		auto contactNode = value["Contact"];
		if(!contactNode["ContactId"].isNull())
			conversationsWithUnrecognizedIntentsObject.contact.contactId = contactNode["ContactId"].asString();
		if(!contactNode["ContactName"].isNull())
			conversationsWithUnrecognizedIntentsObject.contact.contactName = contactNode["ContactName"].asString();
		if(!contactNode["Honorific"].isNull())
			conversationsWithUnrecognizedIntentsObject.contact.honorific = contactNode["Honorific"].asString();
		if(!contactNode["Role"].isNull())
			conversationsWithUnrecognizedIntentsObject.contact.role = contactNode["Role"].asString();
		if(!contactNode["PhoneNumber"].isNull())
			conversationsWithUnrecognizedIntentsObject.contact.phoneNumber = contactNode["PhoneNumber"].asString();
		if(!contactNode["State"].isNull())
			conversationsWithUnrecognizedIntentsObject.contact.state = contactNode["State"].asString();
		if(!contactNode["ReferenceId"].isNull())
			conversationsWithUnrecognizedIntentsObject.contact.referenceId = contactNode["ReferenceId"].asString();
		if(!contactNode["JobId"].isNull())
			conversationsWithUnrecognizedIntentsObject.contact.jobId = contactNode["JobId"].asString();
		conversationsWithUnrecognizedIntents_.push_back(conversationsWithUnrecognizedIntentsObject);
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

std::string ListConversationsWithUnrecognizedIntentsResult::getMessage()const
{
	return message_;
}

std::vector<ListConversationsWithUnrecognizedIntentsResult::ConversationsWithUnrecognizedIntent> ListConversationsWithUnrecognizedIntentsResult::getConversationsWithUnrecognizedIntents()const
{
	return conversationsWithUnrecognizedIntents_;
}

int ListConversationsWithUnrecognizedIntentsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListConversationsWithUnrecognizedIntentsResult::getCode()const
{
	return code_;
}

bool ListConversationsWithUnrecognizedIntentsResult::getSuccess()const
{
	return success_;
}

