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
	auto allStrategiesNode = value["Strategies"]["Strategy"];
	for (auto valueStrategiesStrategy : allStrategiesNode)
	{
		Strategy strategiesObject;
		if(!valueStrategiesStrategy["CycleDays"].isNull())
			strategiesObject.cycleDays = std::stoi(valueStrategiesStrategy["CycleDays"].asString());
		if(!valueStrategiesStrategy["Id"].isNull())
			strategiesObject.id = std::stoi(valueStrategiesStrategy["Id"].asString());
		if(!valueStrategiesStrategy["CycleStartTime"].isNull())
			strategiesObject.cycleStartTime = std::stoi(valueStrategiesStrategy["CycleStartTime"].asString());
		if(!valueStrategiesStrategy["Type"].isNull())
			strategiesObject.type = std::stoi(valueStrategiesStrategy["Type"].asString());
		if(!valueStrategiesStrategy["Name"].isNull())
			strategiesObject.name = valueStrategiesStrategy["Name"].asString();
		if(!valueStrategiesStrategy["RiskCount"].isNull())
			strategiesObject.riskCount = std::stoi(valueStrategiesStrategy["RiskCount"].asString());
		if(!valueStrategiesStrategy["EcsCount"].isNull())
			strategiesObject.ecsCount = std::stoi(valueStrategiesStrategy["EcsCount"].asString());
		if(!valueStrategiesStrategy["ExecStatus"].isNull())
			strategiesObject.execStatus = std::stoi(valueStrategiesStrategy["ExecStatus"].asString());
		if(!valueStrategiesStrategy["ProcessRate"].isNull())
			strategiesObject.processRate = std::stoi(valueStrategiesStrategy["ProcessRate"].asString());
		if(!valueStrategiesStrategy["PassRate"].isNull())
			strategiesObject.passRate = std::stoi(valueStrategiesStrategy["PassRate"].asString());
		auto allConfigTargetsNode = allStrategiesNode["ConfigTargets"]["ConfigTarget"];
		for (auto allStrategiesNodeConfigTargetsConfigTarget : allConfigTargetsNode)
		{
			Strategy::ConfigTarget configTargetsObject;
			if(!allStrategiesNodeConfigTargetsConfigTarget["Flag"].isNull())
				configTargetsObject.flag = allStrategiesNodeConfigTargetsConfigTarget["Flag"].asString();
			if(!allStrategiesNodeConfigTargetsConfigTarget["TargetType"].isNull())
				configTargetsObject.targetType = allStrategiesNodeConfigTargetsConfigTarget["TargetType"].asString();
			if(!allStrategiesNodeConfigTargetsConfigTarget["Target"].isNull())
				configTargetsObject.target = allStrategiesNodeConfigTargetsConfigTarget["Target"].asString();
			strategiesObject.configTargets.push_back(configTargetsObject);
		}
		strategies_.push_back(strategiesObject);
	}

}

std::vector<DescribeStratetyResult::Strategy> DescribeStratetyResult::getStrategies()const
{
	return strategies_;
}

