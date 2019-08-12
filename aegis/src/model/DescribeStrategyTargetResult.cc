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

#include <alibabacloud/aegis/model/DescribeStrategyTargetResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allStrategyTargets = value["StrategyTargets"]["StrategyTarget"];
	for (auto value : allStrategyTargets)
	{
		StrategyTarget strategyTargetsObject;
		if(!value["Flag"].isNull())
			strategyTargetsObject.flag = value["Flag"].asString();
		if(!value["Target"].isNull())
			strategyTargetsObject.target = value["Target"].asString();
		if(!value["TargetType"].isNull())
			strategyTargetsObject.targetType = value["TargetType"].asString();
		strategyTargets_.push_back(strategyTargetsObject);
	}

}

std::vector<DescribeStrategyTargetResult::StrategyTarget> DescribeStrategyTargetResult::getStrategyTargets()const
{
	return strategyTargets_;
}

