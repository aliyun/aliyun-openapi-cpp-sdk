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

#include <alibabacloud/waf-openapi/model/DescribeRuleMonitorResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Waf_openapi;
using namespace AlibabaCloud::Waf_openapi::Model;

DescribeRuleMonitorResult::DescribeRuleMonitorResult() :
	ServiceResult()
{}

DescribeRuleMonitorResult::DescribeRuleMonitorResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRuleMonitorResult::~DescribeRuleMonitorResult()
{}

void DescribeRuleMonitorResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRuleMonitorsNode = value["RuleMonitors"]["Item"];
	for (auto valueRuleMonitorsItem : allRuleMonitorsNode)
	{
		Item ruleMonitorsObject;
		if(!valueRuleMonitorsItem["AntibotType"].isNull())
			ruleMonitorsObject.antibotType = valueRuleMonitorsItem["AntibotType"].asString();
		if(!valueRuleMonitorsItem["Pv"].isNull())
			ruleMonitorsObject.pv = std::stol(valueRuleMonitorsItem["Pv"].asString());
		if(!valueRuleMonitorsItem["RuleId"].isNull())
			ruleMonitorsObject.ruleId = valueRuleMonitorsItem["RuleId"].asString();
		if(!valueRuleMonitorsItem["Index"].isNull())
			ruleMonitorsObject.index = std::stol(valueRuleMonitorsItem["Index"].asString());
		if(!valueRuleMonitorsItem["Domain"].isNull())
			ruleMonitorsObject.domain = valueRuleMonitorsItem["Domain"].asString();
		if(!valueRuleMonitorsItem["AntibotWatch"].isNull())
			ruleMonitorsObject.antibotWatch = valueRuleMonitorsItem["AntibotWatch"].asString();
		ruleMonitors_.push_back(ruleMonitorsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeRuleMonitorResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeRuleMonitorResult::Item> DescribeRuleMonitorResult::getRuleMonitors()const
{
	return ruleMonitors_;
}

