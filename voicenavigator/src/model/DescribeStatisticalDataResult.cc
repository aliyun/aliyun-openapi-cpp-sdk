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

#include <alibabacloud/voicenavigator/model/DescribeStatisticalDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::VoiceNavigator;
using namespace AlibabaCloud::VoiceNavigator::Model;

DescribeStatisticalDataResult::DescribeStatisticalDataResult() :
	ServiceResult()
{}

DescribeStatisticalDataResult::DescribeStatisticalDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeStatisticalDataResult::~DescribeStatisticalDataResult()
{}

void DescribeStatisticalDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStatisticalDataReportsNode = value["StatisticalDataReports"]["StatisticalDataReport"];
	for (auto valueStatisticalDataReportsStatisticalDataReport : allStatisticalDataReportsNode)
	{
		StatisticalDataReport statisticalDataReportsObject;
		if(!valueStatisticalDataReportsStatisticalDataReport["KnowledgeHitRate"].isNull())
			statisticalDataReportsObject.knowledgeHitRate = valueStatisticalDataReportsStatisticalDataReport["KnowledgeHitRate"].asString();
		if(!valueStatisticalDataReportsStatisticalDataReport["ResolvedQuestionNum"].isNull())
			statisticalDataReportsObject.resolvedQuestionNum = std::stoi(valueStatisticalDataReportsStatisticalDataReport["ResolvedQuestionNum"].asString());
		if(!valueStatisticalDataReportsStatisticalDataReport["ResolutionRate"].isNull())
			statisticalDataReportsObject.resolutionRate = valueStatisticalDataReportsStatisticalDataReport["ResolutionRate"].asString();
		if(!valueStatisticalDataReportsStatisticalDataReport["StatisticalDate"].isNull())
			statisticalDataReportsObject.statisticalDate = valueStatisticalDataReportsStatisticalDataReport["StatisticalDate"].asString();
		if(!valueStatisticalDataReportsStatisticalDataReport["TotalConversationNum"].isNull())
			statisticalDataReportsObject.totalConversationNum = std::stoi(valueStatisticalDataReportsStatisticalDataReport["TotalConversationNum"].asString());
		if(!valueStatisticalDataReportsStatisticalDataReport["ValidAnswerRate"].isNull())
			statisticalDataReportsObject.validAnswerRate = valueStatisticalDataReportsStatisticalDataReport["ValidAnswerRate"].asString();
		if(!valueStatisticalDataReportsStatisticalDataReport["DialoguePassRate"].isNull())
			statisticalDataReportsObject.dialoguePassRate = valueStatisticalDataReportsStatisticalDataReport["DialoguePassRate"].asString();
		statisticalDataReports_.push_back(statisticalDataReportsObject);
	}
	if(!value["TotalDialoguePassRate"].isNull())
		totalDialoguePassRate_ = value["TotalDialoguePassRate"].asString();
	if(!value["TotalKnowledgeHitRate"].isNull())
		totalKnowledgeHitRate_ = value["TotalKnowledgeHitRate"].asString();
	if(!value["TotalResolutionRate"].isNull())
		totalResolutionRate_ = value["TotalResolutionRate"].asString();
	if(!value["TotalValidAnswerRate"].isNull())
		totalValidAnswerRate_ = value["TotalValidAnswerRate"].asString();
	if(!value["ResolvedQuestionTotalNum"].isNull())
		resolvedQuestionTotalNum_ = std::stol(value["ResolvedQuestionTotalNum"].asString());
	if(!value["ConversationTotalNum"].isNull())
		conversationTotalNum_ = std::stol(value["ConversationTotalNum"].asString());

}

std::string DescribeStatisticalDataResult::getTotalDialoguePassRate()const
{
	return totalDialoguePassRate_;
}

std::string DescribeStatisticalDataResult::getTotalKnowledgeHitRate()const
{
	return totalKnowledgeHitRate_;
}

std::string DescribeStatisticalDataResult::getTotalResolutionRate()const
{
	return totalResolutionRate_;
}

std::string DescribeStatisticalDataResult::getTotalValidAnswerRate()const
{
	return totalValidAnswerRate_;
}

long DescribeStatisticalDataResult::getResolvedQuestionTotalNum()const
{
	return resolvedQuestionTotalNum_;
}

long DescribeStatisticalDataResult::getConversationTotalNum()const
{
	return conversationTotalNum_;
}

std::vector<DescribeStatisticalDataResult::StatisticalDataReport> DescribeStatisticalDataResult::getStatisticalDataReports()const
{
	return statisticalDataReports_;
}

