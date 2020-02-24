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

#include <alibabacloud/voicenavigator/model/QueryPerformanceIndicatorsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::VoiceNavigator;
using namespace AlibabaCloud::VoiceNavigator::Model;

QueryPerformanceIndicatorsResult::QueryPerformanceIndicatorsResult() :
	ServiceResult()
{}

QueryPerformanceIndicatorsResult::QueryPerformanceIndicatorsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryPerformanceIndicatorsResult::~QueryPerformanceIndicatorsResult()
{}

void QueryPerformanceIndicatorsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resolutionRateNode = value["ResolutionRate"];
	if(!resolutionRateNode["TotalRateValue"].isNull())
		resolutionRate_.totalRateValue = std::stof(resolutionRateNode["TotalRateValue"].asString());
	auto allValuePerDateUnitsNode = resolutionRateNode["ValuePerDateUnits"]["ValuePerDateUnit"];
	for (auto resolutionRateNodeValuePerDateUnitsValuePerDateUnit : allValuePerDateUnitsNode)
	{
		ResolutionRate::ValuePerDateUnit valuePerDateUnitObject;
		if(!resolutionRateNodeValuePerDateUnitsValuePerDateUnit["Date"].isNull())
			valuePerDateUnitObject.date = std::stol(resolutionRateNodeValuePerDateUnitsValuePerDateUnit["Date"].asString());
		if(!resolutionRateNodeValuePerDateUnitsValuePerDateUnit["RateValue"].isNull())
			valuePerDateUnitObject.rateValue = std::stof(resolutionRateNodeValuePerDateUnitsValuePerDateUnit["RateValue"].asString());
		resolutionRate_.valuePerDateUnits.push_back(valuePerDateUnitObject);
	}
	auto validAnswerRateNode = value["ValidAnswerRate"];
	if(!validAnswerRateNode["TotalRateValue"].isNull())
		validAnswerRate_.totalRateValue = std::stof(validAnswerRateNode["TotalRateValue"].asString());
	auto allValuePerDateUnits1Node = validAnswerRateNode["ValuePerDateUnits"]["ValuePerDateUnit"];
	for (auto validAnswerRateNodeValuePerDateUnitsValuePerDateUnit : allValuePerDateUnits1Node)
	{
		ValidAnswerRate::ValuePerDateUnit2 valuePerDateUnit2Object;
		if(!validAnswerRateNodeValuePerDateUnitsValuePerDateUnit["Date"].isNull())
			valuePerDateUnit2Object.date = std::stol(validAnswerRateNodeValuePerDateUnitsValuePerDateUnit["Date"].asString());
		if(!validAnswerRateNodeValuePerDateUnitsValuePerDateUnit["RateValue"].isNull())
			valuePerDateUnit2Object.rateValue = std::stof(validAnswerRateNodeValuePerDateUnitsValuePerDateUnit["RateValue"].asString());
		validAnswerRate_.valuePerDateUnits1.push_back(valuePerDateUnit2Object);
	}
	auto dialoguePassRateNode = value["DialoguePassRate"];
	if(!dialoguePassRateNode["TotalRateValue"].isNull())
		dialoguePassRate_.totalRateValue = std::stof(dialoguePassRateNode["TotalRateValue"].asString());
	auto allValuePerDateUnits3Node = dialoguePassRateNode["ValuePerDateUnits"]["ValuePerDateUnit"];
	for (auto dialoguePassRateNodeValuePerDateUnitsValuePerDateUnit : allValuePerDateUnits3Node)
	{
		DialoguePassRate::ValuePerDateUnit4 valuePerDateUnit4Object;
		if(!dialoguePassRateNodeValuePerDateUnitsValuePerDateUnit["Date"].isNull())
			valuePerDateUnit4Object.date = std::stol(dialoguePassRateNodeValuePerDateUnitsValuePerDateUnit["Date"].asString());
		if(!dialoguePassRateNodeValuePerDateUnitsValuePerDateUnit["RateValue"].isNull())
			valuePerDateUnit4Object.rateValue = std::stof(dialoguePassRateNodeValuePerDateUnitsValuePerDateUnit["RateValue"].asString());
		dialoguePassRate_.valuePerDateUnits3.push_back(valuePerDateUnit4Object);
	}
	auto knowledgeHitRateNode = value["KnowledgeHitRate"];
	if(!knowledgeHitRateNode["TotalRateValue"].isNull())
		knowledgeHitRate_.totalRateValue = std::stof(knowledgeHitRateNode["TotalRateValue"].asString());
	auto allValuePerDateUnits5Node = knowledgeHitRateNode["ValuePerDateUnits"]["ValuePerDateUnit"];
	for (auto knowledgeHitRateNodeValuePerDateUnitsValuePerDateUnit : allValuePerDateUnits5Node)
	{
		KnowledgeHitRate::ValuePerDateUnit6 valuePerDateUnit6Object;
		if(!knowledgeHitRateNodeValuePerDateUnitsValuePerDateUnit["Date"].isNull())
			valuePerDateUnit6Object.date = std::stol(knowledgeHitRateNodeValuePerDateUnitsValuePerDateUnit["Date"].asString());
		if(!knowledgeHitRateNodeValuePerDateUnitsValuePerDateUnit["RateValue"].isNull())
			valuePerDateUnit6Object.rateValue = std::stof(knowledgeHitRateNodeValuePerDateUnitsValuePerDateUnit["RateValue"].asString());
		knowledgeHitRate_.valuePerDateUnits5.push_back(valuePerDateUnit6Object);
	}

}

QueryPerformanceIndicatorsResult::DialoguePassRate QueryPerformanceIndicatorsResult::getDialoguePassRate()const
{
	return dialoguePassRate_;
}

QueryPerformanceIndicatorsResult::ValidAnswerRate QueryPerformanceIndicatorsResult::getValidAnswerRate()const
{
	return validAnswerRate_;
}

QueryPerformanceIndicatorsResult::ResolutionRate QueryPerformanceIndicatorsResult::getResolutionRate()const
{
	return resolutionRate_;
}

QueryPerformanceIndicatorsResult::KnowledgeHitRate QueryPerformanceIndicatorsResult::getKnowledgeHitRate()const
{
	return knowledgeHitRate_;
}

