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

#include <alibabacloud/sas/model/GetClusterRuleSummaryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

GetClusterRuleSummaryResult::GetClusterRuleSummaryResult() :
	ServiceResult()
{}

GetClusterRuleSummaryResult::GetClusterRuleSummaryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetClusterRuleSummaryResult::~GetClusterRuleSummaryResult()
{}

void GetClusterRuleSummaryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto clusterRuleSummaryNode = value["ClusterRuleSummary"];
	if(!clusterRuleSummaryNode["InterceptionSwitch"].isNull())
		clusterRuleSummary_.interceptionSwitch = std::stoi(clusterRuleSummaryNode["InterceptionSwitch"].asString());
	if(!clusterRuleSummaryNode["CloseRuleCount"].isNull())
		clusterRuleSummary_.closeRuleCount = std::stoi(clusterRuleSummaryNode["CloseRuleCount"].asString());
	if(!clusterRuleSummaryNode["InterceptionType"].isNull())
		clusterRuleSummary_.interceptionType = std::stoi(clusterRuleSummaryNode["InterceptionType"].asString());
	if(!clusterRuleSummaryNode["RuleCount"].isNull())
		clusterRuleSummary_.ruleCount = std::stoi(clusterRuleSummaryNode["RuleCount"].asString());
	if(!clusterRuleSummaryNode["OpenRuleCount"].isNull())
		clusterRuleSummary_.openRuleCount = std::stoi(clusterRuleSummaryNode["OpenRuleCount"].asString());
	if(!clusterRuleSummaryNode["SuggestRuleCount"].isNull())
		clusterRuleSummary_.suggestRuleCount = std::stoi(clusterRuleSummaryNode["SuggestRuleCount"].asString());
	if(!clusterRuleSummaryNode["InterceptionCount7Day"].isNull())
		clusterRuleSummary_.interceptionCount7Day = std::stol(clusterRuleSummaryNode["InterceptionCount7Day"].asString());

}

GetClusterRuleSummaryResult::ClusterRuleSummary GetClusterRuleSummaryResult::getClusterRuleSummary()const
{
	return clusterRuleSummary_;
}

