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

#include <alibabacloud/ddoscoo/model/DescribeSchedulerRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeSchedulerRulesResult::DescribeSchedulerRulesResult() :
	ServiceResult()
{}

DescribeSchedulerRulesResult::DescribeSchedulerRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSchedulerRulesResult::~DescribeSchedulerRulesResult()
{}

void DescribeSchedulerRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSchedulerRulesNode = value["SchedulerRules"]["SchedulerRule"];
	for (auto valueSchedulerRulesSchedulerRule : allSchedulerRulesNode)
	{
		SchedulerRule schedulerRulesObject;
		if(!valueSchedulerRulesSchedulerRule["RuleType"].isNull())
			schedulerRulesObject.ruleType = valueSchedulerRulesSchedulerRule["RuleType"].asString();
		if(!valueSchedulerRulesSchedulerRule["Cname"].isNull())
			schedulerRulesObject.cname = valueSchedulerRulesSchedulerRule["Cname"].asString();
		if(!valueSchedulerRulesSchedulerRule["RuleName"].isNull())
			schedulerRulesObject.ruleName = valueSchedulerRulesSchedulerRule["RuleName"].asString();
		auto allRulesNode = valueSchedulerRulesSchedulerRule["Rules"]["Rule"];
		for (auto valueSchedulerRulesSchedulerRuleRulesRule : allRulesNode)
		{
			SchedulerRule::Rule rulesObject;
			if(!valueSchedulerRulesSchedulerRuleRulesRule["Type"].isNull())
				rulesObject.type = valueSchedulerRulesSchedulerRuleRulesRule["Type"].asString();
			if(!valueSchedulerRulesSchedulerRuleRulesRule["Status"].isNull())
				rulesObject.status = std::stoi(valueSchedulerRulesSchedulerRuleRulesRule["Status"].asString());
			if(!valueSchedulerRulesSchedulerRuleRulesRule["Value"].isNull())
				rulesObject.value = valueSchedulerRulesSchedulerRuleRulesRule["Value"].asString();
			if(!valueSchedulerRulesSchedulerRuleRulesRule["ValueType"].isNull())
				rulesObject.valueType = std::stoi(valueSchedulerRulesSchedulerRuleRulesRule["ValueType"].asString());
			if(!valueSchedulerRulesSchedulerRuleRulesRule["Priority"].isNull())
				rulesObject.priority = std::stoi(valueSchedulerRulesSchedulerRuleRulesRule["Priority"].asString());
			if(!valueSchedulerRulesSchedulerRuleRulesRule["RestoreDelay"].isNull())
				rulesObject.restoreDelay = std::stoi(valueSchedulerRulesSchedulerRuleRulesRule["RestoreDelay"].asString());
			if(!valueSchedulerRulesSchedulerRuleRulesRule["RegionId"].isNull())
				rulesObject.regionId = valueSchedulerRulesSchedulerRuleRulesRule["RegionId"].asString();
			if(!valueSchedulerRulesSchedulerRuleRulesRule["Line"].isNull())
				rulesObject.line = valueSchedulerRulesSchedulerRuleRulesRule["Line"].asString();
			schedulerRulesObject.rules.push_back(rulesObject);
		}
		auto paramNode = value["Param"];
		if(!paramNode["ParamType"].isNull())
			schedulerRulesObject.param.paramType = paramNode["ParamType"].asString();
		auto paramDataNode = paramNode["ParamData"];
		if(!paramDataNode["CloudInstanceId"].isNull())
			schedulerRulesObject.param.paramData.cloudInstanceId = paramDataNode["CloudInstanceId"].asString();
		schedulerRules_.push_back(schedulerRulesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();

}

std::string DescribeSchedulerRulesResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeSchedulerRulesResult::SchedulerRule> DescribeSchedulerRulesResult::getSchedulerRules()const
{
	return schedulerRules_;
}

