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

#include <alibabacloud/sas/model/GetInterceptionSummaryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

GetInterceptionSummaryResult::GetInterceptionSummaryResult() :
	ServiceResult()
{}

GetInterceptionSummaryResult::GetInterceptionSummaryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetInterceptionSummaryResult::~GetInterceptionSummaryResult()
{}

void GetInterceptionSummaryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto interceptionSummaryNode = value["InterceptionSummary"];
	if(!interceptionSummaryNode["CloseClusterCount"].isNull())
		interceptionSummary_.closeClusterCount = std::stoi(interceptionSummaryNode["CloseClusterCount"].asString());
	if(!interceptionSummaryNode["RiskCount30Day"].isNull())
		interceptionSummary_.riskCount30Day = std::stol(interceptionSummaryNode["RiskCount30Day"].asString());
	if(!interceptionSummaryNode["RiskCount180Day"].isNull())
		interceptionSummary_.riskCount180Day = std::stol(interceptionSummaryNode["RiskCount180Day"].asString());
	if(!interceptionSummaryNode["OpenClusterCount"].isNull())
		interceptionSummary_.openClusterCount = std::stoi(interceptionSummaryNode["OpenClusterCount"].asString());
	if(!interceptionSummaryNode["RiskCountToday"].isNull())
		interceptionSummary_.riskCountToday = std::stol(interceptionSummaryNode["RiskCountToday"].asString());
	if(!interceptionSummaryNode["CloseRuleCount"].isNull())
		interceptionSummary_.closeRuleCount = std::stoi(interceptionSummaryNode["CloseRuleCount"].asString());
	if(!interceptionSummaryNode["RuleCount"].isNull())
		interceptionSummary_.ruleCount = std::stoi(interceptionSummaryNode["RuleCount"].asString());
	if(!interceptionSummaryNode["ClusterCount"].isNull())
		interceptionSummary_.clusterCount = std::stoi(interceptionSummaryNode["ClusterCount"].asString());
	if(!interceptionSummaryNode["SuggestRuleCount"].isNull())
		interceptionSummary_.suggestRuleCount = std::stoi(interceptionSummaryNode["SuggestRuleCount"].asString());
	if(!interceptionSummaryNode["OpenRuleCount"].isNull())
		interceptionSummary_.openRuleCount = std::stoi(interceptionSummaryNode["OpenRuleCount"].asString());
	if(!interceptionSummaryNode["InterceptionCountInDays"].isNull())
		interceptionSummary_.interceptionCountInDays = std::stoi(interceptionSummaryNode["InterceptionCountInDays"].asString());

}

GetInterceptionSummaryResult::InterceptionSummary GetInterceptionSummaryResult::getInterceptionSummary()const
{
	return interceptionSummary_;
}

