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

#include <alibabacloud/outboundbot/model/DescribeJobDataParsingTaskProgressResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

DescribeJobDataParsingTaskProgressResult::DescribeJobDataParsingTaskProgressResult() :
	ServiceResult()
{}

DescribeJobDataParsingTaskProgressResult::DescribeJobDataParsingTaskProgressResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeJobDataParsingTaskProgressResult::~DescribeJobDataParsingTaskProgressResult()
{}

void DescribeJobDataParsingTaskProgressResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto progressNode = value["Progress"];
	if(!progressNode["FailErrorCode"].isNull())
		progress_.failErrorCode = progressNode["FailErrorCode"].asString();
	if(!progressNode["Status"].isNull())
		progress_.status = progressNode["Status"].asString();
	if(!progressNode["HandledJobCount"].isNull())
		progress_.handledJobCount = std::stoi(progressNode["HandledJobCount"].asString());
	if(!progressNode["TotalJobCount"].isNull())
		progress_.totalJobCount = std::stoi(progressNode["TotalJobCount"].asString());
	if(!progressNode["FailReason"].isNull())
		progress_.failReason = progressNode["FailReason"].asString();
	if(!progressNode["FeedbackUrl"].isNull())
		progress_.feedbackUrl = progressNode["FeedbackUrl"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

DescribeJobDataParsingTaskProgressResult::Progress DescribeJobDataParsingTaskProgressResult::getProgress()const
{
	return progress_;
}

std::string DescribeJobDataParsingTaskProgressResult::getMessage()const
{
	return message_;
}

int DescribeJobDataParsingTaskProgressResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string DescribeJobDataParsingTaskProgressResult::getCode()const
{
	return code_;
}

bool DescribeJobDataParsingTaskProgressResult::getSuccess()const
{
	return success_;
}

