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

#include <alibabacloud/arms/model/ListSilencePoliciesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

ListSilencePoliciesResult::ListSilencePoliciesResult() :
	ServiceResult()
{}

ListSilencePoliciesResult::ListSilencePoliciesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSilencePoliciesResult::~ListSilencePoliciesResult()
{}

void ListSilencePoliciesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto pageBeanNode = value["PageBean"];
	if(!pageBeanNode["Total"].isNull())
		pageBean_.total = std::stol(pageBeanNode["Total"].asString());
	if(!pageBeanNode["Page"].isNull())
		pageBean_.page = std::stol(pageBeanNode["Page"].asString());
	if(!pageBeanNode["Size"].isNull())
		pageBean_.size = std::stol(pageBeanNode["Size"].asString());
	auto allSilencePoliciesNode = pageBeanNode["SilencePolicies"]["policies"];
	for (auto pageBeanNodeSilencePoliciespolicies : allSilencePoliciesNode)
	{
		PageBean::Policies policiesObject;
		if(!pageBeanNodeSilencePoliciespolicies["Id"].isNull())
			policiesObject.id = std::stol(pageBeanNodeSilencePoliciespolicies["Id"].asString());
		if(!pageBeanNodeSilencePoliciespolicies["Name"].isNull())
			policiesObject.name = pageBeanNodeSilencePoliciespolicies["Name"].asString();
		if(!pageBeanNodeSilencePoliciespolicies["State"].isNull())
			policiesObject.state = pageBeanNodeSilencePoliciespolicies["State"].asString();
		if(!pageBeanNodeSilencePoliciespolicies["TimeSlots"].isNull())
			policiesObject.timeSlots = pageBeanNodeSilencePoliciespolicies["TimeSlots"].asString();
		if(!pageBeanNodeSilencePoliciespolicies["TimePeriod"].isNull())
			policiesObject.timePeriod = pageBeanNodeSilencePoliciespolicies["TimePeriod"].asString();
		if(!pageBeanNodeSilencePoliciespolicies["EffectiveTimeType"].isNull())
			policiesObject.effectiveTimeType = pageBeanNodeSilencePoliciespolicies["EffectiveTimeType"].asString();
		auto allMatchingRulesNode = pageBeanNodeSilencePoliciespolicies["MatchingRules"]["matchingRulesItem"];
		for (auto pageBeanNodeSilencePoliciespoliciesMatchingRulesmatchingRulesItem : allMatchingRulesNode)
		{
			PageBean::Policies::MatchingRulesItem matchingRulesObject;
			auto allMatchingConditionsNode = pageBeanNodeSilencePoliciespoliciesMatchingRulesmatchingRulesItem["MatchingConditions"]["matchingConditionsItem"];
			for (auto pageBeanNodeSilencePoliciespoliciesMatchingRulesmatchingRulesItemMatchingConditionsmatchingConditionsItem : allMatchingConditionsNode)
			{
				PageBean::Policies::MatchingRulesItem::MatchingConditionsItem matchingConditionsObject;
				if(!pageBeanNodeSilencePoliciespoliciesMatchingRulesmatchingRulesItemMatchingConditionsmatchingConditionsItem["Key"].isNull())
					matchingConditionsObject.key = pageBeanNodeSilencePoliciespoliciesMatchingRulesmatchingRulesItemMatchingConditionsmatchingConditionsItem["Key"].asString();
				if(!pageBeanNodeSilencePoliciespoliciesMatchingRulesmatchingRulesItemMatchingConditionsmatchingConditionsItem["Value"].isNull())
					matchingConditionsObject.value = pageBeanNodeSilencePoliciespoliciesMatchingRulesmatchingRulesItemMatchingConditionsmatchingConditionsItem["Value"].asString();
				if(!pageBeanNodeSilencePoliciespoliciesMatchingRulesmatchingRulesItemMatchingConditionsmatchingConditionsItem["Operator"].isNull())
					matchingConditionsObject._operator = pageBeanNodeSilencePoliciespoliciesMatchingRulesmatchingRulesItemMatchingConditionsmatchingConditionsItem["Operator"].asString();
				matchingRulesObject.matchingConditions.push_back(matchingConditionsObject);
			}
			policiesObject.matchingRules.push_back(matchingRulesObject);
		}
		pageBean_.silencePolicies.push_back(policiesObject);
	}

}

ListSilencePoliciesResult::PageBean ListSilencePoliciesResult::getPageBean()const
{
	return pageBean_;
}

