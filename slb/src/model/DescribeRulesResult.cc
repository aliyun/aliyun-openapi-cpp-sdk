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

#include <alibabacloud/slb/model/DescribeRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

DescribeRulesResult::DescribeRulesResult() :
	ServiceResult()
{}

DescribeRulesResult::DescribeRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRulesResult::~DescribeRulesResult()
{}

void DescribeRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRulesNode = value["Rules"]["Rule"];
	for (auto valueRulesRule : allRulesNode)
	{
		Rule rulesObject;
		if(!valueRulesRule["HealthCheckHttpCode"].isNull())
			rulesObject.healthCheckHttpCode = valueRulesRule["HealthCheckHttpCode"].asString();
		if(!valueRulesRule["VServerGroupId"].isNull())
			rulesObject.vServerGroupId = valueRulesRule["VServerGroupId"].asString();
		if(!valueRulesRule["Domain"].isNull())
			rulesObject.domain = valueRulesRule["Domain"].asString();
		if(!valueRulesRule["Cookie"].isNull())
			rulesObject.cookie = valueRulesRule["Cookie"].asString();
		if(!valueRulesRule["HealthCheckInterval"].isNull())
			rulesObject.healthCheckInterval = std::stoi(valueRulesRule["HealthCheckInterval"].asString());
		if(!valueRulesRule["Url"].isNull())
			rulesObject.url = valueRulesRule["Url"].asString();
		if(!valueRulesRule["HealthCheckURI"].isNull())
			rulesObject.healthCheckURI = valueRulesRule["HealthCheckURI"].asString();
		if(!valueRulesRule["StickySessionType"].isNull())
			rulesObject.stickySessionType = valueRulesRule["StickySessionType"].asString();
		if(!valueRulesRule["RuleName"].isNull())
			rulesObject.ruleName = valueRulesRule["RuleName"].asString();
		if(!valueRulesRule["RuleId"].isNull())
			rulesObject.ruleId = valueRulesRule["RuleId"].asString();
		if(!valueRulesRule["ServiceManagedMode"].isNull())
			rulesObject.serviceManagedMode = valueRulesRule["ServiceManagedMode"].asString();
		if(!valueRulesRule["HealthCheckConnectPort"].isNull())
			rulesObject.healthCheckConnectPort = std::stoi(valueRulesRule["HealthCheckConnectPort"].asString());
		if(!valueRulesRule["Scheduler"].isNull())
			rulesObject.scheduler = valueRulesRule["Scheduler"].asString();
		if(!valueRulesRule["HealthCheckTimeout"].isNull())
			rulesObject.healthCheckTimeout = std::stoi(valueRulesRule["HealthCheckTimeout"].asString());
		if(!valueRulesRule["ListenerSync"].isNull())
			rulesObject.listenerSync = valueRulesRule["ListenerSync"].asString();
		if(!valueRulesRule["HealthyThreshold"].isNull())
			rulesObject.healthyThreshold = std::stoi(valueRulesRule["HealthyThreshold"].asString());
		if(!valueRulesRule["CookieTimeout"].isNull())
			rulesObject.cookieTimeout = std::stoi(valueRulesRule["CookieTimeout"].asString());
		if(!valueRulesRule["HealthCheckDomain"].isNull())
			rulesObject.healthCheckDomain = valueRulesRule["HealthCheckDomain"].asString();
		if(!valueRulesRule["UnhealthyThreshold"].isNull())
			rulesObject.unhealthyThreshold = std::stoi(valueRulesRule["UnhealthyThreshold"].asString());
		if(!valueRulesRule["StickySession"].isNull())
			rulesObject.stickySession = valueRulesRule["StickySession"].asString();
		if(!valueRulesRule["HealthCheck"].isNull())
			rulesObject.healthCheck = valueRulesRule["HealthCheck"].asString();
		rules_.push_back(rulesObject);
	}

}

std::vector<DescribeRulesResult::Rule> DescribeRulesResult::getRules()const
{
	return rules_;
}

