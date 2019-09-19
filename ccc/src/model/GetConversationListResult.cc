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

#include <alibabacloud/ccc/model/GetConversationListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

GetConversationListResult::GetConversationListResult() :
	ServiceResult()
{}

GetConversationListResult::GetConversationListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetConversationListResult::~GetConversationListResult()
{}

void GetConversationListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allConversationsNode = value["Conversations"]["ConversationDetail"];
	for (auto valueConversationsConversationDetail : allConversationsNode)
	{
		ConversationDetail conversationsObject;
		if(!valueConversationsConversationDetail["Timestamp"].isNull())
			conversationsObject.timestamp = std::stol(valueConversationsConversationDetail["Timestamp"].asString());
		if(!valueConversationsConversationDetail["Speaker"].isNull())
			conversationsObject.speaker = valueConversationsConversationDetail["Speaker"].asString();
		if(!valueConversationsConversationDetail["Script"].isNull())
			conversationsObject.script = valueConversationsConversationDetail["Script"].asString();
		auto allSummaryNode = allConversationsNode["Summary"]["SummaryItem"];
		for (auto allConversationsNodeSummarySummaryItem : allSummaryNode)
		{
			ConversationDetail::SummaryItem summaryObject;
			if(!allConversationsNodeSummarySummaryItem["Category"].isNull())
				summaryObject.category = allConversationsNodeSummarySummaryItem["Category"].asString();
			if(!allConversationsNodeSummarySummaryItem["SummaryName"].isNull())
				summaryObject.summaryName = allConversationsNodeSummarySummaryItem["SummaryName"].asString();
			if(!allConversationsNodeSummarySummaryItem["Content"].isNull())
				summaryObject.content = allConversationsNodeSummarySummaryItem["Content"].asString();
			conversationsObject.summary.push_back(summaryObject);
		}
		conversations_.push_back(conversationsObject);
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

std::string GetConversationListResult::getMessage()const
{
	return message_;
}

int GetConversationListResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<GetConversationListResult::ConversationDetail> GetConversationListResult::getConversations()const
{
	return conversations_;
}

std::string GetConversationListResult::getCode()const
{
	return code_;
}

bool GetConversationListResult::getSuccess()const
{
	return success_;
}

