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

#include <alibabacloud/aegis/model/DescribeStratetyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeStratetyResult::DescribeStratetyResult() :
	ServiceResult()
{}

DescribeStratetyResult::DescribeStratetyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeStratetyResult::~DescribeStratetyResult()
{}

void DescribeStratetyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStrategies = value["Strategies"]["Strategy"];
	for (auto value : allStrategies)
	{
		Strategy strategiesObject;
		if(!value["CycleDays"].isNull())
			strategiesObject.cycleDays = std::stoi(value["CycleDays"].asString());
		if(!value["Id"].isNull())
			strategiesObject.id = std::stoi(value["Id"].asString());
		if(!value["CycleStartTime"].isNull())
			strategiesObject.cycleStartTime = std::stoi(value["CycleStartTime"].asString());
		if(!value["Type"].isNull())
			strategiesObject.type = std::stoi(value["Type"].asString());
		if(!value["Name"].isNull())
			strategiesObject.name = value["Name"].asString();
		if(!value["RiskCount"].isNull())
			strategiesObject.riskCount = std::stoi(value["RiskCount"].asString());
		if(!value["EcsCount"].isNull())
			strategiesObject.ecsCount = std::stoi(value["EcsCount"].asString());
		if(!value["ExecStatus"].isNull())
			strategiesObject.execStatus = std::stoi(value["ExecStatus"].asString());
		if(!value["ProcessRate"].isNull())
			strategiesObject.processRate = std::stoi(value["ProcessRate"].asString());
		if(!value["PassRate"].isNull())
			strategiesObject.passRate = std::stoi(value["PassRate"].asString());
		auto allConfigTargets = value["ConfigTargets"]["ConfigTarget"];
		for (auto value : allConfigTargets)
		{
			Strategy::ConfigTarget configTargetsObject;
			if(!value["Flag"].isNull())
				configTargetsObject.flag = value["Flag"].asString();
			if(!value["TargetType"].isNull())
				configTargetsObject.targetType = value["TargetType"].asString();
			if(!value["Target"].isNull())
				configTargetsObject.target = value["Target"].asString();
			strategiesObject.configTargets.push_back(configTargetsObject);
		}
		strategies_.push_back(strategiesObject);
	}

}

std::vector<DescribeStratetyResult::Strategy> DescribeStratetyResult::getStrategies()const
{
	return strategies_;
}

