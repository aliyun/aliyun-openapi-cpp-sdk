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

#include <alibabacloud/cams/model/BeeBotChatResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cams;
using namespace AlibabaCloud::Cams::Model;

BeeBotChatResult::BeeBotChatResult() :
	ServiceResult()
{}

BeeBotChatResult::BeeBotChatResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

BeeBotChatResult::~BeeBotChatResult()
{}

void BeeBotChatResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["MessageId"].isNull())
		data_.messageId = dataNode["MessageId"].asString();
	if(!dataNode["SessionId"].isNull())
		data_.sessionId = dataNode["SessionId"].asString();
	auto allMessagesNode = dataNode["Messages"]["消息的列表"];
	for (auto dataNodeMessages消息的列表 : allMessagesNode)
	{
		Data::消息的列表 消息的列表Object;
		if(!dataNodeMessages消息的列表["AnswerType"].isNull())
			消息的列表Object.answerType = dataNodeMessages消息的列表["AnswerType"].asString();
		if(!dataNodeMessages消息的列表["AnswerSource"].isNull())
			消息的列表Object.answerSource = dataNodeMessages消息的列表["AnswerSource"].asString();
		auto allRecommendsNode = dataNodeMessages消息的列表["Recommends"]["Recommend"];
		for (auto dataNodeMessages消息的列表RecommendsRecommend : allRecommendsNode)
		{
			Data::消息的列表::Recommend recommendsObject;
			if(!dataNodeMessages消息的列表RecommendsRecommend["KnowledgeId"].isNull())
				recommendsObject.knowledgeId = dataNodeMessages消息的列表RecommendsRecommend["KnowledgeId"].asString();
			if(!dataNodeMessages消息的列表RecommendsRecommend["Title"].isNull())
				recommendsObject.title = dataNodeMessages消息的列表RecommendsRecommend["Title"].asString();
			if(!dataNodeMessages消息的列表RecommendsRecommend["AnswerSource"].isNull())
				recommendsObject.answerSource = dataNodeMessages消息的列表RecommendsRecommend["AnswerSource"].asString();
			消息的列表Object.recommends.push_back(recommendsObject);
		}
		auto knowledgeNode = value["Knowledge"];
		if(!knowledgeNode["HitStatement"].isNull())
			消息的列表Object.knowledge.hitStatement = knowledgeNode["HitStatement"].asString();
		if(!knowledgeNode["Summary"].isNull())
			消息的列表Object.knowledge.summary = knowledgeNode["Summary"].asString();
		if(!knowledgeNode["Category"].isNull())
			消息的列表Object.knowledge.category = knowledgeNode["Category"].asString();
		if(!knowledgeNode["Title"].isNull())
			消息的列表Object.knowledge.title = knowledgeNode["Title"].asString();
		if(!knowledgeNode["Content"].isNull())
			消息的列表Object.knowledge.content = knowledgeNode["Content"].asString();
		if(!knowledgeNode["AnswerSource"].isNull())
			消息的列表Object.knowledge.answerSource = knowledgeNode["AnswerSource"].asString();
		if(!knowledgeNode["Id"].isNull())
			消息的列表Object.knowledge.id = knowledgeNode["Id"].asString();
		if(!knowledgeNode["ContentType"].isNull())
			消息的列表Object.knowledge.contentType = knowledgeNode["ContentType"].asString();
		auto allRelatedKnowledgesNode = knowledgeNode["RelatedKnowledges"]["RelatedKnowledgesItem"];
		for (auto knowledgeNodeRelatedKnowledgesRelatedKnowledgesItem : allRelatedKnowledgesNode)
		{
			Data::消息的列表::Knowledge::RelatedKnowledgesItem relatedKnowledgesItemObject;
			if(!knowledgeNodeRelatedKnowledgesRelatedKnowledgesItem["KnowledgeId"].isNull())
				relatedKnowledgesItemObject.knowledgeId = knowledgeNodeRelatedKnowledgesRelatedKnowledgesItem["KnowledgeId"].asString();
			if(!knowledgeNodeRelatedKnowledgesRelatedKnowledgesItem["Title"].isNull())
				relatedKnowledgesItemObject.title = knowledgeNodeRelatedKnowledgesRelatedKnowledgesItem["Title"].asString();
			消息的列表Object.knowledge.relatedKnowledges.push_back(relatedKnowledgesItemObject);
		}
		auto textNode = value["Text"];
		if(!textNode["HitStatement"].isNull())
			消息的列表Object.text.hitStatement = textNode["HitStatement"].asString();
		if(!textNode["DialogName"].isNull())
			消息的列表Object.text.dialogName = textNode["DialogName"].asString();
		if(!textNode["AnswerSource"].isNull())
			消息的列表Object.text.answerSource = textNode["AnswerSource"].asString();
		if(!textNode["NodeName"].isNull())
			消息的列表Object.text.nodeName = textNode["NodeName"].asString();
		if(!textNode["IntentName"].isNull())
			消息的列表Object.text.intentName = textNode["IntentName"].asString();
		if(!textNode["MetaData"].isNull())
			消息的列表Object.text.metaData = textNode["MetaData"].asString();
		if(!textNode["ExternalFlags"].isNull())
			消息的列表Object.text.externalFlags = textNode["ExternalFlags"].asString();
		if(!textNode["Ext"].isNull())
			消息的列表Object.text.ext = textNode["Ext"].asString();
		if(!textNode["UserDefinedChatTitle"].isNull())
			消息的列表Object.text.userDefinedChatTitle = textNode["UserDefinedChatTitle"].asString();
		if(!textNode["Content"].isNull())
			消息的列表Object.text.content = textNode["Content"].asString();
		if(!textNode["NodeId"].isNull())
			消息的列表Object.text.nodeId = textNode["NodeId"].asString();
		if(!textNode["ContentType"].isNull())
			消息的列表Object.text.contentType = textNode["ContentType"].asString();
		auto allSlotsNode = textNode["Slots"]["SlotsItem"];
		for (auto textNodeSlotsSlotsItem : allSlotsNode)
		{
			Data::消息的列表::Text::SlotsItem slotsItemObject;
			if(!textNodeSlotsSlotsItem["Value"].isNull())
				slotsItemObject.value = textNodeSlotsSlotsItem["Value"].asString();
			if(!textNodeSlotsSlotsItem["Origin"].isNull())
				slotsItemObject.origin = textNodeSlotsSlotsItem["Origin"].asString();
			if(!textNodeSlotsSlotsItem["Name"].isNull())
				slotsItemObject.name = textNodeSlotsSlotsItem["Name"].asString();
			if(!textNodeSlotsSlotsItem["Hit"].isNull())
				slotsItemObject.hit = textNodeSlotsSlotsItem["Hit"].asString() == "true";
			消息的列表Object.text.slots.push_back(slotsItemObject);
		}
		data_.messages.push_back(消息的列表Object);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["AccessDeniedDetail"].isNull())
		accessDeniedDetail_ = value["AccessDeniedDetail"].asString();

}

std::string BeeBotChatResult::getAccessDeniedDetail()const
{
	return accessDeniedDetail_;
}

std::string BeeBotChatResult::getMessage()const
{
	return message_;
}

BeeBotChatResult::Data BeeBotChatResult::getData()const
{
	return data_;
}

std::string BeeBotChatResult::getCode()const
{
	return code_;
}

