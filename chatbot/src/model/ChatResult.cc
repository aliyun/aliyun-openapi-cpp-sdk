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

#include <alibabacloud/chatbot/model/ChatResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Chatbot;
using namespace AlibabaCloud::Chatbot::Model;

ChatResult::ChatResult() :
	ServiceResult()
{}

ChatResult::ChatResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ChatResult::~ChatResult()
{}

void ChatResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allMessages = value["Messages"]["Message"];
	for (auto value : allMessages)
	{
		Message messagesObject;
		if(!value["Type"].isNull())
			messagesObject.type = value["Type"].asString();
		auto allRecommends = value["Recommends"]["Recommend"];
		for (auto value : allRecommends)
		{
			Message::Recommend recommendsObject;
			if(!value["KnowledgeId"].isNull())
				recommendsObject.knowledgeId = value["KnowledgeId"].asString();
			if(!value["Title"].isNull())
				recommendsObject.title = value["Title"].asString();
			if(!value["AnswerSource"].isNull())
				recommendsObject.answerSource = value["AnswerSource"].asString();
			if(!value["Summary"].isNull())
				recommendsObject.summary = value["Summary"].asString();
			if(!value["Content"].isNull())
				recommendsObject.content = value["Content"].asString();
			messagesObject.recommends.push_back(recommendsObject);
		}
		auto textNode = value["Text"];
		if(!textNode["Content"].isNull())
			messagesObject.text.content = textNode["Content"].asString();
		if(!textNode["AnswerSource"].isNull())
			messagesObject.text.answerSource = textNode["AnswerSource"].asString();
		auto knowledgeNode = value["Knowledge"];
		if(!knowledgeNode["Id"].isNull())
			messagesObject.knowledge.id = knowledgeNode["Id"].asString();
		if(!knowledgeNode["Title"].isNull())
			messagesObject.knowledge.title = knowledgeNode["Title"].asString();
		if(!knowledgeNode["Summary"].isNull())
			messagesObject.knowledge.summary = knowledgeNode["Summary"].asString();
		if(!knowledgeNode["Content"].isNull())
			messagesObject.knowledge.content = knowledgeNode["Content"].asString();
		if(!knowledgeNode["AnswerSource"].isNull())
			messagesObject.knowledge.answerSource = knowledgeNode["AnswerSource"].asString();
		messages_.push_back(messagesObject);
	}
	if(!value["SessionId"].isNull())
		sessionId_ = value["SessionId"].asString();
	if(!value["MessageId"].isNull())
		messageId_ = value["MessageId"].asString();
	if(!value["Tag"].isNull())
		tag_ = value["Tag"].asString();

}

std::vector<ChatResult::Message> ChatResult::getMessages()const
{
	return messages_;
}

std::string ChatResult::getTag()const
{
	return tag_;
}

std::string ChatResult::getSessionId()const
{
	return sessionId_;
}

std::string ChatResult::getMessageId()const
{
	return messageId_;
}

