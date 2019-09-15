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

#include <alibabacloud/aegis/model/DescribeStrategyProcessResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeStrategyProcessResult::DescribeStrategyProcessResult() :
	ServiceResult()
{}

DescribeStrategyProcessResult::DescribeStrategyProcessResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeStrategyProcessResult::~DescribeStrategyProcessResult()
{}

void DescribeStrategyProcessResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["StrategyId"].isNull())
		strategyId_ = std::stol(value["StrategyId"].asString());
	if(!value["ProcessRate"].isNull())
		processRate_ = std::stoi(value["ProcessRate"].asString());
	if(!value["ExecStatus"].isNull())
		execStatus_ = std::stoi(value["ExecStatus"].asString());
	if(!value["PassRate"].isNull())
		passRate_ = value["PassRate"].asString();

}

int DescribeStrategyProcessResult::getExecStatus()const
{
	return execStatus_;
}

std::string DescribeStrategyProcessResult::getPassRate()const
{
	return passRate_;
}

int DescribeStrategyProcessResult::getProcessRate()const
{
	return processRate_;
}

long DescribeStrategyProcessResult::getStrategyId()const
{
	return strategyId_;
}

