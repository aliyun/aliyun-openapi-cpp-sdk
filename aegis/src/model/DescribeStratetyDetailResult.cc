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

#include <alibabacloud/aegis/model/DescribeStratetyDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeStratetyDetailResult::DescribeStratetyDetailResult() :
	ServiceResult()
{}

DescribeStratetyDetailResult::DescribeStratetyDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeStratetyDetailResult::~DescribeStratetyDetailResult()
{}

void DescribeStratetyDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto strategyNode = value["Strategy"];
	if(!strategyNode["CycleDays"].isNull())
		strategy_.cycleDays = std::stoi(strategyNode["CycleDays"].asString());
	if(!strategyNode["Name"].isNull())
		strategy_.name = strategyNode["Name"].asString();
	if(!strategyNode["Id"].isNull())
		strategy_.id = std::stoi(strategyNode["Id"].asString());
	if(!strategyNode["CycleStartTime"].isNull())
		strategy_.cycleStartTime = std::stoi(strategyNode["CycleStartTime"].asString());
	if(!strategyNode["Type"].isNull())
		strategy_.type = std::stoi(strategyNode["Type"].asString());
	auto allRiskTypeWhiteListQueryResultListNode = strategyNode["RiskTypeWhiteListQueryResultList"]["RiskTypeWhiteListQueryResult"];
	for (auto strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResult : allRiskTypeWhiteListQueryResultListNode)
	{
		Strategy::RiskTypeWhiteListQueryResult riskTypeWhiteListQueryResultObject;
		if(!strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResult["TypeName"].isNull())
			riskTypeWhiteListQueryResultObject.typeName = strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResult["TypeName"].asString();
		if(!strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResult["Alias"].isNull())
			riskTypeWhiteListQueryResultObject.alias = strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResult["Alias"].asString();
		if(!strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResult["On"].isNull())
			riskTypeWhiteListQueryResultObject.on = strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResult["On"].asString() == "true";
		auto allSubTypesNode = allRiskTypeWhiteListQueryResultListNode["SubTypes"]["SubType"];
		for (auto allRiskTypeWhiteListQueryResultListNodeSubTypesSubType : allSubTypesNode)
		{
			Strategy::RiskTypeWhiteListQueryResult::SubType subTypesObject;
			if(!allRiskTypeWhiteListQueryResultListNodeSubTypesSubType["TypeName"].isNull())
				subTypesObject.typeName = allRiskTypeWhiteListQueryResultListNodeSubTypesSubType["TypeName"].asString();
			if(!allRiskTypeWhiteListQueryResultListNodeSubTypesSubType["Alias"].isNull())
				subTypesObject.alias = allRiskTypeWhiteListQueryResultListNodeSubTypesSubType["Alias"].asString();
			if(!allRiskTypeWhiteListQueryResultListNodeSubTypesSubType["On"].isNull())
				subTypesObject.on = allRiskTypeWhiteListQueryResultListNodeSubTypesSubType["On"].asString() == "true";
			riskTypeWhiteListQueryResultObject.subTypes.push_back(subTypesObject);
		}
		strategy_.riskTypeWhiteListQueryResultList.push_back(riskTypeWhiteListQueryResultObject);
	}

}

DescribeStratetyDetailResult::Strategy DescribeStratetyDetailResult::getStrategy()const
{
	return strategy_;
}

