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

#include <alibabacloud/waf-openapi/model/DescribeProtectionModuleRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Waf_openapi;
using namespace AlibabaCloud::Waf_openapi::Model;

DescribeProtectionModuleRulesResult::DescribeProtectionModuleRulesResult() :
	ServiceResult()
{}

DescribeProtectionModuleRulesResult::DescribeProtectionModuleRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeProtectionModuleRulesResult::~DescribeProtectionModuleRulesResult()
{}

void DescribeProtectionModuleRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRulesNode = value["Rules"]["Rule"];
	for (auto valueRulesRule : allRulesNode)
	{
		Rule rulesObject;
		if(!valueRulesRule["Status"].isNull())
			rulesObject.status = std::stol(valueRulesRule["Status"].asString());
		if(!valueRulesRule["Time"].isNull())
			rulesObject.time = std::stol(valueRulesRule["Time"].asString());
		if(!valueRulesRule["Content"].isNull())
			rulesObject.content = valueRulesRule["Content"].asString();
		if(!valueRulesRule["Version"].isNull())
			rulesObject.version = std::stol(valueRulesRule["Version"].asString());
		if(!valueRulesRule["RuleId"].isNull())
			rulesObject.ruleId = std::stol(valueRulesRule["RuleId"].asString());
		rules_.push_back(rulesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeProtectionModuleRulesResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeProtectionModuleRulesResult::Rule> DescribeProtectionModuleRulesResult::getRules()const
{
	return rules_;
}

