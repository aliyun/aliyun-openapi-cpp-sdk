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

#include <alibabacloud/outboundbot/model/DescribeGlobalQuestionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

DescribeGlobalQuestionResult::DescribeGlobalQuestionResult() :
	ServiceResult()
{}

DescribeGlobalQuestionResult::DescribeGlobalQuestionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGlobalQuestionResult::~DescribeGlobalQuestionResult()
{}

void DescribeGlobalQuestionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto globalQuestionNode = value["GlobalQuestion"];
	if(!globalQuestionNode["GlobalQuestionId"].isNull())
		globalQuestion_.globalQuestionId = globalQuestionNode["GlobalQuestionId"].asString();
	if(!globalQuestionNode["Answers"].isNull())
		globalQuestion_.answers = globalQuestionNode["Answers"].asString();
	if(!globalQuestionNode["GlobalQuestionType"].isNull())
		globalQuestion_.globalQuestionType = globalQuestionNode["GlobalQuestionType"].asString();
	if(!globalQuestionNode["GlobalQuestionName"].isNull())
		globalQuestion_.globalQuestionName = globalQuestionNode["GlobalQuestionName"].asString();
	if(!globalQuestionNode["Questions"].isNull())
		globalQuestion_.questions = globalQuestionNode["Questions"].asString();
	if(!globalQuestionNode["ScriptId"].isNull())
		globalQuestion_.scriptId = globalQuestionNode["ScriptId"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeGlobalQuestionResult::getMessage()const
{
	return message_;
}

DescribeGlobalQuestionResult::GlobalQuestion DescribeGlobalQuestionResult::getGlobalQuestion()const
{
	return globalQuestion_;
}

int DescribeGlobalQuestionResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string DescribeGlobalQuestionResult::getCode()const
{
	return code_;
}

bool DescribeGlobalQuestionResult::getSuccess()const
{
	return success_;
}

