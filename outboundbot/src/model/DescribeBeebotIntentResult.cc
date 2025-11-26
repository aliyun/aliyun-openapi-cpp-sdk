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

#include <alibabacloud/outboundbot/model/DescribeBeebotIntentResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

DescribeBeebotIntentResult::DescribeBeebotIntentResult() :
	ServiceResult()
{}

DescribeBeebotIntentResult::DescribeBeebotIntentResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBeebotIntentResult::~DescribeBeebotIntentResult()
{}

void DescribeBeebotIntentResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto intentNode = value["Intent"];
	if(!intentNode["IntentId"].isNull())
		intent_.intentId = std::stol(intentNode["IntentId"].asString());
	if(!intentNode["IntentName"].isNull())
		intent_.intentName = intentNode["IntentName"].asString();
	if(!intentNode["AliasName"].isNull())
		intent_.aliasName = intentNode["AliasName"].asString();
	if(!intentNode["CreateUserName"].isNull())
		intent_.createUserName = intentNode["CreateUserName"].asString();
	if(!intentNode["CreateUserId"].isNull())
		intent_.createUserId = intentNode["CreateUserId"].asString();
	if(!intentNode["ModifyUserId"].isNull())
		intent_.modifyUserId = intentNode["ModifyUserId"].asString();
	if(!intentNode["ModifyUserName"].isNull())
		intent_.modifyUserName = intentNode["ModifyUserName"].asString();
	if(!intentNode["CreateTime"].isNull())
		intent_.createTime = intentNode["CreateTime"].asString();
	if(!intentNode["ModifyTime"].isNull())
		intent_.modifyTime = intentNode["ModifyTime"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["BeebotRequestId"].isNull())
		beebotRequestId_ = value["BeebotRequestId"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["IntentId"].isNull())
		intentId_ = std::stol(value["IntentId"].asString());

}

std::string DescribeBeebotIntentResult::getBeebotRequestId()const
{
	return beebotRequestId_;
}

std::string DescribeBeebotIntentResult::getMessage()const
{
	return message_;
}

int DescribeBeebotIntentResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

DescribeBeebotIntentResult::Intent DescribeBeebotIntentResult::getIntent()const
{
	return intent_;
}

std::string DescribeBeebotIntentResult::getCode()const
{
	return code_;
}

bool DescribeBeebotIntentResult::getSuccess()const
{
	return success_;
}

long DescribeBeebotIntentResult::getIntentId()const
{
	return intentId_;
}

