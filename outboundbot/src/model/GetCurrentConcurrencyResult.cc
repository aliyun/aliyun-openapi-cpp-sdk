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

#include <alibabacloud/outboundbot/model/GetCurrentConcurrencyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

GetCurrentConcurrencyResult::GetCurrentConcurrencyResult() :
	ServiceResult()
{}

GetCurrentConcurrencyResult::GetCurrentConcurrencyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetCurrentConcurrencyResult::~GetCurrentConcurrencyResult()
{}

void GetCurrentConcurrencyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["CurrentConcurrency"].isNull())
		currentConcurrency_ = std::stoi(value["CurrentConcurrency"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["MaxConcurrentConversation"].isNull())
		maxConcurrentConversation_ = std::stoi(value["MaxConcurrentConversation"].asString());
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();

}

std::string GetCurrentConcurrencyResult::getMessage()const
{
	return message_;
}

int GetCurrentConcurrencyResult::getMaxConcurrentConversation()const
{
	return maxConcurrentConversation_;
}

std::string GetCurrentConcurrencyResult::getInstanceId()const
{
	return instanceId_;
}

int GetCurrentConcurrencyResult::getCurrentConcurrency()const
{
	return currentConcurrency_;
}

int GetCurrentConcurrencyResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string GetCurrentConcurrencyResult::getCode()const
{
	return code_;
}

bool GetCurrentConcurrencyResult::getSuccess()const
{
	return success_;
}

