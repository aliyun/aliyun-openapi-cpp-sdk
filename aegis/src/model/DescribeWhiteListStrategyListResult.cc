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

#include <alibabacloud/aegis/model/DescribeWhiteListStrategyListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeWhiteListStrategyListResult::DescribeWhiteListStrategyListResult() :
	ServiceResult()
{}

DescribeWhiteListStrategyListResult::DescribeWhiteListStrategyListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeWhiteListStrategyListResult::~DescribeWhiteListStrategyListResult()
{}

void DescribeWhiteListStrategyListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStrategiesNode = value["Strategies"]["Strategy"];
	for (auto valueStrategiesStrategy : allStrategiesNode)
	{
		Strategy strategiesObject;
		if(!valueStrategiesStrategy["StrategyId"].isNull())
			strategiesObject.strategyId = std::stol(valueStrategiesStrategy["StrategyId"].asString());
		if(!valueStrategiesStrategy["StrategyName"].isNull())
			strategiesObject.strategyName = valueStrategiesStrategy["StrategyName"].asString();
		if(!valueStrategiesStrategy["StudyTime"].isNull())
			strategiesObject.studyTime = std::stoi(valueStrategiesStrategy["StudyTime"].asString());
		if(!valueStrategiesStrategy["Status"].isNull())
			strategiesObject.status = std::stoi(valueStrategiesStrategy["Status"].asString());
		strategies_.push_back(strategiesObject);
	}

}

std::vector<DescribeWhiteListStrategyListResult::Strategy> DescribeWhiteListStrategyListResult::getStrategies()const
{
	return strategies_;
}

