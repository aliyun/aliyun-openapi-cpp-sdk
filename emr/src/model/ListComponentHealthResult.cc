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

#include <alibabacloud/emr/model/ListComponentHealthResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListComponentHealthResult::ListComponentHealthResult() :
	ServiceResult()
{}

ListComponentHealthResult::ListComponentHealthResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListComponentHealthResult::~ListComponentHealthResult()
{}

void ListComponentHealthResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allHealthsNode = value["Healths"]["Health"];
	for (auto valueHealthsHealth : allHealthsNode)
	{
		Health healthsObject;
		if(!valueHealthsHealth["ApplicationName"].isNull())
			healthsObject.applicationName = valueHealthsHealth["ApplicationName"].asString();
		if(!valueHealthsHealth["ComponentName"].isNull())
			healthsObject.componentName = valueHealthsHealth["ComponentName"].asString();
		if(!valueHealthsHealth["HealthLevel"].isNull())
			healthsObject.healthLevel = valueHealthsHealth["HealthLevel"].asString();
		if(!valueHealthsHealth["StoppedNum"].isNull())
			healthsObject.stoppedNum = std::stol(valueHealthsHealth["StoppedNum"].asString());
		if(!valueHealthsHealth["ManualStoppedNum"].isNull())
			healthsObject.manualStoppedNum = std::stof(valueHealthsHealth["ManualStoppedNum"].asString());
		if(!valueHealthsHealth["NormalNum"].isNull())
			healthsObject.normalNum = std::stof(valueHealthsHealth["NormalNum"].asString());
		if(!valueHealthsHealth["TotalNum"].isNull())
			healthsObject.totalNum = std::stol(valueHealthsHealth["TotalNum"].asString());
		if(!valueHealthsHealth["AgentHeartBeatLostNum"].isNull())
			healthsObject.agentHeartBeatLostNum = std::stol(valueHealthsHealth["AgentHeartBeatLostNum"].asString());
		if(!valueHealthsHealth["CreateTime"].isNull())
			healthsObject.createTime = std::stol(valueHealthsHealth["CreateTime"].asString());
		auto allHealthDetailsNode = valueHealthsHealth["HealthDetails"]["HealthDetail"];
		for (auto valueHealthsHealthHealthDetailsHealthDetail : allHealthDetailsNode)
		{
			Health::HealthDetail healthDetailsObject;
			if(!valueHealthsHealthHealthDetailsHealthDetail["Code"].isNull())
				healthDetailsObject.code = valueHealthsHealthHealthDetailsHealthDetail["Code"].asString();
			auto healthRuleParamNode = value["HealthRuleParam"];
			if(!healthRuleParamNode["ApplicationName"].isNull())
				healthDetailsObject.healthRuleParam.applicationName = healthRuleParamNode["ApplicationName"].asString();
			if(!healthRuleParamNode["Component"].isNull())
				healthDetailsObject.healthRuleParam.component = healthRuleParamNode["Component"].asString();
			if(!healthRuleParamNode["RuleTitle"].isNull())
				healthDetailsObject.healthRuleParam.ruleTitle = healthRuleParamNode["RuleTitle"].asString();
			if(!healthRuleParamNode["Pass"].isNull())
				healthDetailsObject.healthRuleParam.pass = healthRuleParamNode["Pass"].asString();
			if(!healthRuleParamNode["RuleId"].isNull())
				healthDetailsObject.healthRuleParam.ruleId = healthRuleParamNode["RuleId"].asString();
			if(!healthRuleParamNode["RuleDescription"].isNull())
				healthDetailsObject.healthRuleParam.ruleDescription = healthRuleParamNode["RuleDescription"].asString();
			if(!healthRuleParamNode["HostNames"].isNull())
				healthDetailsObject.healthRuleParam.hostNames = healthRuleParamNode["HostNames"].asString();
			healthsObject.healthDetails.push_back(healthDetailsObject);
		}
		healths_.push_back(healthsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

int ListComponentHealthResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListComponentHealthResult::Health> ListComponentHealthResult::getHealths()const
{
	return healths_;
}

std::string ListComponentHealthResult::getNextToken()const
{
	return nextToken_;
}

