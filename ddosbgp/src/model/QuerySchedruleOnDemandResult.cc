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

#include <alibabacloud/ddosbgp/model/QuerySchedruleOnDemandResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddosbgp;
using namespace AlibabaCloud::Ddosbgp::Model;

QuerySchedruleOnDemandResult::QuerySchedruleOnDemandResult() :
	ServiceResult()
{}

QuerySchedruleOnDemandResult::QuerySchedruleOnDemandResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QuerySchedruleOnDemandResult::~QuerySchedruleOnDemandResult()
{}

void QuerySchedruleOnDemandResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRuleConfigNode = value["RuleConfig"]["Config"];
	for (auto valueRuleConfigConfig : allRuleConfigNode)
	{
		Config ruleConfigObject;
		if(!valueRuleConfigConfig["RuleSwitch"].isNull())
			ruleConfigObject.ruleSwitch = valueRuleConfigConfig["RuleSwitch"].asString();
		if(!valueRuleConfigConfig["RuleConditionMbps"].isNull())
			ruleConfigObject.ruleConditionMbps = valueRuleConfigConfig["RuleConditionMbps"].asString();
		if(!valueRuleConfigConfig["TimeZone"].isNull())
			ruleConfigObject.timeZone = valueRuleConfigConfig["TimeZone"].asString();
		if(!valueRuleConfigConfig["RuleAction"].isNull())
			ruleConfigObject.ruleAction = valueRuleConfigConfig["RuleAction"].asString();
		if(!valueRuleConfigConfig["RuleConditionKpps"].isNull())
			ruleConfigObject.ruleConditionKpps = valueRuleConfigConfig["RuleConditionKpps"].asString();
		if(!valueRuleConfigConfig["RuleUndoMode"].isNull())
			ruleConfigObject.ruleUndoMode = valueRuleConfigConfig["RuleUndoMode"].asString();
		if(!valueRuleConfigConfig["RuleUndoBeginTime"].isNull())
			ruleConfigObject.ruleUndoBeginTime = valueRuleConfigConfig["RuleUndoBeginTime"].asString();
		if(!valueRuleConfigConfig["RuleConditionCnt"].isNull())
			ruleConfigObject.ruleConditionCnt = valueRuleConfigConfig["RuleConditionCnt"].asString();
		if(!valueRuleConfigConfig["RuleUndoEndTime"].isNull())
			ruleConfigObject.ruleUndoEndTime = valueRuleConfigConfig["RuleUndoEndTime"].asString();
		if(!valueRuleConfigConfig["RuleName"].isNull())
			ruleConfigObject.ruleName = valueRuleConfigConfig["RuleName"].asString();
		ruleConfig_.push_back(ruleConfigObject);
	}
	auto allRuleStatusNode = value["RuleStatus"]["Status"];
	for (auto valueRuleStatusStatus : allRuleStatusNode)
	{
		Status ruleStatusObject;
		if(!valueRuleStatusStatus["RuleSchedStatus"].isNull())
			ruleStatusObject.ruleSchedStatus = valueRuleStatusStatus["RuleSchedStatus"].asString();
		if(!valueRuleStatusStatus["Net"].isNull())
			ruleStatusObject.net = valueRuleStatusStatus["Net"].asString();
		ruleStatus_.push_back(ruleStatusObject);
	}
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["UserId"].isNull())
		userId_ = value["UserId"].asString();

}

std::string QuerySchedruleOnDemandResult::getInstanceId()const
{
	return instanceId_;
}

std::string QuerySchedruleOnDemandResult::getUserId()const
{
	return userId_;
}

std::vector<QuerySchedruleOnDemandResult::Status> QuerySchedruleOnDemandResult::getRuleStatus()const
{
	return ruleStatus_;
}

std::vector<QuerySchedruleOnDemandResult::Config> QuerySchedruleOnDemandResult::getRuleConfig()const
{
	return ruleConfig_;
}

