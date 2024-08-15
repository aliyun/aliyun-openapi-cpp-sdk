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

#include <alibabacloud/arms/model/CreateOrUpdateSilencePolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

CreateOrUpdateSilencePolicyResult::CreateOrUpdateSilencePolicyResult() :
	ServiceResult()
{}

CreateOrUpdateSilencePolicyResult::CreateOrUpdateSilencePolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateOrUpdateSilencePolicyResult::~CreateOrUpdateSilencePolicyResult()
{}

void CreateOrUpdateSilencePolicyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto silencePolicyNode = value["SilencePolicy"];
	if(!silencePolicyNode["Id"].isNull())
		silencePolicy_.id = std::stol(silencePolicyNode["Id"].asString());
	if(!silencePolicyNode["Name"].isNull())
		silencePolicy_.name = silencePolicyNode["Name"].asString();
	if(!silencePolicyNode["State"].isNull())
		silencePolicy_.state = silencePolicyNode["State"].asString();
	if(!silencePolicyNode["EffectiveTimeType"].isNull())
		silencePolicy_.effectiveTimeType = silencePolicyNode["EffectiveTimeType"].asString();
	if(!silencePolicyNode["TimePeriod"].isNull())
		silencePolicy_.timePeriod = silencePolicyNode["TimePeriod"].asString();
	if(!silencePolicyNode["TimeSlots"].isNull())
		silencePolicy_.timeSlots = silencePolicyNode["TimeSlots"].asString();
	auto allMatchingRulesNode = silencePolicyNode["MatchingRules"]["matchingRulesItem"];
	for (auto silencePolicyNodeMatchingRulesmatchingRulesItem : allMatchingRulesNode)
	{
		SilencePolicy::MatchingRulesItem matchingRulesItemObject;
		auto allMatchingConditionsNode = silencePolicyNodeMatchingRulesmatchingRulesItem["MatchingConditions"]["matchingConditionsItem"];
		for (auto silencePolicyNodeMatchingRulesmatchingRulesItemMatchingConditionsmatchingConditionsItem : allMatchingConditionsNode)
		{
			SilencePolicy::MatchingRulesItem::MatchingConditionsItem matchingConditionsObject;
			if(!silencePolicyNodeMatchingRulesmatchingRulesItemMatchingConditionsmatchingConditionsItem["Key"].isNull())
				matchingConditionsObject.key = silencePolicyNodeMatchingRulesmatchingRulesItemMatchingConditionsmatchingConditionsItem["Key"].asString();
			if(!silencePolicyNodeMatchingRulesmatchingRulesItemMatchingConditionsmatchingConditionsItem["Value"].isNull())
				matchingConditionsObject.value = silencePolicyNodeMatchingRulesmatchingRulesItemMatchingConditionsmatchingConditionsItem["Value"].asString();
			if(!silencePolicyNodeMatchingRulesmatchingRulesItemMatchingConditionsmatchingConditionsItem["Operator"].isNull())
				matchingConditionsObject._operator = silencePolicyNodeMatchingRulesmatchingRulesItemMatchingConditionsmatchingConditionsItem["Operator"].asString();
			matchingRulesItemObject.matchingConditions.push_back(matchingConditionsObject);
		}
		silencePolicy_.matchingRules.push_back(matchingRulesItemObject);
	}

}

CreateOrUpdateSilencePolicyResult::SilencePolicy CreateOrUpdateSilencePolicyResult::getSilencePolicy()const
{
	return silencePolicy_;
}

