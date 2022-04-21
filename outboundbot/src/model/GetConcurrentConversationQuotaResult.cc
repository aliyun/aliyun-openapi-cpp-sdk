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

#include <alibabacloud/outboundbot/model/GetConcurrentConversationQuotaResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

GetConcurrentConversationQuotaResult::GetConcurrentConversationQuotaResult() :
	ServiceResult()
{}

GetConcurrentConversationQuotaResult::GetConcurrentConversationQuotaResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetConcurrentConversationQuotaResult::~GetConcurrentConversationQuotaResult()
{}

void GetConcurrentConversationQuotaResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["RemainingConcurrent"].isNull())
		remainingConcurrent_ = std::stoi(value["RemainingConcurrent"].asString());
	if(!value["MaxConcurrent"].isNull())
		maxConcurrent_ = std::stoi(value["MaxConcurrent"].asString());

}

int GetConcurrentConversationQuotaResult::getRemainingConcurrent()const
{
	return remainingConcurrent_;
}

std::string GetConcurrentConversationQuotaResult::getMessage()const
{
	return message_;
}

int GetConcurrentConversationQuotaResult::getMaxConcurrent()const
{
	return maxConcurrent_;
}

int GetConcurrentConversationQuotaResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string GetConcurrentConversationQuotaResult::getCode()const
{
	return code_;
}

bool GetConcurrentConversationQuotaResult::getSuccess()const
{
	return success_;
}

