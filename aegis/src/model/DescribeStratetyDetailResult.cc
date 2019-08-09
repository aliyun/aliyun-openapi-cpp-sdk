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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
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
		auto allSubTypes = value["SubTypes"]["SubType"];
		for (auto value : allSubTypes)
		{
			Strategy::RiskTypeWhiteListQueryResult::SubType subTypesObject;
			if(!value["TypeName"].isNull())
				subTypesObject.typeName = value["TypeName"].asString();
			if(!value["Alias"].isNull())
				subTypesObject.alias = value["Alias"].asString();
			if(!value["On"].isNull())
				subTypesObject.on = value["On"].asString() == "true";
			riskTypeWhiteListQueryResultObject.subTypes.push_back(subTypesObject);
		}
		strategy_.riskTypeWhiteListQueryResultList.push_back(riskTypeWhiteListQueryResultObject);
	}

}

DescribeStratetyDetailResult::Strategy DescribeStratetyDetailResult::getStrategy()const
{
	return strategy_;
}

