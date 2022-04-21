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

#include <alibabacloud/outboundbot/model/DescribeIntentStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

DescribeIntentStatisticsResult::DescribeIntentStatisticsResult() :
	ServiceResult()
{}

DescribeIntentStatisticsResult::DescribeIntentStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeIntentStatisticsResult::~DescribeIntentStatisticsResult()
{}

void DescribeIntentStatisticsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allProcessIntentsNode = value["ProcessIntents"]["IntentStatisticsItem"];
	for (auto valueProcessIntentsIntentStatisticsItem : allProcessIntentsNode)
	{
		IntentStatisticsItem processIntentsObject;
		if(!valueProcessIntentsIntentStatisticsItem["Type"].isNull())
			processIntentsObject.type = valueProcessIntentsIntentStatisticsItem["Type"].asString();
		if(!valueProcessIntentsIntentStatisticsItem["GroupId"].isNull())
			processIntentsObject.groupId = valueProcessIntentsIntentStatisticsItem["GroupId"].asString();
		if(!valueProcessIntentsIntentStatisticsItem["HitAfterNoAnswer"].isNull())
			processIntentsObject.hitAfterNoAnswer = std::stoi(valueProcessIntentsIntentStatisticsItem["HitAfterNoAnswer"].asString());
		if(!valueProcessIntentsIntentStatisticsItem["InstanceId"].isNull())
			processIntentsObject.instanceId = valueProcessIntentsIntentStatisticsItem["InstanceId"].asString();
		if(!valueProcessIntentsIntentStatisticsItem["HitNum"].isNull())
			processIntentsObject.hitNum = std::stoi(valueProcessIntentsIntentStatisticsItem["HitNum"].asString());
		if(!valueProcessIntentsIntentStatisticsItem["IntentId"].isNull())
			processIntentsObject.intentId = valueProcessIntentsIntentStatisticsItem["IntentId"].asString();
		if(!valueProcessIntentsIntentStatisticsItem["IntentName"].isNull())
			processIntentsObject.intentName = valueProcessIntentsIntentStatisticsItem["IntentName"].asString();
		processIntents_.push_back(processIntentsObject);
	}
	auto allGlobalIntentsNode = value["GlobalIntents"]["IntentStatisticsItem"];
	for (auto valueGlobalIntentsIntentStatisticsItem : allGlobalIntentsNode)
	{
		IntentStatisticsItem globalIntentsObject;
		if(!valueGlobalIntentsIntentStatisticsItem["Type"].isNull())
			globalIntentsObject.type = valueGlobalIntentsIntentStatisticsItem["Type"].asString();
		if(!valueGlobalIntentsIntentStatisticsItem["GroupId"].isNull())
			globalIntentsObject.groupId = valueGlobalIntentsIntentStatisticsItem["GroupId"].asString();
		if(!valueGlobalIntentsIntentStatisticsItem["HitAfterNoAnswer"].isNull())
			globalIntentsObject.hitAfterNoAnswer = std::stoi(valueGlobalIntentsIntentStatisticsItem["HitAfterNoAnswer"].asString());
		if(!valueGlobalIntentsIntentStatisticsItem["InstanceId"].isNull())
			globalIntentsObject.instanceId = valueGlobalIntentsIntentStatisticsItem["InstanceId"].asString();
		if(!valueGlobalIntentsIntentStatisticsItem["HitNum"].isNull())
			globalIntentsObject.hitNum = std::stoi(valueGlobalIntentsIntentStatisticsItem["HitNum"].asString());
		if(!valueGlobalIntentsIntentStatisticsItem["IntentId"].isNull())
			globalIntentsObject.intentId = valueGlobalIntentsIntentStatisticsItem["IntentId"].asString();
		if(!valueGlobalIntentsIntentStatisticsItem["IntentName"].isNull())
			globalIntentsObject.intentName = valueGlobalIntentsIntentStatisticsItem["IntentName"].asString();
		globalIntents_.push_back(globalIntentsObject);
	}
	auto allIntentsAfterNoAnswerNode = value["IntentsAfterNoAnswer"]["IntentStatisticsItem"];
	for (auto valueIntentsAfterNoAnswerIntentStatisticsItem : allIntentsAfterNoAnswerNode)
	{
		IntentStatisticsItem1 intentsAfterNoAnswerObject;
		if(!valueIntentsAfterNoAnswerIntentStatisticsItem["InstanceId"].isNull())
			intentsAfterNoAnswerObject.instanceId = valueIntentsAfterNoAnswerIntentStatisticsItem["InstanceId"].asString();
		intentsAfterNoAnswer_.push_back(intentsAfterNoAnswerObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["GroupId"].isNull())
		groupId_ = value["GroupId"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ProcessIntentNum"].isNull())
		processIntentNum_ = std::stoi(value["ProcessIntentNum"].asString());
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["GlobalIntentNum"].isNull())
		globalIntentNum_ = std::stoi(value["GlobalIntentNum"].asString());

}

std::vector<DescribeIntentStatisticsResult::IntentStatisticsItem1> DescribeIntentStatisticsResult::getIntentsAfterNoAnswer()const
{
	return intentsAfterNoAnswer_;
}

int DescribeIntentStatisticsResult::getGlobalIntentNum()const
{
	return globalIntentNum_;
}

std::vector<DescribeIntentStatisticsResult::IntentStatisticsItem> DescribeIntentStatisticsResult::getProcessIntents()const
{
	return processIntents_;
}

std::string DescribeIntentStatisticsResult::getMessage()const
{
	return message_;
}

std::string DescribeIntentStatisticsResult::getInstanceId()const
{
	return instanceId_;
}

int DescribeIntentStatisticsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string DescribeIntentStatisticsResult::getCode()const
{
	return code_;
}

int DescribeIntentStatisticsResult::getProcessIntentNum()const
{
	return processIntentNum_;
}

std::vector<DescribeIntentStatisticsResult::IntentStatisticsItem> DescribeIntentStatisticsResult::getGlobalIntents()const
{
	return globalIntents_;
}

bool DescribeIntentStatisticsResult::getSuccess()const
{
	return success_;
}

std::string DescribeIntentStatisticsResult::getGroupId()const
{
	return groupId_;
}

