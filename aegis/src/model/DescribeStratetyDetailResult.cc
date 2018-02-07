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
	auto allStrategy = value["Strategy"];
	for (auto value : allStrategy)
	{
		Strategy strategyObject;
		if(!value["CycleDays"].isNull())
			strategyObject.cycleDays = std::stoi(value["CycleDays"].asString());
		if(!value["Name"].isNull())
			strategyObject.name = value["Name"].asString();
		if(!value["Id"].isNull())
			strategyObject.id = std::stoi(value["Id"].asString());
		if(!value["CycleStartTime"].isNull())
			strategyObject.cycleStartTime = std::stoi(value["CycleStartTime"].asString());
		if(!value["Type"].isNull())
			strategyObject.type = std::stoi(value["Type"].asString());
		auto allRiskTypeWhiteListQueryResultList = value["RiskTypeWhiteListQueryResultList"]["RiskTypeWhiteListQueryResult"];
		for (auto value : allRiskTypeWhiteListQueryResultList)
		{
			Strategy::RiskTypeWhiteListQueryResult riskTypeWhiteListQueryResultObject;
			if(!value["TypeName"].isNull())
				riskTypeWhiteListQueryResultObject.typeName = value["TypeName"].asString();
			if(!value["Alias"].isNull())
				riskTypeWhiteListQueryResultObject.alias = value["Alias"].asString();
			if(!value["On"].isNull())
				riskTypeWhiteListQueryResultObject.on = value["On"].asString() == "true";
			auto allSubTypes = value["SubTypes"]["SubTyp"];
			for (auto value : allSubTypes)
			{
				Strategy::RiskTypeWhiteListQueryResult::SubTyp subTypesObject;
				if(!value["TypeName"].isNull())
					subTypesObject.typeName = value["TypeName"].asString();
				if(!value["Alias"].isNull())
					subTypesObject.alias = value["Alias"].asString();
				if(!value["On"].isNull())
					subTypesObject.on = value["On"].asString() == "true";
				riskTypeWhiteListQueryResultObject.subTypes.push_back(subTypesObject);
			}
			strategyObject.riskTypeWhiteListQueryResultList.push_back(riskTypeWhiteListQueryResultObject);
		}
		strategy_.push_back(strategyObject);
	}

}

std::vector<DescribeStratetyDetailResult::Strategy> DescribeStratetyDetailResult::getStrategy()const
{
	return strategy_;
}

