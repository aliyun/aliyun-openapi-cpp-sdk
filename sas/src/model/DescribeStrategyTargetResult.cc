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

#include <alibabacloud/sas/model/DescribeStrategyTargetResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeStrategyTargetResult::DescribeStrategyTargetResult() :
	ServiceResult()
{}

DescribeStrategyTargetResult::DescribeStrategyTargetResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeStrategyTargetResult::~DescribeStrategyTargetResult()
{}

void DescribeStrategyTargetResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStrategyTargetsNode = value["StrategyTargets"]["StrategyTarget"];
	for (auto valueStrategyTargetsStrategyTarget : allStrategyTargetsNode)
	{
		StrategyTarget strategyTargetsObject;
		if(!valueStrategyTargetsStrategyTarget["BindUuidCount"].isNull())
			strategyTargetsObject.bindUuidCount = std::stoi(valueStrategyTargetsStrategyTarget["BindUuidCount"].asString());
		if(!valueStrategyTargetsStrategyTarget["Flag"].isNull())
			strategyTargetsObject.flag = valueStrategyTargetsStrategyTarget["Flag"].asString();
		if(!valueStrategyTargetsStrategyTarget["Target"].isNull())
			strategyTargetsObject.target = valueStrategyTargetsStrategyTarget["Target"].asString();
		if(!valueStrategyTargetsStrategyTarget["TargetType"].isNull())
			strategyTargetsObject.targetType = valueStrategyTargetsStrategyTarget["TargetType"].asString();
		strategyTargets_.push_back(strategyTargetsObject);
	}

}

std::vector<DescribeStrategyTargetResult::StrategyTarget> DescribeStrategyTargetResult::getStrategyTargets()const
{
	return strategyTargets_;
}

