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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allConversations = value["Conversations"]["ConversationDetail"];
	for (auto value : allConversations)
	{
		ConversationDetail conversationsObject;
		if(!value["Timestamp"].isNull())
			conversationsObject.timestamp = std::stol(value["Timestamp"].asString());
		if(!value["Speaker"].isNull())
			conversationsObject.speaker = value["Speaker"].asString();
		if(!value["Script"].isNull())
			conversationsObject.script = value["Script"].asString();
		auto allSummary = value["Summary"]["SummaryItem"];
		for (auto value : allSummary)
		{
			ConversationDetail::SummaryItem summaryObject;
			if(!value["Category"].isNull())
				summaryObject.category = value["Category"].asString();
			if(!value["SummaryName"].isNull())
				summaryObject.summaryName = value["SummaryName"].asString();
			if(!value["Content"].isNull())
				summaryObject.content = value["Content"].asString();
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

