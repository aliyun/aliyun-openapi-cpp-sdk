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

#include <alibabacloud/outboundbot/model/DescribeIntentResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

DescribeIntentResult::DescribeIntentResult() :
	ServiceResult()
{}

DescribeIntentResult::DescribeIntentResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeIntentResult::~DescribeIntentResult()
{}

void DescribeIntentResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto intentNode = value["Intent"];
	if(!intentNode["Utterances"].isNull())
		intent_.utterances = intentNode["Utterances"].asString();
	if(!intentNode["IntentDescription"].isNull())
		intent_.intentDescription = intentNode["IntentDescription"].asString();
	if(!intentNode["UpdateTime"].isNull())
		intent_.updateTime = std::stol(intentNode["UpdateTime"].asString());
	if(!intentNode["CreateTime"].isNull())
		intent_.createTime = std::stol(intentNode["CreateTime"].asString());
	if(!intentNode["Keywords"].isNull())
		intent_.keywords = intentNode["Keywords"].asString();
	if(!intentNode["ScriptId"].isNull())
		intent_.scriptId = intentNode["ScriptId"].asString();
	if(!intentNode["IntentId"].isNull())
		intent_.intentId = intentNode["IntentId"].asString();
	if(!intentNode["IntentName"].isNull())
		intent_.intentName = intentNode["IntentName"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeIntentResult::getMessage()const
{
	return message_;
}

int DescribeIntentResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

DescribeIntentResult::Intent DescribeIntentResult::getIntent()const
{
	return intent_;
}

std::string DescribeIntentResult::getCode()const
{
	return code_;
}

bool DescribeIntentResult::getSuccess()const
{
	return success_;
}

